//
// Copyright 2009 Konstantinos V. Katsaros
//                              ntinos@aueb.gr
//                              http://mm.aueb.gr/~katsaros
//

// This file is part of BitTorrent Implementation for OMNeT++.

//    BitTorrent Implementation for OMNeT++ is free software: you can redistribute
//	  it and/or modify it under the terms of the GNU General Public License as
//    published by the Free Software Foundation, either version 2 of the License,
//	  or (at your option) any later version.

//    BitTorrent Implementation for OMNeT++ is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with BitTorrent Implementation for OMNeT++.
//    If not, see <http://www.gnu.org/licenses/>.

#include <algorithm>
#include "BitTorrentChurn.h"
#include "GlobalStatisticsAccess.h"
#include "UnderlayConfigurator.h"
#include "Churn_m.h"

Define_Module(BitTorrentChurn)
;

void BitTorrentChurn::initializeChurn() {
	Enter_Method_Silent();

	initAddMoreTerminals = true;
	targetOverlayTerminalNum = par("targetOverlayTerminalNum");
	bittorrentDistName = par("bittorrentDistName").stringValue();
	bittorrentDistPar1 = par("bittorrentDistPar1");

	if (bittorrentDistName == "decreasingExponentialArrivalRate")
		bittorrentDistPar2 = targetOverlayTerminalNum / bittorrentDistPar1;
	else
		bittorrentDistPar2 = par("bittorrentDistPar2");

	if (bittorrentDistPar1 <= 0) {
		opp_error("BitTorrentChurn currently only works with "
			"bittorrentDistPar1 > 0");
	}

	if (bittorrentDistPar2 <= 0) {
		opp_error("BitTorrentChurn currently only works with "
			"bittorrentDistPar2 > 0 ");
	}

	globalStatistics = GlobalStatisticsAccess().get();

	lastCreate = simTime();

	terminalCount = 0;

	for (int i = 0; i < targetOverlayTerminalNum; i++) {
		ChurnMessage* churnMsg = new ChurnMessage("CreateNode");
		double distParam = distributionFunction();
		scheduleAt(SIMTIME_DBL(simTime())+ distParam, churnMsg);
	}
}

void BitTorrentChurn::handleMessage(cMessage* msg) {
	if (!msg->isSelfMessage()) {
		delete msg;
		return;
	}

	if (terminalCount >= targetOverlayTerminalNum) {
		initAddMoreTerminals = false;
		underlayConfigurator->initFinished();
		delete msg;
		return;
	} else {
		if (check_and_cast<ChurnMessage*>(msg)) {
			createNode();
		} else
			opp_error("Unexpected msg type");
	}

	delete msg;
}

void BitTorrentChurn::createNode() {
	TransportAddress* ta = underlayConfigurator->createNode(type,false);
	delete ta;

	RECORD_STATS(globalStatistics->recordOutVector(
					"BaseOverlay: Time between creates",
					SIMTIME_DBL(simTime() - lastCreate)));

	lastCreate = simTime();
}

double BitTorrentChurn::distributionFunction() {

	if (bittorrentDistName == "decreasingExponentialArrivalRate") {
		return exponentialDecayArrivalRate();
	} else {
		opp_error("BitTorrentChurn::distribution function: Invalid value "
			"for parameter bittorrentDistName!");
	}

	return 0;
}

//Getting a random value for the CDF (integral) of the exponential decay distribution and inverting (finding t value)
double BitTorrentChurn::exponentialDecayArrivalRate() {
	double val = -bittorrentDistPar2 * log(1 - (dblrand()/(bittorrentDistPar1*bittorrentDistPar2)));
	//opp_error("Time= %f",val);
	return val;
}

void BitTorrentChurn::updateDisplayString() {
	char buf[80];
	sprintf(buf, "bittorrent churn");
	getDisplayString().setTagArg("t", 0, buf);
}

BitTorrentChurn::~BitTorrentChurn() {

}

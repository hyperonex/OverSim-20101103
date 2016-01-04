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


#ifndef __BitTorrentChurn_H_
#define __BitTorrentChurn_H_

#include <ChurnGenerator.h>
#include <cmath>
#include <iostream>
#include "GlobalStatistics.h"
/**
 * BitTorrent churn generator: actually schedules the arrival of peers
 * according with an exponential decay rule for the arrival rate.
 */

class BitTorrentChurn: public ChurnGenerator {
public:
	void handleMessage(cMessage* msg);
	void initializeChurn();
	~BitTorrentChurn();

protected:
	void updateDisplayString();
	void createNode();
	double distributionFunction();
	double exponentialDecayArrivalRate();

private:
	GlobalStatistics* globalStatistics; //!< pointer to GlobalStatistics module in this node */
	std::string bittorrentDistName; //!< name of the distribution function
	int targetOverlayTerminalNum;
	double bittorrentDistPar1; //!< distribution function parameter
	double bittorrentDistPar2; //!< distribution function parameter

	bool initAddMoreTerminals;
	simtime_t lastCreate;
};

#endif

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

package oversim.common;
//
// bittorrent based churn generating module
//

simple BitTorrentChurn extends ChurnGenerator
{
    parameters:
        @class(BitTorrentChurn);
        //volatile double targetOverlayTerminalNum;    // number of nodes after init phase
        string bittorrentDistName;    // bittorrent distribution function
        volatile double bittorrentDistPar1;    // parameter for distribution function
        volatile double bittorrentDistPar2;    // parameter for distribution function
        volatile double bittorrentDistPar3;    // parameter for distribution function

        //string overlayType;    // the overlay used in the simulation
        //string channelTypes;    // used access technologies
       // string tier1Type;    // the application on top of the overlay used in the simulation
        //string tier2Type;    // the module type on top of tier 1
        //string tier3Type;    // the module type on top of tier 2
}


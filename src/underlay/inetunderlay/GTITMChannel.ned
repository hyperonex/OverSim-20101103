//
// Copyright (C) 2009 George S. Nomikos
//								nomikos@aueb.gr
//								http://mm.aueb.gr/~nomikos
//

// This file is part of Crescendo Implementation for OverSim/OMNeT++.

// Crescendo Implementation for OverSim/OMNeT++ is free software: you
// can redistribute it and/or modify it under the terms of the
// GNU General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// Crescendo Implementation for OverSim/OMNeT++ is distributed in
// the hope that it will be useful, but WITHOUT ANY WARRANTY;
// without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.

//***************************************************************************
//*                         GTITMChannel.ned
//*                  ----------------------------
//*   Author       : George Nomikos
//*
//*   SVN Info
//*   $Revision: 281 $
//*   $Date: 2009-06-07 18:41:44 +0300 (Sun, 07 Jun 2009) $
//*   $Id: GTITMChannel.ned 281 2009-06-07 15:41:44Z giorgos $
//*   $Author: giorgos $
//*
//*
//****************************************************************************

package oversim.underlay.inetunderlay;

//
// Channel to support the realistic GT-ITM TS Topology
//
// @author George Nomikos
//
channel GTITMChannel extends ned.DatarateChannel
{
    double weight = default(1.0);
    //double length @unit(m) = default(0);
}

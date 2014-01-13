/**
 * Rapid-prototyping protection schemes with IEC 61850
 *
 * Copyright (c) 2014 Steven Blair
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <stdlib.h>
#include "ctypes.h"
#include "datatypes.h"
#include "ied.h"
#include "jsonDatabase.h"


Item database = {"root", BASIC_TYPE_COMPOUND, "", NULL, 12};



void init_database() {
	database.items = (Item*) calloc(12, sizeof(Item)); // IEDs
	database.items[0].objectRef = "E1Q1SB1";
	database.items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].typeSCL = "";
	database.items[0].data = &E1Q1SB1;
	database.items[0].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[0].numberOfItems = 1;
	database.items[0].items[0].objectRef = "S1";
	database.items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].typeSCL = "";
	database.items[0].items[0].data = &E1Q1SB1.S1;
	database.items[0].items[0].items = (Item*) calloc(1, sizeof(Item)); // LDs
	database.items[0].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].objectRef = "C1";
	database.items[0].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].typeSCL = "";
	database.items[0].items[0].items[0].data = &E1Q1SB1.S1.C1;
	database.items[0].items[0].items[0].items = (Item*) calloc(7, sizeof(Item)); // LNs
	database.items[0].items[0].items[0].numberOfItems = 7;
	database.items[0].items[0].items[0].items[0].objectRef = "LN0";
	database.items[0].items[0].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[0].typeSCL = "LN0";
	database.items[0].items[0].items[0].items[0].data = &E1Q1SB1.S1.C1.LN0.LLN0;
	database.items[0].items[0].items[0].items[0].items = (Item*) calloc(4, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[0].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[0].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[0].items[0].data = &E1Q1SB1.S1.C1.LN0.LLN0.Mod;
	database.items[0].items[0].items[0].items[0].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[0].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[0].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[0].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[0].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[0].items[0].items[0].data = &E1Q1SB1.S1.C1.LN0.LLN0.Mod.ctlVal;
	database.items[0].items[0].items[0].items[0].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[0].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[0].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[0].items[0].items[1].data = &E1Q1SB1.S1.C1.LN0.LLN0.Mod.stVal;
	database.items[0].items[0].items[0].items[0].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[0].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[0].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[0].items[0].items[2].data = &E1Q1SB1.S1.C1.LN0.LLN0.Mod.q;
	database.items[0].items[0].items[0].items[0].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[0].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[0].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[0].items[0].items[3].data = &E1Q1SB1.S1.C1.LN0.LLN0.Mod.t;
	database.items[0].items[0].items[0].items[0].items[1].objectRef = "Health";
	database.items[0].items[0].items[0].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[0].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[0].items[1].data = &E1Q1SB1.S1.C1.LN0.LLN0.Health;
	database.items[0].items[0].items[0].items[0].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[0].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[0].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[0].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[0].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[0].items[1].items[0].data = &E1Q1SB1.S1.C1.LN0.LLN0.Health.stVal;
	database.items[0].items[0].items[0].items[0].items[2].objectRef = "Beh";
	database.items[0].items[0].items[0].items[0].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[0].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[0].items[2].data = &E1Q1SB1.S1.C1.LN0.LLN0.Beh;
	database.items[0].items[0].items[0].items[0].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[0].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[0].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[0].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[0].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[0].items[2].items[0].data = &E1Q1SB1.S1.C1.LN0.LLN0.Beh.stVal;
	database.items[0].items[0].items[0].items[0].items[3].objectRef = "NamPlt";
	database.items[0].items[0].items[0].items[0].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[0].items[3].typeSCL = "myLPL";
	database.items[0].items[0].items[0].items[0].items[3].data = &E1Q1SB1.S1.C1.LN0.LLN0.NamPlt;
	database.items[0].items[0].items[0].items[0].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[0].items[3].numberOfItems = 2;
	database.items[0].items[0].items[0].items[0].items[3].items[0].objectRef = "ldNs";
	database.items[0].items[0].items[0].items[0].items[3].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[0].items[0].items[0].items[0].items[3].items[0].typeSCL = "VisString255";
	database.items[0].items[0].items[0].items[0].items[3].items[0].data = E1Q1SB1.S1.C1.LN0.LLN0.NamPlt.ldNs;
	database.items[0].items[0].items[0].items[0].items[3].items[1].objectRef = "configRev";
	database.items[0].items[0].items[0].items[0].items[3].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[0].items[0].items[0].items[0].items[3].items[1].typeSCL = "VisString255";
	database.items[0].items[0].items[0].items[0].items[3].items[1].data = E1Q1SB1.S1.C1.LN0.LLN0.NamPlt.configRev;
	database.items[0].items[0].items[0].items[1].objectRef = "exampleRMXU_1";
	database.items[0].items[0].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].typeSCL = "exampleRMXU";
	database.items[0].items[0].items[0].items[1].data = &E1Q1SB1.S1.C1.exampleRMXU_1;
	database.items[0].items[0].items[0].items[1].items = (Item*) calloc(6, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[1].numberOfItems = 6;
	database.items[0].items[0].items[0].items[1].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[1].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[1].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Mod;
	database.items[0].items[0].items[0].items[1].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[1].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[1].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[1].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[1].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[1].items[0].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Mod.ctlVal;
	database.items[0].items[0].items[0].items[1].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[1].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[1].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[1].items[0].items[1].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Mod.stVal;
	database.items[0].items[0].items[0].items[1].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[1].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[1].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[1].items[0].items[2].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Mod.q;
	database.items[0].items[0].items[0].items[1].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[1].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[1].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[1].items[0].items[3].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Mod.t;
	database.items[0].items[0].items[0].items[1].items[1].objectRef = "Beh";
	database.items[0].items[0].items[0].items[1].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[1].items[1].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Beh;
	database.items[0].items[0].items[0].items[1].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[1].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[1].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[1].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[1].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[1].items[1].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Beh.stVal;
	database.items[0].items[0].items[0].items[1].items[2].objectRef = "Health";
	database.items[0].items[0].items[0].items[1].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[1].items[2].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Health;
	database.items[0].items[0].items[0].items[1].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[1].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[1].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[1].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[1].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[1].items[2].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.Health.stVal;
	database.items[0].items[0].items[0].items[1].items[3].objectRef = "AmpLocPhsA";
	database.items[0].items[0].items[0].items[1].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[3].typeSCL = "simpleSAV";
	database.items[0].items[0].items[0].items[1].items[3].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsA;
	database.items[0].items[0].items[0].items[1].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[1].items[3].numberOfItems = 2;
	database.items[0].items[0].items[0].items[1].items[3].items[0].objectRef = "instMag";
	database.items[0].items[0].items[0].items[1].items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[3].items[0].typeSCL = "myAnalogValue";
	database.items[0].items[0].items[0].items[1].items[3].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsA.instMag;
	database.items[0].items[0].items[0].items[1].items[3].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[1].items[3].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].items[1].items[3].items[0].items[0].objectRef = "f";
	database.items[0].items[0].items[0].items[1].items[3].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[1].items[3].items[0].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[1].items[3].items[0].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsA.instMag.f;
	database.items[0].items[0].items[0].items[1].items[3].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[1].items[3].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[1].items[3].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[1].items[3].items[1].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsA.q;
	database.items[0].items[0].items[0].items[1].items[4].objectRef = "AmpLocPhsB";
	database.items[0].items[0].items[0].items[1].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[4].typeSCL = "simpleSAV";
	database.items[0].items[0].items[0].items[1].items[4].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsB;
	database.items[0].items[0].items[0].items[1].items[4].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[1].items[4].numberOfItems = 2;
	database.items[0].items[0].items[0].items[1].items[4].items[0].objectRef = "instMag";
	database.items[0].items[0].items[0].items[1].items[4].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[4].items[0].typeSCL = "myAnalogValue";
	database.items[0].items[0].items[0].items[1].items[4].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsB.instMag;
	database.items[0].items[0].items[0].items[1].items[4].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[1].items[4].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].items[1].items[4].items[0].items[0].objectRef = "f";
	database.items[0].items[0].items[0].items[1].items[4].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[1].items[4].items[0].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[1].items[4].items[0].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsB.instMag.f;
	database.items[0].items[0].items[0].items[1].items[4].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[1].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[1].items[4].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[1].items[4].items[1].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsB.q;
	database.items[0].items[0].items[0].items[1].items[5].objectRef = "AmpLocPhsC";
	database.items[0].items[0].items[0].items[1].items[5].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[5].typeSCL = "simpleSAV";
	database.items[0].items[0].items[0].items[1].items[5].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsC;
	database.items[0].items[0].items[0].items[1].items[5].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[1].items[5].numberOfItems = 2;
	database.items[0].items[0].items[0].items[1].items[5].items[0].objectRef = "instMag";
	database.items[0].items[0].items[0].items[1].items[5].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[1].items[5].items[0].typeSCL = "myAnalogValue";
	database.items[0].items[0].items[0].items[1].items[5].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsC.instMag;
	database.items[0].items[0].items[0].items[1].items[5].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[1].items[5].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].items[1].items[5].items[0].items[0].objectRef = "f";
	database.items[0].items[0].items[0].items[1].items[5].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[1].items[5].items[0].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[1].items[5].items[0].items[0].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsC.instMag.f;
	database.items[0].items[0].items[0].items[1].items[5].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[1].items[5].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[1].items[5].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[1].items[5].items[1].data = &E1Q1SB1.S1.C1.exampleRMXU_1.AmpLocPhsC.q;
	database.items[0].items[0].items[0].items[2].objectRef = "LPHDa_1";
	database.items[0].items[0].items[0].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].typeSCL = "LPHDa";
	database.items[0].items[0].items[0].items[2].data = &E1Q1SB1.S1.C1.LPHDa_1;
	database.items[0].items[0].items[0].items[2].items = (Item*) calloc(7, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[2].numberOfItems = 7;
	database.items[0].items[0].items[0].items[2].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[2].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[2].items[0].data = &E1Q1SB1.S1.C1.LPHDa_1.Mod;
	database.items[0].items[0].items[0].items[2].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[2].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[2].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[2].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[2].items[0].items[0].data = &E1Q1SB1.S1.C1.LPHDa_1.Mod.ctlVal;
	database.items[0].items[0].items[0].items[2].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[2].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[2].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[2].items[0].items[1].data = &E1Q1SB1.S1.C1.LPHDa_1.Mod.stVal;
	database.items[0].items[0].items[0].items[2].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[2].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[2].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[2].items[0].items[2].data = &E1Q1SB1.S1.C1.LPHDa_1.Mod.q;
	database.items[0].items[0].items[0].items[2].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[2].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[2].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[2].items[0].items[3].data = &E1Q1SB1.S1.C1.LPHDa_1.Mod.t;
	database.items[0].items[0].items[0].items[2].items[1].objectRef = "Health";
	database.items[0].items[0].items[0].items[2].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[2].items[1].data = &E1Q1SB1.S1.C1.LPHDa_1.Health;
	database.items[0].items[0].items[0].items[2].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[2].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[2].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[2].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[2].items[1].items[0].data = &E1Q1SB1.S1.C1.LPHDa_1.Health.stVal;
	database.items[0].items[0].items[0].items[2].items[2].objectRef = "Beh";
	database.items[0].items[0].items[0].items[2].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[2].items[2].data = &E1Q1SB1.S1.C1.LPHDa_1.Beh;
	database.items[0].items[0].items[0].items[2].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[2].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[2].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[2].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[2].items[2].items[0].data = &E1Q1SB1.S1.C1.LPHDa_1.Beh.stVal;
	database.items[0].items[0].items[0].items[2].items[3].objectRef = "NamPlt";
	database.items[0].items[0].items[0].items[2].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[3].typeSCL = "myLPL";
	database.items[0].items[0].items[0].items[2].items[3].data = &E1Q1SB1.S1.C1.LPHDa_1.NamPlt;
	database.items[0].items[0].items[0].items[2].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[3].numberOfItems = 2;
	database.items[0].items[0].items[0].items[2].items[3].items[0].objectRef = "ldNs";
	database.items[0].items[0].items[0].items[2].items[3].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[0].items[0].items[0].items[2].items[3].items[0].typeSCL = "VisString255";
	database.items[0].items[0].items[0].items[2].items[3].items[0].data = E1Q1SB1.S1.C1.LPHDa_1.NamPlt.ldNs;
	database.items[0].items[0].items[0].items[2].items[3].items[1].objectRef = "configRev";
	database.items[0].items[0].items[0].items[2].items[3].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[0].items[0].items[0].items[2].items[3].items[1].typeSCL = "VisString255";
	database.items[0].items[0].items[0].items[2].items[3].items[1].data = E1Q1SB1.S1.C1.LPHDa_1.NamPlt.configRev;
	database.items[0].items[0].items[0].items[2].items[4].objectRef = "PhyNam";
	database.items[0].items[0].items[0].items[2].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[4].typeSCL = "myDPL";
	database.items[0].items[0].items[0].items[2].items[4].data = &E1Q1SB1.S1.C1.LPHDa_1.PhyNam;
	database.items[0].items[0].items[0].items[2].items[4].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[4].numberOfItems = 2;
	database.items[0].items[0].items[0].items[2].items[4].items[0].objectRef = "vendor";
	database.items[0].items[0].items[0].items[2].items[4].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[0].items[0].items[0].items[2].items[4].items[0].typeSCL = "VisString255";
	database.items[0].items[0].items[0].items[2].items[4].items[0].data = E1Q1SB1.S1.C1.LPHDa_1.PhyNam.vendor;
	database.items[0].items[0].items[0].items[2].items[4].items[1].objectRef = "hwRev";
	database.items[0].items[0].items[0].items[2].items[4].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[0].items[0].items[0].items[2].items[4].items[1].typeSCL = "VisString255";
	database.items[0].items[0].items[0].items[2].items[4].items[1].data = E1Q1SB1.S1.C1.LPHDa_1.PhyNam.hwRev;
	database.items[0].items[0].items[0].items[2].items[5].objectRef = "PhyHealth";
	database.items[0].items[0].items[0].items[2].items[5].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[5].typeSCL = "myINS";
	database.items[0].items[0].items[0].items[2].items[5].data = &E1Q1SB1.S1.C1.LPHDa_1.PhyHealth;
	database.items[0].items[0].items[0].items[2].items[5].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[5].numberOfItems = 1;
	database.items[0].items[0].items[0].items[2].items[5].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[2].items[5].items[0].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[2].items[5].items[0].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[2].items[5].items[0].data = &E1Q1SB1.S1.C1.LPHDa_1.PhyHealth.stVal;
	database.items[0].items[0].items[0].items[2].items[6].objectRef = "Proxy";
	database.items[0].items[0].items[0].items[2].items[6].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[2].items[6].typeSCL = "mySPS";
	database.items[0].items[0].items[0].items[2].items[6].data = &E1Q1SB1.S1.C1.LPHDa_1.Proxy;
	database.items[0].items[0].items[0].items[2].items[6].items = (Item*) calloc(3, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[2].items[6].numberOfItems = 3;
	database.items[0].items[0].items[0].items[2].items[6].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[2].items[6].items[0].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[2].items[6].items[0].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[2].items[6].items[0].data = &E1Q1SB1.S1.C1.LPHDa_1.Proxy.stVal;
	database.items[0].items[0].items[0].items[2].items[6].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[2].items[6].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[2].items[6].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[2].items[6].items[1].data = &E1Q1SB1.S1.C1.LPHDa_1.Proxy.q;
	database.items[0].items[0].items[0].items[2].items[6].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[2].items[6].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[2].items[6].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[2].items[6].items[2].data = &E1Q1SB1.S1.C1.LPHDa_1.Proxy.t;
	database.items[0].items[0].items[0].items[3].objectRef = "CSWIa_1";
	database.items[0].items[0].items[0].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[3].typeSCL = "CSWIa";
	database.items[0].items[0].items[0].items[3].data = &E1Q1SB1.S1.C1.CSWIa_1;
	database.items[0].items[0].items[0].items[3].items = (Item*) calloc(5, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[3].numberOfItems = 5;
	database.items[0].items[0].items[0].items[3].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[3].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[3].items[0].data = &E1Q1SB1.S1.C1.CSWIa_1.Mod;
	database.items[0].items[0].items[0].items[3].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[3].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[3].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[3].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[3].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[3].items[0].items[0].data = &E1Q1SB1.S1.C1.CSWIa_1.Mod.ctlVal;
	database.items[0].items[0].items[0].items[3].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[3].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[3].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[3].items[0].items[1].data = &E1Q1SB1.S1.C1.CSWIa_1.Mod.stVal;
	database.items[0].items[0].items[0].items[3].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[3].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[3].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[3].items[0].items[2].data = &E1Q1SB1.S1.C1.CSWIa_1.Mod.q;
	database.items[0].items[0].items[0].items[3].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[3].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[3].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[3].items[0].items[3].data = &E1Q1SB1.S1.C1.CSWIa_1.Mod.t;
	database.items[0].items[0].items[0].items[3].items[1].objectRef = "Health";
	database.items[0].items[0].items[0].items[3].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[3].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[3].items[1].data = &E1Q1SB1.S1.C1.CSWIa_1.Health;
	database.items[0].items[0].items[0].items[3].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[3].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[3].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[3].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[3].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[3].items[1].items[0].data = &E1Q1SB1.S1.C1.CSWIa_1.Health.stVal;
	database.items[0].items[0].items[0].items[3].items[2].objectRef = "Beh";
	database.items[0].items[0].items[0].items[3].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[3].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[3].items[2].data = &E1Q1SB1.S1.C1.CSWIa_1.Beh;
	database.items[0].items[0].items[0].items[3].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[3].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[3].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[3].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[3].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[3].items[2].items[0].data = &E1Q1SB1.S1.C1.CSWIa_1.Beh.stVal;
	database.items[0].items[0].items[0].items[3].items[3].objectRef = "Pos";
	database.items[0].items[0].items[0].items[3].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[3].items[3].typeSCL = "myPos";
	database.items[0].items[0].items[0].items[3].items[3].data = &E1Q1SB1.S1.C1.CSWIa_1.Pos;
	database.items[0].items[0].items[0].items[3].items[3].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[3].items[3].numberOfItems = 4;
	database.items[0].items[0].items[0].items[3].items[3].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[3].items[3].items[0].type = BASIC_TYPE_CODED_ENUM;
	database.items[0].items[0].items[0].items[3].items[3].items[0].typeSCL = "Dbpos";
	database.items[0].items[0].items[0].items[3].items[3].items[0].data = &E1Q1SB1.S1.C1.CSWIa_1.Pos.stVal;
	database.items[0].items[0].items[0].items[3].items[3].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[3].items[3].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[3].items[3].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[3].items[3].items[1].data = &E1Q1SB1.S1.C1.CSWIa_1.Pos.q;
	database.items[0].items[0].items[0].items[3].items[3].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[3].items[3].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[3].items[3].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[3].items[3].items[2].data = &E1Q1SB1.S1.C1.CSWIa_1.Pos.t;
	database.items[0].items[0].items[0].items[3].items[3].items[3].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[3].items[3].items[3].type = BASIC_TYPE_BOOLEAN;
	database.items[0].items[0].items[0].items[3].items[3].items[3].typeSCL = "BOOLEAN";
	database.items[0].items[0].items[0].items[3].items[3].items[3].data = &E1Q1SB1.S1.C1.CSWIa_1.Pos.ctlVal;
	database.items[0].items[0].items[0].items[3].items[4].objectRef = "GrpAl";
	database.items[0].items[0].items[0].items[3].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[3].items[4].typeSCL = "mySPS";
	database.items[0].items[0].items[0].items[3].items[4].data = &E1Q1SB1.S1.C1.CSWIa_1.GrpAl;
	database.items[0].items[0].items[0].items[3].items[4].items = (Item*) calloc(3, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[3].items[4].numberOfItems = 3;
	database.items[0].items[0].items[0].items[3].items[4].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[3].items[4].items[0].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[3].items[4].items[0].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[3].items[4].items[0].data = &E1Q1SB1.S1.C1.CSWIa_1.GrpAl.stVal;
	database.items[0].items[0].items[0].items[3].items[4].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[3].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[3].items[4].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[3].items[4].items[1].data = &E1Q1SB1.S1.C1.CSWIa_1.GrpAl.q;
	database.items[0].items[0].items[0].items[3].items[4].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[3].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[3].items[4].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[3].items[4].items[2].data = &E1Q1SB1.S1.C1.CSWIa_1.GrpAl.t;
	database.items[0].items[0].items[0].items[4].objectRef = "CSWIa_2";
	database.items[0].items[0].items[0].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[4].typeSCL = "CSWIa";
	database.items[0].items[0].items[0].items[4].data = &E1Q1SB1.S1.C1.CSWIa_2;
	database.items[0].items[0].items[0].items[4].items = (Item*) calloc(5, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[4].numberOfItems = 5;
	database.items[0].items[0].items[0].items[4].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[4].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[4].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[4].items[0].data = &E1Q1SB1.S1.C1.CSWIa_2.Mod;
	database.items[0].items[0].items[0].items[4].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[4].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[4].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[4].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[4].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[4].items[0].items[0].data = &E1Q1SB1.S1.C1.CSWIa_2.Mod.ctlVal;
	database.items[0].items[0].items[0].items[4].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[4].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[4].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[4].items[0].items[1].data = &E1Q1SB1.S1.C1.CSWIa_2.Mod.stVal;
	database.items[0].items[0].items[0].items[4].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[4].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[4].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[4].items[0].items[2].data = &E1Q1SB1.S1.C1.CSWIa_2.Mod.q;
	database.items[0].items[0].items[0].items[4].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[4].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[4].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[4].items[0].items[3].data = &E1Q1SB1.S1.C1.CSWIa_2.Mod.t;
	database.items[0].items[0].items[0].items[4].items[1].objectRef = "Health";
	database.items[0].items[0].items[0].items[4].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[4].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[4].items[1].data = &E1Q1SB1.S1.C1.CSWIa_2.Health;
	database.items[0].items[0].items[0].items[4].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[4].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[4].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[4].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[4].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[4].items[1].items[0].data = &E1Q1SB1.S1.C1.CSWIa_2.Health.stVal;
	database.items[0].items[0].items[0].items[4].items[2].objectRef = "Beh";
	database.items[0].items[0].items[0].items[4].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[4].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[4].items[2].data = &E1Q1SB1.S1.C1.CSWIa_2.Beh;
	database.items[0].items[0].items[0].items[4].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[4].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[4].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[4].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[4].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[4].items[2].items[0].data = &E1Q1SB1.S1.C1.CSWIa_2.Beh.stVal;
	database.items[0].items[0].items[0].items[4].items[3].objectRef = "Pos";
	database.items[0].items[0].items[0].items[4].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[4].items[3].typeSCL = "myPos";
	database.items[0].items[0].items[0].items[4].items[3].data = &E1Q1SB1.S1.C1.CSWIa_2.Pos;
	database.items[0].items[0].items[0].items[4].items[3].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[4].items[3].numberOfItems = 4;
	database.items[0].items[0].items[0].items[4].items[3].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[4].items[3].items[0].type = BASIC_TYPE_CODED_ENUM;
	database.items[0].items[0].items[0].items[4].items[3].items[0].typeSCL = "Dbpos";
	database.items[0].items[0].items[0].items[4].items[3].items[0].data = &E1Q1SB1.S1.C1.CSWIa_2.Pos.stVal;
	database.items[0].items[0].items[0].items[4].items[3].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[4].items[3].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[4].items[3].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[4].items[3].items[1].data = &E1Q1SB1.S1.C1.CSWIa_2.Pos.q;
	database.items[0].items[0].items[0].items[4].items[3].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[4].items[3].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[4].items[3].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[4].items[3].items[2].data = &E1Q1SB1.S1.C1.CSWIa_2.Pos.t;
	database.items[0].items[0].items[0].items[4].items[3].items[3].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[4].items[3].items[3].type = BASIC_TYPE_BOOLEAN;
	database.items[0].items[0].items[0].items[4].items[3].items[3].typeSCL = "BOOLEAN";
	database.items[0].items[0].items[0].items[4].items[3].items[3].data = &E1Q1SB1.S1.C1.CSWIa_2.Pos.ctlVal;
	database.items[0].items[0].items[0].items[4].items[4].objectRef = "GrpAl";
	database.items[0].items[0].items[0].items[4].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[4].items[4].typeSCL = "mySPS";
	database.items[0].items[0].items[0].items[4].items[4].data = &E1Q1SB1.S1.C1.CSWIa_2.GrpAl;
	database.items[0].items[0].items[0].items[4].items[4].items = (Item*) calloc(3, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[4].items[4].numberOfItems = 3;
	database.items[0].items[0].items[0].items[4].items[4].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[4].items[4].items[0].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[4].items[4].items[0].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[4].items[4].items[0].data = &E1Q1SB1.S1.C1.CSWIa_2.GrpAl.stVal;
	database.items[0].items[0].items[0].items[4].items[4].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[4].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[4].items[4].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[4].items[4].items[1].data = &E1Q1SB1.S1.C1.CSWIa_2.GrpAl.q;
	database.items[0].items[0].items[0].items[4].items[4].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[4].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[4].items[4].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[4].items[4].items[2].data = &E1Q1SB1.S1.C1.CSWIa_2.GrpAl.t;
	database.items[0].items[0].items[0].items[5].objectRef = "MMXUa_1";
	database.items[0].items[0].items[0].items[5].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].typeSCL = "MMXUa";
	database.items[0].items[0].items[0].items[5].data = &E1Q1SB1.S1.C1.MMXUa_1;
	database.items[0].items[0].items[0].items[5].items = (Item*) calloc(5, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[5].numberOfItems = 5;
	database.items[0].items[0].items[0].items[5].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[5].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[5].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Mod;
	database.items[0].items[0].items[0].items[5].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[5].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[5].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[5].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[5].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[5].items[0].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Mod.ctlVal;
	database.items[0].items[0].items[0].items[5].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[5].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[5].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[5].items[0].items[1].data = &E1Q1SB1.S1.C1.MMXUa_1.Mod.stVal;
	database.items[0].items[0].items[0].items[5].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[5].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[5].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[5].items[0].items[2].data = &E1Q1SB1.S1.C1.MMXUa_1.Mod.q;
	database.items[0].items[0].items[0].items[5].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[5].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[5].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[5].items[0].items[3].data = &E1Q1SB1.S1.C1.MMXUa_1.Mod.t;
	database.items[0].items[0].items[0].items[5].items[1].objectRef = "Beh";
	database.items[0].items[0].items[0].items[5].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[5].items[1].data = &E1Q1SB1.S1.C1.MMXUa_1.Beh;
	database.items[0].items[0].items[0].items[5].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[5].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[5].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[5].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[5].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[5].items[1].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Beh.stVal;
	database.items[0].items[0].items[0].items[5].items[2].objectRef = "Health";
	database.items[0].items[0].items[0].items[5].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[5].items[2].data = &E1Q1SB1.S1.C1.MMXUa_1.Health;
	database.items[0].items[0].items[0].items[5].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[5].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[5].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[5].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[5].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[5].items[2].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Health.stVal;
	database.items[0].items[0].items[0].items[5].items[3].objectRef = "Amps";
	database.items[0].items[0].items[0].items[5].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[3].typeSCL = "myMV";
	database.items[0].items[0].items[0].items[5].items[3].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps;
	database.items[0].items[0].items[0].items[5].items[3].items = (Item*) calloc(7, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[5].items[3].numberOfItems = 7;
	database.items[0].items[0].items[0].items[5].items[3].items[0].objectRef = "mag";
	database.items[0].items[0].items[0].items[5].items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[3].items[0].typeSCL = "myAnalogValue";
	database.items[0].items[0].items[0].items[5].items[3].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.mag;
	database.items[0].items[0].items[0].items[5].items[3].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[5].items[3].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].items[5].items[3].items[0].items[0].objectRef = "f";
	database.items[0].items[0].items[0].items[5].items[3].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[5].items[3].items[0].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[5].items[3].items[0].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.mag.f;
	database.items[0].items[0].items[0].items[5].items[3].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[5].items[3].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[5].items[3].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[5].items[3].items[1].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.q;
	database.items[0].items[0].items[0].items[5].items[3].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[5].items[3].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[5].items[3].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[5].items[3].items[2].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.t;
	database.items[0].items[0].items[0].items[5].items[3].items[3].objectRef = "sVC";
	database.items[0].items[0].items[0].items[5].items[3].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[3].items[3].typeSCL = "ScaledValueConfig";
	database.items[0].items[0].items[0].items[5].items[3].items[3].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.sVC;
	database.items[0].items[0].items[0].items[5].items[3].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[5].items[3].items[3].numberOfItems = 2;
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[0].objectRef = "scaleFactor";
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.sVC.scaleFactor;
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[1].objectRef = "offset";
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[1].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[1].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[5].items[3].items[3].items[1].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.sVC.offset;
	database.items[0].items[0].items[0].items[5].items[3].items[4].objectRef = "int1";
	database.items[0].items[0].items[0].items[5].items[3].items[4].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[5].items[3].items[4].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[5].items[3].items[4].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.int1;
	database.items[0].items[0].items[0].items[5].items[3].items[5].objectRef = "int2";
	database.items[0].items[0].items[0].items[5].items[3].items[5].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[5].items[3].items[5].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[5].items[3].items[5].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.int2;
	database.items[0].items[0].items[0].items[5].items[3].items[6].objectRef = "int3";
	database.items[0].items[0].items[0].items[5].items[3].items[6].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[5].items[3].items[6].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[5].items[3].items[6].data = &E1Q1SB1.S1.C1.MMXUa_1.Amps.int3;
	database.items[0].items[0].items[0].items[5].items[4].objectRef = "Volts";
	database.items[0].items[0].items[0].items[5].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[4].typeSCL = "myMV";
	database.items[0].items[0].items[0].items[5].items[4].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts;
	database.items[0].items[0].items[0].items[5].items[4].items = (Item*) calloc(7, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[5].items[4].numberOfItems = 7;
	database.items[0].items[0].items[0].items[5].items[4].items[0].objectRef = "mag";
	database.items[0].items[0].items[0].items[5].items[4].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[4].items[0].typeSCL = "myAnalogValue";
	database.items[0].items[0].items[0].items[5].items[4].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.mag;
	database.items[0].items[0].items[0].items[5].items[4].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[5].items[4].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].items[5].items[4].items[0].items[0].objectRef = "f";
	database.items[0].items[0].items[0].items[5].items[4].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[5].items[4].items[0].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[5].items[4].items[0].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.mag.f;
	database.items[0].items[0].items[0].items[5].items[4].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[5].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[5].items[4].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[5].items[4].items[1].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.q;
	database.items[0].items[0].items[0].items[5].items[4].items[2].objectRef = "t";
	database.items[0].items[0].items[0].items[5].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[5].items[4].items[2].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[5].items[4].items[2].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.t;
	database.items[0].items[0].items[0].items[5].items[4].items[3].objectRef = "sVC";
	database.items[0].items[0].items[0].items[5].items[4].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[5].items[4].items[3].typeSCL = "ScaledValueConfig";
	database.items[0].items[0].items[0].items[5].items[4].items[3].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.sVC;
	database.items[0].items[0].items[0].items[5].items[4].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[5].items[4].items[3].numberOfItems = 2;
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[0].objectRef = "scaleFactor";
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[0].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.sVC.scaleFactor;
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[1].objectRef = "offset";
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[1].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[1].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[5].items[4].items[3].items[1].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.sVC.offset;
	database.items[0].items[0].items[0].items[5].items[4].items[4].objectRef = "int1";
	database.items[0].items[0].items[0].items[5].items[4].items[4].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[5].items[4].items[4].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[5].items[4].items[4].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.int1;
	database.items[0].items[0].items[0].items[5].items[4].items[5].objectRef = "int2";
	database.items[0].items[0].items[0].items[5].items[4].items[5].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[5].items[4].items[5].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[5].items[4].items[5].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.int2;
	database.items[0].items[0].items[0].items[5].items[4].items[6].objectRef = "int3";
	database.items[0].items[0].items[0].items[5].items[4].items[6].type = BASIC_TYPE_INT32;
	database.items[0].items[0].items[0].items[5].items[4].items[6].typeSCL = "INT32";
	database.items[0].items[0].items[0].items[5].items[4].items[6].data = &E1Q1SB1.S1.C1.MMXUa_1.Volts.int3;
	database.items[0].items[0].items[0].items[6].objectRef = "TVTRa_1";
	database.items[0].items[0].items[0].items[6].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[6].typeSCL = "TVTRa";
	database.items[0].items[0].items[0].items[6].data = &E1Q1SB1.S1.C1.TVTRa_1;
	database.items[0].items[0].items[0].items[6].items = (Item*) calloc(4, sizeof(Item)); // DOs
	database.items[0].items[0].items[0].items[6].numberOfItems = 4;
	database.items[0].items[0].items[0].items[6].items[0].objectRef = "Mod";
	database.items[0].items[0].items[0].items[6].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[6].items[0].typeSCL = "myMod";
	database.items[0].items[0].items[0].items[6].items[0].data = &E1Q1SB1.S1.C1.TVTRa_1.Mod;
	database.items[0].items[0].items[0].items[6].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[6].items[0].numberOfItems = 4;
	database.items[0].items[0].items[0].items[6].items[0].items[0].objectRef = "ctlVal";
	database.items[0].items[0].items[0].items[6].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[6].items[0].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[6].items[0].items[0].data = &E1Q1SB1.S1.C1.TVTRa_1.Mod.ctlVal;
	database.items[0].items[0].items[0].items[6].items[0].items[1].objectRef = "stVal";
	database.items[0].items[0].items[0].items[6].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[6].items[0].items[1].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[6].items[0].items[1].data = &E1Q1SB1.S1.C1.TVTRa_1.Mod.stVal;
	database.items[0].items[0].items[0].items[6].items[0].items[2].objectRef = "q";
	database.items[0].items[0].items[0].items[6].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[6].items[0].items[2].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[6].items[0].items[2].data = &E1Q1SB1.S1.C1.TVTRa_1.Mod.q;
	database.items[0].items[0].items[0].items[6].items[0].items[3].objectRef = "t";
	database.items[0].items[0].items[0].items[6].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[0].items[0].items[0].items[6].items[0].items[3].typeSCL = "Timestamp";
	database.items[0].items[0].items[0].items[6].items[0].items[3].data = &E1Q1SB1.S1.C1.TVTRa_1.Mod.t;
	database.items[0].items[0].items[0].items[6].items[1].objectRef = "Health";
	database.items[0].items[0].items[0].items[6].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[6].items[1].typeSCL = "myHealth";
	database.items[0].items[0].items[0].items[6].items[1].data = &E1Q1SB1.S1.C1.TVTRa_1.Health;
	database.items[0].items[0].items[0].items[6].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[6].items[1].numberOfItems = 1;
	database.items[0].items[0].items[0].items[6].items[1].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[6].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[6].items[1].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[6].items[1].items[0].data = &E1Q1SB1.S1.C1.TVTRa_1.Health.stVal;
	database.items[0].items[0].items[0].items[6].items[2].objectRef = "Beh";
	database.items[0].items[0].items[0].items[6].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[6].items[2].typeSCL = "myBeh";
	database.items[0].items[0].items[0].items[6].items[2].data = &E1Q1SB1.S1.C1.TVTRa_1.Beh;
	database.items[0].items[0].items[0].items[6].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[6].items[2].numberOfItems = 1;
	database.items[0].items[0].items[0].items[6].items[2].items[0].objectRef = "stVal";
	database.items[0].items[0].items[0].items[6].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[0].items[0].items[0].items[6].items[2].items[0].typeSCL = "Enum";
	database.items[0].items[0].items[0].items[6].items[2].items[0].data = &E1Q1SB1.S1.C1.TVTRa_1.Beh.stVal;
	database.items[0].items[0].items[0].items[6].items[3].objectRef = "Vol";
	database.items[0].items[0].items[0].items[6].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[6].items[3].typeSCL = "mySAV";
	database.items[0].items[0].items[0].items[6].items[3].data = &E1Q1SB1.S1.C1.TVTRa_1.Vol;
	database.items[0].items[0].items[0].items[6].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[0].items[0].items[0].items[6].items[3].numberOfItems = 2;
	database.items[0].items[0].items[0].items[6].items[3].items[0].objectRef = "instMag";
	database.items[0].items[0].items[0].items[6].items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[0].items[0].items[0].items[6].items[3].items[0].typeSCL = "myAnalogValue";
	database.items[0].items[0].items[0].items[6].items[3].items[0].data = &E1Q1SB1.S1.C1.TVTRa_1.Vol.instMag;
	database.items[0].items[0].items[0].items[6].items[3].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[0].items[0].items[0].items[6].items[3].items[0].numberOfItems = 1;
	database.items[0].items[0].items[0].items[6].items[3].items[0].items[0].objectRef = "f";
	database.items[0].items[0].items[0].items[6].items[3].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[0].items[0].items[0].items[6].items[3].items[0].items[0].typeSCL = "FLOAT32";
	database.items[0].items[0].items[0].items[6].items[3].items[0].items[0].data = &E1Q1SB1.S1.C1.TVTRa_1.Vol.instMag.f;
	database.items[0].items[0].items[0].items[6].items[3].items[1].objectRef = "q";
	database.items[0].items[0].items[0].items[6].items[3].items[1].type = BASIC_TYPE_INT16U;
	database.items[0].items[0].items[0].items[6].items[3].items[1].typeSCL = "Quality";
	database.items[0].items[0].items[0].items[6].items[3].items[1].data = &E1Q1SB1.S1.C1.TVTRa_1.Vol.q;
	database.items[1].objectRef = "E1Q1BP2";
	database.items[1].type = BASIC_TYPE_COMPOUND;
	database.items[1].typeSCL = "";
	database.items[1].data = &E1Q1BP2;
	database.items[1].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[1].numberOfItems = 1;
	database.items[1].items[0].objectRef = "S1";
	database.items[1].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[1].items[0].typeSCL = "";
	database.items[1].items[0].data = &E1Q1BP2.S1;
	database.items[2].objectRef = "E1Q1BP3";
	database.items[2].type = BASIC_TYPE_COMPOUND;
	database.items[2].typeSCL = "";
	database.items[2].data = &E1Q1BP3;
	database.items[2].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[2].numberOfItems = 1;
	database.items[2].items[0].objectRef = "S1";
	database.items[2].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[2].items[0].typeSCL = "";
	database.items[2].items[0].data = &E1Q1BP3.S1;
	database.items[3].objectRef = "E1Q2SB1";
	database.items[3].type = BASIC_TYPE_COMPOUND;
	database.items[3].typeSCL = "";
	database.items[3].data = &E1Q2SB1;
	database.items[3].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[3].numberOfItems = 1;
	database.items[3].items[0].objectRef = "S1";
	database.items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[3].items[0].typeSCL = "";
	database.items[3].items[0].data = &E1Q2SB1.S1;
	database.items[4].objectRef = "E1Q3SB1";
	database.items[4].type = BASIC_TYPE_COMPOUND;
	database.items[4].typeSCL = "";
	database.items[4].data = &E1Q3SB1;
	database.items[4].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[4].numberOfItems = 1;
	database.items[4].items[0].objectRef = "S1";
	database.items[4].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[4].items[0].typeSCL = "";
	database.items[4].items[0].data = &E1Q3SB1.S1;
	database.items[5].objectRef = "E1Q3KA1";
	database.items[5].type = BASIC_TYPE_COMPOUND;
	database.items[5].typeSCL = "";
	database.items[5].data = &E1Q3KA1;
	database.items[5].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[5].numberOfItems = 1;
	database.items[5].items[0].objectRef = "S1";
	database.items[5].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[5].items[0].typeSCL = "";
	database.items[5].items[0].data = &E1Q3KA1.S1;
	database.items[6].objectRef = "E1Q3KA2";
	database.items[6].type = BASIC_TYPE_COMPOUND;
	database.items[6].typeSCL = "";
	database.items[6].data = &E1Q3KA2;
	database.items[6].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[6].numberOfItems = 1;
	database.items[6].items[0].objectRef = "S1";
	database.items[6].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[6].items[0].typeSCL = "";
	database.items[6].items[0].data = &E1Q3KA2.S1;
	database.items[7].objectRef = "E1Q3KA3";
	database.items[7].type = BASIC_TYPE_COMPOUND;
	database.items[7].typeSCL = "";
	database.items[7].data = &E1Q3KA3;
	database.items[7].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[7].numberOfItems = 1;
	database.items[7].items[0].objectRef = "S1";
	database.items[7].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[7].items[0].typeSCL = "";
	database.items[7].items[0].data = &E1Q3KA3.S1;
	database.items[8].objectRef = "D1Q1SB1";
	database.items[8].type = BASIC_TYPE_COMPOUND;
	database.items[8].typeSCL = "";
	database.items[8].data = &D1Q1SB1;
	database.items[8].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[8].numberOfItems = 1;
	database.items[8].items[0].objectRef = "S1";
	database.items[8].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[8].items[0].typeSCL = "";
	database.items[8].items[0].data = &D1Q1SB1.S1;
	database.items[9].objectRef = "D1Q1BP2";
	database.items[9].type = BASIC_TYPE_COMPOUND;
	database.items[9].typeSCL = "";
	database.items[9].data = &D1Q1BP2;
	database.items[9].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[9].numberOfItems = 1;
	database.items[9].items[0].objectRef = "S1";
	database.items[9].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[9].items[0].typeSCL = "";
	database.items[9].items[0].data = &D1Q1BP2.S1;
	database.items[10].objectRef = "D1Q1BP3";
	database.items[10].type = BASIC_TYPE_COMPOUND;
	database.items[10].typeSCL = "";
	database.items[10].data = &D1Q1BP3;
	database.items[10].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[10].numberOfItems = 1;
	database.items[10].items[0].objectRef = "S1";
	database.items[10].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[10].items[0].typeSCL = "";
	database.items[10].items[0].data = &D1Q1BP3.S1;
	database.items[11].objectRef = "D1Q1SB4";
	database.items[11].type = BASIC_TYPE_COMPOUND;
	database.items[11].typeSCL = "";
	database.items[11].data = &D1Q1SB4;
	database.items[11].items = (Item*) calloc(1, sizeof(Item)); // APs+Servers
	database.items[11].numberOfItems = 1;
	database.items[11].items[0].objectRef = "S1";
	database.items[11].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].typeSCL = "";
	database.items[11].items[0].data = &D1Q1SB4.S1;
	database.items[11].items[0].items = (Item*) calloc(1, sizeof(Item)); // LDs
	database.items[11].items[0].numberOfItems = 1;
	database.items[11].items[0].items[0].objectRef = "C1";
	database.items[11].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].typeSCL = "";
	database.items[11].items[0].items[0].data = &D1Q1SB4.S1.C1;
	database.items[11].items[0].items[0].items = (Item*) calloc(4, sizeof(Item)); // LNs
	database.items[11].items[0].items[0].numberOfItems = 4;
	database.items[11].items[0].items[0].items[0].objectRef = "LN0";
	database.items[11].items[0].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[0].typeSCL = "LN0";
	database.items[11].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.LN0.LLN0;
	database.items[11].items[0].items[0].items[0].items = (Item*) calloc(4, sizeof(Item)); // DOs
	database.items[11].items[0].items[0].items[0].numberOfItems = 4;
	database.items[11].items[0].items[0].items[0].items[0].objectRef = "Mod";
	database.items[11].items[0].items[0].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[0].items[0].typeSCL = "myMod";
	database.items[11].items[0].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.LN0.LLN0.Mod;
	database.items[11].items[0].items[0].items[0].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[0].items[0].numberOfItems = 4;
	database.items[11].items[0].items[0].items[0].items[0].items[0].objectRef = "ctlVal";
	database.items[11].items[0].items[0].items[0].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[0].items[0].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.LN0.LLN0.Mod.ctlVal;
	database.items[11].items[0].items[0].items[0].items[0].items[1].objectRef = "stVal";
	database.items[11].items[0].items[0].items[0].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[0].items[0].items[1].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[0].items[0].items[1].data = &D1Q1SB4.S1.C1.LN0.LLN0.Mod.stVal;
	database.items[11].items[0].items[0].items[0].items[0].items[2].objectRef = "q";
	database.items[11].items[0].items[0].items[0].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[0].items[0].items[2].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[0].items[0].items[2].data = &D1Q1SB4.S1.C1.LN0.LLN0.Mod.q;
	database.items[11].items[0].items[0].items[0].items[0].items[3].objectRef = "t";
	database.items[11].items[0].items[0].items[0].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[0].items[0].items[3].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[0].items[0].items[3].data = &D1Q1SB4.S1.C1.LN0.LLN0.Mod.t;
	database.items[11].items[0].items[0].items[0].items[1].objectRef = "Health";
	database.items[11].items[0].items[0].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[0].items[1].typeSCL = "myHealth";
	database.items[11].items[0].items[0].items[0].items[1].data = &D1Q1SB4.S1.C1.LN0.LLN0.Health;
	database.items[11].items[0].items[0].items[0].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[0].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[0].items[1].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[0].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[0].items[1].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[0].items[1].items[0].data = &D1Q1SB4.S1.C1.LN0.LLN0.Health.stVal;
	database.items[11].items[0].items[0].items[0].items[2].objectRef = "Beh";
	database.items[11].items[0].items[0].items[0].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[0].items[2].typeSCL = "myBeh";
	database.items[11].items[0].items[0].items[0].items[2].data = &D1Q1SB4.S1.C1.LN0.LLN0.Beh;
	database.items[11].items[0].items[0].items[0].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[0].items[2].numberOfItems = 1;
	database.items[11].items[0].items[0].items[0].items[2].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[0].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[0].items[2].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[0].items[2].items[0].data = &D1Q1SB4.S1.C1.LN0.LLN0.Beh.stVal;
	database.items[11].items[0].items[0].items[0].items[3].objectRef = "NamPlt";
	database.items[11].items[0].items[0].items[0].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[0].items[3].typeSCL = "myLPL";
	database.items[11].items[0].items[0].items[0].items[3].data = &D1Q1SB4.S1.C1.LN0.LLN0.NamPlt;
	database.items[11].items[0].items[0].items[0].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[0].items[3].numberOfItems = 2;
	database.items[11].items[0].items[0].items[0].items[3].items[0].objectRef = "ldNs";
	database.items[11].items[0].items[0].items[0].items[3].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[0].items[3].items[0].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[0].items[3].items[0].data = D1Q1SB4.S1.C1.LN0.LLN0.NamPlt.ldNs;
	database.items[11].items[0].items[0].items[0].items[3].items[1].objectRef = "configRev";
	database.items[11].items[0].items[0].items[0].items[3].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[0].items[3].items[1].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[0].items[3].items[1].data = D1Q1SB4.S1.C1.LN0.LLN0.NamPlt.configRev;
	database.items[11].items[0].items[0].items[1].objectRef = "exampleMMXU_1";
	database.items[11].items[0].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].typeSCL = "exampleMMXU";
	database.items[11].items[0].items[0].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1;
	database.items[11].items[0].items[0].items[1].items = (Item*) calloc(4, sizeof(Item)); // DOs
	database.items[11].items[0].items[0].items[1].numberOfItems = 4;
	database.items[11].items[0].items[0].items[1].items[0].objectRef = "Mod";
	database.items[11].items[0].items[0].items[1].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[0].typeSCL = "myMod";
	database.items[11].items[0].items[0].items[1].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Mod;
	database.items[11].items[0].items[0].items[1].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[1].items[0].numberOfItems = 4;
	database.items[11].items[0].items[0].items[1].items[0].items[0].objectRef = "ctlVal";
	database.items[11].items[0].items[0].items[1].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[1].items[0].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[1].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Mod.ctlVal;
	database.items[11].items[0].items[0].items[1].items[0].items[1].objectRef = "stVal";
	database.items[11].items[0].items[0].items[1].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[1].items[0].items[1].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[1].items[0].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Mod.stVal;
	database.items[11].items[0].items[0].items[1].items[0].items[2].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[0].items[2].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[0].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Mod.q;
	database.items[11].items[0].items[0].items[1].items[0].items[3].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[0].items[3].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[0].items[3].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Mod.t;
	database.items[11].items[0].items[0].items[1].items[1].objectRef = "Beh";
	database.items[11].items[0].items[0].items[1].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[1].typeSCL = "myHealth";
	database.items[11].items[0].items[0].items[1].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Beh;
	database.items[11].items[0].items[0].items[1].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[1].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[1].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[1].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[1].items[1].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[1].items[1].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Beh.stVal;
	database.items[11].items[0].items[0].items[1].items[2].objectRef = "Health";
	database.items[11].items[0].items[0].items[1].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[2].typeSCL = "myBeh";
	database.items[11].items[0].items[0].items[1].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Health;
	database.items[11].items[0].items[0].items[1].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[1].items[2].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[2].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[1].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[1].items[2].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[1].items[2].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.Health.stVal;
	database.items[11].items[0].items[0].items[1].items[3].objectRef = "A";
	database.items[11].items[0].items[0].items[1].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].typeSCL = "simpleWYE";
	database.items[11].items[0].items[0].items[1].items[3].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A;
	database.items[11].items[0].items[0].items[1].items[3].items = (Item*) calloc(3, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[1].items[3].numberOfItems = 3;
	database.items[11].items[0].items[0].items[1].items[3].items[0].objectRef = "phsA"; // SDO
	database.items[11].items[0].items[0].items[1].items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[0].typeSCL = "simpleCMV";
	database.items[11].items[0].items[0].items[1].items[3].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items = (Item*) calloc(5, sizeof(Item)); // DAs within SDO
	database.items[11].items[0].items[0].items[1].items[3].items[0].numberOfItems = 5;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].objectRef = "cVal";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].typeSCL = "simpleVector";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.cVal;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items = (Item*) calloc(2, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].numberOfItems = 2;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].objectRef = "mag"; // BDA
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].typeSCL = "myAnalogValue";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.cVal.mag;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].items[0].objectRef = "f";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].items[0].typeSCL = "FLOAT32";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.cVal.mag.f;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].objectRef = "ang"; // BDA
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].typeSCL = "myAnalogValue";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.cVal.ang;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].items[0].objectRef = "f";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].items[0].typeSCL = "FLOAT32";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[0].items[1].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.cVal.ang.f;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.q;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.t;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[3].objectRef = "testInteger";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[3].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[3].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[3].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.testInteger;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].objectRef = "testBoolean";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].type = BASIC_TYPE_BOOLEAN;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].typeSCL = "BOOLEAN";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.testBoolean;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].objectRef = "testSecondLayerSDO"; // SDO
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].typeSCL = "mySPS";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.testSecondLayerSDO;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items = (Item*) calloc(3, sizeof(Item)); // DAs within SDO
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].numberOfItems = 3;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[0].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[0].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.testSecondLayerSDO.stVal;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.testSecondLayerSDO.q;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[3].items[0].items[4].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsA.testSecondLayerSDO.t;
	database.items[11].items[0].items[0].items[1].items[3].items[1].objectRef = "phsB"; // SDO
	database.items[11].items[0].items[0].items[1].items[3].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[1].typeSCL = "simpleCMV";
	database.items[11].items[0].items[0].items[1].items[3].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items = (Item*) calloc(5, sizeof(Item)); // DAs within SDO
	database.items[11].items[0].items[0].items[1].items[3].items[1].numberOfItems = 5;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].objectRef = "cVal";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].typeSCL = "simpleVector";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.cVal;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items = (Item*) calloc(2, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].numberOfItems = 2;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].objectRef = "mag"; // BDA
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].typeSCL = "myAnalogValue";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.cVal.mag;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].items[0].objectRef = "f";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].items[0].typeSCL = "FLOAT32";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.cVal.mag.f;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].objectRef = "ang"; // BDA
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].typeSCL = "myAnalogValue";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.cVal.ang;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].items[0].objectRef = "f";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].items[0].typeSCL = "FLOAT32";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[0].items[1].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.cVal.ang.f;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.q;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.t;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[3].objectRef = "testInteger";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[3].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[3].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[3].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.testInteger;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].objectRef = "testBoolean";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].type = BASIC_TYPE_BOOLEAN;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].typeSCL = "BOOLEAN";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.testBoolean;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].objectRef = "testSecondLayerSDO"; // SDO
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].typeSCL = "mySPS";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.testSecondLayerSDO;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items = (Item*) calloc(3, sizeof(Item)); // DAs within SDO
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].numberOfItems = 3;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[0].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[0].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.testSecondLayerSDO.stVal;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.testSecondLayerSDO.q;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[3].items[1].items[4].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsB.testSecondLayerSDO.t;
	database.items[11].items[0].items[0].items[1].items[3].items[2].objectRef = "phsC"; // SDO
	database.items[11].items[0].items[0].items[1].items[3].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[2].typeSCL = "simpleCMV";
	database.items[11].items[0].items[0].items[1].items[3].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items = (Item*) calloc(5, sizeof(Item)); // DAs within SDO
	database.items[11].items[0].items[0].items[1].items[3].items[2].numberOfItems = 5;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].objectRef = "cVal";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].typeSCL = "simpleVector";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.cVal;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items = (Item*) calloc(2, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].numberOfItems = 2;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].objectRef = "mag"; // BDA
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].typeSCL = "myAnalogValue";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.cVal.mag;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].items[0].objectRef = "f";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].items[0].typeSCL = "FLOAT32";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[0].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.cVal.mag.f;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].objectRef = "ang"; // BDA
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].typeSCL = "myAnalogValue";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.cVal.ang;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].items[0].objectRef = "f";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].items[0].type = BASIC_TYPE_FLOAT32;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].items[0].typeSCL = "FLOAT32";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[0].items[1].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.cVal.ang.f;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.q;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.t;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[3].objectRef = "testInteger";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[3].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[3].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[3].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.testInteger;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].objectRef = "testBoolean";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].type = BASIC_TYPE_BOOLEAN;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].typeSCL = "BOOLEAN";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.testBoolean;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].objectRef = "testSecondLayerSDO"; // SDO
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].typeSCL = "mySPS";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.testSecondLayerSDO;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items = (Item*) calloc(3, sizeof(Item)); // DAs within SDO
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].numberOfItems = 3;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[0].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[0].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[0].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.testSecondLayerSDO.stVal;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[1].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.testSecondLayerSDO.q;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[1].items[3].items[2].items[4].items[2].data = &D1Q1SB4.S1.C1.exampleMMXU_1.A.phsC.testSecondLayerSDO.t;
	database.items[11].items[0].items[0].items[2].objectRef = "LPHDa_1";
	database.items[11].items[0].items[0].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].typeSCL = "LPHDa";
	database.items[11].items[0].items[0].items[2].data = &D1Q1SB4.S1.C1.LPHDa_1;
	database.items[11].items[0].items[0].items[2].items = (Item*) calloc(7, sizeof(Item)); // DOs
	database.items[11].items[0].items[0].items[2].numberOfItems = 7;
	database.items[11].items[0].items[0].items[2].items[0].objectRef = "Mod";
	database.items[11].items[0].items[0].items[2].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[0].typeSCL = "myMod";
	database.items[11].items[0].items[0].items[2].items[0].data = &D1Q1SB4.S1.C1.LPHDa_1.Mod;
	database.items[11].items[0].items[0].items[2].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[0].numberOfItems = 4;
	database.items[11].items[0].items[0].items[2].items[0].items[0].objectRef = "ctlVal";
	database.items[11].items[0].items[0].items[2].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[2].items[0].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[2].items[0].items[0].data = &D1Q1SB4.S1.C1.LPHDa_1.Mod.ctlVal;
	database.items[11].items[0].items[0].items[2].items[0].items[1].objectRef = "stVal";
	database.items[11].items[0].items[0].items[2].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[2].items[0].items[1].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[2].items[0].items[1].data = &D1Q1SB4.S1.C1.LPHDa_1.Mod.stVal;
	database.items[11].items[0].items[0].items[2].items[0].items[2].objectRef = "q";
	database.items[11].items[0].items[0].items[2].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[2].items[0].items[2].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[2].items[0].items[2].data = &D1Q1SB4.S1.C1.LPHDa_1.Mod.q;
	database.items[11].items[0].items[0].items[2].items[0].items[3].objectRef = "t";
	database.items[11].items[0].items[0].items[2].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[2].items[0].items[3].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[2].items[0].items[3].data = &D1Q1SB4.S1.C1.LPHDa_1.Mod.t;
	database.items[11].items[0].items[0].items[2].items[1].objectRef = "Health";
	database.items[11].items[0].items[0].items[2].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[1].typeSCL = "myHealth";
	database.items[11].items[0].items[0].items[2].items[1].data = &D1Q1SB4.S1.C1.LPHDa_1.Health;
	database.items[11].items[0].items[0].items[2].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[2].items[1].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[2].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[2].items[1].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[2].items[1].items[0].data = &D1Q1SB4.S1.C1.LPHDa_1.Health.stVal;
	database.items[11].items[0].items[0].items[2].items[2].objectRef = "Beh";
	database.items[11].items[0].items[0].items[2].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[2].typeSCL = "myBeh";
	database.items[11].items[0].items[0].items[2].items[2].data = &D1Q1SB4.S1.C1.LPHDa_1.Beh;
	database.items[11].items[0].items[0].items[2].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[2].numberOfItems = 1;
	database.items[11].items[0].items[0].items[2].items[2].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[2].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[2].items[2].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[2].items[2].items[0].data = &D1Q1SB4.S1.C1.LPHDa_1.Beh.stVal;
	database.items[11].items[0].items[0].items[2].items[3].objectRef = "NamPlt";
	database.items[11].items[0].items[0].items[2].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[3].typeSCL = "myLPL";
	database.items[11].items[0].items[0].items[2].items[3].data = &D1Q1SB4.S1.C1.LPHDa_1.NamPlt;
	database.items[11].items[0].items[0].items[2].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[3].numberOfItems = 2;
	database.items[11].items[0].items[0].items[2].items[3].items[0].objectRef = "ldNs";
	database.items[11].items[0].items[0].items[2].items[3].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[2].items[3].items[0].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[2].items[3].items[0].data = D1Q1SB4.S1.C1.LPHDa_1.NamPlt.ldNs;
	database.items[11].items[0].items[0].items[2].items[3].items[1].objectRef = "configRev";
	database.items[11].items[0].items[0].items[2].items[3].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[2].items[3].items[1].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[2].items[3].items[1].data = D1Q1SB4.S1.C1.LPHDa_1.NamPlt.configRev;
	database.items[11].items[0].items[0].items[2].items[4].objectRef = "PhyNam";
	database.items[11].items[0].items[0].items[2].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[4].typeSCL = "myDPL";
	database.items[11].items[0].items[0].items[2].items[4].data = &D1Q1SB4.S1.C1.LPHDa_1.PhyNam;
	database.items[11].items[0].items[0].items[2].items[4].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[4].numberOfItems = 2;
	database.items[11].items[0].items[0].items[2].items[4].items[0].objectRef = "vendor";
	database.items[11].items[0].items[0].items[2].items[4].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[2].items[4].items[0].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[2].items[4].items[0].data = D1Q1SB4.S1.C1.LPHDa_1.PhyNam.vendor;
	database.items[11].items[0].items[0].items[2].items[4].items[1].objectRef = "hwRev";
	database.items[11].items[0].items[0].items[2].items[4].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[2].items[4].items[1].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[2].items[4].items[1].data = D1Q1SB4.S1.C1.LPHDa_1.PhyNam.hwRev;
	database.items[11].items[0].items[0].items[2].items[5].objectRef = "PhyHealth";
	database.items[11].items[0].items[0].items[2].items[5].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[5].typeSCL = "myINS";
	database.items[11].items[0].items[0].items[2].items[5].data = &D1Q1SB4.S1.C1.LPHDa_1.PhyHealth;
	database.items[11].items[0].items[0].items[2].items[5].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[5].numberOfItems = 1;
	database.items[11].items[0].items[0].items[2].items[5].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[2].items[5].items[0].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[2].items[5].items[0].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[2].items[5].items[0].data = &D1Q1SB4.S1.C1.LPHDa_1.PhyHealth.stVal;
	database.items[11].items[0].items[0].items[2].items[6].objectRef = "Proxy";
	database.items[11].items[0].items[0].items[2].items[6].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[2].items[6].typeSCL = "mySPS";
	database.items[11].items[0].items[0].items[2].items[6].data = &D1Q1SB4.S1.C1.LPHDa_1.Proxy;
	database.items[11].items[0].items[0].items[2].items[6].items = (Item*) calloc(3, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[2].items[6].numberOfItems = 3;
	database.items[11].items[0].items[0].items[2].items[6].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[2].items[6].items[0].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[2].items[6].items[0].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[2].items[6].items[0].data = &D1Q1SB4.S1.C1.LPHDa_1.Proxy.stVal;
	database.items[11].items[0].items[0].items[2].items[6].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[2].items[6].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[2].items[6].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[2].items[6].items[1].data = &D1Q1SB4.S1.C1.LPHDa_1.Proxy.q;
	database.items[11].items[0].items[0].items[2].items[6].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[2].items[6].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[2].items[6].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[2].items[6].items[2].data = &D1Q1SB4.S1.C1.LPHDa_1.Proxy.t;
	database.items[11].items[0].items[0].items[3].objectRef = "RSYNa_1";
	database.items[11].items[0].items[0].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[3].typeSCL = "RSYNa";
	database.items[11].items[0].items[0].items[3].data = &D1Q1SB4.S1.C1.RSYNa_1;
	database.items[11].items[0].items[0].items[3].items = (Item*) calloc(5, sizeof(Item)); // DOs
	database.items[11].items[0].items[0].items[3].numberOfItems = 5;
	database.items[11].items[0].items[0].items[3].items[0].objectRef = "Mod";
	database.items[11].items[0].items[0].items[3].items[0].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[3].items[0].typeSCL = "myMod";
	database.items[11].items[0].items[0].items[3].items[0].data = &D1Q1SB4.S1.C1.RSYNa_1.Mod;
	database.items[11].items[0].items[0].items[3].items[0].items = (Item*) calloc(4, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[3].items[0].numberOfItems = 4;
	database.items[11].items[0].items[0].items[3].items[0].items[0].objectRef = "ctlVal";
	database.items[11].items[0].items[0].items[3].items[0].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[3].items[0].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[3].items[0].items[0].data = &D1Q1SB4.S1.C1.RSYNa_1.Mod.ctlVal;
	database.items[11].items[0].items[0].items[3].items[0].items[1].objectRef = "stVal";
	database.items[11].items[0].items[0].items[3].items[0].items[1].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[3].items[0].items[1].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[3].items[0].items[1].data = &D1Q1SB4.S1.C1.RSYNa_1.Mod.stVal;
	database.items[11].items[0].items[0].items[3].items[0].items[2].objectRef = "q";
	database.items[11].items[0].items[0].items[3].items[0].items[2].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[3].items[0].items[2].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[3].items[0].items[2].data = &D1Q1SB4.S1.C1.RSYNa_1.Mod.q;
	database.items[11].items[0].items[0].items[3].items[0].items[3].objectRef = "t";
	database.items[11].items[0].items[0].items[3].items[0].items[3].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[3].items[0].items[3].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[3].items[0].items[3].data = &D1Q1SB4.S1.C1.RSYNa_1.Mod.t;
	database.items[11].items[0].items[0].items[3].items[1].objectRef = "Health";
	database.items[11].items[0].items[0].items[3].items[1].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[3].items[1].typeSCL = "myHealth";
	database.items[11].items[0].items[0].items[3].items[1].data = &D1Q1SB4.S1.C1.RSYNa_1.Health;
	database.items[11].items[0].items[0].items[3].items[1].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[3].items[1].numberOfItems = 1;
	database.items[11].items[0].items[0].items[3].items[1].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[3].items[1].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[3].items[1].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[3].items[1].items[0].data = &D1Q1SB4.S1.C1.RSYNa_1.Health.stVal;
	database.items[11].items[0].items[0].items[3].items[2].objectRef = "Beh";
	database.items[11].items[0].items[0].items[3].items[2].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[3].items[2].typeSCL = "myBeh";
	database.items[11].items[0].items[0].items[3].items[2].data = &D1Q1SB4.S1.C1.RSYNa_1.Beh;
	database.items[11].items[0].items[0].items[3].items[2].items = (Item*) calloc(1, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[3].items[2].numberOfItems = 1;
	database.items[11].items[0].items[0].items[3].items[2].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[3].items[2].items[0].type = BASIC_TYPE_ENUMERATED;
	database.items[11].items[0].items[0].items[3].items[2].items[0].typeSCL = "Enum";
	database.items[11].items[0].items[0].items[3].items[2].items[0].data = &D1Q1SB4.S1.C1.RSYNa_1.Beh.stVal;
	database.items[11].items[0].items[0].items[3].items[3].objectRef = "NamPlt";
	database.items[11].items[0].items[0].items[3].items[3].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[3].items[3].typeSCL = "myLPL";
	database.items[11].items[0].items[0].items[3].items[3].data = &D1Q1SB4.S1.C1.RSYNa_1.NamPlt;
	database.items[11].items[0].items[0].items[3].items[3].items = (Item*) calloc(2, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[3].items[3].numberOfItems = 2;
	database.items[11].items[0].items[0].items[3].items[3].items[0].objectRef = "ldNs";
	database.items[11].items[0].items[0].items[3].items[3].items[0].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[3].items[3].items[0].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[3].items[3].items[0].data = D1Q1SB4.S1.C1.RSYNa_1.NamPlt.ldNs;
	database.items[11].items[0].items[0].items[3].items[3].items[1].objectRef = "configRev";
	database.items[11].items[0].items[0].items[3].items[3].items[1].type = BASIC_TYPE_VISIBLE_STRING;
	database.items[11].items[0].items[0].items[3].items[3].items[1].typeSCL = "VisString255";
	database.items[11].items[0].items[0].items[3].items[3].items[1].data = D1Q1SB4.S1.C1.RSYNa_1.NamPlt.configRev;
	database.items[11].items[0].items[0].items[3].items[4].objectRef = "Rel";
	database.items[11].items[0].items[0].items[3].items[4].type = BASIC_TYPE_COMPOUND;
	database.items[11].items[0].items[0].items[3].items[4].typeSCL = "mySPS";
	database.items[11].items[0].items[0].items[3].items[4].data = &D1Q1SB4.S1.C1.RSYNa_1.Rel;
	database.items[11].items[0].items[0].items[3].items[4].items = (Item*) calloc(3, sizeof(Item)); // DAs (top level)
	database.items[11].items[0].items[0].items[3].items[4].numberOfItems = 3;
	database.items[11].items[0].items[0].items[3].items[4].items[0].objectRef = "stVal";
	database.items[11].items[0].items[0].items[3].items[4].items[0].type = BASIC_TYPE_INT32;
	database.items[11].items[0].items[0].items[3].items[4].items[0].typeSCL = "INT32";
	database.items[11].items[0].items[0].items[3].items[4].items[0].data = &D1Q1SB4.S1.C1.RSYNa_1.Rel.stVal;
	database.items[11].items[0].items[0].items[3].items[4].items[1].objectRef = "q";
	database.items[11].items[0].items[0].items[3].items[4].items[1].type = BASIC_TYPE_INT16U;
	database.items[11].items[0].items[0].items[3].items[4].items[1].typeSCL = "Quality";
	database.items[11].items[0].items[0].items[3].items[4].items[1].data = &D1Q1SB4.S1.C1.RSYNa_1.Rel.q;
	database.items[11].items[0].items[0].items[3].items[4].items[2].objectRef = "t";
	database.items[11].items[0].items[0].items[3].items[4].items[2].type = BASIC_TYPE_INT24U;
	database.items[11].items[0].items[0].items[3].items[4].items[2].typeSCL = "Timestamp";
	database.items[11].items[0].items[0].items[3].items[4].items[2].data = &D1Q1SB4.S1.C1.RSYNa_1.Rel.t;
}

struct mg_server *server1;
struct mg_server *server2;
struct mg_server *server3;
struct mg_server *server4;
struct mg_server *server5;
struct mg_server *server6;
struct mg_server *server7;
struct mg_server *server8;
struct mg_server *server9;
struct mg_server *server10;
struct mg_server *server11;
struct mg_server *server12;

void init_JSON_RPC(mg_handler_t handler, void *(*serve)(void *)) {
	server1 = mg_create_server((void *) "E1Q1SB1");
#ifndef USE_SSL
	mg_set_option(server1, "listening_port", "8001");
#else
	mg_set_option(server1, "listening_port", "8001s");
	mg_set_option(server1, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server1, "/", handler);
	mg_start_thread(serve, server1);

	server2 = mg_create_server((void *) "E1Q1BP2");
#ifndef USE_SSL
	mg_set_option(server2, "listening_port", "8002");
#else
	mg_set_option(server2, "listening_port", "8002s");
	mg_set_option(server2, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server2, "/", handler);
	mg_start_thread(serve, server2);

	server3 = mg_create_server((void *) "E1Q1BP3");
#ifndef USE_SSL
	mg_set_option(server3, "listening_port", "8003");
#else
	mg_set_option(server3, "listening_port", "8003s");
	mg_set_option(server3, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server3, "/", handler);
	mg_start_thread(serve, server3);

	server4 = mg_create_server((void *) "E1Q2SB1");
#ifndef USE_SSL
	mg_set_option(server4, "listening_port", "8004");
#else
	mg_set_option(server4, "listening_port", "8004s");
	mg_set_option(server4, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server4, "/", handler);
	mg_start_thread(serve, server4);

	server5 = mg_create_server((void *) "E1Q3SB1");
#ifndef USE_SSL
	mg_set_option(server5, "listening_port", "8005");
#else
	mg_set_option(server5, "listening_port", "8005s");
	mg_set_option(server5, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server5, "/", handler);
	mg_start_thread(serve, server5);

	server6 = mg_create_server((void *) "E1Q3KA1");
#ifndef USE_SSL
	mg_set_option(server6, "listening_port", "8006");
#else
	mg_set_option(server6, "listening_port", "8006s");
	mg_set_option(server6, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server6, "/", handler);
	mg_start_thread(serve, server6);

	server7 = mg_create_server((void *) "E1Q3KA2");
#ifndef USE_SSL
	mg_set_option(server7, "listening_port", "8007");
#else
	mg_set_option(server7, "listening_port", "8007s");
	mg_set_option(server7, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server7, "/", handler);
	mg_start_thread(serve, server7);

	server8 = mg_create_server((void *) "E1Q3KA3");
#ifndef USE_SSL
	mg_set_option(server8, "listening_port", "8008");
#else
	mg_set_option(server8, "listening_port", "8008s");
	mg_set_option(server8, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server8, "/", handler);
	mg_start_thread(serve, server8);

	server9 = mg_create_server((void *) "D1Q1SB1");
#ifndef USE_SSL
	mg_set_option(server9, "listening_port", "8009");
#else
	mg_set_option(server9, "listening_port", "8009s");
	mg_set_option(server9, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server9, "/", handler);
	mg_start_thread(serve, server9);

	server10 = mg_create_server((void *) "D1Q1BP2");
#ifndef USE_SSL
	mg_set_option(server10, "listening_port", "8010");
#else
	mg_set_option(server10, "listening_port", "8010s");
	mg_set_option(server10, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server10, "/", handler);
	mg_start_thread(serve, server10);

	server11 = mg_create_server((void *) "D1Q1BP3");
#ifndef USE_SSL
	mg_set_option(server11, "listening_port", "8011");
#else
	mg_set_option(server11, "listening_port", "8011s");
	mg_set_option(server11, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server11, "/", handler);
	mg_start_thread(serve, server11);

	server12 = mg_create_server((void *) "D1Q1SB4");
#ifndef USE_SSL
	mg_set_option(server12, "listening_port", "8012");
#else
	mg_set_option(server12, "listening_port", "8012s");
	mg_set_option(server12, "ssl_certificate", "ssl_cert.pem");
#endif
	mg_add_uri_handler(server12, "/", handler);
	mg_start_thread(serve, server12);
}


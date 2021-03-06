/* HPhi  -  Quantum Lattice Model Simulator */
/* Copyright (C) 2015 The University of Tokyo */

/* This program is free software: you can redistribute it and/or modify */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or */
/* (at your option) any later version. */

/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the */
/* GNU General Public License for more details. */

/* You should have received a copy of the GNU General Public License */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#include "LogMessage.h"

//readdef.c
const char* cReadFileNamelist = "  Read File '%s'.\n";
const char* cReadFile = "  Read File '%s' for %s.\n";

//sz.c
const char* cStateLocSpin= "  j = %d loc %d \n";
const char* cStateNupNdown= "  N_all_up=%d N_all_down=%d \n";
const char* cInitalSz=  "initial sz : %s";
const char* cOMPSzStart=  "omp parallel sz finishes: %s";
const char* cOMPSzMid= "mid omp parallel sz : %s";
const char* cOMPSzFinish=  "omp parallel sz finishes: %s";
const char* cSingleSzStart="single sz starts: %s";
const char* cSingleSzFinish= "single sz finishes: %s";
const char* cReadSzStart ="READ=1: read starts: %s";
const char* cReadSzEnd  ="READ=1: read finishes: %s";

//CG_EigenVector.c
const char* cLogCG_EigenVecStart="  Start: Calculate EigenVector by CG method.\n";
const char* cLogCG_EigenVecEnd="  End  : Calculate EigenVector by CG method.\n";
const char* cCG_EigenVecStart= "CG Eigenvector starts:        %s";
const char* cCG_EigenVecFinish="CG Eigenvector finishes:      %s";

//diagonalcalc.c
const char* cDiagonalCalcFinish="diagonal calculation finishes: %s";


//FirstMultiply.c, Multiply.c
const char* cTPQStep="step %d:TPQ begins: %s";
const char* cTPQStepEnd="step %d:TPQ finishes: %s";

//Lanczos_EigenValue.c
const char* cLogLanczos_EigenValueNotConverged="Lanczos Eigenvalue is not converged in this process.";

const char* cLanczos_EigenValueStart=  "Lanczos Eigen Value start:    %s";
const char* cLanczos_EigenValueStep="%3d th Lanczos step: %s";
const char* cLanczos_EigenValueFinish= "Lanczos Eigenvalue finishes:  %s";

//Lanczos_EigenVector.c
const char* cLogLanczos_EigenVectorStart="  Start: Calculate Lanczos Eigenvector.\n";
const char* cLogLanczos_EigenVectorEnd="  End  : Calculate Lanczos Eigenvector.\n";
const char* cLanczos_EigenVectorStart= "Lanczos Eigenvector starts:   %s";
const char* cLanczos_EigenVectorFinish="Lanczos Eigenvector finishes: %s";

//expec.c
const char* cExpecStart="Calculate energy begins:      %s";
const char* cExpecEnd  ="Calculate energy finishes:    %s";
const char* cTPQExpecStart="step %d: Calculate energy begins:      %s";
const char* cTPQExpecEnd  ="step %d: Calculate energy finishes:    %s";


//expec_cisajs.c
const char* cLogLanczosExpecOneBodyGStart="  Start: Calculate one body Green functions.\n";
const char* cLogCGExpecOneBodyGStart="  Start: Calculate one body Green functions.\n";
const char* cLogLanczosExpecOneBodyGEnd="  End  : Calculate one body Green functions.\n\n";
const char* cLogCGExpecOneBodyGEnd="  End  : Calculate one body Green functions.\n\n";

const char* cLanczosExpecOneBodyGFinish ="Lanczos expec_cisajs finishes: %s";
const char* cLanczosExpecOneBodyGStart="Lanczos expec_cisajs Starts: %s";
const char* cTPQExpecOneBodyGStart = "set %d step %d:expec_cisajs begins: %s";
const char* cTPQExpecOneBodyGFinish = "set %d step %d:expec_cisajs finishes: %s";
const char* cCGExpecOneBodyGStart= "CG expec_cisajs starts:       %s";
const char* cCGExpecOneBodyGFinish="CG expec_cisajs finishes:     %s";

//expec_cisajucktaltdc.c
const char*  cLogLanczosExpecTwoBodyGStart="  Start: Calculate two bodies Green functions.\n";
const char*  cLogLanczosExpecTwoBodyGFinish= "  End  : Calculate two bodies Green functions.\n";
const char*  cLogCGExpecTwoBodyGFinish= "  End  : Calculate two bodies Green functions.\n\n";
const char*  cLanczosExpecTwoBodyGStart= "Lanczos expec_cisajacktalt finishes: %s";
const char*  cLanczosExpecTwoBodyGFinish= "Lanczos expec_cisajacktalt finishes: %s";
const char*  cCGExpecTwoBodyGStart= "CG expec_cisajacktalt begins: %s";
const char*  cCGExpecTwoBodyGFinish= "CG expec_cisajacktalt finishes: %s";
const char*  cTPQExpecTwoBodyGStart = "set %d step %d:expec_cisajscktaltdc finishes: %s";
const char*  cTPQExpecTwoBodyGFinish = "set %d step %d:expec_cisajscktaltdc finishes: %s";

//expec_energy.c
const char* cLogExpecEnergyStart="  Start: Calculate Energy.\n";
const char* cLogExpecEnergyEnd="  End  : Calculate Energy.\n";
const char* cLogLanczosExpecEnergyEnd="  End  : Calculate Energy by Lanczos method.\n";
const char* cLogCGExpecEnergyEnd="  End  : Calculate Energy by CG method.\n";
const char* cLogEnergy="energy=%lf \n";
const char* cLanczosExpecEnergyEnd= "Lanczos expec energy finishes: %s";
const char* cCGExpecEnergyEnd= "CG expec energy finishes: %s";

//CalcByTPQ.c
const char* cLogTPQRand =  "  rand_i / rand_max = %d / %d\n";
const char* cLogSSRand =  " # inv_tmp, energy, phys_var, phys_doublon, phys_num, step_i\n";
const char* cLogNormRand = " # inv_temp, global_norm, global_1st_norm, step_i \n";
const char* cLogTPQStep = "    step_i/total_step=%d/%d \n";
const char* cLogTPQEnd = "Finish: Elapsed time is %d [s].\n";

//FirstMultiply.c
const char* cLogCheckInitComplex = "    CHECK: TPQ complex initial vector \n";
const char* cLogCheckInitReal = "    CHECK: TPQ real initial vector \n";

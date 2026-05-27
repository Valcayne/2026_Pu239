#!/bin/bash

#Define the location of the files for bash programs


RunMin=124062
#RunMin=124300
#RunMin=124400
#RunMin=124600
#RunMin=125000
#RunMin=125000
RunMax=125255


EOSPATH="/eos/experiment/ntof/processing/official/done/"
#EOSPATH="/eos/home-v/valcayne/nTOFDataProcessing/2026_Sm/RootFiles/v01/done"


Folder2D="/eos/home-v/valcayne/nTOFDataProcessing/2026_Pu239/2DHistos/v01"
Folder2DGainCorrected="/eos/home-v/valcayne/nTOFDataProcessing/2026_Pu239/2DHistos/v01GainCorrected"
FolderOnLXPLUS="/afs/cern.ch/user/v/valcayne/Workspace/2026_Pu239/"

RunTypeToBeMerged="/eos/home-v/valcayne/CopiaOrdenadorCIEMAT/CmExperimentFolder/2026_Pu239/2026_Pu239/RunLists/RunTypeToBeMerged_v01.txt"
RunTypeTypeFolder="/eos/home-v/valcayne/CopiaOrdenadorCIEMAT/CmExperimentFolder/2026_Pu239/2026_Pu239/RunLists"


PathCalibrationsInitial=/eos/home-v/valcayne/nTOFDataProcessing/2026_Pu239/Calibration/CalibrationRunByRunv01/Calib_2026_Pu239_v01.dat
PathCalibrations=/eos/home-v/valcayne/nTOFDataProcessing/2026_Pu239/Calibration/CalibrationRunByRunv01
PathCalibrationsGain=/eos/home-v/valcayne/nTOFDataProcessing/2026_Pu239/Calibration/CalibrationRunByRunGainCorrectedv01
PathGainMonitoring=/eos/home-v/valcayne/nTOFDataProcessing/2026_Pu239//GainMonitoring/v01

RefRunGainShift_SILI=124096
RefRunGainShift_C6D6_Cs=124153
RefRunGainShift_C6D6_Y=124154
RefRunGainShift_LABR_Cs=124964
RefRunGainShift_LABR_Y=124965

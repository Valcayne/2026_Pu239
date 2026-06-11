#ifndef DEFPLOT2DHISTO_2024_TEST_L6D6_HH
#define DEFPLOT2DHISTO_2024_TEST_L6D6_HH 1

#include <TCanvas.h>
#include <TF1.h>
#include <TFile.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TKey.h>
#include <TLegend.h>
#include <TMath.h>
#include <TPad.h>
#include <TPaletteAxis.h>
#include <TROOT.h>
#include <TRandom.h>
#include <TStyle.h>
#include <TTree.h>

#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

double TimeMeasurement_ns = 1.0e8;
string NameDetector = "STED";

bool CorrectDeadTime = false;
bool UseSiliCountsInsteadOfProtons = false;
double FactorToMultyplySiliCountsToProtons =
    402789675373.926581347;  // value calculated for 23Er_2_1000, so I do not
                             // have to calculate the normalization again with
                             // CountsGainCorrected

double TOFD = 18.97;

// For subtract backgroudnS
vector<string> MeasPredefined = {"Predefined", "Pu239"};
vector<string> BackgroundMeasPredefined = {"27sTED_Background_20ms",
                                           "Pu239_Background_20ms"};
vector<string> DummyPredefined = {"27sTED_Empty_HalfBPEPb", "Dummy"};
vector<string> BackgroundDummyPredefined = {
    "27sTED_Background_20ms",
    "27sTED_Background_20ms",
};
vector<double> EfficiencyType = {4.13, 4.13,  4.13,  4.13,  4.13,  0.59,  0.59,
                                 0.59, 0.59,  0.59,  5.60,  5.60,  5.60,  5.60,
                                 5.60, 15.93, 15.93, 15.93, 15.93, 15.93, 15.93,
                                 4.13, 0.59,  5.60,  15.93};

;
// For GetSimul
vector<string> NameSimulArray = {"Au_1cm", "Pu239", "9sTED_Fe", "Au45_Top",
                                 "218260"};
vector<string> NameSimulRootfile = {
    "DataPlot/Yield_Au_100um_EAR2_v01", "DataPlot/Yield_Pu239_EAR2_Fis_100mg",
    "DataPlot/Yield_EAR2_Fe26_2104mg_v02", "DataPlot/Yield_Au_100um_EAR2_v01",
    "DataPlot/Yield_Au_100um_EAR2_v01"};
vector<string> NameSimulRootfile2 = {
    "DataPlot/Yield_Au_100um_EAR2_v01", "DataPlot/Yield_Pu239_EAR2_Cap_100mg",
    "DataPlot/Yield_EAR2_Fe26_2104mg_v02", "DataPlot/Yield_Au_100um_EAR2_v01",
    "DataPlot/Yield_Au_100um_EAR2_v01"};

vector<string> NameSimulArrayEdep = {
    "27sTED_Y_5",    "27sTED_Cs_5",  "27sTED_Bi_5", "27sTED_Ba_5",
    "27sTED_AmBe_5", "27sTED_CmC_5", "Wheel_Y"};

vector<string> NameSimulRootfileEdep = {
    //"/media/victor93/Elements/Valcayne/ExperimentData_Outputs/2025_TestFis/"
    //"Simulations/v01/2025_TestFis_3cm_Up_Y_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_Y_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_Cs_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_Bi_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_Ba_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_AmBe_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_CmC_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_9sTED_Y_1e8.root",
    "/home/victor93/ExperimentsData/2024_27sTED/Simulations/v03/"
    "2024_27sTED_Y_1e8.root",
};

vector<double> Activity_kBq = {94.6, 291.15, 1, 1, 1, 1, 103, 1, 1, 1, 1, 1, 1};

vector<int> ResolNumberDetector = {1, 2, 3, 4};
// vector<double> ResolParameter1 = {0.00152035, 0.00134748, 0.00018827};
// vector<double> ResolParameter2 = {0.0100738, 0.0034685, 0.00467216};

// vector<double> ResolParameter1 = {0.00193404, 0.00187058, 0.00256307};
// vector<double> ResolParameter2 = {0.00838911, 0.00181082, 0.00139247};

// vector<double> ResolParameter1 = {0.00329717, 0.00285433,
// 0.00136088,0.00211402}; vector<double> ResolParameter2 = {0.00215909,
// 0.0030931, 0.00293019, 0.0105527};

// vector<double> ResolParameter1 = {0.00258232, 0.00227249, 0.00167079,
//                                   0.00371062};
// vector<double> ResolParameter2 = {0.00233583, 0.00225643, 0.00221157,
// 0.008693};
double ResA = 0.0054;
double ResB = 0.0041;
vector<double> ResolParameter1 = {
    ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA,
    ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA,
    ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA,
    ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA,
    ResA, ResA, ResA, ResA, ResA, ResA, ResA, ResA

};
vector<double> ResolParameter2 = {
    ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB,
    ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB,
    ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB,
    ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB,
    ResB, ResB, ResB, ResB, ResB, ResB, ResB, ResB};

// vector<double> ResolParameter1 = {
//     0.00394258, 0.00277881, 0.00342603, 0.00275745, 0.000982735, 0.00337319,
//     0.00308663, 0.00367323, 0.00216081, 0.00376572, 0.00417465,  0.00353875,
//     0.00354117, 0.00222186, 0.00432629, 0.00355797, 0.00423145,  0.00381488,
//     0.00178521, 0.0032837,  0.00367434, 0.00441745, 0.00436524,  0.00327373,
//     0.00363027, 0.00379806, 0.00324021};

// vector<double> ResolParameter2 = {
//     0.00823,    0.00766631, 0.0066341,  0.0061743,  0.0135427,  0.00471424,
//     0.00704191, 0.00574132, 0.00945765, 0.00249749, 0.00297482, 0.0039267,
//     0.00336859, 0.00664747, 0.0026909,  0.00260027, 0.0028936,  0.00221396,
//     0.00588112, 0.00396227, 0.00357134, 0.0031709,  0.0031024,  0.00490541,
//     0.00384878, 0.00371291, 0.00501409};

// En for integrals normalize
// double NormalizeMinEn = 100;
// double NormalizeMaxEn = 500;

double NormalizeMinEn = 0.1;
double NormalizeMaxEn = 10.0;

// double NormalizeMinEn = 1000;
// double NormalizeMaxEn = 1200;

// En or the xaxis plot
double ForPlotEminEn = 0.01;
double ForPlotEmaxEn = 1.0e6;

// Edep for integrals normalize
// double NormalizeMinEdep = 0.1;
// double NormalizeMaxEdep = 2.5;
double NormalizeMinEdep = 0.5;
double NormalizeMaxEdep = 3;

// Edep for the xaxis plot
double ForPlotEminEdep = 0.05;
double ForPlotEmaxEdep = 2;

// For the Y axis of compare
double MinYForCompare = 4.9;
double MaxYForCompare = 5.05;

// For calculating gain shifts

int NumberIterations = 400;
double MinShift = 0.8;
double MaxShift = 1.2;

#endif

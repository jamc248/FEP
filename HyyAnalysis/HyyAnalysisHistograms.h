////////////////////////////////////////////////////////////////////////////////
#include "TROOT.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include <iostream>

void HyyAnalysis::define_histograms()
{
  hist_mYY_bin1   = new TH1F("hist_mYY_bin1","Diphoton invariant mass; m_{#gamma#gamma} [GeV];Events / bin", 30, 105, 160.);
  hist_mYY_cat_bin1   = new TH1F("hist_mYY_cat_bin1","Diphoton invariant mass unconv. central; m_{#gamma#gamma} [GeV];Events / bin", 30, 105, 160.);
//  hist_photon_pt   = new TH1F("hist_photon_pt","photon pt; pt [GeV];Events / bin", 30, 0., 500.);
//  hist_photon_eta   = new TH1F("hist_photon_eta","photon eta; eta ;Events / bin", 30, -3., 3.);
//  hist_photon_phi   = new TH1F("hist_photon_phi","photon phi; phi ;Events / bin", 30, -4., 4.);
}
////////////////////////////////////////////////////////////////////////////////
void HyyAnalysis::FillOutputList()
{
  GetOutputList()->Add(hist_mYY_bin1);
  GetOutputList()->Add(hist_mYY_cat_bin1);
//  GetOutputList()->Add(hist_photon_pt);
//  GetOutputList()->Add(hist_photon_eta);
//  GetOutputList()->Add(hist_photon_phi);
}
////////////////////////////////////////////////////////////////////////////////
void HyyAnalysis::WriteHistograms()
{
  hist_mYY_bin1->Write();
  hist_mYY_cat_bin1->Write();
//  hist_photon_pt->Write();
//  hist_photon_eta->Write();
//  hist_photon_phi->Write();
}
////////////////////////////////////////////////////////////////////////////////
void HyyAnalysis::FillHistogramsGlobal( double m, float w , TString s)
{
  if (s.Contains("hist_mYY_bin1")) hist_mYY_bin1->Fill(m,w);
  if (s.Contains("hist_mYY_cat_bin1")) hist_mYY_cat_bin1->Fill(m,w);
//  if (s.Contains("hist_photon_pt")) hist_photon_pt->Fill(m,w);
//  if (s.Contains("hist_photon_eta")) hist_photon_eta->Fill(m,w);
//  if (s.Contains("hist_photon_phi")) hist_photon_phi->Fill(m,w);
}
////////////////////////////////////////////////////////////////////////////////

void SMu_unfolded_ZNGoodJetsFull_Zinc_Bayes_JetPtMin_30_JetEtaMax_24_MGPYTHIA6_()
{
//=========Macro generated from canvas: canvasZNGoodJetsFull_Zinc/Jet Counter (incl.)
//=========  (Thu Jul 21 22:39:40 2016) by ROOT version6.02/05
   TCanvas *canvasZNGoodJetsFull_Zinc = new TCanvas("canvasZNGoodJetsFull_Zinc", "Jet Counter (incl.)",0,0,600,800);
   gStyle->SetOptStat(0);
   canvasZNGoodJetsFull_Zinc->SetHighLightColor(2);
   canvasZNGoodJetsFull_Zinc->Range(0,0,1,1);
   canvasZNGoodJetsFull_Zinc->SetFillColor(0);
   canvasZNGoodJetsFull_Zinc->SetBorderMode(0);
   canvasZNGoodJetsFull_Zinc->SetBorderSize(2);
   canvasZNGoodJetsFull_Zinc->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: plot1
   TPad *plot1 = new TPad("plot1", "plot1",0.01,0.45,0.99,0.99);
   plot1->Draw();
   plot1->cd();
   plot1->Range(-0.3125,-1.831186,5.9375,5.431989);
   plot1->SetFillColor(0);
   plot1->SetFillStyle(4000);
   plot1->SetBorderMode(0);
   plot1->SetBorderSize(2);
   plot1->SetLogy();
   plot1->SetLeftMargin(0.13);
   plot1->SetRightMargin(0.07);
   plot1->SetBottomMargin(0.005);
   plot1->SetFrameBorderMode(0);
   plot1->SetFrameBorderMode(0);
   
   TH1D *hSyst_copy1 = new TH1D("hSyst_copy1","",8,-0.5,7.5);
   hSyst_copy1->SetBinContent(1,8591.507);
   hSyst_copy1->SetBinContent(2,1122.894);
   hSyst_copy1->SetBinContent(3,253.4023);
   hSyst_copy1->SetBinContent(4,59.11527);
   hSyst_copy1->SetBinContent(5,15.24129);
   hSyst_copy1->SetBinContent(6,2.64826);
   hSyst_copy1->SetBinContent(7,0.7069271);
   hSyst_copy1->SetBinError(1,454.7459);
   hSyst_copy1->SetBinError(2,88.92634);
   hSyst_copy1->SetBinError(3,26.70895);
   hSyst_copy1->SetBinError(4,8.627308);
   hSyst_copy1->SetBinError(5,3.339157);
   hSyst_copy1->SetBinError(6,1.118917);
   hSyst_copy1->SetBinError(7,0.5824518);
   hSyst_copy1->SetBinError(8,0.1812777);
   hSyst_copy1->SetMinimum(0.01603724);
   hSyst_copy1->SetMaximum(42957.53);
   hSyst_copy1->SetEntries(18);
   hSyst_copy1->SetDirectory(0);
   hSyst_copy1->SetOption("HIST");
   hSyst_copy1->SetLineColor(0);
   hSyst_copy1->SetMarkerColor(0);
   hSyst_copy1->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy1->GetXaxis()->SetBinLabel(1,"#geq 0");
   hSyst_copy1->GetXaxis()->SetBinLabel(2,"#geq 1");
   hSyst_copy1->GetXaxis()->SetBinLabel(3,"#geq 2");
   hSyst_copy1->GetXaxis()->SetBinLabel(4,"#geq 3");
   hSyst_copy1->GetXaxis()->SetBinLabel(5,"#geq 4");
   hSyst_copy1->GetXaxis()->SetBinLabel(6,"#geq 5");
   hSyst_copy1->GetXaxis()->SetBinLabel(7,"#geq 6");
   hSyst_copy1->GetXaxis()->SetBinLabel(8,"#geq 7");
   hSyst_copy1->GetXaxis()->SetRange(2,6);
   hSyst_copy1->GetXaxis()->SetLabelFont(42);
   hSyst_copy1->GetXaxis()->SetLabelSize(0);
   hSyst_copy1->GetXaxis()->SetTitleSize(0.14);
   hSyst_copy1->GetXaxis()->SetTitleFont(42);
   hSyst_copy1->GetYaxis()->SetLabelFont(42);
   hSyst_copy1->GetYaxis()->SetLabelSize(0.055);
   hSyst_copy1->GetYaxis()->SetTitleSize(0.035);
   hSyst_copy1->GetYaxis()->SetTitleFont(42);
   hSyst_copy1->GetZaxis()->SetLabelFont(42);
   hSyst_copy1->GetZaxis()->SetLabelSize(0.035);
   hSyst_copy1->GetZaxis()->SetTitleSize(0.035);
   hSyst_copy1->GetZaxis()->SetTitleFont(42);
   hSyst_copy1->Draw("e");
   
   Double_t grCentralSyst_fx3001[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grCentralSyst_fy3001[8] = {
   8591.507,
   1122.894,
   253.4023,
   59.11527,
   15.24129,
   2.64826,
   0.7069271,
   0};
   Double_t grCentralSyst_felx3001[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralSyst_fely3001[8] = {
   454.7459,
   88.92634,
   26.70895,
   8.627308,
   3.339157,
   1.118917,
   0.5824518,
   0.1812777};
   Double_t grCentralSyst_fehx3001[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralSyst_fehy3001[8] = {
   454.7459,
   88.92634,
   26.70895,
   8.627308,
   3.339157,
   1.118917,
   0.5824518,
   0.1812777};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,grCentralSyst_fx3001,grCentralSyst_fy3001,grCentralSyst_felx3001,grCentralSyst_fehx3001,grCentralSyst_fely3001,grCentralSyst_fehy3001);
   grae->SetName("grCentralSyst");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_grZNGoodJetsFull_ZincCentralTotError3001 = new TH1F("Graph_grZNGoodJetsFull_ZincCentralTotError3001","",100,-1.3,8.3);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->SetMinimum(9.950878);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->SetMaximum(9950.878);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->SetDirectory(0);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->SetLineColor(ci);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetXaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetXaxis()->SetLabelSize(0);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetXaxis()->SetTitleSize(0.05);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetXaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetYaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetYaxis()->SetLabelSize(0.05);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetYaxis()->SetTitleSize(0.07);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetYaxis()->SetTitleOffset(1.1);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetYaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetZaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetZaxis()->SetLabelSize(0.035);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetZaxis()->SetTitleSize(0.035);
   Graph_grZNGoodJetsFull_ZincCentralTotError3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_grZNGoodJetsFull_ZincCentralTotError3001);
   
   grae->Draw("2");
   
   TH1D *hGen1_copy2 = new TH1D("hGen1_copy2","Jet Counter (incl.)",8,-0.5,7.5);
   hGen1_copy2->SetBinContent(1,8218.616);
   hGen1_copy2->SetBinContent(2,1144.567);
   hGen1_copy2->SetBinContent(3,250.7095);
   hGen1_copy2->SetBinContent(4,52.36524);
   hGen1_copy2->SetBinContent(5,10.8871);
   hGen1_copy2->SetBinContent(6,2.033814);
   hGen1_copy2->SetBinContent(7,0.4592483);
   hGen1_copy2->SetBinContent(8,0.08018621);
   hGen1_copy2->SetBinError(1,328.8089);
   hGen1_copy2->SetBinError(2,71.03325);
   hGen1_copy2->SetBinError(3,22.3732);
   hGen1_copy2->SetBinError(4,6.222928);
   hGen1_copy2->SetBinError(5,1.337487);
   hGen1_copy2->SetBinError(6,0.3505582);
   hGen1_copy2->SetBinError(7,0.0903291);
   hGen1_copy2->SetBinError(8,0.03532761);
   hGen1_copy2->SetEntries(4180691);
   hGen1_copy2->SetDirectory(0);
   hGen1_copy2->SetOption("HIST");

   ci = TColor::GetColor("#ccccff");
   hGen1_copy2->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hGen1_copy2->SetLineColor(ci);
   hGen1_copy2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hGen1_copy2->SetMarkerColor(ci);
   hGen1_copy2->SetMarkerStyle(24);
   hGen1_copy2->GetXaxis()->SetTitle("N_{jets}");
   hGen1_copy2->GetXaxis()->SetBinLabel(1,"#geq 0");
   hGen1_copy2->GetXaxis()->SetBinLabel(2,"#geq 1");
   hGen1_copy2->GetXaxis()->SetBinLabel(3,"#geq 2");
   hGen1_copy2->GetXaxis()->SetBinLabel(4,"#geq 3");
   hGen1_copy2->GetXaxis()->SetBinLabel(5,"#geq 4");
   hGen1_copy2->GetXaxis()->SetBinLabel(6,"#geq 5");
   hGen1_copy2->GetXaxis()->SetBinLabel(7,"#geq 6");
   hGen1_copy2->GetXaxis()->SetBinLabel(8,"#geq 7");
   hGen1_copy2->GetXaxis()->SetLabelFont(42);
   hGen1_copy2->GetXaxis()->SetLabelSize(0.035);
   hGen1_copy2->GetXaxis()->SetTitleSize(0.035);
   hGen1_copy2->GetXaxis()->SetTitleFont(42);
   hGen1_copy2->GetYaxis()->SetTitle("# Events");
   hGen1_copy2->GetYaxis()->SetLabelFont(42);
   hGen1_copy2->GetYaxis()->SetLabelSize(0.035);
   hGen1_copy2->GetYaxis()->SetTitleSize(0.035);
   hGen1_copy2->GetYaxis()->SetTitleFont(42);
   hGen1_copy2->GetZaxis()->SetTitle("aMC@NLO + PY8 (#leq 2j NLO + PS)");
   hGen1_copy2->GetZaxis()->SetLabelFont(42);
   hGen1_copy2->GetZaxis()->SetLabelSize(0.035);
   hGen1_copy2->GetZaxis()->SetTitleSize(0.035);
   hGen1_copy2->GetZaxis()->SetTitleFont(42);
   hGen1_copy2->Draw("ESAME");
   
   TH1D *hGen2_copy3 = new TH1D("hGen2_copy3","Jet Counter (incl.)",8,-0.5,7.5);
   hGen2_copy3->SetBinContent(1,8369.228);
   hGen2_copy3->SetBinContent(2,1032.971);
   hGen2_copy3->SetBinContent(3,219.9073);
   hGen2_copy3->SetBinContent(4,47.15275);
   hGen2_copy3->SetBinContent(5,11.59604);
   hGen2_copy3->SetBinContent(6,2.745422);
   hGen2_copy3->SetBinContent(7,0.6245792);
   hGen2_copy3->SetBinContent(8,0.1329255);
   hGen2_copy3->SetBinError(1,2.67045);
   hGen2_copy3->SetBinError(2,0.9381791);
   hGen2_copy3->SetBinError(3,0.4328741);
   hGen2_copy3->SetBinError(4,0.200445);
   hGen2_copy3->SetBinError(5,0.09940236);
   hGen2_copy3->SetBinError(6,0.04836669);
   hGen2_copy3->SetBinError(7,0.02306936);
   hGen2_copy3->SetBinError(8,0.01064255);
   hGen2_copy3->SetEntries(1.136547e+07);
   hGen2_copy3->SetDirectory(0);
   hGen2_copy3->SetOption("HIST");

   ci = TColor::GetColor("#ffcc33");
   hGen2_copy3->SetFillColor(ci);

   ci = TColor::GetColor("#ff3300");
   hGen2_copy3->SetLineColor(ci);
   hGen2_copy3->SetLineWidth(2);

   ci = TColor::GetColor("#ff3300");
   hGen2_copy3->SetMarkerColor(ci);
   hGen2_copy3->SetMarkerStyle(25);
   hGen2_copy3->GetXaxis()->SetTitle("N_{jets}");
   hGen2_copy3->GetXaxis()->SetBinLabel(1,"#geq 0");
   hGen2_copy3->GetXaxis()->SetBinLabel(2,"#geq 1");
   hGen2_copy3->GetXaxis()->SetBinLabel(3,"#geq 2");
   hGen2_copy3->GetXaxis()->SetBinLabel(4,"#geq 3");
   hGen2_copy3->GetXaxis()->SetBinLabel(5,"#geq 4");
   hGen2_copy3->GetXaxis()->SetBinLabel(6,"#geq 5");
   hGen2_copy3->GetXaxis()->SetBinLabel(7,"#geq 6");
   hGen2_copy3->GetXaxis()->SetBinLabel(8,"#geq 7");
   hGen2_copy3->GetXaxis()->SetLabelFont(42);
   hGen2_copy3->GetXaxis()->SetLabelSize(0.035);
   hGen2_copy3->GetXaxis()->SetTitleSize(0.035);
   hGen2_copy3->GetXaxis()->SetTitleFont(42);
   hGen2_copy3->GetYaxis()->SetTitle("# Events");
   hGen2_copy3->GetYaxis()->SetLabelFont(42);
   hGen2_copy3->GetYaxis()->SetLabelSize(0.035);
   hGen2_copy3->GetYaxis()->SetTitleSize(0.035);
   hGen2_copy3->GetYaxis()->SetTitleFont(42);
   hGen2_copy3->GetZaxis()->SetTitle("MG5 + PY8 (#leq 4j LO + PS)");
   hGen2_copy3->GetZaxis()->SetLabelFont(42);
   hGen2_copy3->GetZaxis()->SetLabelSize(0.035);
   hGen2_copy3->GetZaxis()->SetTitleSize(0.035);
   hGen2_copy3->GetZaxis()->SetTitleFont(42);
   hGen2_copy3->Draw("ESAME");
   
   Double_t grCentralStat_fx3002[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grCentralStat_fy3002[8] = {
   8591.507,
   1122.894,
   253.4023,
   59.11527,
   15.24129,
   2.64826,
   0.7069271,
   0};
   Double_t grCentralStat_felx3002[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralStat_fely3002[8] = {
   4.837637,
   3.625475,
   2.275296,
   1.3366,
   0.7723329,
   0.3702412,
   0.241449,
   0};
   Double_t grCentralStat_fehx3002[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralStat_fehy3002[8] = {
   4.837637,
   3.625475,
   2.275296,
   1.3366,
   0.7723329,
   0.3702412,
   0.241449,
   0};
   grae = new TGraphAsymmErrors(8,grCentralStat_fx3002,grCentralStat_fy3002,grCentralStat_felx3002,grCentralStat_fehx3002,grCentralStat_fely3002,grCentralStat_fehy3002);
   grae->SetName("grCentralStat");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_grZNGoodJetsFull_ZincCentralStatError3002 = new TH1F("Graph_grZNGoodJetsFull_ZincCentralStatError3002","",100,-1.3,8.3);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->SetMinimum(9.455979);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->SetMaximum(9455.979);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->SetDirectory(0);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->SetLineColor(ci);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetXaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetXaxis()->SetLabelSize(0);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetXaxis()->SetTitleSize(0.05);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetXaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetYaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetYaxis()->SetLabelSize(0.05);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetYaxis()->SetTitleSize(0.07);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetYaxis()->SetTitleOffset(1.1);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetYaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetZaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetZaxis()->SetLabelSize(0.035);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetZaxis()->SetTitleSize(0.035);
   Graph_grZNGoodJetsFull_ZincCentralStatError3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_grZNGoodJetsFull_ZincCentralStatError3002);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.39,0.77,0.96,0.98,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("grCentralSyst","Data (25ns)","PLEF");
   entry->SetFillColor(12);
   entry->SetFillStyle(3354);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hGen1","aMC@NLO + PY8 (#leq 2j NLO + PS)","pefl");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hGen2","MG5 + PY8 (#leq 4j LO + PS)","pefl");

   ci = TColor::GetColor("#ffcc33");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff3300");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.25,"A. Levine");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.2,"Thesis");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.036);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.13,0.9,"2.5 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.16,"anti-k_{T} (R = 0.4) Jets");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.1,"p_{T}^{jet} > 30 GeV, |y^{jet}| < 2.4 ");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.04,"W#rightarrow #mu#nu channel");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0,0,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.008,0.91,"d#sigma/dN_{jets}  [pb]");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   plot1->Modified();
   canvasZNGoodJetsFull_Zinc->cd();
  
// ------------>Primitives in pad: plot2
   TPad *plot2 = new TPad("plot2", "plot2",0.01,0.27,0.99,0.45);
   plot2->Draw();
   plot2->cd();
   plot2->Range(-0.3125,0.01,5.9375,2.1);
   plot2->SetFillColor(0);
   plot2->SetFillStyle(4000);
   plot2->SetBorderMode(0);
   plot2->SetBorderSize(2);
   plot2->SetLeftMargin(0.13);
   plot2->SetRightMargin(0.07);
   plot2->SetTopMargin(0);
   plot2->SetBottomMargin(0);
   plot2->SetFrameBorderMode(0);
   plot2->SetFrameBorderMode(0);
   
   TH1D *hSyst_copy4 = new TH1D("hSyst_copy4","",8,-0.5,7.5);
   hSyst_copy4->SetBinContent(1,8591.507);
   hSyst_copy4->SetBinContent(2,1122.894);
   hSyst_copy4->SetBinContent(3,253.4023);
   hSyst_copy4->SetBinContent(4,59.11527);
   hSyst_copy4->SetBinContent(5,15.24129);
   hSyst_copy4->SetBinContent(6,2.64826);
   hSyst_copy4->SetBinContent(7,0.7069271);
   hSyst_copy4->SetBinError(1,454.7459);
   hSyst_copy4->SetBinError(2,88.92634);
   hSyst_copy4->SetBinError(3,26.70895);
   hSyst_copy4->SetBinError(4,8.627308);
   hSyst_copy4->SetBinError(5,3.339157);
   hSyst_copy4->SetBinError(6,1.118917);
   hSyst_copy4->SetBinError(7,0.5824518);
   hSyst_copy4->SetBinError(8,0.1812777);
   hSyst_copy4->SetMinimum(0.01);
   hSyst_copy4->SetMaximum(2.1);
   hSyst_copy4->SetEntries(18);
   hSyst_copy4->SetDirectory(0);
   hSyst_copy4->SetOption("HIST");
   hSyst_copy4->SetLineColor(0);
   hSyst_copy4->SetMarkerColor(0);
   hSyst_copy4->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy4->GetXaxis()->SetBinLabel(1,"#geq 0");
   hSyst_copy4->GetXaxis()->SetBinLabel(2,"#geq 1");
   hSyst_copy4->GetXaxis()->SetBinLabel(3,"#geq 2");
   hSyst_copy4->GetXaxis()->SetBinLabel(4,"#geq 3");
   hSyst_copy4->GetXaxis()->SetBinLabel(5,"#geq 4");
   hSyst_copy4->GetXaxis()->SetBinLabel(6,"#geq 5");
   hSyst_copy4->GetXaxis()->SetBinLabel(7,"#geq 6");
   hSyst_copy4->GetXaxis()->SetBinLabel(8,"#geq 7");
   hSyst_copy4->GetXaxis()->SetRange(2,6);
   hSyst_copy4->GetXaxis()->SetLabelFont(42);
   hSyst_copy4->GetXaxis()->SetLabelSize(0);
   hSyst_copy4->GetXaxis()->SetTitleSize(0.14);
   hSyst_copy4->GetXaxis()->SetTitleFont(42);
   hSyst_copy4->GetYaxis()->SetTitle("aMC@NLO/Data");
   hSyst_copy4->GetYaxis()->CenterTitle(true);
   hSyst_copy4->GetYaxis()->SetNdivisions(507);
   hSyst_copy4->GetYaxis()->SetLabelFont(42);
   hSyst_copy4->GetYaxis()->SetLabelSize(0.15);
   hSyst_copy4->GetYaxis()->SetTitleSize(0.14);
   hSyst_copy4->GetYaxis()->SetTitleOffset(0.45);
   hSyst_copy4->GetYaxis()->SetTitleFont(42);
   hSyst_copy4->GetZaxis()->SetLabelFont(42);
   hSyst_copy4->GetZaxis()->SetLabelSize(0.035);
   hSyst_copy4->GetZaxis()->SetTitleSize(0.035);
   hSyst_copy4->GetZaxis()->SetTitleFont(42);
   hSyst_copy4->Draw("e");
   
   Double_t grGen1ToCentral_fx3003[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grGen1ToCentral_fy3003[8] = {
   0.9565978,
   1.019301,
   0.9893733,
   0.8858158,
   0.7143163,
   0.7679813,
   0.6496403,
   0};
   Double_t grGen1ToCentral_felx3003[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen1ToCentral_fely3003[8] = {
   0.03827139,
   0.06325909,
   0.08829122,
   0.1052677,
   0.08775421,
   0.132373,
   0.1277771,
   0};
   Double_t grGen1ToCentral_fehx3003[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen1ToCentral_fehy3003[8] = {
   0.03827139,
   0.06325909,
   0.08829122,
   0.1052677,
   0.08775421,
   0.132373,
   0.1277771,
   0};
   grae = new TGraphAsymmErrors(8,grGen1ToCentral_fx3003,grGen1ToCentral_fy3003,grGen1ToCentral_felx3003,grGen1ToCentral_fehx3003,grGen1ToCentral_fely3003,grGen1ToCentral_fehy3003);
   grae->SetName("grGen1ToCentral");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_grGen1ToCentral3003 = new TH1F("Graph_grGen1ToCentral3003","Graph",100,-1.3,8.3);
   Graph_grGen1ToCentral3003->SetMinimum(0);
   Graph_grGen1ToCentral3003->SetMaximum(1.190816);
   Graph_grGen1ToCentral3003->SetDirectory(0);
   Graph_grGen1ToCentral3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_grGen1ToCentral3003->SetLineColor(ci);
   Graph_grGen1ToCentral3003->GetXaxis()->SetLabelFont(42);
   Graph_grGen1ToCentral3003->GetXaxis()->SetLabelSize(0.035);
   Graph_grGen1ToCentral3003->GetXaxis()->SetTitleSize(0.035);
   Graph_grGen1ToCentral3003->GetXaxis()->SetTitleFont(42);
   Graph_grGen1ToCentral3003->GetYaxis()->SetLabelFont(42);
   Graph_grGen1ToCentral3003->GetYaxis()->SetLabelSize(0.035);
   Graph_grGen1ToCentral3003->GetYaxis()->SetTitleSize(0.035);
   Graph_grGen1ToCentral3003->GetYaxis()->SetTitleFont(42);
   Graph_grGen1ToCentral3003->GetZaxis()->SetLabelFont(42);
   Graph_grGen1ToCentral3003->GetZaxis()->SetLabelSize(0.035);
   Graph_grGen1ToCentral3003->GetZaxis()->SetTitleSize(0.035);
   Graph_grGen1ToCentral3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_grGen1ToCentral3003);
   
   grae->Draw("2");
   
   Double_t grCentralSystRatio_fx3004[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grCentralSystRatio_fy3004[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t grCentralSystRatio_felx3004[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralSystRatio_fely3004[8] = {
   0.0529297,
   0.07919389,
   0.1054014,
   0.1459404,
   0.2190863,
   0.4225103,
   0.8239206,
   inf};
   Double_t grCentralSystRatio_fehx3004[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralSystRatio_fehy3004[8] = {
   0.0529297,
   0.07919389,
   0.1054014,
   0.1459404,
   0.2190863,
   0.4225103,
   0.8239206,
   inf};
   grae = new TGraphAsymmErrors(8,grCentralSystRatio_fx3004,grCentralSystRatio_fy3004,grCentralSystRatio_felx3004,grCentralSystRatio_fehx3004,grCentralSystRatio_fely3004,grCentralSystRatio_fehy3004);
   grae->SetName("grCentralSystRatio");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.3,8.3);
   Graph_Graph3004->SetMinimum(0.1584714);
   Graph_Graph3004->SetMaximum(inf);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("2");
   
   Double_t Graph0_fx3005[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy3005[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_felx3005[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fely3005[8] = {
   0.0005630721,
   0.003228688,
   0.008978987,
   0.02261007,
   0.05067373,
   0.1398055,
   0.3415473,
   -nan};
   Double_t Graph0_fehx3005[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehy3005[8] = {
   0.0005630721,
   0.003228688,
   0.008978987,
   0.02261007,
   0.05067373,
   0.1398055,
   0.3415473,
   -nan};
   grae = new TGraphAsymmErrors(8,Graph0_fx3005,Graph0_fy3005,Graph0_felx3005,Graph0_fehx3005,Graph0_fely3005,Graph0_fehy3005);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.3,8.3);
   Graph_Graph3005->SetMinimum(0.5901433);
   Graph_Graph3005->SetMaximum(1.409857);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p");
   
   Double_t grGen1ToCentral_fx3006[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grGen1ToCentral_fy3006[8] = {
   0.9565978,
   1.019301,
   0.9893733,
   0.8858158,
   0.7143163,
   0.7679813,
   0.6496403,
   0};
   Double_t grGen1ToCentral_felx3006[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen1ToCentral_fely3006[8] = {
   0.03827139,
   0.06325909,
   0.08829122,
   0.1052677,
   0.08775421,
   0.132373,
   0.1277771,
   0};
   Double_t grGen1ToCentral_fehx3006[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen1ToCentral_fehy3006[8] = {
   0.03827139,
   0.06325909,
   0.08829122,
   0.1052677,
   0.08775421,
   0.132373,
   0.1277771,
   0};
   grae = new TGraphAsymmErrors(8,grGen1ToCentral_fx3006,grGen1ToCentral_fy3006,grGen1ToCentral_felx3006,grGen1ToCentral_fehx3006,grGen1ToCentral_fely3006,grGen1ToCentral_fehy3006);
   grae->SetName("grGen1ToCentral");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_grGen1ToCentral30033006 = new TH1F("Graph_Graph_grGen1ToCentral30033006","Graph",100,-1.3,8.3);
   Graph_Graph_grGen1ToCentral30033006->SetMinimum(0);
   Graph_Graph_grGen1ToCentral30033006->SetMaximum(1.190816);
   Graph_Graph_grGen1ToCentral30033006->SetDirectory(0);
   Graph_Graph_grGen1ToCentral30033006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_grGen1ToCentral30033006->SetLineColor(ci);
   Graph_Graph_grGen1ToCentral30033006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_grGen1ToCentral30033006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_grGen1ToCentral30033006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_grGen1ToCentral30033006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_grGen1ToCentral30033006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_grGen1ToCentral30033006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_grGen1ToCentral30033006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_grGen1ToCentral30033006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_grGen1ToCentral30033006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_grGen1ToCentral30033006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_grGen1ToCentral30033006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_grGen1ToCentral30033006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_grGen1ToCentral30033006);
   
   grae->Draw("p");
   
   leg = new TLegend(0.16,0.05,0.42,0.2,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.12);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("grGen1ToCentral","Syst. + Stat. unc. (gen)","f");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TH1D *hSyst_copy_copy5 = new TH1D("hSyst_copy_copy5","",8,-0.5,7.5);
   hSyst_copy_copy5->SetBinContent(1,8591.507);
   hSyst_copy_copy5->SetBinContent(2,1122.894);
   hSyst_copy_copy5->SetBinContent(3,253.4023);
   hSyst_copy_copy5->SetBinContent(4,59.11527);
   hSyst_copy_copy5->SetBinContent(5,15.24129);
   hSyst_copy_copy5->SetBinContent(6,2.64826);
   hSyst_copy_copy5->SetBinContent(7,0.7069271);
   hSyst_copy_copy5->SetBinError(1,454.7459);
   hSyst_copy_copy5->SetBinError(2,88.92634);
   hSyst_copy_copy5->SetBinError(3,26.70895);
   hSyst_copy_copy5->SetBinError(4,8.627308);
   hSyst_copy_copy5->SetBinError(5,3.339157);
   hSyst_copy_copy5->SetBinError(6,1.118917);
   hSyst_copy_copy5->SetBinError(7,0.5824518);
   hSyst_copy_copy5->SetBinError(8,0.1812777);
   hSyst_copy_copy5->SetMinimum(0.01);
   hSyst_copy_copy5->SetMaximum(2.1);
   hSyst_copy_copy5->SetEntries(18);
   hSyst_copy_copy5->SetDirectory(0);
   hSyst_copy_copy5->SetOption("HIST");
   hSyst_copy_copy5->SetLineColor(0);
   hSyst_copy_copy5->SetMarkerColor(0);
   hSyst_copy_copy5->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(1,"#geq 0");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(2,"#geq 1");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(3,"#geq 2");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(4,"#geq 3");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(5,"#geq 4");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(6,"#geq 5");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(7,"#geq 6");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(8,"#geq 7");
   hSyst_copy_copy5->GetXaxis()->SetRange(2,6);
   hSyst_copy_copy5->GetXaxis()->SetLabelFont(42);
   hSyst_copy_copy5->GetXaxis()->SetLabelSize(0);
   hSyst_copy_copy5->GetXaxis()->SetTitleSize(0.14);
   hSyst_copy_copy5->GetXaxis()->SetTitleFont(42);
   hSyst_copy_copy5->GetYaxis()->SetTitle("aMC@NLO/Data");
   hSyst_copy_copy5->GetYaxis()->CenterTitle(true);
   hSyst_copy_copy5->GetYaxis()->SetNdivisions(507);
   hSyst_copy_copy5->GetYaxis()->SetLabelFont(42);
   hSyst_copy_copy5->GetYaxis()->SetLabelSize(0.15);
   hSyst_copy_copy5->GetYaxis()->SetTitleSize(0.14);
   hSyst_copy_copy5->GetYaxis()->SetTitleOffset(0.45);
   hSyst_copy_copy5->GetYaxis()->SetTitleFont(42);
   hSyst_copy_copy5->GetZaxis()->SetLabelFont(42);
   hSyst_copy_copy5->GetZaxis()->SetLabelSize(0.035);
   hSyst_copy_copy5->GetZaxis()->SetTitleSize(0.035);
   hSyst_copy_copy5->GetZaxis()->SetTitleFont(42);
   hSyst_copy_copy5->Draw("sameaxis");
   plot2->Modified();
   canvasZNGoodJetsFull_Zinc->cd();
  
// ------------>Primitives in pad: plot3
   TPad *plot3 = new TPad("plot3", "plot3",0.01,0.01,0.99,0.27);
   plot3->Draw();
   plot3->cd();
   plot3->Range(-0.3125,-0.8857143,5.9375,2.1);
   plot3->SetFillColor(0);
   plot3->SetFillStyle(4000);
   plot3->SetBorderMode(0);
   plot3->SetBorderSize(2);
   plot3->SetLeftMargin(0.13);
   plot3->SetRightMargin(0.07);
   plot3->SetTopMargin(0);
   plot3->SetBottomMargin(0.3);
   plot3->SetFrameBorderMode(0);
   plot3->SetFrameBorderMode(0);
   
   TH1D *hSyst_copy6 = new TH1D("hSyst_copy6","",8,-0.5,7.5);
   hSyst_copy6->SetBinContent(1,8591.507);
   hSyst_copy6->SetBinContent(2,1122.894);
   hSyst_copy6->SetBinContent(3,253.4023);
   hSyst_copy6->SetBinContent(4,59.11527);
   hSyst_copy6->SetBinContent(5,15.24129);
   hSyst_copy6->SetBinContent(6,2.64826);
   hSyst_copy6->SetBinContent(7,0.7069271);
   hSyst_copy6->SetBinError(1,454.7459);
   hSyst_copy6->SetBinError(2,88.92634);
   hSyst_copy6->SetBinError(3,26.70895);
   hSyst_copy6->SetBinError(4,8.627308);
   hSyst_copy6->SetBinError(5,3.339157);
   hSyst_copy6->SetBinError(6,1.118917);
   hSyst_copy6->SetBinError(7,0.5824518);
   hSyst_copy6->SetBinError(8,0.1812777);
   hSyst_copy6->SetMinimum(0.01);
   hSyst_copy6->SetMaximum(2.1);
   hSyst_copy6->SetEntries(18);
   hSyst_copy6->SetDirectory(0);
   hSyst_copy6->SetOption("HIST");
   hSyst_copy6->SetLineColor(0);
   hSyst_copy6->SetMarkerColor(0);
   hSyst_copy6->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy6->GetXaxis()->SetBinLabel(1,"#geq 0");
   hSyst_copy6->GetXaxis()->SetBinLabel(2,"#geq 1");
   hSyst_copy6->GetXaxis()->SetBinLabel(3,"#geq 2");
   hSyst_copy6->GetXaxis()->SetBinLabel(4,"#geq 3");
   hSyst_copy6->GetXaxis()->SetBinLabel(5,"#geq 4");
   hSyst_copy6->GetXaxis()->SetBinLabel(6,"#geq 5");
   hSyst_copy6->GetXaxis()->SetBinLabel(7,"#geq 6");
   hSyst_copy6->GetXaxis()->SetBinLabel(8,"#geq 7");
   hSyst_copy6->GetXaxis()->SetRange(2,6);
   hSyst_copy6->GetXaxis()->SetLabelFont(42);
   hSyst_copy6->GetXaxis()->SetLabelSize(0.08);
   hSyst_copy6->GetXaxis()->SetTitleSize(0.14);
   hSyst_copy6->GetXaxis()->SetTitleFont(42);
   hSyst_copy6->GetYaxis()->SetTitle("MG5/Data");
   hSyst_copy6->GetYaxis()->CenterTitle(true);
   hSyst_copy6->GetYaxis()->SetNdivisions(507);
   hSyst_copy6->GetYaxis()->SetLabelFont(42);
   hSyst_copy6->GetYaxis()->SetLabelSize(0.105);
   hSyst_copy6->GetYaxis()->SetTitleSize(0.1);
   hSyst_copy6->GetYaxis()->SetTitleOffset(0.63);
   hSyst_copy6->GetYaxis()->SetTitleFont(42);
   hSyst_copy6->GetZaxis()->SetLabelFont(42);
   hSyst_copy6->GetZaxis()->SetLabelSize(0.035);
   hSyst_copy6->GetZaxis()->SetTitleSize(0.035);
   hSyst_copy6->GetZaxis()->SetTitleFont(42);
   hSyst_copy6->Draw("e");
   
   Double_t grGen2ToCentral_fx3007[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grGen2ToCentral_fy3007[8] = {
   0.9741281,
   0.9199182,
   0.8678187,
   0.7976408,
   0.7608309,
   1.036689,
   0.883513,
   0};
   Double_t grGen2ToCentral_felx3007[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen2ToCentral_fely3007[8] = {
   0.0003108244,
   0.0008355011,
   0.001708248,
   0.003390749,
   0.006521913,
   0.01826358,
   0.0326333,
   0};
   Double_t grGen2ToCentral_fehx3007[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen2ToCentral_fehy3007[8] = {
   0.0003108244,
   0.0008355011,
   0.001708248,
   0.003390749,
   0.006521913,
   0.01826358,
   0.0326333,
   0};
   grae = new TGraphAsymmErrors(8,grGen2ToCentral_fx3007,grGen2ToCentral_fy3007,grGen2ToCentral_felx3007,grGen2ToCentral_fehx3007,grGen2ToCentral_fely3007,grGen2ToCentral_fehy3007);
   grae->SetName("grGen2ToCentral");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc33");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff3300");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff3300");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_grGen2ToCentral3007 = new TH1F("Graph_grGen2ToCentral3007","Graph",100,-1.3,8.3);
   Graph_grGen2ToCentral3007->SetMinimum(0);
   Graph_grGen2ToCentral3007->SetMaximum(1.160448);
   Graph_grGen2ToCentral3007->SetDirectory(0);
   Graph_grGen2ToCentral3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_grGen2ToCentral3007->SetLineColor(ci);
   Graph_grGen2ToCentral3007->GetXaxis()->SetLabelFont(42);
   Graph_grGen2ToCentral3007->GetXaxis()->SetLabelSize(0.035);
   Graph_grGen2ToCentral3007->GetXaxis()->SetTitleSize(0.035);
   Graph_grGen2ToCentral3007->GetXaxis()->SetTitleFont(42);
   Graph_grGen2ToCentral3007->GetYaxis()->SetLabelFont(42);
   Graph_grGen2ToCentral3007->GetYaxis()->SetLabelSize(0.035);
   Graph_grGen2ToCentral3007->GetYaxis()->SetTitleSize(0.035);
   Graph_grGen2ToCentral3007->GetYaxis()->SetTitleFont(42);
   Graph_grGen2ToCentral3007->GetZaxis()->SetLabelFont(42);
   Graph_grGen2ToCentral3007->GetZaxis()->SetLabelSize(0.035);
   Graph_grGen2ToCentral3007->GetZaxis()->SetTitleSize(0.035);
   Graph_grGen2ToCentral3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_grGen2ToCentral3007);
   
   grae->Draw("2");
   
   Double_t grGen2ToCentral_fx3008[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grGen2ToCentral_fy3008[8] = {
   0.9741281,
   0.9199182,
   0.8678187,
   0.7976408,
   0.7608309,
   1.036689,
   0.883513,
   0};
   Double_t grGen2ToCentral_felx3008[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen2ToCentral_fely3008[8] = {
   0.0003108244,
   0.0008355011,
   0.001708248,
   0.003390749,
   0.006521913,
   0.01826358,
   0.0326333,
   0};
   Double_t grGen2ToCentral_fehx3008[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen2ToCentral_fehy3008[8] = {
   0.0003108244,
   0.0008355011,
   0.001708248,
   0.003390749,
   0.006521913,
   0.01826358,
   0.0326333,
   0};
   grae = new TGraphAsymmErrors(8,grGen2ToCentral_fx3008,grGen2ToCentral_fy3008,grGen2ToCentral_felx3008,grGen2ToCentral_fehx3008,grGen2ToCentral_fely3008,grGen2ToCentral_fehy3008);
   grae->SetName("grGen2ToCentral");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc33");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff3300");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff3300");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_Graph_grGen2ToCentral30073008 = new TH1F("Graph_Graph_grGen2ToCentral30073008","Graph",100,-1.3,8.3);
   Graph_Graph_grGen2ToCentral30073008->SetMinimum(0);
   Graph_Graph_grGen2ToCentral30073008->SetMaximum(1.160448);
   Graph_Graph_grGen2ToCentral30073008->SetDirectory(0);
   Graph_Graph_grGen2ToCentral30073008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_grGen2ToCentral30073008->SetLineColor(ci);
   Graph_Graph_grGen2ToCentral30073008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_grGen2ToCentral30073008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_grGen2ToCentral30073008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_grGen2ToCentral30073008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_grGen2ToCentral30073008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_grGen2ToCentral30073008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_grGen2ToCentral30073008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_grGen2ToCentral30073008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_grGen2ToCentral30073008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_grGen2ToCentral30073008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_grGen2ToCentral30073008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_grGen2ToCentral30073008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_grGen2ToCentral30073008);
   
   grae->Draw("2");
   
   Double_t grCentralSystRatio_fx3009[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grCentralSystRatio_fy3009[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t grCentralSystRatio_felx3009[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralSystRatio_fely3009[8] = {
   0.0529297,
   0.07919389,
   0.1054014,
   0.1459404,
   0.2190863,
   0.4225103,
   0.8239206,
   inf};
   Double_t grCentralSystRatio_fehx3009[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grCentralSystRatio_fehy3009[8] = {
   0.0529297,
   0.07919389,
   0.1054014,
   0.1459404,
   0.2190863,
   0.4225103,
   0.8239206,
   inf};
   grae = new TGraphAsymmErrors(8,grCentralSystRatio_fx3009,grCentralSystRatio_fy3009,grCentralSystRatio_felx3009,grCentralSystRatio_fehx3009,grCentralSystRatio_fely3009,grCentralSystRatio_fehy3009);
   grae->SetName("grCentralSystRatio");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_Graph30043009 = new TH1F("Graph_Graph_Graph30043009","",100,-1.3,8.3);
   Graph_Graph_Graph30043009->SetMinimum(0.1584714);
   Graph_Graph_Graph30043009->SetMaximum(inf);
   Graph_Graph_Graph30043009->SetDirectory(0);
   Graph_Graph_Graph30043009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30043009->SetLineColor(ci);
   Graph_Graph_Graph30043009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043009->GetXaxis()->SetLabelSize(0);
   Graph_Graph_Graph30043009->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph30043009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30043009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30043009->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph30043009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph30043009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30043009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30043009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30043009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30043009);
   
   grae->Draw("2");
   
   Double_t Graph0_fx3010[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy3010[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_felx3010[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fely3010[8] = {
   0.0005630721,
   0.003228688,
   0.008978987,
   0.02261007,
   0.05067373,
   0.1398055,
   0.3415473,
   -nan};
   Double_t Graph0_fehx3010[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehy3010[8] = {
   0.0005630721,
   0.003228688,
   0.008978987,
   0.02261007,
   0.05067373,
   0.1398055,
   0.3415473,
   -nan};
   grae = new TGraphAsymmErrors(8,Graph0_fx3010,Graph0_fy3010,Graph0_felx3010,Graph0_fehx3010,Graph0_fely3010,Graph0_fehy3010);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_Graph30053010 = new TH1F("Graph_Graph_Graph30053010","",100,-1.3,8.3);
   Graph_Graph_Graph30053010->SetMinimum(0.5901433);
   Graph_Graph_Graph30053010->SetMaximum(1.409857);
   Graph_Graph_Graph30053010->SetDirectory(0);
   Graph_Graph_Graph30053010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30053010->SetLineColor(ci);
   Graph_Graph_Graph30053010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30053010->GetXaxis()->SetLabelSize(0);
   Graph_Graph_Graph30053010->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph30053010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30053010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30053010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30053010->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph30053010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph30053010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30053010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30053010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph30053010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph30053010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30053010);
   
   grae->Draw("p");
   
   Double_t grGen2ToCentral_fx3011[8] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t grGen2ToCentral_fy3011[8] = {
   0.9741281,
   0.9199182,
   0.8678187,
   0.7976408,
   0.7608309,
   1.036689,
   0.883513,
   0};
   Double_t grGen2ToCentral_felx3011[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen2ToCentral_fely3011[8] = {
   0.0003108244,
   0.0008355011,
   0.001708248,
   0.003390749,
   0.006521913,
   0.01826358,
   0.0326333,
   0};
   Double_t grGen2ToCentral_fehx3011[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t grGen2ToCentral_fehy3011[8] = {
   0.0003108244,
   0.0008355011,
   0.001708248,
   0.003390749,
   0.006521913,
   0.01826358,
   0.0326333,
   0};
   grae = new TGraphAsymmErrors(8,grGen2ToCentral_fx3011,grGen2ToCentral_fy3011,grGen2ToCentral_felx3011,grGen2ToCentral_fehx3011,grGen2ToCentral_fely3011,grGen2ToCentral_fehy3011);
   grae->SetName("grGen2ToCentral");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc33");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff3300");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff3300");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_Graph_Graph_grGen2ToCentral300730083011 = new TH1F("Graph_Graph_Graph_grGen2ToCentral300730083011","Graph",100,-1.3,8.3);
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetMinimum(0);
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetMaximum(1.160448);
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetDirectory(0);
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetLineColor(ci);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_grGen2ToCentral300730083011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_grGen2ToCentral300730083011);
   
   grae->Draw("p");
   
   leg = new TLegend(0.16,0.34,0.43,0.45,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("grGen2ToCentral","Stat. unc. (gen)","f");

   ci = TColor::GetColor("#ffcc33");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff3300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TH1D *hSyst_copy_copy7 = new TH1D("hSyst_copy_copy7","",8,-0.5,7.5);
   hSyst_copy_copy7->SetBinContent(1,8591.507);
   hSyst_copy_copy7->SetBinContent(2,1122.894);
   hSyst_copy_copy7->SetBinContent(3,253.4023);
   hSyst_copy_copy7->SetBinContent(4,59.11527);
   hSyst_copy_copy7->SetBinContent(5,15.24129);
   hSyst_copy_copy7->SetBinContent(6,2.64826);
   hSyst_copy_copy7->SetBinContent(7,0.7069271);
   hSyst_copy_copy7->SetBinError(1,454.7459);
   hSyst_copy_copy7->SetBinError(2,88.92634);
   hSyst_copy_copy7->SetBinError(3,26.70895);
   hSyst_copy_copy7->SetBinError(4,8.627308);
   hSyst_copy_copy7->SetBinError(5,3.339157);
   hSyst_copy_copy7->SetBinError(6,1.118917);
   hSyst_copy_copy7->SetBinError(7,0.5824518);
   hSyst_copy_copy7->SetBinError(8,0.1812777);
   hSyst_copy_copy7->SetMinimum(0.01);
   hSyst_copy_copy7->SetMaximum(2.1);
   hSyst_copy_copy7->SetEntries(18);
   hSyst_copy_copy7->SetDirectory(0);
   hSyst_copy_copy7->SetOption("HIST");
   hSyst_copy_copy7->SetLineColor(0);
   hSyst_copy_copy7->SetMarkerColor(0);
   hSyst_copy_copy7->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(1,"#geq 0");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(2,"#geq 1");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(3,"#geq 2");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(4,"#geq 3");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(5,"#geq 4");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(6,"#geq 5");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(7,"#geq 6");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(8,"#geq 7");
   hSyst_copy_copy7->GetXaxis()->SetRange(2,6);
   hSyst_copy_copy7->GetXaxis()->SetLabelFont(42);
   hSyst_copy_copy7->GetXaxis()->SetLabelSize(0.08);
   hSyst_copy_copy7->GetXaxis()->SetTitleSize(0.14);
   hSyst_copy_copy7->GetXaxis()->SetTitleFont(42);
   hSyst_copy_copy7->GetYaxis()->SetTitle("MG5/Data");
   hSyst_copy_copy7->GetYaxis()->CenterTitle(true);
   hSyst_copy_copy7->GetYaxis()->SetNdivisions(507);
   hSyst_copy_copy7->GetYaxis()->SetLabelFont(42);
   hSyst_copy_copy7->GetYaxis()->SetLabelSize(0.105);
   hSyst_copy_copy7->GetYaxis()->SetTitleSize(0.1);
   hSyst_copy_copy7->GetYaxis()->SetTitleOffset(0.63);
   hSyst_copy_copy7->GetYaxis()->SetTitleFont(42);
   hSyst_copy_copy7->GetZaxis()->SetLabelFont(42);
   hSyst_copy_copy7->GetZaxis()->SetLabelSize(0.035);
   hSyst_copy_copy7->GetZaxis()->SetTitleSize(0.035);
   hSyst_copy_copy7->GetZaxis()->SetTitleFont(42);
   hSyst_copy_copy7->Draw("sameaxis");
   plot3->Modified();
   canvasZNGoodJetsFull_Zinc->cd();
   canvasZNGoodJetsFull_Zinc->Modified();
   canvasZNGoodJetsFull_Zinc->cd();
   canvasZNGoodJetsFull_Zinc->SetSelected(canvasZNGoodJetsFull_Zinc);
}

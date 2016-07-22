void SMu_unfolded_ZNGoodJetsFull_Zexc_Bayes_JetPtMin_30_JetEtaMax_24_MGPYTHIA6_()
{
//=========Macro generated from canvas: canvasZNGoodJetsFull_Zexc/Jet Counter (excl.)
//=========  (Thu Jul 21 23:00:52 2016) by ROOT version6.02/05
   TCanvas *canvasZNGoodJetsFull_Zexc = new TCanvas("canvasZNGoodJetsFull_Zexc", "Jet Counter (excl.)",0,0,600,800);
   gStyle->SetOptStat(0);
   canvasZNGoodJetsFull_Zexc->SetHighLightColor(2);
   canvasZNGoodJetsFull_Zexc->Range(0,0,1,1);
   canvasZNGoodJetsFull_Zexc->SetFillColor(0);
   canvasZNGoodJetsFull_Zexc->SetBorderMode(0);
   canvasZNGoodJetsFull_Zexc->SetBorderSize(2);
   canvasZNGoodJetsFull_Zexc->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: plot1
   TPad *plot1 = new TPad("plot1", "plot1",0.01,0.45,0.99,0.99);
   plot1->Draw();
   plot1->cd();
   plot1->Range(-0.3125,-1.864952,5.9375,5.365148);
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
   hSyst_copy1->SetBinContent(1,7427.909);
   hSyst_copy1->SetBinContent(2,867.1507);
   hSyst_copy1->SetBinContent(3,197.3861);
   hSyst_copy1->SetBinContent(4,44.78384);
   hSyst_copy1->SetBinContent(5,12.76143);
   hSyst_copy1->SetBinContent(6,1.762246);
   hSyst_copy1->SetBinContent(7,0.2921714);
   hSyst_copy1->SetBinContent(8,0.07415987);
   hSyst_copy1->SetBinContent(9,0.001916676);
   hSyst_copy1->SetBinError(1,390.9026);
   hSyst_copy1->SetBinError(2,48.93521);
   hSyst_copy1->SetBinError(3,17.44708);
   hSyst_copy1->SetBinError(4,5.600992);
   hSyst_copy1->SetBinError(5,2.340784);
   hSyst_copy1->SetBinError(6,0.7295105);
   hSyst_copy1->SetBinError(7,0.4270985);
   hSyst_copy1->SetBinError(8,0.1326138);
   hSyst_copy1->SetBinError(9,0.0006558488);
   hSyst_copy1->SetMinimum(0.01483197);
   hSyst_copy1->SetMaximum(37139.55);
   hSyst_copy1->SetEntries(18);
   hSyst_copy1->SetDirectory(0);
   hSyst_copy1->SetOption("HIST");
   hSyst_copy1->SetLineColor(0);
   hSyst_copy1->SetMarkerColor(0);
   hSyst_copy1->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy1->GetXaxis()->SetBinLabel(1,"= 0");
   hSyst_copy1->GetXaxis()->SetBinLabel(2,"= 1");
   hSyst_copy1->GetXaxis()->SetBinLabel(3,"= 2");
   hSyst_copy1->GetXaxis()->SetBinLabel(4,"= 3");
   hSyst_copy1->GetXaxis()->SetBinLabel(5,"= 4");
   hSyst_copy1->GetXaxis()->SetBinLabel(6,"= 5");
   hSyst_copy1->GetXaxis()->SetBinLabel(7,"= 6");
   hSyst_copy1->GetXaxis()->SetBinLabel(8,"= 7");
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
   7427.909,
   867.1507,
   197.3861,
   44.78384,
   12.76143,
   1.762246,
   0.2921714,
   0.07415987};
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
   390.9026,
   48.93521,
   17.44708,
   5.600992,
   2.340784,
   0.7295105,
   0.4270985,
   0.1326138};
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
   390.9026,
   48.93521,
   17.44708,
   5.600992,
   2.340784,
   0.7295105,
   0.4270985,
   0.1326138};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,grCentralSyst_fx3001,grCentralSyst_fy3001,grCentralSyst_felx3001,grCentralSyst_fehx3001,grCentralSyst_fely3001,grCentralSyst_fehy3001);
   grae->SetName("grCentralSyst");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_grZNGoodJetsFull_ZexcCentralTotError3001 = new TH1F("Graph_grZNGoodJetsFull_ZexcCentralTotError3001","",100,-1.3,8.3);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->SetMinimum(0.02224796);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->SetMaximum(8600.691);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->SetDirectory(0);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->SetLineColor(ci);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetXaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetXaxis()->SetLabelSize(0);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetXaxis()->SetTitleSize(0.05);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetXaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetYaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetYaxis()->SetLabelSize(0.05);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetYaxis()->SetTitleSize(0.07);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetYaxis()->SetTitleOffset(1.1);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetYaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetZaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetZaxis()->SetLabelSize(0.035);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetZaxis()->SetTitleSize(0.035);
   Graph_grZNGoodJetsFull_ZexcCentralTotError3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_grZNGoodJetsFull_ZexcCentralTotError3001);
   
   grae->Draw("2");
   
   TH1D *hGen1_copy2 = new TH1D("hGen1_copy2","Jet Counter (excl.)",8,-0.5,7.5);
   hGen1_copy2->SetBinContent(1,7074.049);
   hGen1_copy2->SetBinContent(2,893.8576);
   hGen1_copy2->SetBinContent(3,198.3442);
   hGen1_copy2->SetBinContent(4,41.47814);
   hGen1_copy2->SetBinContent(5,8.853287);
   hGen1_copy2->SetBinContent(6,1.574566);
   hGen1_copy2->SetBinContent(7,0.3790621);
   hGen1_copy2->SetBinContent(8,0.07654138);
   hGen1_copy2->SetBinContent(9,0.003644828);
   hGen1_copy2->SetBinError(1,438.6278);
   hGen1_copy2->SetBinError(2,96.57426);
   hGen1_copy2->SetBinError(3,29.19328);
   hGen1_copy2->SetBinError(4,6.999341);
   hGen1_copy2->SetBinError(5,1.751369);
   hGen1_copy2->SetBinError(6,0.3402092);
   hGen1_copy2->SetBinError(7,0.1098009);
   hGen1_copy2->SetBinError(8,0.03650172);
   hGen1_copy2->SetBinError(9,0.01411636);
   hGen1_copy2->SetEntries(3178057);
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
   hGen1_copy2->GetXaxis()->SetBinLabel(1,"= 0");
   hGen1_copy2->GetXaxis()->SetBinLabel(2,"= 1");
   hGen1_copy2->GetXaxis()->SetBinLabel(3,"= 2");
   hGen1_copy2->GetXaxis()->SetBinLabel(4,"= 3");
   hGen1_copy2->GetXaxis()->SetBinLabel(5,"= 4");
   hGen1_copy2->GetXaxis()->SetBinLabel(6,"= 5");
   hGen1_copy2->GetXaxis()->SetBinLabel(7,"= 6");
   hGen1_copy2->GetXaxis()->SetBinLabel(8,"= 7");
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
   
   TH1D *hGen2_copy3 = new TH1D("hGen2_copy3","Jet Counter (excl.)",8,-0.5,7.5);
   hGen2_copy3->SetBinContent(1,7336.258);
   hGen2_copy3->SetBinContent(2,813.0633);
   hGen2_copy3->SetBinContent(3,172.7545);
   hGen2_copy3->SetBinContent(4,35.55671);
   hGen2_copy3->SetBinContent(5,8.85062);
   hGen2_copy3->SetBinContent(6,2.120843);
   hGen2_copy3->SetBinContent(7,0.4916538);
   hGen2_copy3->SetBinContent(8,0.1116233);
   hGen2_copy3->SetBinContent(9,0.02130216);
   hGen2_copy3->SetBinError(1,2.500225);
   hGen2_copy3->SetBinError(2,0.8323461);
   hGen2_copy3->SetBinError(3,0.3836688);
   hGen2_copy3->SetBinError(4,0.1740614);
   hGen2_copy3->SetBinError(5,0.08684176);
   hGen2_copy3->SetBinError(6,0.04251048);
   hGen2_copy3->SetBinError(7,0.02046781);
   hGen2_copy3->SetBinError(8,0.009752573);
   hGen2_copy3->SetBinError(9,0.004260431);
   hGen2_copy3->SetEntries(9822051);
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
   hGen2_copy3->GetXaxis()->SetBinLabel(1,"= 0");
   hGen2_copy3->GetXaxis()->SetBinLabel(2,"= 1");
   hGen2_copy3->GetXaxis()->SetBinLabel(3,"= 2");
   hGen2_copy3->GetXaxis()->SetBinLabel(4,"= 3");
   hGen2_copy3->GetXaxis()->SetBinLabel(5,"= 4");
   hGen2_copy3->GetXaxis()->SetBinLabel(6,"= 5");
   hGen2_copy3->GetXaxis()->SetBinLabel(7,"= 6");
   hGen2_copy3->GetXaxis()->SetBinLabel(8,"= 7");
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
   7427.909,
   867.1507,
   197.3861,
   44.78384,
   12.76143,
   1.762246,
   0.2921714,
   0.07415987};
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
   4.724399,
   2.429596,
   1.507252,
   0.842347,
   0.5478777,
   0.2468264,
   0.1261757,
   0.02253934};
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
   4.724399,
   2.429596,
   1.507252,
   0.842347,
   0.5478777,
   0.2468264,
   0.1261757,
   0.02253934};
   grae = new TGraphAsymmErrors(8,grCentralStat_fx3002,grCentralStat_fy3002,grCentralStat_felx3002,grCentralStat_fehx3002,grCentralStat_fely3002,grCentralStat_fehy3002);
   grae->SetName("grCentralStat");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_grZNGoodJetsFull_ZexcCentralStatError3002 = new TH1F("Graph_grZNGoodJetsFull_ZexcCentralStatError3002","",100,-1.3,8.3);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->SetMinimum(0.04645847);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->SetMaximum(8175.892);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->SetDirectory(0);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->SetLineColor(ci);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetXaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetXaxis()->SetLabelSize(0);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetXaxis()->SetTitleSize(0.05);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetXaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetYaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetYaxis()->SetLabelSize(0.05);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetYaxis()->SetTitleSize(0.07);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetYaxis()->SetTitleOffset(1.1);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetYaxis()->SetTitleFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetZaxis()->SetLabelFont(42);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetZaxis()->SetLabelSize(0.035);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetZaxis()->SetTitleSize(0.035);
   Graph_grZNGoodJetsFull_ZexcCentralStatError3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_grZNGoodJetsFull_ZexcCentralStatError3002);
   
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
   canvasZNGoodJetsFull_Zexc->cd();
  
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
   hSyst_copy4->SetBinContent(1,7427.909);
   hSyst_copy4->SetBinContent(2,867.1507);
   hSyst_copy4->SetBinContent(3,197.3861);
   hSyst_copy4->SetBinContent(4,44.78384);
   hSyst_copy4->SetBinContent(5,12.76143);
   hSyst_copy4->SetBinContent(6,1.762246);
   hSyst_copy4->SetBinContent(7,0.2921714);
   hSyst_copy4->SetBinContent(8,0.07415987);
   hSyst_copy4->SetBinContent(9,0.001916676);
   hSyst_copy4->SetBinError(1,390.9026);
   hSyst_copy4->SetBinError(2,48.93521);
   hSyst_copy4->SetBinError(3,17.44708);
   hSyst_copy4->SetBinError(4,5.600992);
   hSyst_copy4->SetBinError(5,2.340784);
   hSyst_copy4->SetBinError(6,0.7295105);
   hSyst_copy4->SetBinError(7,0.4270985);
   hSyst_copy4->SetBinError(8,0.1326138);
   hSyst_copy4->SetBinError(9,0.0006558488);
   hSyst_copy4->SetMinimum(0.01);
   hSyst_copy4->SetMaximum(2.1);
   hSyst_copy4->SetEntries(18);
   hSyst_copy4->SetDirectory(0);
   hSyst_copy4->SetOption("HIST");
   hSyst_copy4->SetLineColor(0);
   hSyst_copy4->SetMarkerColor(0);
   hSyst_copy4->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy4->GetXaxis()->SetBinLabel(1,"= 0");
   hSyst_copy4->GetXaxis()->SetBinLabel(2,"= 1");
   hSyst_copy4->GetXaxis()->SetBinLabel(3,"= 2");
   hSyst_copy4->GetXaxis()->SetBinLabel(4,"= 3");
   hSyst_copy4->GetXaxis()->SetBinLabel(5,"= 4");
   hSyst_copy4->GetXaxis()->SetBinLabel(6,"= 5");
   hSyst_copy4->GetXaxis()->SetBinLabel(7,"= 6");
   hSyst_copy4->GetXaxis()->SetBinLabel(8,"= 7");
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
   0.9523607,
   1.030798,
   1.004854,
   0.9261855,
   0.6937536,
   0.8934994,
   1.297396,
   1.032113};
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
   0.05905132,
   0.1113696,
   0.1478994,
   0.1562917,
   0.1372393,
   0.1930544,
   0.3758101,
   0.4922032};
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
   0.05905132,
   0.1113696,
   0.1478994,
   0.1562917,
   0.1372393,
   0.1930544,
   0.3758101,
   0.4922032};
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
   Graph_grGen1ToCentral3003->SetMinimum(0.4265805);
   Graph_grGen1ToCentral3003->SetMaximum(1.786536);
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
   0.05262619,
   0.05643218,
   0.08839062,
   0.1250673,
   0.1834265,
   0.4139663,
   1.461808,
   1.788215};
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
   0.05262619,
   0.05643218,
   0.08839062,
   0.1250673,
   0.1834265,
   0.4139663,
   1.461808,
   1.788215};
   grae = new TGraphAsymmErrors(8,grCentralSystRatio_fx3004,grCentralSystRatio_fy3004,grCentralSystRatio_felx3004,grCentralSystRatio_fehx3004,grCentralSystRatio_fely3004,grCentralSystRatio_fehy3004);
   grae->SetName("grCentralSystRatio");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.3,8.3);
   Graph_Graph3004->SetMinimum(0.08784518);
   Graph_Graph3004->SetMaximum(3.033703);
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
   0.0006360334,
   0.002801815,
   0.007636064,
   0.01880917,
   0.04293232,
   0.1400635,
   0.4318553,
   0.3039291};
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
   0.0006360334,
   0.002801815,
   0.007636064,
   0.01880917,
   0.04293232,
   0.1400635,
   0.4318553,
   0.3039291};
   grae = new TGraphAsymmErrors(8,Graph0_fx3005,Graph0_fy3005,Graph0_felx3005,Graph0_fehx3005,Graph0_fely3005,Graph0_fehy3005);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.3,8.3);
   Graph_Graph3005->SetMinimum(0.4817737);
   Graph_Graph3005->SetMaximum(1.518226);
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
   0.9523607,
   1.030798,
   1.004854,
   0.9261855,
   0.6937536,
   0.8934994,
   1.297396,
   1.032113};
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
   0.05905132,
   0.1113696,
   0.1478994,
   0.1562917,
   0.1372393,
   0.1930544,
   0.3758101,
   0.4922032};
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
   0.05905132,
   0.1113696,
   0.1478994,
   0.1562917,
   0.1372393,
   0.1930544,
   0.3758101,
   0.4922032};
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
   Graph_Graph_grGen1ToCentral30033006->SetMinimum(0.4265805);
   Graph_Graph_grGen1ToCentral30033006->SetMaximum(1.786536);
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
   hSyst_copy_copy5->SetBinContent(1,7427.909);
   hSyst_copy_copy5->SetBinContent(2,867.1507);
   hSyst_copy_copy5->SetBinContent(3,197.3861);
   hSyst_copy_copy5->SetBinContent(4,44.78384);
   hSyst_copy_copy5->SetBinContent(5,12.76143);
   hSyst_copy_copy5->SetBinContent(6,1.762246);
   hSyst_copy_copy5->SetBinContent(7,0.2921714);
   hSyst_copy_copy5->SetBinContent(8,0.07415987);
   hSyst_copy_copy5->SetBinContent(9,0.001916676);
   hSyst_copy_copy5->SetBinError(1,390.9026);
   hSyst_copy_copy5->SetBinError(2,48.93521);
   hSyst_copy_copy5->SetBinError(3,17.44708);
   hSyst_copy_copy5->SetBinError(4,5.600992);
   hSyst_copy_copy5->SetBinError(5,2.340784);
   hSyst_copy_copy5->SetBinError(6,0.7295105);
   hSyst_copy_copy5->SetBinError(7,0.4270985);
   hSyst_copy_copy5->SetBinError(8,0.1326138);
   hSyst_copy_copy5->SetBinError(9,0.0006558488);
   hSyst_copy_copy5->SetMinimum(0.01);
   hSyst_copy_copy5->SetMaximum(2.1);
   hSyst_copy_copy5->SetEntries(18);
   hSyst_copy_copy5->SetDirectory(0);
   hSyst_copy_copy5->SetOption("HIST");
   hSyst_copy_copy5->SetLineColor(0);
   hSyst_copy_copy5->SetMarkerColor(0);
   hSyst_copy_copy5->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(1,"= 0");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(2,"= 1");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(3,"= 2");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(4,"= 3");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(5,"= 4");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(6,"= 5");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(7,"= 6");
   hSyst_copy_copy5->GetXaxis()->SetBinLabel(8,"= 7");
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
   canvasZNGoodJetsFull_Zexc->cd();
  
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
   hSyst_copy6->SetBinContent(1,7427.909);
   hSyst_copy6->SetBinContent(2,867.1507);
   hSyst_copy6->SetBinContent(3,197.3861);
   hSyst_copy6->SetBinContent(4,44.78384);
   hSyst_copy6->SetBinContent(5,12.76143);
   hSyst_copy6->SetBinContent(6,1.762246);
   hSyst_copy6->SetBinContent(7,0.2921714);
   hSyst_copy6->SetBinContent(8,0.07415987);
   hSyst_copy6->SetBinContent(9,0.001916676);
   hSyst_copy6->SetBinError(1,390.9026);
   hSyst_copy6->SetBinError(2,48.93521);
   hSyst_copy6->SetBinError(3,17.44708);
   hSyst_copy6->SetBinError(4,5.600992);
   hSyst_copy6->SetBinError(5,2.340784);
   hSyst_copy6->SetBinError(6,0.7295105);
   hSyst_copy6->SetBinError(7,0.4270985);
   hSyst_copy6->SetBinError(8,0.1326138);
   hSyst_copy6->SetBinError(9,0.0006558488);
   hSyst_copy6->SetMinimum(0.01);
   hSyst_copy6->SetMaximum(2.1);
   hSyst_copy6->SetEntries(18);
   hSyst_copy6->SetDirectory(0);
   hSyst_copy6->SetOption("HIST");
   hSyst_copy6->SetLineColor(0);
   hSyst_copy6->SetMarkerColor(0);
   hSyst_copy6->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy6->GetXaxis()->SetBinLabel(1,"= 0");
   hSyst_copy6->GetXaxis()->SetBinLabel(2,"= 1");
   hSyst_copy6->GetXaxis()->SetBinLabel(3,"= 2");
   hSyst_copy6->GetXaxis()->SetBinLabel(4,"= 3");
   hSyst_copy6->GetXaxis()->SetBinLabel(5,"= 4");
   hSyst_copy6->GetXaxis()->SetBinLabel(6,"= 5");
   hSyst_copy6->GetXaxis()->SetBinLabel(7,"= 6");
   hSyst_copy6->GetXaxis()->SetBinLabel(8,"= 7");
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
   0.9876611,
   0.9376263,
   0.8752114,
   0.793963,
   0.6935446,
   1.203489,
   1.682758,
   1.505171};
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
   0.0003365987,
   0.0009598633,
   0.001943748,
   0.003886702,
   0.006805019,
   0.0241229,
   0.07005415,
   0.1315074};
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
   0.0003365987,
   0.0009598633,
   0.001943748,
   0.003886702,
   0.006805019,
   0.0241229,
   0.07005415,
   0.1315074};
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
   Graph_grGen2ToCentral3007->SetMinimum(0.5801323);
   Graph_grGen2ToCentral3007->SetMaximum(1.85942);
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
   0.9876611,
   0.9376263,
   0.8752114,
   0.793963,
   0.6935446,
   1.203489,
   1.682758,
   1.505171};
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
   0.0003365987,
   0.0009598633,
   0.001943748,
   0.003886702,
   0.006805019,
   0.0241229,
   0.07005415,
   0.1315074};
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
   0.0003365987,
   0.0009598633,
   0.001943748,
   0.003886702,
   0.006805019,
   0.0241229,
   0.07005415,
   0.1315074};
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
   Graph_Graph_grGen2ToCentral30073008->SetMinimum(0.5801323);
   Graph_Graph_grGen2ToCentral30073008->SetMaximum(1.85942);
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
   0.05262619,
   0.05643218,
   0.08839062,
   0.1250673,
   0.1834265,
   0.4139663,
   1.461808,
   1.788215};
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
   0.05262619,
   0.05643218,
   0.08839062,
   0.1250673,
   0.1834265,
   0.4139663,
   1.461808,
   1.788215};
   grae = new TGraphAsymmErrors(8,grCentralSystRatio_fx3009,grCentralSystRatio_fy3009,grCentralSystRatio_felx3009,grCentralSystRatio_fehx3009,grCentralSystRatio_fely3009,grCentralSystRatio_fehy3009);
   grae->SetName("grCentralSystRatio");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_Graph30043009 = new TH1F("Graph_Graph_Graph30043009","",100,-1.3,8.3);
   Graph_Graph_Graph30043009->SetMinimum(0.08784518);
   Graph_Graph_Graph30043009->SetMaximum(3.033703);
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
   0.0006360334,
   0.002801815,
   0.007636064,
   0.01880917,
   0.04293232,
   0.1400635,
   0.4318553,
   0.3039291};
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
   0.0006360334,
   0.002801815,
   0.007636064,
   0.01880917,
   0.04293232,
   0.1400635,
   0.4318553,
   0.3039291};
   grae = new TGraphAsymmErrors(8,Graph0_fx3010,Graph0_fy3010,Graph0_felx3010,Graph0_fehx3010,Graph0_fely3010,Graph0_fehy3010);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3354);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_Graph30053010 = new TH1F("Graph_Graph_Graph30053010","",100,-1.3,8.3);
   Graph_Graph_Graph30053010->SetMinimum(0.4817737);
   Graph_Graph_Graph30053010->SetMaximum(1.518226);
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
   0.9876611,
   0.9376263,
   0.8752114,
   0.793963,
   0.6935446,
   1.203489,
   1.682758,
   1.505171};
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
   0.0003365987,
   0.0009598633,
   0.001943748,
   0.003886702,
   0.006805019,
   0.0241229,
   0.07005415,
   0.1315074};
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
   0.0003365987,
   0.0009598633,
   0.001943748,
   0.003886702,
   0.006805019,
   0.0241229,
   0.07005415,
   0.1315074};
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
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetMinimum(0.5801323);
   Graph_Graph_Graph_grGen2ToCentral300730083011->SetMaximum(1.85942);
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
   hSyst_copy_copy7->SetBinContent(1,7427.909);
   hSyst_copy_copy7->SetBinContent(2,867.1507);
   hSyst_copy_copy7->SetBinContent(3,197.3861);
   hSyst_copy_copy7->SetBinContent(4,44.78384);
   hSyst_copy_copy7->SetBinContent(5,12.76143);
   hSyst_copy_copy7->SetBinContent(6,1.762246);
   hSyst_copy_copy7->SetBinContent(7,0.2921714);
   hSyst_copy_copy7->SetBinContent(8,0.07415987);
   hSyst_copy_copy7->SetBinContent(9,0.001916676);
   hSyst_copy_copy7->SetBinError(1,390.9026);
   hSyst_copy_copy7->SetBinError(2,48.93521);
   hSyst_copy_copy7->SetBinError(3,17.44708);
   hSyst_copy_copy7->SetBinError(4,5.600992);
   hSyst_copy_copy7->SetBinError(5,2.340784);
   hSyst_copy_copy7->SetBinError(6,0.7295105);
   hSyst_copy_copy7->SetBinError(7,0.4270985);
   hSyst_copy_copy7->SetBinError(8,0.1326138);
   hSyst_copy_copy7->SetBinError(9,0.0006558488);
   hSyst_copy_copy7->SetMinimum(0.01);
   hSyst_copy_copy7->SetMaximum(2.1);
   hSyst_copy_copy7->SetEntries(18);
   hSyst_copy_copy7->SetDirectory(0);
   hSyst_copy_copy7->SetOption("HIST");
   hSyst_copy_copy7->SetLineColor(0);
   hSyst_copy_copy7->SetMarkerColor(0);
   hSyst_copy_copy7->GetXaxis()->SetTitle("N_{jets}");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(1,"= 0");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(2,"= 1");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(3,"= 2");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(4,"= 3");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(5,"= 4");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(6,"= 5");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(7,"= 6");
   hSyst_copy_copy7->GetXaxis()->SetBinLabel(8,"= 7");
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
   canvasZNGoodJetsFull_Zexc->cd();
   canvasZNGoodJetsFull_Zexc->Modified();
   canvasZNGoodJetsFull_Zexc->cd();
   canvasZNGoodJetsFull_Zexc->SetSelected(canvasZNGoodJetsFull_Zexc);
}

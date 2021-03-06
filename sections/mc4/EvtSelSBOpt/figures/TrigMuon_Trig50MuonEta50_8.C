void TrigPlot/TrigMuon_Trig50MuonEta50_8()
{
//=========Macro generated from canvas: Canvas_oCkLqB8A9S4GBpCxLZ7FW8/
//=========  (Thu Feb 16 10:32:13 2017) by ROOT version6.02/04
   TCanvas *Canvas_oCkLqB8A9S4GBpCxLZ7FW8 = new TCanvas("Canvas_oCkLqB8A9S4GBpCxLZ7FW8", "",10,45,804,627);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetHighLightColor(2);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->Range(-3.857143,-0.195,3.285714,1.43);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetFillColor(0);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetBorderMode(0);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetBorderSize(2);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetGridx();
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetGridy();
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetLeftMargin(0.12);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetRightMargin(0.04);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetTopMargin(0.08);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetBottomMargin(0.12);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetFrameFillStyle(0);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetFrameBorderMode(0);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetFrameFillStyle(0);
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetFrameBorderMode(0);
   
   Double_t eff_graph_fx3005[13] = {
   -2.4,
   -2,
   -1.6,
   -1.2,
   -0.8,
   -0.4,
   2.775558e-16,
   0.4,
   0.8,
   1.2,
   1.6,
   2,
   2.4};
   Double_t eff_graph_fy3005[13] = {
   0.7763496,
   0.8144904,
   0.8082723,
   0.889635,
   0.9072409,
   0.8833099,
   0.9263566,
   0.884895,
   0.9016538,
   0.8914319,
   0.8244704,
   0.8199203,
   0.7554945};
   Double_t eff_graph_felx3005[13] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t eff_graph_fely3005[13] = {
   0.02314222,
   0.01162276,
   0.008521735,
   0.00561697,
   0.004679826,
   0.004728961,
   0.003818036,
   0.004715646,
   0.004623009,
   0.005593708,
   0.008269244,
   0.01150658,
   0.02461683};
   Double_t eff_graph_fehx3005[13] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t eff_graph_fehy3005[13] = {
   0.02163734,
   0.01110404,
   0.008249163,
   0.005383279,
   0.004482009,
   0.004571609,
   0.003648393,
   0.004556752,
   0.004441478,
   0.005357708,
   0.007981086,
   0.01097827,
   0.02312995};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,eff_graph_fx3005,eff_graph_fy3005,eff_graph_felx3005,eff_graph_fehx3005,eff_graph_fely3005,eff_graph_fehy3005);
   grae->SetName("eff_graph");
   grae->SetTitle("");
   grae->SetFillColor(19);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_eff_graph3005 = new TH1F("Graph_eff_graph3005","",100,-3,3);
   Graph_eff_graph3005->SetMinimum(0);
   Graph_eff_graph3005->SetMaximum(1.3);
   Graph_eff_graph3005->SetDirectory(0);
   Graph_eff_graph3005->SetStats(0);
   Graph_eff_graph3005->SetLineStyle(0);
   Graph_eff_graph3005->SetLineWidth(3);
   Graph_eff_graph3005->SetMarkerStyle(20);
   Graph_eff_graph3005->GetXaxis()->SetTitle("Muon #eta (p_{T}>50)");
   Graph_eff_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_eff_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_eff_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_eff_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_eff_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_eff_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_eff_graph3005->GetYaxis()->SetTitle("#epsilon (Mu50)");
   Graph_eff_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_eff_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_eff_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_eff_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_eff_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_eff_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_eff_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_eff_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_eff_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_eff_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_eff_graph3005);
   
   grae->Draw("ap");
   TLatex *   tex = new TLatex(0.6,0.5,"Denom: Ele27_WPTight");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6,0.45,"N_{j} #geq 4, N_{e} #geq 1, N_{b} #geq 1, HT #geq 300");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TF1 *fitf3005 = new TF1("*fitf",100,500,3);
    //The original function :  had originally been created by:
    //TF1 *fitf = new TF1("fitf",,100,500,3);
   fitf3005->SetRange(100,500);
   fitf3005->SetName("fitf");
   fitf3005->SetTitle("");
   fitf3005->SetSavedPoint(0,0.7602499);
   fitf3005->SetSavedPoint(1,0.7774696);
   fitf3005->SetSavedPoint(2,0.7939615);
   fitf3005->SetSavedPoint(3,0.8097057);
   fitf3005->SetSavedPoint(4,0.8246883);
   fitf3005->SetSavedPoint(5,0.8389006);
   fitf3005->SetSavedPoint(6,0.852339);
   fitf3005->SetSavedPoint(7,0.8650052);
   fitf3005->SetSavedPoint(8,0.8769054);
   fitf3005->SetSavedPoint(9,0.8880501);
   fitf3005->SetSavedPoint(10,0.8984541);
   fitf3005->SetSavedPoint(11,0.9081355);
   fitf3005->SetSavedPoint(12,0.9171158);
   fitf3005->SetSavedPoint(13,0.925419);
   fitf3005->SetSavedPoint(14,0.9330718);
   fitf3005->SetSavedPoint(15,0.9401025);
   fitf3005->SetSavedPoint(16,0.9465412);
   fitf3005->SetSavedPoint(17,0.9524187);
   fitf3005->SetSavedPoint(18,0.9577669);
   fitf3005->SetSavedPoint(19,0.962618);
   fitf3005->SetSavedPoint(20,0.967004);
   fitf3005->SetSavedPoint(21,0.9709569);
   fitf3005->SetSavedPoint(22,0.974508);
   fitf3005->SetSavedPoint(23,0.9776881);
   fitf3005->SetSavedPoint(24,0.9805268);
   fitf3005->SetSavedPoint(25,0.9830526);
   fitf3005->SetSavedPoint(26,0.9852928);
   fitf3005->SetSavedPoint(27,0.9872735);
   fitf3005->SetSavedPoint(28,0.989019);
   fitf3005->SetSavedPoint(29,0.9905525);
   fitf3005->SetSavedPoint(30,0.9918952);
   fitf3005->SetSavedPoint(31,0.9930673);
   fitf3005->SetSavedPoint(32,0.9940871);
   fitf3005->SetSavedPoint(33,0.9949716);
   fitf3005->SetSavedPoint(34,0.9957362);
   fitf3005->SetSavedPoint(35,0.9963952);
   fitf3005->SetSavedPoint(36,0.9969613);
   fitf3005->SetSavedPoint(37,0.997446);
   fitf3005->SetSavedPoint(38,0.9978597);
   fitf3005->SetSavedPoint(39,0.9982117);
   fitf3005->SetSavedPoint(40,0.9985103);
   fitf3005->SetSavedPoint(41,0.9987626);
   fitf3005->SetSavedPoint(42,0.9989753);
   fitf3005->SetSavedPoint(43,0.999154);
   fitf3005->SetSavedPoint(44,0.9993036);
   fitf3005->SetSavedPoint(45,0.9994284);
   fitf3005->SetSavedPoint(46,0.9995323);
   fitf3005->SetSavedPoint(47,0.9996184);
   fitf3005->SetSavedPoint(48,0.9996896);
   fitf3005->SetSavedPoint(49,0.9997483);
   fitf3005->SetSavedPoint(50,0.9997965);
   fitf3005->SetSavedPoint(51,0.999836);
   fitf3005->SetSavedPoint(52,0.9998682);
   fitf3005->SetSavedPoint(53,0.9998944);
   fitf3005->SetSavedPoint(54,0.9999157);
   fitf3005->SetSavedPoint(55,0.9999328);
   fitf3005->SetSavedPoint(56,0.9999467);
   fitf3005->SetSavedPoint(57,0.9999578);
   fitf3005->SetSavedPoint(58,0.9999667);
   fitf3005->SetSavedPoint(59,0.9999738);
   fitf3005->SetSavedPoint(60,0.9999795);
   fitf3005->SetSavedPoint(61,0.9999839);
   fitf3005->SetSavedPoint(62,0.9999875);
   fitf3005->SetSavedPoint(63,0.9999903);
   fitf3005->SetSavedPoint(64,0.9999925);
   fitf3005->SetSavedPoint(65,0.9999942);
   fitf3005->SetSavedPoint(66,0.9999955);
   fitf3005->SetSavedPoint(67,0.9999966);
   fitf3005->SetSavedPoint(68,0.9999974);
   fitf3005->SetSavedPoint(69,0.999998);
   fitf3005->SetSavedPoint(70,0.9999985);
   fitf3005->SetSavedPoint(71,0.9999988);
   fitf3005->SetSavedPoint(72,0.9999991);
   fitf3005->SetSavedPoint(73,0.9999993);
   fitf3005->SetSavedPoint(74,0.9999995);
   fitf3005->SetSavedPoint(75,0.9999996);
   fitf3005->SetSavedPoint(76,0.9999997);
   fitf3005->SetSavedPoint(77,0.9999998);
   fitf3005->SetSavedPoint(78,0.9999998);
   fitf3005->SetSavedPoint(79,0.9999999);
   fitf3005->SetSavedPoint(80,0.9999999);
   fitf3005->SetSavedPoint(81,0.9999999);
   fitf3005->SetSavedPoint(82,1);
   fitf3005->SetSavedPoint(83,1);
   fitf3005->SetSavedPoint(84,1);
   fitf3005->SetSavedPoint(85,1);
   fitf3005->SetSavedPoint(86,1);
   fitf3005->SetSavedPoint(87,1);
   fitf3005->SetSavedPoint(88,1);
   fitf3005->SetSavedPoint(89,1);
   fitf3005->SetSavedPoint(90,1);
   fitf3005->SetSavedPoint(91,1);
   fitf3005->SetSavedPoint(92,1);
   fitf3005->SetSavedPoint(93,1);
   fitf3005->SetSavedPoint(94,1);
   fitf3005->SetSavedPoint(95,1);
   fitf3005->SetSavedPoint(96,1);
   fitf3005->SetSavedPoint(97,1);
   fitf3005->SetSavedPoint(98,1);
   fitf3005->SetSavedPoint(99,1);
   fitf3005->SetSavedPoint(100,1);
   fitf3005->SetSavedPoint(101,100);
   fitf3005->SetSavedPoint(102,500);
   fitf3005->SetFillColor(19);
   fitf3005->SetFillStyle(0);
   fitf3005->SetMarkerStyle(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fitf3005->SetLineColor(ci);
   fitf3005->SetLineWidth(1);
   fitf3005->GetXaxis()->SetLabelFont(42);
   fitf3005->GetXaxis()->SetLabelOffset(0.007);
   fitf3005->GetXaxis()->SetLabelSize(0.05);
   fitf3005->GetXaxis()->SetTitleSize(0.06);
   fitf3005->GetXaxis()->SetTitleOffset(0.9);
   fitf3005->GetXaxis()->SetTitleFont(42);
   fitf3005->GetYaxis()->SetLabelFont(42);
   fitf3005->GetYaxis()->SetLabelOffset(0.007);
   fitf3005->GetYaxis()->SetLabelSize(0.05);
   fitf3005->GetYaxis()->SetTitleSize(0.06);
   fitf3005->GetYaxis()->SetTitleFont(42);
   fitf3005->SetParameter(0,1);
   fitf3005->SetParError(0,0);
   fitf3005->SetParLimits(0,0,0);
   fitf3005->SetParameter(1,50);
   fitf3005->SetParError(1,0);
   fitf3005->SetParLimits(1,0,0);
   fitf3005->SetParameter(2,100);
   fitf3005->SetParError(2,0);
   fitf3005->SetParLimits(2,0,0);
   fitf3005->Draw("sames");
   
   TH1F *Trig50MuonEta50_Denominator_83 = new TH1F("Trig50MuonEta50_Denominator_83","Trig50MuonEta50_Denominator (HT)",15,-3,3);
   Trig50MuonEta50_Denominator_83->SetBinContent(0,1.861286);
   Trig50MuonEta50_Denominator_83->SetBinContent(2,0.02016432);
   Trig50MuonEta50_Denominator_83->SetBinContent(3,0.06510639);
   Trig50MuonEta50_Denominator_83->SetBinContent(4,0.1203121);
   Trig50MuonEta50_Denominator_83->SetBinContent(5,0.1775393);
   Trig50MuonEta50_Denominator_83->SetBinContent(6,0.2190602);
   Trig50MuonEta50_Denominator_83->SetBinContent(7,0.2580929);
   Trig50MuonEta50_Denominator_83->SetBinContent(8,0.2674753);
   Trig50MuonEta50_Denominator_83->SetBinContent(9,0.2566934);
   Trig50MuonEta50_Denominator_83->SetBinContent(10,0.2350776);
   Trig50MuonEta50_Denominator_83->SetBinContent(11,0.1766581);
   Trig50MuonEta50_Denominator_83->SetBinContent(12,0.1198974);
   Trig50MuonEta50_Denominator_83->SetBinContent(13,0.06505456);
   Trig50MuonEta50_Denominator_83->SetBinContent(14,0.01886841);
   Trig50MuonEta50_Denominator_83->SetEntries(74490);

   ci = TColor::GetColor("#000099");
   Trig50MuonEta50_Denominator_83->SetLineColor(ci);
   Trig50MuonEta50_Denominator_83->SetLineStyle(2);
   Trig50MuonEta50_Denominator_83->GetXaxis()->SetTitle("MuonEta(PT > 50)");
   Trig50MuonEta50_Denominator_83->GetXaxis()->SetRange(1,60);
   Trig50MuonEta50_Denominator_83->GetXaxis()->SetLabelFont(42);
   Trig50MuonEta50_Denominator_83->GetXaxis()->SetLabelSize(0.035);
   Trig50MuonEta50_Denominator_83->GetXaxis()->SetTitleSize(0.035);
   Trig50MuonEta50_Denominator_83->GetXaxis()->SetTitleFont(42);
   Trig50MuonEta50_Denominator_83->GetYaxis()->SetTitle("Denominator");
   Trig50MuonEta50_Denominator_83->GetYaxis()->SetLabelFont(42);
   Trig50MuonEta50_Denominator_83->GetYaxis()->SetLabelSize(0.035);
   Trig50MuonEta50_Denominator_83->GetYaxis()->SetTitleSize(0.035);
   Trig50MuonEta50_Denominator_83->GetYaxis()->SetTitleFont(42);
   Trig50MuonEta50_Denominator_83->GetZaxis()->SetLabelFont(42);
   Trig50MuonEta50_Denominator_83->GetZaxis()->SetLabelSize(0.035);
   Trig50MuonEta50_Denominator_83->GetZaxis()->SetTitleSize(0.035);
   Trig50MuonEta50_Denominator_83->GetZaxis()->SetTitleFont(42);
   Trig50MuonEta50_Denominator_83->Draw("same");
   
   TH1F *Hist_amwLCCdWkR4uEJdUK7rnab4 = new TH1F("Hist_amwLCCdWkR4uEJdUK7rnab4","Trig50MuonEta50_Numerator (HT)",15,-3,3);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(0,0.03006505);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(2,0.01565456);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(3,0.05302854);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(4,0.0972449);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(5,0.1579452);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(6,0.1987404);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(7,0.2279761);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(8,0.2477775);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(9,0.2271467);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(10,0.2119586);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(11,0.1574787);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(12,0.09885182);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(13,0.05333955);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetBinContent(14,0.01425498);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetEntries(34560);
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetFillColor(4);

   ci = TColor::GetColor("#000099");
   Hist_amwLCCdWkR4uEJdUK7rnab4->SetLineColor(ci);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetXaxis()->SetTitle("MuonEta(PT > 50)");
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetXaxis()->SetRange(1,60);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetXaxis()->SetLabelFont(42);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetXaxis()->SetLabelSize(0.035);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetXaxis()->SetTitleSize(0.035);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetXaxis()->SetTitleFont(42);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetYaxis()->SetTitle("Numerator");
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetYaxis()->SetLabelFont(42);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetYaxis()->SetLabelSize(0.035);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetYaxis()->SetTitleSize(0.035);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetYaxis()->SetTitleFont(42);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetZaxis()->SetLabelFont(42);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetZaxis()->SetLabelSize(0.035);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetZaxis()->SetTitleSize(0.035);
   Hist_amwLCCdWkR4uEJdUK7rnab4->GetZaxis()->SetTitleFont(42);
   Hist_amwLCCdWkR4uEJdUK7rnab4->Draw("sameb");
      tex = new TLatex(0.96,0.936,"36.0 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.892,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.82,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t eff_graph_fx3006[13] = {
   -2.4,
   -2,
   -1.6,
   -1.2,
   -0.8,
   -0.4,
   2.775558e-16,
   0.4,
   0.8,
   1.2,
   1.6,
   2,
   2.4};
   Double_t eff_graph_fy3006[13] = {
   0.7763496,
   0.8144904,
   0.8082723,
   0.889635,
   0.9072409,
   0.8833099,
   0.9263566,
   0.884895,
   0.9016538,
   0.8914319,
   0.8244704,
   0.8199203,
   0.7554945};
   Double_t eff_graph_felx3006[13] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t eff_graph_fely3006[13] = {
   0.02314222,
   0.01162276,
   0.008521735,
   0.00561697,
   0.004679826,
   0.004728961,
   0.003818036,
   0.004715646,
   0.004623009,
   0.005593708,
   0.008269244,
   0.01150658,
   0.02461683};
   Double_t eff_graph_fehx3006[13] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t eff_graph_fehy3006[13] = {
   0.02163734,
   0.01110404,
   0.008249163,
   0.005383279,
   0.004482009,
   0.004571609,
   0.003648393,
   0.004556752,
   0.004441478,
   0.005357708,
   0.007981086,
   0.01097827,
   0.02312995};
   grae = new TGraphAsymmErrors(13,eff_graph_fx3006,eff_graph_fy3006,eff_graph_felx3006,eff_graph_fehx3006,eff_graph_fely3006,eff_graph_fehy3006);
   grae->SetName("eff_graph");
   grae->SetTitle("");
   grae->SetFillColor(19);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_eff_graph30053006 = new TH1F("Graph_Graph_eff_graph30053006","",100,-3,3);
   Graph_Graph_eff_graph30053006->SetMinimum(0);
   Graph_Graph_eff_graph30053006->SetMaximum(1.3);
   Graph_Graph_eff_graph30053006->SetDirectory(0);
   Graph_Graph_eff_graph30053006->SetStats(0);
   Graph_Graph_eff_graph30053006->SetLineStyle(0);
   Graph_Graph_eff_graph30053006->SetLineWidth(3);
   Graph_Graph_eff_graph30053006->SetMarkerStyle(20);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitle("Muon #eta (p_{T}>50)");
   Graph_Graph_eff_graph30053006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_eff_graph30053006->GetYaxis()->SetTitle("#epsilon (Mu50)");
   Graph_Graph_eff_graph30053006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_eff_graph30053006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_eff_graph30053006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_eff_graph30053006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_eff_graph30053006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_eff_graph30053006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_eff_graph30053006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_eff_graph30053006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_eff_graph30053006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_eff_graph30053006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_eff_graph30053006);
   
   grae->Draw("p");
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->Modified();
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->cd();
   Canvas_oCkLqB8A9S4GBpCxLZ7FW8->SetSelected(Canvas_oCkLqB8A9S4GBpCxLZ7FW8);
}

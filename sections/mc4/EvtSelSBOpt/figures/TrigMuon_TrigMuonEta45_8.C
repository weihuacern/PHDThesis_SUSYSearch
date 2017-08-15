void TrigMuon_TrigMuonEta45_8()
{
//=========Macro generated from canvas: Canvas_uuNYwuXeNGgmLSojWcMu56/
//=========  (Sat Feb 11 16:17:14 2017) by ROOT version6.02/04
   TCanvas *Canvas_uuNYwuXeNGgmLSojWcMu56 = new TCanvas("Canvas_uuNYwuXeNGgmLSojWcMu56", "",10,45,804,627);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetHighLightColor(2);
   Canvas_uuNYwuXeNGgmLSojWcMu56->Range(-3.857143,-0.195,3.285714,1.43);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetFillColor(0);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetBorderMode(0);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetBorderSize(2);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetGridx();
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetGridy();
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetLeftMargin(0.12);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetRightMargin(0.04);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetTopMargin(0.08);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetBottomMargin(0.12);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetFrameFillStyle(0);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetFrameBorderMode(0);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetFrameFillStyle(0);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetFrameBorderMode(0);
   
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
   0.8014019,
   0.820324,
   0.8150242,
   0.8931234,
   0.9102737,
   0.8823417,
   0.9271233,
   0.8832173,
   0.9018908,
   0.892539,
   0.8336032,
   0.8302719,
   0.7830688};
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
   0.02118096,
   0.01102805,
   0.008134568,
   0.005383889,
   0.00448706,
   0.00462692,
   0.003684541,
   0.004638067,
   0.004503096,
   0.005418804,
   0.007834145,
   0.01079217,
   0.02329318};
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
   0.01968935,
   0.01053983,
   0.007873582,
   0.005160947,
   0.004298197,
   0.004477501,
   0.003524472,
   0.004486686,
   0.00433014,
   0.005194387,
   0.007556789,
   0.01028952,
   0.0217046};
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
   Graph_eff_graph3005->GetXaxis()->SetTitle("Muon #eta (p_{T}>45)");
   Graph_eff_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_eff_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_eff_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_eff_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_eff_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_eff_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_eff_graph3005->GetYaxis()->SetTitle("#epsilon (IsoMu24||IsoTKMu24||Mu50)");
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
   
   TH1F *TrigMuonEta45_Denominator_83 = new TH1F("TrigMuonEta45_Denominator_83","TrigMuonEta45_Denominator (HT)",15,-3,3);
   TrigMuonEta45_Denominator_83->SetBinContent(0,1.495095);
   TrigMuonEta45_Denominator_83->SetBinContent(2,0.02099274);
   TrigMuonEta45_Denominator_83->SetBinContent(3,0.06660781);
   TrigMuonEta45_Denominator_83->SetBinContent(4,0.121444);
   TrigMuonEta45_Denominator_83->SetBinContent(5,0.1776045);
   TrigMuonEta45_Denominator_83->SetBinContent(6,0.218658);
   TrigMuonEta45_Denominator_83->SetBinContent(7,0.2563763);
   TrigMuonEta45_Denominator_83->SetBinContent(8,0.2685403);
   TrigMuonEta45_Denominator_83->SetBinContent(9,0.2536786);
   TrigMuonEta45_Denominator_83->SetBinContent(10,0.2334707);
   TrigMuonEta45_Denominator_83->SetBinContent(11,0.1761821);
   TrigMuonEta45_Denominator_83->SetBinContent(12,0.1211497);
   TrigMuonEta45_Denominator_83->SetBinContent(13,0.06675495);
   TrigMuonEta45_Denominator_83->SetBinContent(14,0.01854032);
   TrigMuonEta45_Denominator_83->SetEntries(71258);

   ci = TColor::GetColor("#000099");
   TrigMuonEta45_Denominator_83->SetLineColor(ci);
   TrigMuonEta45_Denominator_83->SetLineStyle(2);
   TrigMuonEta45_Denominator_83->GetXaxis()->SetTitle("MuonEta(PT > 45)");
   TrigMuonEta45_Denominator_83->GetXaxis()->SetRange(1,60);
   TrigMuonEta45_Denominator_83->GetXaxis()->SetLabelFont(42);
   TrigMuonEta45_Denominator_83->GetXaxis()->SetLabelSize(0.035);
   TrigMuonEta45_Denominator_83->GetXaxis()->SetTitleSize(0.035);
   TrigMuonEta45_Denominator_83->GetXaxis()->SetTitleFont(42);
   TrigMuonEta45_Denominator_83->GetYaxis()->SetTitle("Denominator");
   TrigMuonEta45_Denominator_83->GetYaxis()->SetLabelFont(42);
   TrigMuonEta45_Denominator_83->GetYaxis()->SetLabelSize(0.035);
   TrigMuonEta45_Denominator_83->GetYaxis()->SetTitleSize(0.035);
   TrigMuonEta45_Denominator_83->GetYaxis()->SetTitleFont(42);
   TrigMuonEta45_Denominator_83->GetZaxis()->SetLabelFont(42);
   TrigMuonEta45_Denominator_83->GetZaxis()->SetLabelSize(0.035);
   TrigMuonEta45_Denominator_83->GetZaxis()->SetTitleSize(0.035);
   TrigMuonEta45_Denominator_83->GetZaxis()->SetTitleFont(42);
   TrigMuonEta45_Denominator_83->Draw("same");
   
   TH1F *Hist_jQUpNUeaJafBeDdToankA44 = new TH1F("Hist_jQUpNUeaJafBeDdToankA44","TrigMuonEta45_Numerator (HT)",15,-3,3);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(0,0.7128703);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(2,0.01682362);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(3,0.05463998);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(4,0.09897979);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(5,0.1586227);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(6,0.1990387);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(7,0.2262115);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(8,0.24897);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(9,0.2240534);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(10,0.210565);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(11,0.1572494);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(12,0.1009908);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(13,0.05542476);
   Hist_jQUpNUeaJafBeDdToankA44->SetBinContent(14,0.01451834);
   Hist_jQUpNUeaJafBeDdToankA44->SetEntries(50541);
   Hist_jQUpNUeaJafBeDdToankA44->SetFillColor(4);

   ci = TColor::GetColor("#000099");
   Hist_jQUpNUeaJafBeDdToankA44->SetLineColor(ci);
   Hist_jQUpNUeaJafBeDdToankA44->GetXaxis()->SetTitle("MuonEta(PT > 45)");
   Hist_jQUpNUeaJafBeDdToankA44->GetXaxis()->SetRange(1,60);
   Hist_jQUpNUeaJafBeDdToankA44->GetXaxis()->SetLabelFont(42);
   Hist_jQUpNUeaJafBeDdToankA44->GetXaxis()->SetLabelSize(0.035);
   Hist_jQUpNUeaJafBeDdToankA44->GetXaxis()->SetTitleSize(0.035);
   Hist_jQUpNUeaJafBeDdToankA44->GetXaxis()->SetTitleFont(42);
   Hist_jQUpNUeaJafBeDdToankA44->GetYaxis()->SetTitle("Numerator");
   Hist_jQUpNUeaJafBeDdToankA44->GetYaxis()->SetLabelFont(42);
   Hist_jQUpNUeaJafBeDdToankA44->GetYaxis()->SetLabelSize(0.035);
   Hist_jQUpNUeaJafBeDdToankA44->GetYaxis()->SetTitleSize(0.035);
   Hist_jQUpNUeaJafBeDdToankA44->GetYaxis()->SetTitleFont(42);
   Hist_jQUpNUeaJafBeDdToankA44->GetZaxis()->SetLabelFont(42);
   Hist_jQUpNUeaJafBeDdToankA44->GetZaxis()->SetLabelSize(0.035);
   Hist_jQUpNUeaJafBeDdToankA44->GetZaxis()->SetTitleSize(0.035);
   Hist_jQUpNUeaJafBeDdToankA44->GetZaxis()->SetTitleFont(42);
   Hist_jQUpNUeaJafBeDdToankA44->Draw("sameb");
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
   0.8014019,
   0.820324,
   0.8150242,
   0.8931234,
   0.9102737,
   0.8823417,
   0.9271233,
   0.8832173,
   0.9018908,
   0.892539,
   0.8336032,
   0.8302719,
   0.7830688};
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
   0.02118096,
   0.01102805,
   0.008134568,
   0.005383889,
   0.00448706,
   0.00462692,
   0.003684541,
   0.004638067,
   0.004503096,
   0.005418804,
   0.007834145,
   0.01079217,
   0.02329318};
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
   0.01968935,
   0.01053983,
   0.007873582,
   0.005160947,
   0.004298197,
   0.004477501,
   0.003524472,
   0.004486686,
   0.00433014,
   0.005194387,
   0.007556789,
   0.01028952,
   0.0217046};
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
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitle("Muon #eta (p_{T}>45)");
   Graph_Graph_eff_graph30053006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_eff_graph30053006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_eff_graph30053006->GetYaxis()->SetTitle("#epsilon (IsoMu24||IsoTKMu24||Mu50)");
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
   Canvas_uuNYwuXeNGgmLSojWcMu56->Modified();
   Canvas_uuNYwuXeNGgmLSojWcMu56->cd();
   Canvas_uuNYwuXeNGgmLSojWcMu56->SetSelected(Canvas_uuNYwuXeNGgmLSojWcMu56);
   Canvas_uuNYwuXeNGgmLSojWcMu56->SaveAs("TrigMuon_TrigMuonEta45_8.pdf");
}

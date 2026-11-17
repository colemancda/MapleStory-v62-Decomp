/* FUN_006081a2 - 0x006081a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006081a2(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  bool bVar4;
  undefined4 *puStack_268;
  int iStack_264;
  undefined1 *puStack_260;
  int iStack_25c;
  undefined4 *puVar5;
  undefined1 auStack_254 [4];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *pwStack_228;
  int iStack_224;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  wchar_t *pwStack_210;
  int iStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *pwStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  wchar_t *pwStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *pwStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  wchar_t *pwStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *pwStack_198;
  int iStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  wchar_t *pwStack_180;
  int iStack_17c;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *pwStack_168;
  int iStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  wchar_t *pwStack_150;
  int iStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *pwStack_138;
  int iStack_134;
  
  FUN_00879bb8();
  iStack_134 = 0x514;
  pwStack_138 = L"䖉菰ﱥ蔀瓀嘊좋䫨ﾫ\xebff㌂菀ﱍ棿Ԝ";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    pwStack_138 = L"˫쀳䶃￼ᱨ\x05謀觏ﲆ";
    uVar3 = FUN_00602d25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_134 = 0x51c;
  *(undefined4 *)(extraout_ECX + 0xfc) = uVar3;
  pwStack_138 = L"䖉藰쟀ﱅ\x01";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    pwStack_138 = L"˫쀳䶃￼⑨\x05謀觏\x86\x01\xe800ꞔ￟䖉藰쟀ﱅ\x02";
    uVar3 = FUN_006064fe();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_134 = 0x524;
  *(undefined4 *)(extraout_ECX + 0x100) = uVar3;
  pwStack_138 = L"䖉藰쟀ﱅ\x02";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    pwStack_138 = L"˫쀳蚉Ą";
    uVar3 = FUN_00604d20();
  }
  *(undefined4 *)(extraout_ECX + 0x104) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_134 = 0xffffffff;
  pwStack_138 = u_UI_Basic_img_BtClose_009681d8;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uStack_13c = 0x608269;
  FUN_004184ca();
  iStack_134 = 0x578;
  pwStack_138 = L"䖉藰움ﱅ琄謉\xe8c8煲￤˫쀳赐袎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    iStack_134 = 0;
  }
  else {
    iStack_134 = 0x608288;
    iStack_134 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_138 = (wchar_t *)0x60829c;
  iVar2 = FUN_00450382();
  iStack_134 = unaff_EBP + -0x24;
  pwStack_138 = (wchar_t *)0x1;
  uStack_13c = 8;
  uStack_140 = 0x10c;
  uStack_144 = 2000;
  iStack_14c = 0x6082b9;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_14c = 0xffffffff;
  pwStack_150 = u_UI_Basic_img_BtReceive_009681a8;
  uStack_154 = 0x6082c8;
  FUN_004184ca();
  iStack_14c = 0x578;
  pwStack_150 = L"좋䶉藰웉ﱅ琅\xe807焘￤˫쀳赐邎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    iStack_14c = 0;
  }
  else {
    iStack_14c = 0x6082e2;
    iStack_14c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_150 = (wchar_t *)0x6082f6;
  iVar2 = FUN_00450382();
  iStack_14c = unaff_EBP + -0x24;
  pwStack_150 = (wchar_t *)0x1;
  uStack_154 = 0x141;
  uStack_158 = 0x35;
  uStack_15c = 0x7da;
  iStack_164 = 0x608313;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_164 = 0xffffffff;
  pwStack_168 = u_UI_Basic_img_BtDel_00968180;
  uStack_16c = 0x608322;
  FUN_004184ca();
  iStack_164 = 0x578;
  pwStack_168 = L"좋䶉藰웉ﱅ理\xe807炾￤˫쀳赐颎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    iStack_164 = 0;
  }
  else {
    iStack_164 = 0x60833c;
    iStack_164 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_168 = (wchar_t *)0x608350;
  iVar2 = FUN_00450382();
  iStack_164 = unaff_EBP + -0x24;
  pwStack_168 = (wchar_t *)0x1;
  uStack_16c = 0x141;
  uStack_170 = 0xaa;
  uStack_174 = 0x7db;
  iStack_17c = 0x608370;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_17c = 0xffffffff;
  pwStack_180 = u_UI_Basic_img_BtSend_00968158;
  uStack_184 = 0x60837f;
  FUN_004184ca();
  iStack_17c = 0x578;
  pwStack_180 = L"좋䶉藰웉ﱅ琇\xe807灡￤˫쀳赐ꂎ";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    iStack_17c = 0;
  }
  else {
    iStack_17c = 0x608399;
    iStack_17c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_180 = (wchar_t *)0x6083ad;
  iVar2 = FUN_00450382();
  iStack_17c = unaff_EBP + -0x24;
  pwStack_180 = (wchar_t *)0x1;
  uStack_184 = 0x141;
  uStack_188 = 200;
  uStack_18c = 0x7e5;
  iStack_194 = 0x6083cd;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_194 = 0xffffffff;
  pwStack_198 = u_UI_Basic_img_BtCoin_00968130;
  uStack_19c = 0x6083dc;
  FUN_004184ca();
  iStack_194 = 0x578;
  pwStack_198 = L"좋䶉藰웉ﱅ琈\xe807瀄￤˫쀳赐ꢎ";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    iStack_194 = 0;
  }
  else {
    iStack_194 = 0x6083f6;
    iStack_194 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_198 = (wchar_t *)0x60840a;
  iVar2 = FUN_00450382();
  iStack_194 = unaff_EBP + -0x24;
  pwStack_198 = (wchar_t *)0x1;
  uStack_19c = 0xe8;
  uStack_1a0 = 0x79;
  uStack_1a4 = 0x7e4;
  iStack_1ac = 0x608427;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_1ac = 0xffffffff;
  pwStack_1b0 = u_UI_Basic_img_BtMax2_00968108;
  uStack_1b4 = 0x608436;
  FUN_004184ca();
  iStack_1ac = 0x578;
  pwStack_1b0 = L"좋䶉藰웉ﱅ琉\xe807澪￤˫쀳赐낎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    iStack_1ac = 0;
  }
  else {
    iStack_1ac = 0x608450;
    iStack_1ac = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_1b0 = (wchar_t *)0x608464;
  iVar2 = FUN_00450382();
  iStack_1ac = unaff_EBP + -0x24;
  pwStack_1b0 = (wchar_t *)0x1;
  uStack_1b4 = 0x143;
  uStack_1b8 = 0xc;
  uStack_1bc = 0x7e6;
  iStack_1c4 = 0x608481;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_1c4 = 0xffffffff;
  pwStack_1c8 = u_UI_Basic_img_BtMin2_009680e0;
  uStack_1cc = 0x608490;
  FUN_004184ca();
  iStack_1c4 = 0x578;
  pwStack_1c8 = L"좋䶉藰웉ﱅ琊\xe807潐￤˫쀳赐뢎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    iStack_1c4 = 0;
  }
  else {
    iStack_1c4 = 0x6084aa;
    iStack_1c4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_1c8 = (wchar_t *)0x6084be;
  iVar2 = FUN_00450382();
  iStack_1c4 = unaff_EBP + -0x24;
  pwStack_1c8 = (wchar_t *)0x1;
  uStack_1cc = 0x143;
  uStack_1d0 = 0xc;
  uStack_1d4 = 0x7e7;
  iStack_1dc = 0x6084db;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_1dc = 0xffffffff;
  pwStack_1e0 = u_UI_Basic_img_BtSend_00968158;
  uStack_1e4 = 0x6084ea;
  FUN_004184ca();
  iStack_1dc = 0x578;
  pwStack_1e0 = L"좋䶉藰웉ﱅ琋\xe807滶￤˫쀳赐삎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 == 0) {
    iStack_1dc = 0;
  }
  else {
    iStack_1dc = 0x608504;
    iStack_1dc = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_1e0 = (wchar_t *)0x608518;
  iVar2 = FUN_00450382();
  iStack_1dc = unaff_EBP + -0x24;
  pwStack_1e0 = (wchar_t *)0x1;
  uStack_1e4 = 0x141;
  uStack_1e8 = 200;
  uStack_1ec = 0x7ef;
  iStack_1f4 = 0x608538;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_1f4 = 0xffffffff;
  pwStack_1f8 = u_UI_Basic_img_BtCoin_00968130;
  uStack_1fc = 0x608547;
  FUN_004184ca();
  iStack_1f4 = 0x578;
  pwStack_1f8 = L"좋䶉藰웉ﱅ琌\xe807溙￤˫쀳赐좎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    iStack_1f4 = 0;
  }
  else {
    iStack_1f4 = 0x608561;
    iStack_1f4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_1f8 = (wchar_t *)0x608575;
  iVar2 = FUN_00450382();
  iStack_1f4 = unaff_EBP + -0x24;
  pwStack_1f8 = (wchar_t *)0x1;
  uStack_1fc = 0xe8;
  uStack_200 = 0x79;
  uStack_204 = 0x7ee;
  iStack_20c = 0x608592;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_20c = 0xffffffff;
  pwStack_210 = u_UI_Basic_img_BtMax2_00968108;
  uStack_214 = 0x6085a1;
  FUN_004184ca();
  iStack_20c = 0x578;
  pwStack_210 = L"좋䶉藰웉ﱅ琍\xe807渿￤˫쀳赐킎";
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar2 == 0) {
    iStack_20c = 0;
  }
  else {
    iStack_20c = 0x6085bb;
    iStack_20c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_210 = (wchar_t *)0x6085cf;
  iVar2 = FUN_00450382();
  iStack_20c = unaff_EBP + -0x24;
  pwStack_210 = (wchar_t *)0x1;
  uStack_214 = 0x143;
  uStack_218 = 0xc;
  uStack_21c = 0x7f0;
  iStack_224 = 0x6085ec;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_224 = 0xffffffff;
  pwStack_228 = u_UI_Basic_img_BtMin2_009680e0;
  uStack_22c = 0x6085fb;
  FUN_004184ca();
  iStack_224 = 0x578;
  pwStack_228 = (wchar_t *)0x608603;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar2 == 0) {
    iStack_224 = 0;
  }
  else {
    iStack_224 = 0x608615;
    iStack_224 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_228 = (wchar_t *)0x608629;
  iVar2 = FUN_00450382();
  iStack_224 = unaff_EBP + -0x24;
  pwStack_228 = (wchar_t *)0x1;
  uStack_22c = 0x143;
  uStack_230 = 0xc;
  uStack_234 = 0x7f1;
  uStack_23c = 0x608646;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  uStack_23c = 0x68;
  uStack_240 = 0x60864f;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar2 == 0) {
    uStack_23c = 0;
  }
  else {
    uStack_23c = 0x608661;
    uStack_23c = FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_240 = 0x608672;
  FUN_0048b9a0();
  uStack_23c = 0;
  uStack_240 = 0xaa;
  uStack_244 = 0x17;
  uStack_248 = 6;
  uStack_24c = 1;
  uStack_250 = 0x7d1;
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 8))();
  iStack_25c = 0x60869c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_25c = unaff_EBP + -0x50;
  puStack_260 = (undefined1 *)0x6086aa;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_25c = 0x6086b6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_25c = 0x6086c0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  iStack_25c = unaff_EBP + -0x80;
  puStack_268 = &DAT_00980690;
  puStack_260 = (undefined1 *)0x6086ce;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_25c = 0x6086da;
    FUN_00878dfb();
    puStack_268 = extraout_ECX_00;
  }
  iStack_25c = 0;
  puStack_260 = (undefined1 *)(unaff_EBP + -0x50);
  iStack_264 = unaff_EBP + -0x80;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_268;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_Tab_ena_00968094);
  iVar2 = unaff_EBP + -0x110;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_260 = (undefined1 *)0x608723;
  iVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(int *)(unaff_EBP + -0x38) = iVar2;
  if (iVar2 != 0) {
    iStack_25c = 0x60873a;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_25c = 0x60874b;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_25c = 0x60875b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_25c = 0x608766;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_25c = 0x608773;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_25c = 0x60877e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_25c = 0x60878b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_25c = 0x608796;
    FUN_00878dfb();
  }
  iStack_25c = 0x60879c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iStack_25c = unaff_EBP + -0x60;
  puStack_260 = (undefined1 *)0x6087aa;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_25c = 0x6087b6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_25c = 0x6087c0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  iStack_25c = unaff_EBP + -0x70;
  puVar5 = &DAT_00980690;
  puStack_260 = (undefined1 *)0x6087ce;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_25c = 0x6087da;
    FUN_00878dfb();
    puVar5 = extraout_ECX_01;
  }
  iStack_25c = 0;
  puStack_260 = (undefined1 *)(unaff_EBP + -0x60);
  iStack_264 = unaff_EBP + -0x70;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_268;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_268 = puVar5;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_Tab_dis_00968048);
  iVar2 = unaff_EBP + -0x100;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_260 = (undefined1 *)0x608823;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar2 != 0) {
    iStack_25c = 0x608839;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_25c = 0x60884a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_25c = 0x60885a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_25c = 0x608865;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_25c = 0x608872;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_25c = 0x60887d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_25c = 0x60888a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_25c = 0x608895;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    iVar2 = *(int *)(extraout_ECX + 0x78);
    if (iVar2 == 0) {
      if ((*(int *)(unaff_EBP + -0x14) != 0) && (*(int *)(unaff_EBP + -0x14) != 1))
      goto LAB_006088b5;
LAB_006088bf:
      FUN_0087a1b0();
      iStack_25c = 0;
      iStack_264 = *(undefined4 *)(unaff_EBP + -0x14);
      puStack_268 = (undefined4 *)0x6088d4;
      puStack_260 = auStack_254;
      iStack_264 = FUN_0048b981();
      *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_260;
      puStack_268 = (undefined4 *)0x6088e0;
      FUN_00448a17();
      iStack_264 = unaff_EBP + -0x120;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_268 = (undefined4 *)0x6088f3;
      FUN_0040263d();
      puStack_268 = (undefined4 *)0x6088fa;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_260 = (undefined1 *)0x608905;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
      FUN_0087a1b0();
      iStack_25c = 0;
      iStack_264 = *(undefined4 *)(unaff_EBP + -0x14);
      puStack_268 = (undefined4 *)0x60891d;
      puStack_260 = auStack_254;
      iStack_264 = FUN_0048b981();
      *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_260;
      puStack_268 = (undefined4 *)0x608929;
      FUN_00448a17();
      iStack_264 = unaff_EBP + -0x130;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_268 = (undefined4 *)0x60893c;
      FUN_0040263d();
      puStack_268 = (undefined4 *)0x608943;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      puStack_260 = (undefined1 *)0x60894e;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
      puStack_260 = (undefined1 *)(unaff_EBP + -0x40);
      *(int **)(unaff_EBP + -0x34) = &iStack_25c;
      iStack_264 = 0x608962;
      FUN_0048bb05();
      iStack_264 = unaff_EBP + -0x10;
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_260;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      puStack_268 = (undefined4 *)0x608975;
      puStack_260 = extraout_ECX_02;
      FUN_0048bb05();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_264 = 0x608981;
      FUN_0048b99c();
      iStack_264 = 0x608988;
      FUN_004b22e5();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_25c = 0x608998;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_25c = 0x6089a3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_25c = 0x6089b3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_25c = 0x6089be;
        FUN_00878dfb();
      }
    }
    else {
      if (iVar2 == 1) {
LAB_006088b5:
        bVar4 = *(int *)(unaff_EBP + -0x14) == 2;
      }
      else {
        if (iVar2 != 2) goto LAB_006088bf;
        bVar4 = *(int *)(unaff_EBP + -0x14) == 0;
      }
      if (bVar4) goto LAB_006088bf;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    if (2 < *(int *)(unaff_EBP + -0x14)) {
      FUN_0049f842();
      *(undefined4 *)(unaff_EBP + -0xcc) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0xe8) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      *(undefined4 *)(unaff_EBP + -0xec) = 1;
      *(undefined4 *)(unaff_EBP + -0xd4) = 0xff000000;
      iStack_25c = 0x608a08;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (iVar2 != 0) {
        FUN_004a0726();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_25c = 0x608a2e;
      FUN_0045e196();
      piVar1 = *(int **)(extraout_ECX + 0xe4);
      iStack_25c = 0xe;
      puStack_260 = (undefined1 *)0x9a;
      iStack_264 = 0xd5;
      puStack_268 = (undefined4 *)0x7b;
      *(undefined4 *)(unaff_EBP + -0xc0) = 0xc;
      (**(code **)(*piVar1 + 8))(extraout_ECX,0x7d2);
      FUN_004a77eb();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iVar2 = FUN_004029b9(0xcc);
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004a8730();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00609bca(uVar3);
      *(undefined4 *)(unaff_EBP + -0xb4) = 1;
      *(undefined4 *)(unaff_EBP + -0xb0) = 1;
      uVar3 = FUN_00679e4e(unaff_EBP + -0x14,10);
      FUN_00402f41(uVar3);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(undefined4 *)(unaff_EBP + -0x90) = 100;
      *(undefined4 *)(unaff_EBP + -0x8c) = 0xa5;
      *(undefined4 *)(unaff_EBP + -0x88) = 4;
      *(undefined4 *)(unaff_EBP + -0x94) = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      (**(code **)(**(int **)(extraout_ECX + 0xec) + 8))
                (extraout_ECX,0x7d3,0x5f,0x73,0xa5,0x44,unaff_EBP + -0xb8);
      iVar2 = FUN_004029b9(0x74);
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004abf25();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_0048b9e9(uVar3);
      (**(code **)(**(int **)(extraout_ECX + 0xf4) + 0x20))
                (extraout_ECX,0x7d4,1,3,0x10b,0xd2,0x55,0);
      *(undefined4 *)(*(int *)(extraout_ECX + 0xf4) + 0x34) = 0xfa;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00608bf3();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_0045c14e();
      piVar1 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}



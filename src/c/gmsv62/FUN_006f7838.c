/* FUN_006f7838 - 0x006f7838 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f7838(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_150;
  int iStack_14c;
  undefined1 *puStack_148;
  wchar_t *pwStack_144;
  undefined4 *puStack_140;
  undefined1 auStack_13c [4];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined *puStack_12c;
  undefined4 uStack_128;
  uint local_124;
  
  FUN_00879bb8();
  local_124 = 0;
  *(uint **)(unaff_EBP + -0x14) = &local_124;
  uStack_128 = 0xffffffff;
  puStack_12c = &DAT_0097812c;
  uStack_130 = 0x6f7864;
  FUN_004184ca();
  uStack_128 = *(undefined4 *)(unaff_EBP + 8);
  puStack_12c = (undefined *)0x6f786e;
  FUN_0078a024();
  local_124 = 0x20;
  uStack_128 = 0x6f787c;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    local_124 = 0;
  }
  else {
    uVar3 = -(uint)(extraout_ECX != 0) & extraout_ECX + 8U;
    local_124 = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_128;
    puStack_12c = (undefined *)0x6f78ac;
    FUN_006f9f5a();
    puStack_12c = (undefined *)0x6f78b4;
    local_124 = FUN_006f888d();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_128 = 0x6f78c7;
  FUN_006f9ec6();
  local_124 = 0x28;
  uStack_128 = 0x6f78d0;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    local_124 = 0;
  }
  else {
    uVar3 = -(uint)(extraout_ECX != 0) & extraout_ECX + 8U;
    local_124 = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_128;
    puStack_12c = (undefined *)0x6f7903;
    FUN_006f9f5a();
    puStack_12c = (undefined *)0x6f790b;
    local_124 = FUN_006f897f();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_128 = 0x6f791e;
  FUN_006f9f1d();
  local_124 = 0x68;
  uStack_128 = 0x6f7927;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    local_124 = 0;
  }
  else {
    local_124 = 0x6f793c;
    local_124 = FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_128 = 0x6f794f;
  FUN_0048b9a0();
  local_124 = 0;
  uStack_128 = 0xfa;
  puStack_12c = (undefined *)0x17;
  uStack_130 = 6;
  uStack_134 = 1;
  uStack_138 = 3000;
  puStack_140 = (undefined4 *)0x6f796d;
  (**(code **)(**(int **)(extraout_ECX + 0x57c) + 8))();
  puStack_140 = &DAT_00980690;
  pwStack_144 = L"赓傍\xffff쟿ﱅ\x03";
  FUN_00403191();
  puStack_140 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  pwStack_144 = (wchar_t *)0x6f7991;
  FUN_00403191();
  puStack_140 = (undefined4 *)0x0;
  pwStack_144 = (wchar_t *)0x0;
  puStack_148 = (undefined1 *)(unaff_EBP + -0xe0);
  iStack_14c = unaff_EBP + -0xb0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_150;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004033a1(u_UI_UIWindow_img_PartySearch_Tab__0096b430);
  iVar2 = unaff_EBP + -0x120;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_148 = (undefined1 *)0x6f79e0;
  iVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(int *)(unaff_EBP + 8) = iVar2;
  if (iVar2 != 0) {
    puStack_140 = (undefined4 *)(unaff_EBP + 8);
    pwStack_144 = (wchar_t *)0x6f79f7;
    puStack_140 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_140 < 0) && (puStack_140 != (undefined4 *)0x80004002)) {
      pwStack_144 = (wchar_t *)0x6f7a08;
      FUN_00878dfb();
    }
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0x120);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  pwStack_144 = (wchar_t *)0x6f7a18;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    pwStack_144 = (wchar_t *)0x6f7a23;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  pwStack_144 = (wchar_t *)0x6f7a33;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    pwStack_144 = (wchar_t *)0x6f7a3e;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  pwStack_144 = (wchar_t *)0x6f7a4e;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    pwStack_144 = (wchar_t *)0x6f7a59;
    FUN_00878dfb();
  }
  puStack_140 = &DAT_00980690;
  pwStack_144 = (wchar_t *)0x6f7a65;
  FUN_00403191();
  puStack_140 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  pwStack_144 = (wchar_t *)0x6f7a75;
  FUN_00403191();
  puStack_140 = (undefined4 *)0x0;
  pwStack_144 = (wchar_t *)0x0;
  puStack_148 = (undefined1 *)(unaff_EBP + -0xc0);
  iStack_14c = unaff_EBP + -0xd0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_150;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_150 = extraout_ECX_00;
  FUN_004033a1(u_UI_UIWindow_img_PartySearch_Tab__0096b3dc);
  iVar2 = unaff_EBP + -0x100;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_148 = (undefined1 *)0x6f7ac4;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  if (iVar2 != 0) {
    puStack_140 = (undefined4 *)(unaff_EBP + -0x68);
    pwStack_144 = (wchar_t *)0x6f7ada;
    puStack_140 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_140 < 0) && (puStack_140 != (undefined4 *)0x80004002)) {
      pwStack_144 = (wchar_t *)0x6f7aeb;
      FUN_00878dfb();
    }
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0x100);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pwStack_144 = (wchar_t *)0x6f7afb;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    pwStack_144 = (wchar_t *)0x6f7b06;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  pwStack_144 = (wchar_t *)0x6f7b16;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    pwStack_144 = (wchar_t *)0x6f7b21;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  pwStack_144 = (wchar_t *)0x6f7b31;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    pwStack_144 = (wchar_t *)0x6f7b3c;
    FUN_00878dfb();
  }
  iVar2 = 0;
  do {
    puStack_140 = (undefined4 *)0x6f7b46;
    FUN_0087a1b0();
    puStack_140 = (undefined4 *)0x0;
    pwStack_144 = (wchar_t *)0x0;
    uStack_150 = 0x6f7b53;
    iStack_14c = iVar2;
    puStack_148 = auStack_13c;
    iStack_14c = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_148;
    uStack_150 = 0x6f7b5f;
    FUN_00448a17();
    iStack_14c = unaff_EBP + -0x110;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_150 = 0x6f7b72;
    FUN_0040263d();
    uStack_150 = 0x6f7b79;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_148 = (undefined1 *)0x6f7b84;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    puStack_140 = (undefined4 *)0x6f7b8f;
    FUN_0087a1b0();
    puStack_140 = (undefined4 *)0x0;
    pwStack_144 = (wchar_t *)0x0;
    uStack_150 = 0x6f7b9c;
    iStack_14c = iVar2;
    puStack_148 = auStack_13c;
    iStack_14c = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_148;
    uStack_150 = 0x6f7ba8;
    FUN_00448a17();
    iStack_14c = unaff_EBP + -0xf0;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_150 = 0x6f7bbb;
    FUN_0040263d();
    uStack_150 = 0x6f7bc2;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_148 = (undefined1 *)0x6f7bcd;
    uVar4 = FUN_004032b4();
    puStack_140 = (undefined4 *)0x1;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    puStack_148 = (undefined1 *)(unaff_EBP + -0x18);
    *(wchar_t ***)(unaff_EBP + -0x60) = &pwStack_144;
    iStack_14c = 0x6f7be1;
    FUN_0048bb05();
    iStack_14c = unaff_EBP + -0x14;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_148;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    uStack_150 = 0x6f7bf4;
    puStack_148 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_14c = 0x6f7c03;
    FUN_0048b99c();
    iStack_14c = 0x6f7c0a;
    FUN_004b22e5();
    puStack_140 = (undefined4 *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    pwStack_144 = 
    L"蕙緀倆훨᠑贀\xf085\xfffe僿䗆ჼ軨킯藿姀ٽ\xe850ᆻ\x18荃˻谏ﻴ\xffff쀳䖉覰ꡅ䖉檬棿뎘\x96䶍우ﱅ褙ꑅ忨툈믿ո"
    ;
    puStack_140 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_140 < 0) {
      pwStack_144 = 
      L"薍ﻰ\xffff왐ﱅ\xe810꾎￐삅絙倆믨᠑䌀ﮃ༂\xf48c\xfffe㏿觀끅䖉覨걅ｪ顨隳贀끍䗆᧼䖉\xe8a4࡟ￒ碻\x05匀쾋䇨킭觿\xf045삅䗆᫼ॴ좋烨핷\xebff㌂僀躍ր"
      ;
      FUN_00878dfb();
    }
    puStack_140 = (undefined4 *)(unaff_EBP + -0x110);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    pwStack_144 = 
    L"삅絙倆믨᠑䌀ﮃ༂\xf48c\xfffe㏿觀끅䖉覨걅ｪ顨隳贀끍䗆᧼䖉\xe8a4࡟ￒ碻\x05匀쾋䇨킭觿\xf045삅䗆᫼ॴ좋烨핷\xebff㌂僀躍ր"
    ;
    puStack_140 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_140 < 0) {
      pwStack_144 = L"荃˻谏ﻴ\xffff쀳䖉覰ꡅ䖉檬棿뎘\x96䶍우ﱅ褙ꑅ忨툈믿ո";
      FUN_00878dfb();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  puStack_140 = (undefined4 *)0xffffffff;
  pwStack_144 = u_UI_UIWindow_img_PartySearch_BtRe_0096b398;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  puStack_148 = (undefined1 *)0x6f7c6b;
  FUN_004184ca();
  puStack_140 = (undefined4 *)0x578;
  pwStack_144 = 
  L"䖉藰움ﱅ琚謉\xe8c8睰ￕ˫쀳赐肎\x05였ﱅ\xe819蛤ￕ䂋謄褈\xec45䖍傤䚋茠⋨Ū譐᱆⮙퇂菸䇨桐ྠ"
  ;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar2 == 0) {
    puStack_140 = (undefined4 *)0x0;
  }
  else {
    puStack_140 = (undefined4 *)0x6f7c8a;
    puStack_140 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  pwStack_144 = L"䂋謄褈\xec45䖍傤䚋茠⋨Ū譐᱆⮙퇂菸䇨桐ྠ";
  iVar5 = FUN_00450382();
  iVar2 = **(int **)(iVar5 + 4);
  *(int **)(unaff_EBP + -0x14) = *(int **)(iVar5 + 4);
  puStack_140 = (undefined4 *)(unaff_EBP + -0x5c);
  puStack_148 = (undefined1 *)(*(int *)(extraout_ECX + 0x20) + -0x22);
  pwStack_144 = (wchar_t *)0x1;
  iStack_14c = *(int *)(extraout_ECX + 0x1c) / 2 + -0x41;
  uStack_150 = 4000;
  (**(code **)(iVar2 + 0x20))(extraout_ECX);
  FUN_004184ca(u_UI_UIWindow_img_PartySearch_BtCa_0096b34c,0xffffffff);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar5 = FUN_00450382(uVar4);
  iVar2 = **(int **)(iVar5 + 4);
  *(int **)(unaff_EBP + -0x14) = *(int **)(iVar5 + 4);
  (**(code **)(iVar2 + 0x20))
            (extraout_ECX,0xfa1,*(int *)(extraout_ECX + 0x1c) / 2 + 10,
             *(int *)(extraout_ECX + 0x20) + -0x22,1,unaff_EBP + -0x5c);
  FUN_004184ca(u_UI_UIWindow_img_PartySearch_BtSt_0096b304,0xffffffff);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))
            (extraout_ECX,6000,5,*(int *)(extraout_ECX + 0x20) + -0x22,1,unaff_EBP + -0x5c);
  FUN_004184ca(u_UI_UIWindow_img_PartySearch_BtPa_0096b2bc,0xffffffff);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))
            (extraout_ECX,0x1771,0x41,*(int *)(extraout_ECX + 0x20) + -0x22,1,unaff_EBP + -0x5c);
  FUN_004184ca(u_UI_UIWindow_img_PartySearch_BtSt_0096b274,0xffffffff);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))
            (extraout_ECX,0x1772,0x7d,*(int *)(extraout_ECX + 0x20) + -0x22,1,unaff_EBP + -0x5c);
  iVar2 = FUN_00455c59(unaff_EBP + -100);
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  bVar1 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
  iVar2 = 0;
  if ((0x45 < bVar1) && (bVar1 < 0x78)) {
    iVar2 = 1;
  }
  if ((0x77 < bVar1) && (bVar1 < 0xc9)) {
    iVar2 = 2;
  }
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,7000,10,0x83,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xff777f88;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xb;
  uVar4 = FUN_00482a39(0);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b59,10,0x99,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(100);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b5a,0x53,0x99,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xffaaaaaa;
  uVar4 = FUN_00482a39(iVar2 + 0x6e);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b5b,0x53,0xad,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0x78);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b5c,0x53,0xc1,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0x82);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b5d,0x53,0xd5,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xff777f88;
  uVar4 = FUN_00482a39(200);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b5e,0xaf,0x99,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xffaaaaaa;
  uVar4 = FUN_00482a39(iVar2 + 0xd2);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b5f,0xaf,0xad,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0xdc);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b60,0xaf,0xc1,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0xe6);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b61,0xaf,0xd5,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xff777f88;
  uVar4 = FUN_00482a39(500);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b68,10,0xee,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xffaaaaaa;
  uVar4 = FUN_00482a39(iVar2 + 0x1fe);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b69,10,0x102,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0x208);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b6a,10,0x116,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xff777f88;
  uVar4 = FUN_00482a39(400);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b65,0x53,0xee,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xffaaaaaa;
  uVar4 = FUN_00482a39(iVar2 + 0x19a);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b66,0x53,0x102,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0x1a4);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b67,0x53,0x116,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xff777f88;
  uVar4 = FUN_00482a39(300);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b62,0xaf,0xee,unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -0x30) = 0xffaaaaaa;
  uVar4 = FUN_00482a39(iVar2 + 0x136);
  FUN_00414edd(uVar4,0xffffffff);
  iVar5 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar5 + 4) + 0x20))(extraout_ECX,0x1b63,0xaf,0x102,unaff_EBP + -0x44);
  uVar4 = FUN_00482a39(iVar2 + 0x140);
  FUN_00414edd(uVar4,0xffffffff);
  iVar2 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar2 = FUN_0045e1ff(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x1b64,0xaf,0x116,unaff_EBP + -0x44);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  *(undefined4 *)(unaff_EBP + -0x6c) = 1;
  *(undefined4 *)(unaff_EBP + -0x70) = 3;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar2 = FUN_0045e196(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 8))(extraout_ECX,5000,0x36,0x61,0x19,0xf,unaff_EBP + -0xa0);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar2 = FUN_0045e196(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 8))(extraout_ECX,0x1389,0x72,0x61,0x19,0xf,unaff_EBP + -0xa0)
  ;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar2 = FUN_0045e196(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 8))(extraout_ECX,8000,0x36,0x61,0x19,0xf,unaff_EBP + -0xa0);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar2 = FUN_0045e196(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 8))(extraout_ECX,0x1f41,0x72,0x61,0x19,0xf,unaff_EBP + -0xa0)
  ;
  *(undefined4 *)(unaff_EBP + -0x70) = 1;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar2 = FUN_0045e196(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 8))(extraout_ECX,0x1f42,0xf0,0x61,0x19,0xf,unaff_EBP + -0xa0)
  ;
  FUN_006f9a84();
  FUN_004b2699(*(undefined4 *)(extraout_ECX + 0x668));
  FUN_008161f1(0);
  piVar6 = (int *)FUN_006b42c2(0xffffffff);
  *piVar6 = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_0045c14e();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00457a09();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00402676();
  piVar6 = *(int **)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  piVar6 = *(int **)(unaff_EBP + -0x48);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



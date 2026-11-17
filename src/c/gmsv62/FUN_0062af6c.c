/* FUN_0062af6c - 0x0062af6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0062af6c(void)

{
  short sVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  int iVar11;
  short *psVar12;
  undefined2 *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 extraout_ECX;
  undefined **extraout_ECX_00;
  undefined **extraout_ECX_01;
  undefined **extraout_ECX_02;
  undefined **extraout_ECX_03;
  undefined **extraout_ECX_04;
  undefined **extraout_ECX_05;
  undefined **extraout_ECX_06;
  undefined **extraout_ECX_07;
  undefined **extraout_ECX_08;
  undefined **extraout_ECX_09;
  undefined **extraout_ECX_10;
  undefined **extraout_ECX_11;
  uint uVar16;
  undefined **extraout_ECX_12;
  undefined **extraout_ECX_13;
  undefined **extraout_ECX_14;
  undefined **extraout_ECX_15;
  undefined **extraout_ECX_16;
  undefined **extraout_ECX_17;
  undefined **extraout_ECX_18;
  undefined **extraout_ECX_19;
  undefined **extraout_ECX_20;
  undefined **extraout_ECX_21;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined **extraout_ECX_22;
  undefined **extraout_ECX_23;
  undefined **extraout_ECX_24;
  undefined **extraout_ECX_25;
  undefined **extraout_ECX_26;
  undefined **extraout_ECX_27;
  undefined **extraout_ECX_28;
  undefined **extraout_ECX_29;
  undefined **extraout_ECX_30;
  undefined **extraout_ECX_31;
  undefined **extraout_ECX_32;
  undefined **extraout_ECX_33;
  undefined **extraout_ECX_34;
  undefined **extraout_ECX_35;
  undefined **extraout_ECX_36;
  undefined **extraout_ECX_37;
  undefined **extraout_ECX_38;
  undefined **extraout_ECX_39;
  undefined **extraout_ECX_40;
  undefined **extraout_ECX_41;
  undefined **extraout_ECX_42;
  undefined **extraout_ECX_43;
  undefined **extraout_ECX_44;
  undefined **extraout_ECX_45;
  undefined **extraout_ECX_46;
  undefined **extraout_ECX_47;
  undefined **extraout_ECX_48;
  undefined **extraout_ECX_49;
  undefined **extraout_ECX_50;
  undefined **extraout_ECX_51;
  undefined **extraout_ECX_52;
  undefined **extraout_ECX_53;
  undefined **extraout_ECX_54;
  undefined **extraout_ECX_55;
  undefined **extraout_ECX_56;
  short *psVar17;
  int unaff_EBP;
  undefined8 uVar18;
  undefined **ppuStack_53c;
  wchar_t *pwStack_538;
  undefined **ppuStack_534;
  undefined **ppuStack_530;
  undefined **ppuStack_52c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  do {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    ppuStack_52c = (undefined **)0x62af9a;
    FUN_0062f144();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    ppuStack_52c = (undefined **)0x62afa6;
    FUN_0087a1b0();
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    pwStack_538 = *(wchar_t **)(unaff_EBP + -0x3c);
    ppuStack_53c = (undefined **)0x62afb3;
    ppuStack_534 = (undefined **)&stack0xfffffad8;
    pwStack_538 = (wchar_t *)FUN_0048b981();
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    ppuStack_53c = (undefined **)0x62afbf;
    FUN_00448a17();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x438);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    ppuStack_53c = (undefined **)0x62afd2;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62afd9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    ppuStack_534 = (undefined **)0x62afe4;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xf0) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xf0);
      ppuStack_530 = (undefined **)0x62b000;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62b011;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x438);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b021;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62b02c;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_00;
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      ppuStack_52c = (undefined **)0x62d2ed;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      ppuStack_52c = (undefined **)0x62d2f8;
      FUN_0062f177();
      ppuStack_52c = (undefined **)0x62d300;
      FUN_004027eb();
LAB_0062d365:
      uVar8 = 0;
      goto LAB_0062d2ce;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xc4a;
    ppuStack_53c = (undefined **)0x62b04a;
    ppuStack_530 = ppuVar10;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b05d;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe807瓢￞奙䶍诜\xe8f8㽚";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    ppuStack_534 = (undefined **)0x62b06e;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b07a;
    puVar9 = (undefined4 *)FUN_0062efd4();
    *puVar9 = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b08c;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b097;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_01;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xc4b;
    ppuStack_53c = (undefined **)0x62b0ac;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x338);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b0bf;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe809璀￞奙䶍诜\xe8f8㻸";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    ppuStack_534 = (undefined **)0x62b0d0;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b0dc;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 4) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x338);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b0ef;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b0fa;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_02;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xd68;
    ppuStack_53c = (undefined **)0x62b10e;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x158);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b121;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe80b琞￞奙䶍诜\xe8f8㺖";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    ppuStack_534 = (undefined **)0x62b132;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b13e;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 8) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x158);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b151;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b15c;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_03;
    }
    ppuStack_52c = (undefined **)0x1e;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xd69;
    ppuStack_53c = (undefined **)0x62b171;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b184;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe80d玻￞奙䶍诜\xe8f8㸳";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    ppuStack_534 = (undefined **)0x62b195;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b1a1;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0xc) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b1b4;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b1bf;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_04;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xd66;
    ppuStack_53c = (undefined **)0x62b1d3;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x178);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b1e6;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe80f獙￞奙䶍诜\xe8f8㷑";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    ppuStack_534 = (undefined **)0x62b1f7;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b203;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x10) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x178);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b216;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b221;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_05;
    }
    ppuStack_52c = (undefined **)0x7530;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xd67;
    ppuStack_53c = (undefined **)0x62b239;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x358);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b24c;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe811狳￞奙䶍诜\xe8f8㵫";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    ppuStack_534 = (undefined **)0x62b25d;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b269;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x14) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x358);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b27c;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b287;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_06;
    }
    ppuStack_52c = (undefined **)0x0;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)u_petAutoSpeakingLimit_00968348;
    pwStack_538 = (wchar_t *)0x62b298;
    FUN_004033a1();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x198);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b2ab;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe813犔￞\xf88b\xf759姟；䶍\xf7dc\xe8df㴆";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    ppuStack_534 = (undefined **)0x62b2bc;
    iVar6 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b2ce;
    iVar11 = FUN_0062efd4();
    *(uint *)(iVar11 + 0x9c) = (uint)(iVar6 != 0);
    ppuStack_52c = (undefined **)(unaff_EBP + -0x198);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b2e4;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b2ef;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_07;
    }
    ppuStack_52c = (undefined **)0x0;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)u_petRecallLimit_00968328;
    pwStack_538 = (wchar_t *)0x62b300;
    FUN_004033a1();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x4b8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b313;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe815爬￞\xf88b\xf759姟；䶍\xf7dc\xe8df㲞";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    ppuStack_534 = (undefined **)0x62b324;
    iVar6 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b336;
    iVar11 = FUN_0062efd4();
    *(uint *)(iVar11 + 0x98) = (uint)(iVar6 != 0);
    ppuStack_52c = (undefined **)(unaff_EBP + -0x4b8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b34c;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b357;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_08;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0x56e;
    ppuStack_53c = (undefined **)0x62b36b;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x1b8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b37e;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe817燁￞奙䶍诜\xe8f8㰹";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    ppuStack_534 = (undefined **)0x62b38f;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b39b;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x18) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x1b8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b3ae;
    ppuVar10 = (undefined **)FUN_00402bc3();
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b3b9;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_52c = extraout_ECX_09;
    }
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_52c;
    ppuStack_530 = (undefined **)u_startscript_00968310;
    ppuStack_534 = (undefined **)0x62b3c9;
    FUN_004033a1();
    ppuStack_530 = (undefined **)(unaff_EBP + -0x378);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_534 = (undefined **)0x62b3dc;
    FUN_0040263d();
    ppuStack_534 = (undefined **)0x62b3e3;
    psVar12 = (short *)FUN_004048a4();
    sVar1 = *psVar12;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (sVar1 == 8) {
      ppuStack_530 = *(undefined ***)(psVar12 + 4);
    }
    else {
      ppuStack_530 = (undefined **)&DAT_0097812c;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    ppuStack_534 = (undefined **)0x62b405;
    FUN_00454081();
    ppuStack_52c = (undefined **)(unaff_EBP + -0x378);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b415;
    ppuVar10 = (undefined **)FUN_00402bc3();
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b420;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_52c = extraout_ECX_10;
    }
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_52c;
    ppuStack_530 = (undefined **)u_endscript_009682fc;
    ppuStack_534 = (undefined **)0x62b430;
    FUN_004033a1();
    ppuStack_530 = (undefined **)(unaff_EBP + -0x1d8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_534 = (undefined **)0x62b443;
    FUN_0040263d();
    ppuStack_534 = (undefined **)0x62b44a;
    psVar12 = (short *)FUN_004048a4();
    sVar1 = *psVar12;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (sVar1 == 8) {
      ppuStack_530 = *(undefined ***)(psVar12 + 4);
    }
    else {
      ppuStack_530 = (undefined **)&DAT_0097812c;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    ppuStack_534 = (undefined **)0x62b46c;
    FUN_00454081();
    ppuStack_52c = (undefined **)(unaff_EBP + -0x1d8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b47c;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62b487;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_11;
    }
    ppuStack_530 = (undefined **)(*(int *)(unaff_EBP + -0x20) + 0x18);
    if (*ppuStack_530 != (undefined *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x28) + 0x88;
      ppuStack_534 = (undefined **)0x62b4ae;
      iVar6 = FUN_0062f888();
      if (iVar6 != 0) {
        psVar12 = *(short **)(unaff_EBP + -0x18);
        uVar16 = 0;
        psVar17 = psVar12;
        while (psVar12 != (short *)0x0) {
          if ((*(uint *)(psVar12 + -2) <= uVar16) || (*psVar17 == *(short *)(unaff_EBP + 8))) {
            if ((psVar12 != (short *)0x0) && (uVar16 < *(uint *)(psVar12 + -2))) goto LAB_0062b4ea;
            break;
          }
          uVar16 = uVar16 + 1;
          psVar17 = psVar17 + 1;
        }
      }
      ppuStack_52c = (undefined **)0xffffffff;
      ppuStack_530 = (undefined **)0x62b4e3;
      puVar13 = (undefined2 *)FUN_005ee789();
      *puVar13 = *(undefined2 *)(unaff_EBP + 8);
LAB_0062b4ea:
      ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
      ppuStack_530 = (undefined **)(*(int *)(unaff_EBP + -0x20) + 0x18);
      ppuStack_534 = (undefined **)0x62b4fd;
      FUN_0062f8dc();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      ppuStack_52c = (undefined **)0x62b509;
      FUN_005ee767();
      ppuVar10 = extraout_ECX_12;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xc48;
    ppuStack_53c = (undefined **)0x62b51d;
    ppuStack_530 = ppuVar10;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x458);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b530;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe81e瀏￞奙䶍诜\xe8f8㪇";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    ppuStack_534 = (undefined **)0x62b541;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b54d;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x1c) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x458);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b560;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b56b;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_13;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xc49;
    ppuStack_53c = (undefined **)0x62b57f;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x1f8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b592;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe820澭￞奙䶍诜\xe8f8㨥";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    ppuStack_534 = (undefined **)0x62b5a3;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b5af;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x20) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x1f8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b5c2;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b5cd;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_14;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xc4c;
    ppuStack_53c = (undefined **)0x62b5e1;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x398);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b5f4;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe822潋￞奙䶍诜\xe8f8㧃";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    ppuStack_534 = (undefined **)0x62b605;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b611;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x24) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x398);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b624;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b62f;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_15;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0x3ce;
    ppuStack_53c = (undefined **)0x62b644;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x218);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b657;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe824滨￞奙䶍诜\xe8f8㥠";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    ppuStack_534 = (undefined **)0x62b668;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b674;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x28) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x218);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b687;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b692;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_16;
    }
    ppuStack_52c = (undefined **)0x1;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xffffffff;
    pwStack_538 = (wchar_t *)&DAT_0097812c;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_53c;
    ppuStack_53c = ppuStack_530;
    FUN_00679e4e(&ppuStack_53c,0x3d0);
    iVar6 = unaff_EBP + -0x4f8;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar6);
    ppuStack_53c = (undefined **)FUN_004048a4(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    pwStack_538 = (wchar_t *)FUN_004343c5();
    ppuStack_53c = (undefined **)0x62b6e2;
    FUN_00630122();
    ppuStack_534 = (undefined **)0x62b6e7;
    uVar18 = FUN_0062d36c();
    *(int *)(*(int *)(unaff_EBP + -0x20) + 0x30) = (int)uVar18;
    *(int *)(*(int *)(unaff_EBP + -0x20) + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
    ppuStack_534 = (undefined **)(unaff_EBP + -0x4f8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = L"쒃㬌緃倆\xebe8ⓖ匀襑\xf065ﲋｪⱨ鞁儀쒋斉棰ݵ";
    ppuStack_52c = (undefined **)FUN_00402bc3();
    if ((int)ppuStack_52c < 0) {
      ppuStack_530 = (undefined **)0x62b710;
      FUN_00878dfb();
    }
    ppuStack_52c = (undefined **)0x0;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xffffffff;
    pwStack_538 = (wchar_t *)&DAT_0097812c;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_53c;
    FUN_00679e4e(&ppuStack_53c,0x775);
    iVar6 = unaff_EBP + -0x238;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0040263d(iVar6);
    ppuStack_53c = (undefined **)FUN_004048a4(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    pwStack_538 = (wchar_t *)FUN_004343c5();
    ppuStack_53c = (undefined **)0x62b75f;
    FUN_00630122();
    ppuStack_534 = (undefined **)0x62b764;
    uVar18 = FUN_0062d36c();
    *(int *)(*(int *)(unaff_EBP + -0x20) + 0x38) = (int)uVar18;
    *(int *)(*(int *)(unaff_EBP + -0x20) + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
    ppuStack_534 = (undefined **)(unaff_EBP + -0x238);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b780;
    ppuStack_52c = (undefined **)FUN_00402bc3();
    if ((int)ppuStack_52c < 0) {
      ppuStack_530 = (undefined **)0x62b78d;
      FUN_00878dfb();
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0x718;
    ppuStack_53c = (undefined **)0x62b7a1;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x3b8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b7b4;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe82a涋￞奙䶍诜\xe8f8㠃";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    ppuStack_534 = (undefined **)0x62b7c5;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b7d1;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x88) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x3b8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b7e7;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b7f2;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_17;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0x107e;
    ppuStack_53c = (undefined **)0x62b806;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -600);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_538 = (wchar_t *)0x62b819;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe82c洦￞奙䶍诜\xe8f8㞞";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    ppuStack_534 = (undefined **)0x62b82a;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b836;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x44) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -600);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_530 = (undefined **)0x62b849;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62b854;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_18;
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0x3b4;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x478);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    ppuStack_53c = (undefined **)0x62b87c;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62b883;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    ppuStack_534 = (undefined **)0x62b88e;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xe4) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xe4);
      ppuStack_530 = (undefined **)0x62b8aa;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62b8bb;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x478);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    ppuStack_530 = (undefined **)0x62b8cb;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62b8d6;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_19;
    }
    if (*(int *)(unaff_EBP + -0x50) != 0) {
      ppuVar10 = (undefined **)0x0;
      while( true ) {
        ppuStack_52c = (undefined **)0x62b8e9;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)&DAT_0097812c;
        pwStack_538 = (wchar_t *)0x62b8f7;
        ppuStack_534 = ppuVar10;
        ppuStack_530 = (undefined **)&stack0xfffffad8;
        ppuStack_534 = (undefined **)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        pwStack_538 = (wchar_t *)0x62b903;
        FUN_004033a1();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x278);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        pwStack_538 = (wchar_t *)0x62b916;
        FUN_0040263d();
        pwStack_538 = 
        L"왐ﱅ\xe832語￠奙ｪ赐걍嶉\xe8ac蝊￢薍ﶈ\xffff왐ﱅ\xe834牼￝쌻絙倆ꧨⓔ謀걅쌻⹴ᠸ⩴䖍催䖋櫠跿䁈曨\xe39c诿\xe8c8阖￞䶍욬ﱅ\xe830锺￞\xe947ｚ\xffff䶍욬ﱅ\xe830锨￞兓쒋斉棰ే"
        ;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        ppuStack_534 = (undefined **)0x62b927;
        ppuStack_530 = (undefined **)FUN_004343c5();
        ppuStack_52c = (undefined **)0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        ppuStack_534 = (undefined **)0x62b937;
        FUN_00454081();
        ppuStack_52c = (undefined **)(unaff_EBP + -0x278);
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        ppuStack_530 = (undefined **)0x62b947;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62b952;
          FUN_00878dfb();
        }
        if ((*(char **)(unaff_EBP + -0x54) == (char *)0x0) ||
           (**(char **)(unaff_EBP + -0x54) == '\0')) break;
        ppuStack_52c = (undefined **)(unaff_EBP + -0x54);
        ppuStack_530 = (undefined **)0xffffffff;
        ppuStack_534 = (undefined **)0x62b96e;
        FUN_004655d4();
        ppuStack_530 = (undefined **)0x62b975;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        ppuStack_52c = (undefined **)0x62b981;
        FUN_00414ebb();
        ppuVar10 = (undefined **)((int)ppuVar10 + 1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      ppuStack_52c = (undefined **)0x62b993;
      FUN_00414ebb();
      ppuVar10 = extraout_ECX_20;
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xc47;
    ppuStack_53c = (undefined **)0x62b9a7;
    ppuStack_530 = ppuVar10;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x3d8);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    pwStack_538 = (wchar_t *)0x62b9ba;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe836殅￞奙䶍诜\xe8f8㗽";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    ppuStack_534 = (undefined **)0x62b9cb;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62b9d7;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x2c) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x3d8);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    ppuStack_530 = (undefined **)0x62b9ea;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62b9f5;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_21;
    }
    if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x2c) != 0) && (*(int *)(unaff_EBP + -0x3c) == 1)) {
      bVar3 = false;
      ppuStack_530 = (undefined **)(*(int *)(unaff_EBP + -0x28) + 0xd0);
      for (uVar16 = 0;
          (puVar2 = *ppuStack_530, puVar2 != (undefined *)0x0 && (uVar16 < *(uint *)(puVar2 + -4)));
          uVar16 = uVar16 + 1) {
        if (*(short *)(puVar2 + uVar16 * 2) == *(short *)(unaff_EBP + 8)) {
          bVar3 = true;
        }
      }
      if (!bVar3) {
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)0x62ba36;
        puVar13 = (undefined2 *)FUN_005ee789();
        ppuStack_530 = (undefined **)CONCAT22(extraout_var,*(undefined2 *)(unaff_EBP + 8));
        *puVar13 = *(undefined2 *)(unaff_EBP + 8);
      }
    }
    ppuStack_52c = (undefined **)0x0;
    pwStack_538 = (wchar_t *)&ppuStack_530;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)0xf99;
    ppuStack_53c = (undefined **)0x62ba51;
    FUN_00679e4e();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x298);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    pwStack_538 = (wchar_t *)0x62ba64;
    FUN_0040263d();
    pwStack_538 = (wchar_t *)0x62ba6b;
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    ppuStack_534 = (undefined **)0x62ba75;
    iVar6 = FUN_00412550();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x298);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    pwStack_538 = (wchar_t *)0x62ba8d;
    ppuStack_52c = (undefined **)FUN_00402bc3();
    if ((int)ppuStack_52c < 0) {
      ppuStack_530 = (undefined **)0x62ba9a;
      FUN_00878dfb();
    }
    if (iVar6 == 0) {
      ppuStack_52c = (undefined **)0x0;
      ppuStack_530 = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
      pwStack_538 = (wchar_t *)0xf72;
      ppuStack_53c = (undefined **)&ppuStack_534;
      FUN_00679e4e();
      pwStack_538 = (wchar_t *)(unaff_EBP + -0x4d8);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      ppuStack_53c = (undefined **)0x62bae2;
      FUN_0040263d();
      ppuStack_53c = (undefined **)0x62bae9;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      ppuStack_534 = (undefined **)0x62baf4;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0xd4) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x70) = 0;
      if (iVar6 != 0) {
        ppuStack_52c = (undefined **)(unaff_EBP + -0xd4);
        ppuStack_530 = (undefined **)0x62bb10;
        ppuStack_52c = (undefined **)FUN_00404b30();
        if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
          ppuStack_530 = (undefined **)0x62bb21;
          FUN_00878dfb();
        }
      }
      ppuStack_52c = (undefined **)(unaff_EBP + -0x4d8);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      ppuStack_530 = (undefined **)0x62bb31;
      ppuVar7 = (undefined **)FUN_00402bc3();
      ppuVar10 = ppuStack_52c;
      if ((int)ppuVar7 < 0) {
        ppuStack_530 = (undefined **)0x62bb3c;
        ppuStack_52c = ppuVar7;
        FUN_00878dfb();
        ppuVar10 = extraout_ECX_22;
      }
      if (*(int *)(unaff_EBP + -0x70) != 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        while( true ) {
          ppuStack_52c = (undefined **)0x62bb53;
          FUN_0087a1b0();
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_534 = *(undefined ***)(unaff_EBP + -0x1c);
          pwStack_538 = (wchar_t *)0x62bb60;
          ppuStack_530 = (undefined **)&stack0xfffffad8;
          ppuStack_534 = (undefined **)FUN_00412335();
          *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
          pwStack_538 = (wchar_t *)0x62bb6c;
          FUN_004033a1();
          ppuStack_534 = (undefined **)(unaff_EBP + -0x2b8);
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          pwStack_538 = (wchar_t *)0x62bb7f;
          FUN_0040263d();
          pwStack_538 = (wchar_t *)0x62bb86;
          ppuStack_530 = (undefined **)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          ppuStack_534 = (undefined **)0x62bb90;
          uVar8 = FUN_00412550();
          *(undefined4 *)(unaff_EBP + -0x5c) = uVar8;
          ppuStack_534 = (undefined **)(unaff_EBP + -0x2b8);
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          pwStack_538 = L"쒃㬌緃倆䯨ⓒ㤀ꑝ踏\x81";
          ppuStack_52c = (undefined **)FUN_00402bc3();
          ppuVar10 = extraout_ECX_23;
          if ((int)ppuStack_52c < 0) {
            ppuStack_530 = (undefined **)0x62bbb0;
            FUN_00878dfb();
            ppuVar10 = extraout_ECX_24;
          }
          if (*(int *)(unaff_EBP + -0x5c) < 1) break;
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62bbc6;
          puVar9 = (undefined4 *)FUN_0045f1e3();
          *puVar9 = *(undefined4 *)(unaff_EBP + -0x5c);
          *(undefined4 *)(unaff_EBP + -0x7c) = 0;
          ppuStack_52c = (undefined **)(unaff_EBP + -0x7c);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x5c);
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          ppuStack_534 = (undefined **)0x62bbe5;
          FUN_0062fa3b();
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62bbef;
          puVar13 = (undefined2 *)FUN_005ee789();
          *puVar13 = *(undefined2 *)(unaff_EBP + 8);
          ppuStack_52c = (undefined **)(unaff_EBP + -0x7c);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x5c);
          ppuStack_534 = (undefined **)0x62bc09;
          FUN_0062fa8f();
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x5c);
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
          ppuStack_534 = (undefined **)0x62bc23;
          FUN_0055a65a();
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          ppuStack_52c = (undefined **)0x62bc2f;
          FUN_005ee767();
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        }
      }
      ppuStack_52c = (undefined **)0x0;
      ppuStack_530 = (undefined **)0x0;
      ppuStack_53c = (undefined **)&ppuStack_534;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
      pwStack_538 = (wchar_t *)0xf73;
      ppuStack_534 = ppuVar10;
      FUN_00679e4e();
      pwStack_538 = (wchar_t *)(unaff_EBP + -0x3f8);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      ppuStack_53c = (undefined **)0x62bc62;
      FUN_0040263d();
      ppuStack_53c = (undefined **)0x62bc69;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      ppuStack_534 = (undefined **)0x62bc74;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0xdc) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x88) = 0;
      if (iVar6 != 0) {
        ppuStack_52c = (undefined **)(unaff_EBP + -0xdc);
        ppuStack_530 = (undefined **)0x62bc96;
        ppuStack_52c = (undefined **)FUN_00404b30();
        if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
          ppuStack_530 = (undefined **)0x62bca7;
          FUN_00878dfb();
        }
      }
      ppuStack_52c = (undefined **)(unaff_EBP + -0x3f8);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      ppuStack_530 = (undefined **)0x62bcb7;
      ppuVar7 = (undefined **)FUN_00402bc3();
      ppuVar10 = ppuStack_52c;
      if ((int)ppuVar7 < 0) {
        ppuStack_530 = (undefined **)0x62bcc2;
        ppuStack_52c = ppuVar7;
        FUN_00878dfb();
        ppuVar10 = extraout_ECX_25;
      }
      if (*(int *)(unaff_EBP + -0x88) != 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        while( true ) {
          ppuStack_52c = (undefined **)0x62bcd9;
          FUN_0087a1b0();
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_534 = *(undefined ***)(unaff_EBP + -0x1c);
          pwStack_538 = (wchar_t *)0x62bce6;
          ppuStack_530 = (undefined **)&stack0xfffffad8;
          ppuStack_534 = (undefined **)FUN_00412335();
          *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
          pwStack_538 = (wchar_t *)0x62bcf2;
          FUN_004033a1();
          ppuStack_534 = (undefined **)(unaff_EBP + -0x2d8);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          pwStack_538 = (wchar_t *)0x62bd08;
          FUN_0040263d();
          pwStack_538 = (wchar_t *)0x62bd0f;
          ppuStack_530 = (undefined **)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          ppuStack_534 = (undefined **)0x62bd19;
          uVar8 = FUN_00412550();
          *(undefined4 *)(unaff_EBP + -0x58) = uVar8;
          ppuStack_534 = (undefined **)(unaff_EBP + -0x2d8);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          pwStack_538 = L"쒃㬌緃倆싨ⓐ㤀ꡝ踏\x81";
          ppuStack_52c = (undefined **)FUN_00402bc3();
          ppuVar10 = extraout_ECX_26;
          if ((int)ppuStack_52c < 0) {
            ppuStack_530 = (undefined **)0x62bd39;
            FUN_00878dfb();
            ppuVar10 = extraout_ECX_27;
          }
          if (*(int *)(unaff_EBP + -0x58) < 1) break;
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62bd52;
          puVar9 = (undefined4 *)FUN_0045f1e3();
          *puVar9 = *(undefined4 *)(unaff_EBP + -0x58);
          *(undefined4 *)(unaff_EBP + -0x6c) = 0;
          ppuStack_52c = (undefined **)(unaff_EBP + -0x6c);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          ppuStack_534 = (undefined **)0x62bd71;
          FUN_0062fa3b();
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62bd7b;
          puVar13 = (undefined2 *)FUN_005ee789();
          *puVar13 = *(undefined2 *)(unaff_EBP + 8);
          ppuStack_52c = (undefined **)(unaff_EBP + -0x6c);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x58);
          ppuStack_534 = (undefined **)0x62bd95;
          FUN_0062fa8f();
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x58);
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
          ppuStack_534 = (undefined **)0x62bdaf;
          FUN_0055a65a();
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          ppuStack_52c = (undefined **)0x62bdbb;
          FUN_005ee767();
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        }
      }
      ppuStack_52c = (undefined **)0x0;
      ppuStack_530 = (undefined **)0x0;
      ppuStack_53c = (undefined **)&ppuStack_534;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
      pwStack_538 = (wchar_t *)0xf74;
      ppuStack_534 = ppuVar10;
      FUN_00679e4e();
      pwStack_538 = (wchar_t *)(unaff_EBP + -0x498);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      ppuStack_53c = (undefined **)0x62bdeb;
      FUN_0040263d();
      ppuStack_53c = (undefined **)0x62bdf2;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      ppuStack_534 = (undefined **)0x62bdfd;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0xec) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x84) = 0;
      if (iVar6 != 0) {
        ppuStack_52c = (undefined **)(unaff_EBP + -0xec);
        ppuStack_530 = (undefined **)0x62be1f;
        ppuStack_52c = (undefined **)FUN_00404b30();
        if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
          ppuStack_530 = (undefined **)0x62be30;
          FUN_00878dfb();
        }
      }
      ppuStack_52c = (undefined **)(unaff_EBP + -0x498);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      ppuStack_530 = (undefined **)0x62be40;
      ppuVar7 = (undefined **)FUN_00402bc3();
      ppuVar10 = ppuStack_52c;
      if ((int)ppuVar7 < 0) {
        ppuStack_530 = (undefined **)0x62be4b;
        ppuStack_52c = ppuVar7;
        FUN_00878dfb();
        ppuVar10 = extraout_ECX_28;
      }
      if (*(int *)(unaff_EBP + -0x84) != 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        while( true ) {
          ppuStack_52c = (undefined **)0x62be62;
          FUN_0087a1b0();
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_534 = *(undefined ***)(unaff_EBP + -0x1c);
          pwStack_538 = (wchar_t *)0x62be6f;
          ppuStack_530 = (undefined **)&stack0xfffffad8;
          ppuStack_534 = (undefined **)FUN_00412335();
          *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
          pwStack_538 = (wchar_t *)0x62be7b;
          FUN_004033a1();
          ppuStack_534 = (undefined **)(unaff_EBP + -0x2f8);
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          pwStack_538 = (wchar_t *)0x62be91;
          FUN_0040263d();
          pwStack_538 = 
          L"왐ﱅ\xe84c暮￞\xf88b薍ﴈ\xffff왐ﱅ\xe84a洏￝쒃㬌緃倆㫨Ⓩ㬀࿻邎";
          ppuStack_530 = (undefined **)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          ppuStack_534 = (undefined **)0x62bea2;
          iVar6 = FUN_00412550();
          ppuStack_534 = (undefined **)(unaff_EBP + -0x2f8);
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          pwStack_538 = L"쒃㬌緃倆㫨Ⓩ㬀࿻邎";
          ppuStack_52c = (undefined **)FUN_00402bc3();
          ppuVar10 = extraout_ECX_29;
          if ((int)ppuStack_52c < 0) {
            ppuStack_530 = (undefined **)0x62bec1;
            FUN_00878dfb();
            ppuVar10 = extraout_ECX_30;
          }
          if (iVar6 < 1) break;
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62bed9;
          piVar14 = (int *)FUN_0045f1e3();
          *piVar14 = iVar6;
          *(undefined4 *)(unaff_EBP + -0x80) = 0;
          ppuStack_52c = (undefined **)(unaff_EBP + -0x80);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x4d;
          *(int *)(unaff_EBP + -0x18) = iVar6;
          ppuStack_534 = (undefined **)0x62befb;
          FUN_0062f888();
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62bf05;
          puVar13 = (undefined2 *)FUN_005ee789();
          *puVar13 = *(undefined2 *)(unaff_EBP + 8);
          ppuStack_52c = (undefined **)(unaff_EBP + -0x80);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x18);
          *(int *)(unaff_EBP + -0x18) = iVar6;
          ppuStack_534 = (undefined **)0x62bf25;
          FUN_0062f8dc();
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
          *(int *)(unaff_EBP + -0x10) = iVar6;
          ppuStack_534 = (undefined **)0x62bf45;
          FUN_0062ffdf();
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          ppuStack_52c = (undefined **)0x62bf51;
          FUN_005ee767();
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        }
      }
      ppuStack_52c = *(undefined ***)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      if (ppuStack_52c != (undefined **)0x0) {
        ppuStack_530 = (undefined **)0x62bf6d;
        (**(code **)(*ppuStack_52c + 8))();
        ppuVar10 = extraout_ECX_31;
      }
      ppuStack_52c = *(undefined ***)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (ppuStack_52c != (undefined **)0x0) {
        ppuStack_530 = (undefined **)0x62bf81;
        (**(code **)(*ppuStack_52c + 8))();
        ppuVar10 = extraout_ECX_32;
      }
      ppuStack_52c = *(undefined ***)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (ppuStack_52c != (undefined **)0x0) {
        ppuStack_530 = (undefined **)0x62bf92;
        (**(code **)(*ppuStack_52c + 8))();
        ppuVar10 = extraout_ECX_33;
      }
    }
    else {
      ppuStack_52c = (undefined **)0xffffffff;
      ppuStack_530 = (undefined **)0x62baae;
      puVar13 = (undefined2 *)FUN_005ee789();
      ppuVar10 = (undefined **)CONCAT22(extraout_var_00,*(undefined2 *)(unaff_EBP + 8));
      *puVar13 = *(undefined2 *)(unaff_EBP + 8);
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0xc33;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x418);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    ppuStack_53c = (undefined **)0x62bfba;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62bfc1;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    ppuStack_534 = (undefined **)0x62bfcc;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xb0) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xb0);
      ppuStack_530 = (undefined **)0x62bfe8;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62bff9;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x418);
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    ppuStack_530 = (undefined **)0x62c009;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62c014;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_34;
    }
    if (*(int *)(unaff_EBP + -0x4c) != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        ppuStack_52c = (undefined **)0x62c024;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_534 = *(undefined ***)(unaff_EBP + -0x1c);
        pwStack_538 = (wchar_t *)0x62c031;
        ppuStack_530 = (undefined **)&stack0xfffffad8;
        ppuStack_534 = (undefined **)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        pwStack_538 = (wchar_t *)0x62c03d;
        FUN_004033a1();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x318);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        pwStack_538 = (wchar_t *)0x62c050;
        FUN_0040263d();
        pwStack_538 = 
        L"왐ﱅ\xe853擯￞\xf88b薍ﳨ\xffff왐ﱅ\xe851歐￝쒃㬌緃倆篨Ⓧ㬀系謔\xe045ｪ䢍\xe848ㅒ￣䗿觤\xeb38厄兓쒋斉棰୘"
        ;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        ppuStack_534 = (undefined **)0x62c061;
        iVar6 = FUN_00412550();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x318);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        pwStack_538 = 
        L"쒃㬌緃倆篨Ⓧ㬀系謔\xe045ｪ䢍\xe848ㅒ￣䗿觤\xeb38厄兓쒋斉棰୘";
        ppuStack_52c = (undefined **)FUN_00402bc3();
        ppuVar10 = extraout_ECX_35;
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c080;
          FUN_00878dfb();
          ppuVar10 = extraout_ECX_36;
        }
        if (iVar6 < 0) break;
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)0x62c091;
        piVar14 = (int *)FUN_0045f1e3();
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        *piVar14 = iVar6;
      }
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0xb58;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x518);
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    ppuStack_53c = (undefined **)0x62c0c0;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62c0c7;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    ppuStack_534 = (undefined **)0x62c0d2;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xd8) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xd8);
      ppuStack_530 = (undefined **)0x62c0ee;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62c0ff;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x518);
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    ppuStack_530 = (undefined **)0x62c10f;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62c11a;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_37;
    }
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x30) == 0) {
          ppuStack_52c = (undefined **)0x80004003;
          ppuStack_530 = (undefined **)0x62c135;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x62c13d;
        uVar16 = FUN_0040cf4d();
        ppuVar10 = extraout_ECX_38;
        if (uVar16 <= *(uint *)(unaff_EBP + -0x18)) break;
        ppuStack_52c = (undefined **)0x62c14e;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0x0;
        ppuStack_530 = (undefined **)0x0;
        pwStack_538 = *(wchar_t **)(unaff_EBP + -0x18);
        ppuStack_53c = (undefined **)0x62c15b;
        ppuStack_534 = (undefined **)&stack0xfffffad8;
        pwStack_538 = (wchar_t *)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
        ppuStack_53c = (undefined **)0x62c167;
        FUN_004033a1();
        pwStack_538 = (wchar_t *)(unaff_EBP + -0x128);
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        ppuStack_53c = (undefined **)0x62c17a;
        FUN_0040263d();
        ppuStack_53c = (undefined **)0x62c181;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        ppuStack_534 = (undefined **)0x62c18c;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xb8) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x74) = 0;
        if (iVar6 != 0) {
          ppuStack_52c = (undefined **)(unaff_EBP + -0xb8);
          ppuStack_530 = (undefined **)0x62c1a8;
          ppuStack_52c = (undefined **)FUN_00404b30();
          if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
            ppuStack_530 = (undefined **)0x62c1b9;
            FUN_00878dfb();
          }
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x128);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        ppuStack_530 = (undefined **)0x62c1c9;
        ppuVar10 = (undefined **)FUN_00402bc3();
        ppuStack_530 = ppuStack_52c;
        if ((int)ppuVar10 < 0) {
          ppuStack_530 = (undefined **)0x62c1d4;
          ppuStack_52c = ppuVar10;
          FUN_00878dfb();
          ppuStack_530 = extraout_ECX_39;
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x920;
        ppuStack_53c = (undefined **)0x62c1e8;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x148);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        pwStack_538 = (wchar_t *)0x62c1fb;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62c202;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        ppuStack_534 = (undefined **)0x62c20c;
        uVar5 = FUN_00412550();
        *(undefined2 *)(unaff_EBP + -0xf8) = uVar5;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x148);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        pwStack_538 = (wchar_t *)0x62c223;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c230;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0xc4d;
        ppuStack_53c = (undefined **)0x62c244;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x168);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        pwStack_538 = (wchar_t *)0x62c257;
        FUN_0040263d();
        pwStack_538 = 
        L"왐ﱅ\xe85f拨￞\xf88b薍ﺘ\xffff왐ﱅ\xe85b楉￝쒃㬌緃倆瓨Ⓥ謀\xe045ｪ䢍\xe84c⽼"
        ;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x5f;
        ppuStack_534 = (undefined **)0x62c268;
        uVar8 = FUN_00412550();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x168);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        pwStack_538 = L"쒃㬌緃倆瓨Ⓥ謀\xe045ｪ䢍\xe84c⽼";
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c287;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)0x62c294;
        puVar9 = (undefined4 *)FUN_0062f210();
        *puVar9 = *(undefined4 *)(unaff_EBP + -0xf8);
        puVar9[1] = uVar8;
        ppuStack_52c = *(undefined ***)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        if (ppuStack_52c != (undefined **)0x0) {
          ppuStack_530 = (undefined **)0x62c2b0;
          (**(code **)(*ppuStack_52c + 8))();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      }
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0xc43;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x188);
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    ppuStack_53c = (undefined **)0x62c2e0;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62c2e7;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    ppuStack_534 = (undefined **)0x62c2f2;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xa4) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xa4);
      ppuStack_530 = (undefined **)0x62c30e;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62c31f;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x188);
    *(undefined1 *)(unaff_EBP + -4) = 99;
    ppuStack_530 = (undefined **)0x62c32f;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62c33a;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_40;
    }
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x40) == 0) {
          ppuStack_52c = (undefined **)0x80004003;
          ppuStack_530 = (undefined **)0x62c355;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x62c35d;
        uVar16 = FUN_0040cf4d();
        ppuVar10 = extraout_ECX_41;
        if (uVar16 <= *(uint *)(unaff_EBP + -0x1c)) break;
        ppuStack_52c = (undefined **)0x62c36e;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0x0;
        ppuStack_530 = (undefined **)0x0;
        pwStack_538 = *(wchar_t **)(unaff_EBP + -0x1c);
        ppuStack_53c = (undefined **)0x62c37b;
        ppuStack_534 = (undefined **)&stack0xfffffad8;
        pwStack_538 = (wchar_t *)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
        ppuStack_53c = (undefined **)0x62c387;
        FUN_004033a1();
        pwStack_538 = (wchar_t *)(unaff_EBP + -0x1a8);
        *(undefined1 *)(unaff_EBP + -4) = 99;
        ppuStack_53c = (undefined **)0x62c39a;
        FUN_0040263d();
        ppuStack_53c = (undefined **)0x62c3a1;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x65;
        ppuStack_534 = (undefined **)0x62c3ac;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xc0) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
        if (iVar6 != 0) {
          ppuStack_52c = (undefined **)(unaff_EBP + -0xc0);
          ppuStack_530 = (undefined **)0x62c3c8;
          ppuStack_52c = (undefined **)FUN_00404b30();
          if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
            ppuStack_530 = (undefined **)0x62c3d9;
            FUN_00878dfb();
          }
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x1a8);
        *(undefined1 *)(unaff_EBP + -4) = 0x67;
        ppuStack_530 = (undefined **)0x62c3e9;
        ppuVar10 = (undefined **)FUN_00402bc3();
        ppuStack_530 = ppuStack_52c;
        if ((int)ppuVar10 < 0) {
          ppuStack_530 = (undefined **)0x62c3f4;
          ppuStack_52c = ppuVar10;
          FUN_00878dfb();
          ppuStack_530 = extraout_ECX_42;
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x920;
        ppuStack_53c = (undefined **)0x62c408;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x1c8);
        *(undefined1 *)(unaff_EBP + -4) = 0x67;
        pwStack_538 = (wchar_t *)0x62c41b;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62c422;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x69;
        ppuStack_534 = (undefined **)0x62c42c;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x94) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x1c8);
        *(undefined1 *)(unaff_EBP + -4) = 0x67;
        pwStack_538 = (wchar_t *)0x62c442;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c44f;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x3cf;
        ppuStack_53c = (undefined **)0x62c463;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x1e8);
        *(undefined1 *)(unaff_EBP + -4) = 0x67;
        pwStack_538 = (wchar_t *)0x62c476;
        FUN_0040263d();
        pwStack_538 = 
        L"왐ﱅ\xe86b惉￞薉ｰ\xffff薍︘\xffff왐ﱅ\xe867朦￝쒃㬌緃倆凨Ⓣ謀\xe045ｪ䢍\xe850뢳\xffff綃Ǆ趋ｬ\xffffࢉ趋ｰ\xffff䢉甄襣\xe85d䖋跘ꂸ"
        ;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x6b;
        ppuStack_534 = (undefined **)0x62c487;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x90) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x1e8);
        *(undefined1 *)(unaff_EBP + -4) = 0x67;
        pwStack_538 = 
        L"쒃㬌緃倆凨Ⓣ謀\xe045ｪ䢍\xe850뢳\xffff綃Ǆ趋ｬ\xffffࢉ趋ｰ\xffff䢉甄襣\xe85d䖋跘ꂸ"
        ;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c4aa;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)0x62c4b7;
        puVar9 = (undefined4 *)FUN_00627d6a();
        iVar6 = *(int *)(unaff_EBP + -0x3c);
        *puVar9 = *(undefined4 *)(unaff_EBP + -0x94);
        puVar9[1] = *(undefined4 *)(unaff_EBP + -0x90);
        if (iVar6 == 1) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x6c;
          ppuStack_534 = (undefined **)0x62c4f0;
          iVar6 = FUN_0062fa3b();
          if (iVar6 != 0) {
            for (uVar16 = 0;
                (*(int *)(unaff_EBP + -0x18) != 0 &&
                (uVar16 < *(uint *)(*(int *)(unaff_EBP + -0x18) + -4))); uVar16 = uVar16 + 1) {
            }
          }
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62c50f;
          puVar13 = (undefined2 *)FUN_005ee789();
          *puVar13 = *(undefined2 *)(unaff_EBP + 8);
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x94);
          ppuStack_534 = (undefined **)0x62c528;
          FUN_0062fa8f();
          *(undefined1 *)(unaff_EBP + -4) = 0x67;
LAB_0062c597:
          ppuStack_52c = (undefined **)0x62c59c;
          FUN_005ee767();
        }
        else if (*(int *)(unaff_EBP + -0x3c) == 0) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x6d;
          ppuStack_534 = (undefined **)0x62c558;
          iVar6 = FUN_0062fa3b();
          if (iVar6 != 0) {
            for (uVar16 = 0;
                (*(int *)(unaff_EBP + -0x18) != 0 &&
                (uVar16 < *(uint *)(*(int *)(unaff_EBP + -0x18) + -4))); uVar16 = uVar16 + 1) {
            }
          }
          ppuStack_52c = (undefined **)0xffffffff;
          ppuStack_530 = (undefined **)0x62c577;
          puVar13 = (undefined2 *)FUN_005ee789();
          *puVar13 = *(undefined2 *)(unaff_EBP + 8);
          ppuStack_52c = (undefined **)(unaff_EBP + -0x18);
          ppuStack_530 = (undefined **)(unaff_EBP + -0x94);
          ppuStack_534 = (undefined **)0x62c590;
          FUN_0062fa8f();
          *(undefined1 *)(unaff_EBP + -4) = 0x67;
          goto LAB_0062c597;
        }
        ppuStack_52c = *(undefined ***)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 99;
        if (ppuStack_52c != (undefined **)0x0) {
          ppuStack_530 = (undefined **)0x62c5ad;
          (**(code **)(*ppuStack_52c + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0x56f;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x208);
    *(undefined1 *)(unaff_EBP + -4) = 99;
    ppuStack_53c = (undefined **)0x62c5dd;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62c5e4;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    ppuStack_534 = (undefined **)0x62c5ef;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xe0) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xe0);
      ppuStack_530 = (undefined **)0x62c60b;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62c61c;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x208);
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    ppuStack_530 = (undefined **)0x62c62c;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62c637;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_43;
    }
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      uVar16 = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          ppuStack_52c = (undefined **)0x80004003;
          ppuStack_530 = (undefined **)0x62c651;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x62c659;
        uVar15 = FUN_0040cf4d();
        ppuVar10 = extraout_ECX_44;
        if (uVar15 <= uVar16) break;
        ppuStack_52c = (undefined **)0x62c669;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0x0;
        ppuStack_530 = (undefined **)0x0;
        ppuStack_53c = (undefined **)0x62c674;
        pwStack_538 = (wchar_t *)uVar16;
        ppuStack_534 = (undefined **)&stack0xfffffad8;
        pwStack_538 = (wchar_t *)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
        ppuStack_53c = (undefined **)0x62c680;
        FUN_004033a1();
        pwStack_538 = (wchar_t *)(unaff_EBP + -0x228);
        *(undefined1 *)(unaff_EBP + -4) = 0x71;
        ppuStack_53c = (undefined **)0x62c693;
        FUN_0040263d();
        ppuStack_53c = (undefined **)0x62c69a;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        ppuStack_534 = (undefined **)0x62c6a5;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -200) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x8c) = 0;
        if (iVar6 != 0) {
          ppuStack_52c = (undefined **)(unaff_EBP + -200);
          ppuStack_530 = (undefined **)0x62c6c7;
          ppuStack_52c = (undefined **)FUN_00404b30();
          if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
            ppuStack_530 = (undefined **)0x62c6d8;
            FUN_00878dfb();
          }
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x228);
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        ppuStack_530 = (undefined **)0x62c6e8;
        ppuVar10 = (undefined **)FUN_00402bc3();
        ppuStack_530 = ppuStack_52c;
        if ((int)ppuVar10 < 0) {
          ppuStack_530 = (undefined **)0x62c6f3;
          ppuStack_52c = ppuVar10;
          FUN_00878dfb();
          ppuStack_530 = extraout_ECX_45;
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x920;
        ppuStack_53c = (undefined **)0x62c707;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x248);
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        pwStack_538 = (wchar_t *)0x62c71d;
        FUN_0040263d();
        pwStack_538 = 
        L"왐ﱅ\xe877帢￞薉８\xffff薍ﶸ\xffff왐ﱅ\xe875摿￝쒃㬌緃倆ꫨⓆ贀\xf045赐ᢅ\xffff僿䖋跠屈䗇ǰ"
        ;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        ppuStack_534 = (undefined **)0x62c72e;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xe8) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x248);
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        pwStack_538 = L"쒃㬌緃倆ꫨⓆ贀\xf045赐ᢅ\xffff僿䖋跠屈䗇ǰ";
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c751;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x10);
        ppuStack_530 = (undefined **)(unaff_EBP + -0xe8);
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        ppuStack_534 = (undefined **)0x62c76e;
        FUN_0055a65a();
        ppuStack_52c = *(undefined ***)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0x71;
        if (ppuStack_52c != (undefined **)0x0) {
          ppuStack_530 = (undefined **)0x62c782;
          (**(code **)(*ppuStack_52c + 8))();
        }
        uVar16 = uVar16 + 1;
      }
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0x85c;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x268);
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    ppuStack_53c = (undefined **)0x62c7b0;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62c7b7;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x79;
    ppuStack_534 = (undefined **)0x62c7c2;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xd0) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xd0);
      ppuStack_530 = (undefined **)0x62c7de;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62c7ef;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x268);
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    ppuStack_530 = (undefined **)0x62c7ff;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62c80a;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_46;
    }
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x44) == 0) {
          ppuStack_52c = (undefined **)0x80004003;
          ppuStack_530 = (undefined **)0x62c825;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x62c82d;
        uVar16 = FUN_0040cf4d();
        ppuVar10 = extraout_ECX_47;
        if (uVar16 <= *(uint *)(unaff_EBP + -0x1c)) break;
        ppuStack_52c = (undefined **)0x62c83e;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0x0;
        ppuStack_530 = (undefined **)0x0;
        pwStack_538 = *(wchar_t **)(unaff_EBP + -0x1c);
        ppuStack_53c = (undefined **)0x62c84b;
        ppuStack_534 = (undefined **)&stack0xfffffad8;
        pwStack_538 = (wchar_t *)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
        ppuStack_53c = (undefined **)0x62c857;
        FUN_004033a1();
        pwStack_538 = (wchar_t *)(unaff_EBP + -0x288);
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        ppuStack_53c = (undefined **)0x62c86a;
        FUN_0040263d();
        ppuStack_53c = (undefined **)0x62c871;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        ppuStack_534 = (undefined **)0x62c87c;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xa8) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x68) = 0;
        if (iVar6 != 0) {
          ppuStack_52c = (undefined **)(unaff_EBP + -0xa8);
          ppuStack_530 = (undefined **)0x62c898;
          ppuStack_52c = (undefined **)FUN_00404b30();
          if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
            ppuStack_530 = (undefined **)0x62c8a9;
            FUN_00878dfb();
          }
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x288);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        ppuStack_530 = (undefined **)0x62c8b9;
        ppuVar10 = (undefined **)FUN_00402bc3();
        ppuStack_530 = ppuStack_52c;
        if ((int)ppuVar10 < 0) {
          ppuStack_530 = (undefined **)0x62c8c4;
          ppuStack_52c = ppuVar10;
          FUN_00878dfb();
          ppuStack_530 = extraout_ECX_48;
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x920;
        ppuStack_53c = (undefined **)0x62c8d8;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x2a8);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        pwStack_538 = (wchar_t *)0x62c8eb;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62c8f2;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x81;
        ppuStack_534 = (undefined **)0x62c8fc;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x108) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x2a8);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        pwStack_538 = (wchar_t *)0x62c912;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c91f;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x921;
        ppuStack_53c = (undefined **)0x62c933;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x2c8);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        pwStack_538 = (wchar_t *)0x62c946;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62c94d;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x83;
        ppuStack_534 = (undefined **)0x62c957;
        iVar6 = FUN_00412550();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x2c8);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        pwStack_538 = L"쒃㬌緃倆翨Ⓞ謀\xe045ｪ䢍\xe858⦉";
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62c97c;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)0x62c989;
        puVar9 = (undefined4 *)FUN_0062f312();
        *puVar9 = *(undefined4 *)(unaff_EBP + -0x108);
        puVar9[1] = (uint)(iVar6 != 0);
        ppuStack_52c = *(undefined ***)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        if (ppuStack_52c != (undefined **)0x0) {
          ppuStack_530 = (undefined **)0x62c9a5;
          (**(code **)(*ppuStack_52c + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    ppuStack_53c = (undefined **)&ppuStack_534;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = (wchar_t *)0x63f;
    ppuStack_534 = ppuVar10;
    FUN_00679e4e();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x2e8);
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    ppuStack_53c = (undefined **)0x62c9d5;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62c9dc;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x85;
    ppuStack_534 = (undefined **)0x62c9e7;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xac) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xac);
      ppuStack_530 = (undefined **)0x62ca03;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62ca14;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x2e8);
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    ppuStack_530 = (undefined **)0x62ca24;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62ca2f;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_49;
    }
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x88;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          ppuStack_52c = (undefined **)0x80004003;
          ppuStack_530 = (undefined **)0x62ca51;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x62ca59;
        uVar16 = FUN_0040cf4d();
        if (uVar16 <= *(uint *)(unaff_EBP + -0x1c)) break;
        ppuStack_52c = (undefined **)0x62ca6a;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0x0;
        ppuStack_530 = (undefined **)0x0;
        pwStack_538 = *(wchar_t **)(unaff_EBP + -0x1c);
        ppuStack_53c = (undefined **)0x62ca77;
        ppuStack_534 = (undefined **)&stack0xfffffad8;
        pwStack_538 = (wchar_t *)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x18) = &ppuStack_534;
        ppuStack_53c = (undefined **)0x62ca83;
        FUN_004033a1();
        pwStack_538 = (wchar_t *)(unaff_EBP + -0x308);
        *(undefined1 *)(unaff_EBP + -4) = 0x88;
        ppuStack_53c = (undefined **)0x62ca96;
        FUN_0040263d();
        ppuStack_53c = (undefined **)0x62ca9d;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x8a;
        ppuStack_534 = (undefined **)0x62caa8;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xb4) = iVar6;
        *(undefined4 *)(unaff_EBP + -100) = 0;
        if (iVar6 != 0) {
          ppuStack_52c = (undefined **)(unaff_EBP + -0xb4);
          ppuStack_530 = (undefined **)0x62cac4;
          ppuStack_52c = (undefined **)FUN_00404b30();
          if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
            ppuStack_530 = (undefined **)0x62cad5;
            FUN_00878dfb();
          }
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x308);
        *(undefined1 *)(unaff_EBP + -4) = 0x8c;
        ppuStack_530 = (undefined **)0x62cae5;
        ppuVar10 = (undefined **)FUN_00402bc3();
        ppuStack_530 = ppuStack_52c;
        if ((int)ppuVar10 < 0) {
          ppuStack_530 = (undefined **)0x62caf0;
          ppuStack_52c = ppuVar10;
          FUN_00878dfb();
          ppuStack_530 = extraout_ECX_50;
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x18) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x920;
        ppuStack_53c = (undefined **)0x62cb04;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x328);
        *(undefined1 *)(unaff_EBP + -4) = 0x8c;
        pwStack_538 = (wchar_t *)0x62cb17;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62cb1e;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x8e;
        ppuStack_534 = (undefined **)0x62cb28;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x100) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x328);
        *(undefined1 *)(unaff_EBP + -4) = 0x8c;
        pwStack_538 = (wchar_t *)0x62cb3e;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62cb4b;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x18) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x3cf;
        ppuStack_53c = (undefined **)0x62cb5f;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x348);
        *(undefined1 *)(unaff_EBP + -4) = 0x8c;
        pwStack_538 = (wchar_t *)0x62cb72;
        FUN_0040263d();
        pwStack_538 = 
        L"왐ﱅ\xe890姍￞\xf88b薍ﲸ\xffff왐ﱅ\xe88c怮￝쒃㬌緃倆姨Ⓜ謀\xe045ｪ䢍\xe854⛳"
        ;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x90;
        ppuStack_534 = (undefined **)0x62cb83;
        uVar8 = FUN_00412550();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x348);
        *(undefined1 *)(unaff_EBP + -4) = 0x8c;
        pwStack_538 = L"쒃㬌緃倆姨Ⓜ謀\xe045ｪ䢍\xe854⛳";
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62cba2;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)0x62cbaf;
        puVar9 = (undefined4 *)FUN_0062f2a2();
        *puVar9 = *(undefined4 *)(unaff_EBP + -0x100);
        puVar9[1] = uVar8;
        ppuStack_52c = *(undefined ***)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x88;
        if (ppuStack_52c != (undefined **)0x0) {
          ppuStack_530 = (undefined **)0x62cbcb;
          (**(code **)(*ppuStack_52c + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x87;
      ppuStack_52c = (undefined **)0x62cbdf;
      FUN_0062f280();
      ppuVar10 = extraout_ECX_51;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)u_mbmin_009682f0;
    pwStack_538 = (wchar_t *)0x62cbf1;
    ppuStack_530 = ppuVar10;
    FUN_004033a1();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x368);
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    pwStack_538 = (wchar_t *)0x62cc04;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe892夻￞奙䶍诜\xe8f8⎳";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x92;
    ppuStack_534 = (undefined **)0x62cc15;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62cc21;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x8c) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x368);
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    ppuStack_530 = (undefined **)0x62cc37;
    ppuVar10 = (undefined **)FUN_00402bc3();
    ppuStack_530 = ppuStack_52c;
    if ((int)ppuVar10 < 0) {
      ppuStack_530 = (undefined **)0x62cc42;
      ppuStack_52c = ppuVar10;
      FUN_00878dfb();
      ppuStack_530 = extraout_ECX_52;
    }
    ppuStack_52c = (undefined **)0xffffffff;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
    ppuStack_534 = (undefined **)u_mbmax_009682e4;
    pwStack_538 = (wchar_t *)0x62cc54;
    FUN_004033a1();
    ppuStack_534 = (undefined **)(unaff_EBP + -0x388);
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    pwStack_538 = (wchar_t *)0x62cc67;
    FUN_0040263d();
    pwStack_538 = L"왐ﱅ\xe894壘￞奙䶍诜\xe8f8⍐";
    ppuStack_530 = (undefined **)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x94;
    ppuStack_534 = (undefined **)0x62cc78;
    uVar8 = FUN_00412550();
    ppuStack_52c = (undefined **)0x62cc84;
    iVar6 = FUN_0062efd4();
    *(undefined4 *)(iVar6 + 0x90) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0x388);
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    ppuStack_530 = (undefined **)0x62cc9a;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62cca5;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_53;
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = u_mbcard_009682d4;
    ppuStack_53c = (undefined **)0x62ccb7;
    ppuStack_534 = ppuVar10;
    FUN_004033a1();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x3a8);
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
    ppuStack_53c = (undefined **)0x62ccca;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62ccd1;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x96;
    ppuStack_534 = (undefined **)0x62ccdc;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xbc) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)(unaff_EBP + -0xbc);
      ppuStack_530 = (undefined **)0x62ccf8;
      ppuStack_52c = (undefined **)FUN_00404b30();
      if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
        ppuStack_530 = (undefined **)0x62cd09;
        FUN_00878dfb();
      }
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x3a8);
    *(undefined1 *)(unaff_EBP + -4) = 0x98;
    ppuStack_530 = (undefined **)0x62cd19;
    ppuVar7 = (undefined **)FUN_00402bc3();
    ppuVar10 = ppuStack_52c;
    if ((int)ppuVar7 < 0) {
      ppuStack_530 = (undefined **)0x62cd24;
      ppuStack_52c = ppuVar7;
      FUN_00878dfb();
      ppuVar10 = extraout_ECX_54;
    }
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x34) == 0) {
          ppuStack_52c = (undefined **)0x80004003;
          ppuStack_530 = (undefined **)0x62cd42;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0x62cd4a;
        uVar16 = FUN_0040cf4d();
        ppuVar10 = extraout_ECX_55;
        if (uVar16 <= *(uint *)(unaff_EBP + -0x1c)) break;
        ppuStack_52c = (undefined **)0x62cd5b;
        FUN_0087a1b0();
        ppuStack_52c = (undefined **)0x0;
        ppuStack_530 = (undefined **)0x0;
        pwStack_538 = *(wchar_t **)(unaff_EBP + -0x1c);
        ppuStack_53c = (undefined **)0x62cd68;
        ppuStack_534 = (undefined **)&stack0xfffffad8;
        pwStack_538 = (wchar_t *)FUN_00412335();
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
        ppuStack_53c = (undefined **)0x62cd74;
        FUN_004033a1();
        pwStack_538 = (wchar_t *)(unaff_EBP + -0x3c8);
        *(undefined1 *)(unaff_EBP + -4) = 0x98;
        ppuStack_53c = (undefined **)0x62cd87;
        FUN_0040263d();
        ppuStack_53c = (undefined **)0x62cd8e;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x9a;
        ppuStack_534 = (undefined **)0x62cd99;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0xc4) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
        if (iVar6 != 0) {
          ppuStack_52c = (undefined **)(unaff_EBP + -0xc4);
          ppuStack_530 = (undefined **)0x62cdb5;
          ppuStack_52c = (undefined **)FUN_00404b30();
          if (((int)ppuStack_52c < 0) && (ppuStack_52c != (undefined **)0x80004002)) {
            ppuStack_530 = (undefined **)0x62cdc6;
            FUN_00878dfb();
          }
        }
        ppuStack_52c = (undefined **)(unaff_EBP + -0x3c8);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        ppuStack_530 = (undefined **)0x62cdd6;
        ppuVar10 = (undefined **)FUN_00402bc3();
        ppuStack_530 = ppuStack_52c;
        if ((int)ppuVar10 < 0) {
          ppuStack_530 = (undefined **)0x62cde1;
          ppuStack_52c = ppuVar10;
          FUN_00878dfb();
          ppuStack_530 = extraout_ECX_56;
        }
        ppuStack_52c = (undefined **)0x0;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x920;
        *(undefined4 *)(unaff_EBP + -0xa0) = 0;
        *(undefined4 *)(unaff_EBP + -0x9c) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x98) = 0xffffffff;
        ppuStack_53c = (undefined **)0x62ce07;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -1000);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        pwStack_538 = (wchar_t *)0x62ce1a;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62ce21;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x9e;
        ppuStack_534 = (undefined **)0x62ce2b;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xa0) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -1000);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        pwStack_538 = (wchar_t *)0x62ce41;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62ce4e;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x5ae;
        ppuStack_53c = (undefined **)0x62ce62;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x408);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        pwStack_538 = (wchar_t *)0x62ce75;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62ce7c;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xa0;
        ppuStack_534 = (undefined **)0x62ce86;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x9c) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x408);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        pwStack_538 = (wchar_t *)0x62ce9c;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62cea9;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        pwStack_538 = (wchar_t *)&ppuStack_530;
        *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
        ppuStack_534 = (undefined **)0x5af;
        ppuStack_53c = (undefined **)0x62cebd;
        FUN_00679e4e();
        ppuStack_534 = (undefined **)(unaff_EBP + -0x428);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        pwStack_538 = (wchar_t *)0x62ced0;
        FUN_0040263d();
        pwStack_538 = (wchar_t *)0x62ced7;
        ppuStack_530 = (undefined **)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xa2;
        ppuStack_534 = (undefined **)0x62cee1;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x98) = uVar8;
        ppuStack_534 = (undefined **)(unaff_EBP + -0x428);
        *(undefined1 *)(unaff_EBP + -4) = 0x9c;
        pwStack_538 = (wchar_t *)0x62cef7;
        ppuStack_52c = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_52c < 0) {
          ppuStack_530 = (undefined **)0x62cf04;
          FUN_00878dfb();
        }
        ppuStack_52c = (undefined **)0xffffffff;
        ppuStack_530 = (undefined **)(unaff_EBP + -0xa0);
        ppuStack_534 = (undefined **)0x62cf14;
        FUN_0062efd4();
        ppuStack_534 = (undefined **)0x62cf21;
        FUN_0062ef74();
        *(undefined1 *)(unaff_EBP + -4) = 0x98;
        ppuStack_52c = (undefined **)0x62cf2d;
        FUN_00402630();
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)0x0;
    *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_534;
    pwStack_538 = u_dayOfWeek_009682c0;
    ppuStack_53c = (undefined **)0x62cf47;
    ppuStack_534 = ppuVar10;
    FUN_004033a1();
    pwStack_538 = (wchar_t *)(unaff_EBP + -0x448);
    *(undefined1 *)(unaff_EBP + -4) = 0x98;
    ppuStack_53c = (undefined **)0x62cf5a;
    FUN_0040263d();
    ppuStack_53c = (undefined **)0x62cf61;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xa4;
    ppuStack_534 = (undefined **)0x62cf6c;
    uVar8 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0xcc) = uVar8;
    ppuStack_52c = (undefined **)(unaff_EBP + -0xcc);
    ppuStack_530 = (undefined **)0x62cf81;
    FUN_004251a3();
    *(undefined1 *)(unaff_EBP + -4) = 0xa6;
    ppuStack_52c = (undefined **)0x62cf90;
    FUN_00404892();
    ppuStack_52c = (undefined **)0x62cf98;
    cVar4 = FUN_005dd009();
    if (cVar4 == '\0') {
      ppuStack_52c = (undefined **)0x62d220;
      iVar6 = FUN_0062efd4();
      *(undefined4 *)(iVar6 + 0xa0) = 0xff;
    }
    else {
      ppuStack_52c = (undefined **)0x62cfa8;
      iVar6 = FUN_0062efd4();
      *(undefined4 *)(iVar6 + 0xa0) = 0;
      ppuStack_52c = (undefined **)0x62cfb6;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = (undefined **)&DAT_009682b8;
      pwStack_538 = (wchar_t *)0x62cfcd;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x468);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62cfe0;
      FUN_0040263d();
      pwStack_538 = (wchar_t *)0x62cfe7;
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xa8;
      ppuStack_534 = (undefined **)0x62cff1;
      uVar16 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | uVar16;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d004;
      FUN_00404892();
      ppuStack_52c = (undefined **)0x62d00c;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = (undefined **)&DAT_009682b0;
      pwStack_538 = (wchar_t *)0x62d023;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x488);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62d036;
      FUN_0040263d();
      pwStack_538 = (wchar_t *)0x62d03d;
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xaa;
      ppuStack_534 = (undefined **)0x62d047;
      iVar11 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | iVar11 << 1;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d05c;
      FUN_00404892();
      ppuStack_52c = (undefined **)0x62d064;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = (undefined **)&DAT_009682a8;
      pwStack_538 = (wchar_t *)0x62d07b;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x4a8);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62d08e;
      FUN_0040263d();
      pwStack_538 = L"왐ﱅ\xe8ac咱￞奙\xe0c1ं贇墍\xfffb웿ﱅ\xe8a6矝￝䶍\xe8dc἗";
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xac;
      ppuStack_534 = (undefined **)0x62d09f;
      iVar11 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | iVar11 << 2;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d0b5;
      FUN_00404892();
      ppuStack_52c = (undefined **)0x62d0bd;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = (undefined **)&DAT_009682a0;
      pwStack_538 = (wchar_t *)0x62d0d4;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x4c8);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62d0e7;
      FUN_0040263d();
      pwStack_538 = L"왐ﱅ\xe8ae员￞奙\xe0c1ः贇㢍\xfffb웿ﱅ\xe8a6瞄￝䶍\xe8dcẾ";
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xae;
      ppuStack_534 = (undefined **)0x62d0f8;
      iVar11 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | iVar11 << 3;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d10e;
      FUN_00404892();
      ppuStack_52c = (undefined **)0x62d116;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = &PTR_LAB_00968298;
      pwStack_538 = (wchar_t *)0x62d12d;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x4e8);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62d140;
      FUN_0040263d();
      pwStack_538 = L"왐ﱅ\xe8b0叿￞奙\xe0c1ऄ贇ᢍ\xfffb웿ﱅ\xe8a6眫￝䶍\xe8dcṥ";
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb0;
      ppuStack_534 = (undefined **)0x62d151;
      iVar11 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | iVar11 << 4;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d167;
      FUN_00404892();
      ppuStack_52c = (undefined **)0x62d16f;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = (undefined **)&DAT_00968290;
      pwStack_538 = (wchar_t *)0x62d186;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x508);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62d199;
      FUN_0040263d();
      pwStack_538 = L"왐ﱅ\xe8b2厦￞奙\xe0c1अ贇\xf88d\xfffa웿ﱅ\xe8a6盒￝䶍\xe8dcḌ";
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb2;
      ppuStack_534 = (undefined **)0x62d1aa;
      iVar11 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | iVar11 << 5;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d1c0;
      FUN_00404892();
      ppuStack_52c = (undefined **)0x62d1c8;
      iVar6 = FUN_0062efd4();
      ppuStack_52c = (undefined **)0x0;
      *(undefined ****)(unaff_EBP + -0x10) = &ppuStack_530;
      ppuStack_534 = (undefined **)&DAT_00968288;
      pwStack_538 = (wchar_t *)0x62d1df;
      FUN_004033a1();
      ppuStack_534 = (undefined **)(unaff_EBP + -0x528);
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      pwStack_538 = (wchar_t *)0x62d1f2;
      FUN_0040263d();
      pwStack_538 = (wchar_t *)0x62d1f9;
      ppuStack_530 = (undefined **)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb4;
      ppuStack_534 = (undefined **)0x62d203;
      iVar11 = FUN_00412550();
      *(uint *)(iVar6 + 0xa0) = *(uint *)(iVar6 + 0xa0) | iVar11 << 6;
      *(undefined1 *)(unaff_EBP + -4) = 0xa6;
      ppuStack_52c = (undefined **)0x62d219;
      FUN_00404892();
    }
    ppuStack_52c = (undefined **)0x0;
    ppuStack_530 = (undefined **)(unaff_EBP + 8);
    ppuStack_534 = (undefined **)0x62d244;
    iVar6 = FUN_0062f6cd();
    if (iVar6 != 0) {
      ppuStack_52c = (undefined **)0x62d30a;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d312;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d31a;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d322;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d32a;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d332;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d33a;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d342;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d34a;
      FUN_00402630();
      ppuStack_52c = (undefined **)0x62d352;
      FUN_00402630();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      ppuStack_52c = (undefined **)0x62d35d;
      FUN_0062efbe();
      ppuStack_52c = (undefined **)0x62d365;
      FUN_00402630();
      goto LAB_0062d365;
    }
    ppuStack_52c = (undefined **)(unaff_EBP + -0x24);
    ppuStack_530 = (undefined **)(unaff_EBP + 8);
    ppuStack_534 = (undefined **)0x62d25b;
    FUN_0062efab();
    ppuStack_52c = (undefined **)0x62d263;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d26b;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d273;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d27b;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d283;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d28b;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d293;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d29b;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d2a3;
    FUN_00402630();
    ppuStack_52c = (undefined **)0x62d2ab;
    FUN_00402630();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    ppuStack_52c = (undefined **)0x62d2b6;
    FUN_0062efbe();
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
  } while (*(int *)(unaff_EBP + -0x3c) < 2);
  ppuStack_52c = (undefined **)0x62d2cb;
  FUN_00402630();
  uVar8 = 1;
LAB_0062d2ce:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}



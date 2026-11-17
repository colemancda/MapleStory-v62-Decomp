/* FUN_0046cd86 - 0x0046cd86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046cd86(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int *piVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int unaff_EBP;
  uint uVar12;
  bool bVar13;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  int iStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 *puStack_21c;
  int *piStack_218;
  int iStack_214;
  int iStack_210;
  int *piStack_20c;
  undefined1 *puStack_208;
  int *piStack_204;
  int *piStack_200;
  int *piStack_1fc;
  int *piStack_1ec;
  int iStack_1cc;
  int iStack_1c8;
  int *piStack_1c4;
  int iStack_178;
  int iStack_174;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  int iStack_160;
  int iStack_15c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xac) = 0;
  iStack_15c = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_160 = 0x46cdfd;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_15c = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_160 = unaff_EBP + -0xa4;
  puStack_164 = (undefined1 *)0x46ce13;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    iStack_15c = 0x46ce2a;
    FUN_00434e38();
  }
  iStack_15c = unaff_EBP + -0x38;
  iStack_160 = 0x46ce37;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_15c = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_160 = unaff_EBP + -0xac;
  puStack_164 = (undefined1 *)0x46ce4d;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    iStack_15c = 0x46ce64;
    FUN_00434e38();
  }
  iStack_15c = 0x46ce73;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_15c = 0x46ce80;
  FUN_00403191();
  iStack_15c = 0;
  iStack_160 = unaff_EBP + -0x58;
  puStack_164 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 ***)(unaff_EBP + -0x74) = &puStack_168;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_174 = 0x46cea1;
  puStack_168 = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_160 = 0x46ceca;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
  iStack_15c = 0x46ced9;
  iVar6 = FUN_00404b30();
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    iStack_15c = 0x46ceea;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_15c = 0x46cefa;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_15c = 0x46cf05;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_15c = 0x46cf12;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_15c = 0x46cf1d;
    FUN_00878dfb();
  }
  iVar6 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_15c = 0x46cf2a;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_15c = 0x46cf35;
    FUN_00878dfb();
    iVar6 = extraout_ECX_01;
  }
  iVar7 = *(int *)(unaff_EBP + 8);
  if (iVar7 == 1) {
    iStack_15c = 0;
    puStack_168 = (undefined1 *)&iStack_160;
    *(int **)(unaff_EBP + -0x30) = &iStack_160;
    puStack_164 = (undefined1 *)0x589;
    iStack_160 = iVar6;
    FUN_00679e4e();
    puStack_164 = (undefined1 *)(unaff_EBP + -0x144);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_168 = (undefined1 *)0x46d519;
    FUN_0040263d();
    puStack_168 = (undefined1 *)0x46d520;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_160 = 0x46d52b;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x7c) = iVar6;
    *(undefined4 *)(unaff_EBP + -0xb4) = 0;
    if (iVar6 != 0) {
      iStack_15c = 0x46d547;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_15c = 0x46d558;
        FUN_00878dfb();
      }
    }
    iStack_15c = 0x46d569;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0xb0),
               *(IBinding **)(unaff_EBP + -0xb4));
    FUN_004125e6();
    iVar6 = unaff_EBP + -0x144;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_15c = 0x46d584;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_15c = 0x46d58f;
      FUN_00878dfb();
      iVar6 = extraout_ECX_03;
    }
    iStack_15c = 0;
    puStack_168 = (undefined1 *)&iStack_160;
    *(int **)(unaff_EBP + -0x30) = &iStack_160;
    puStack_164 = (undefined1 *)0x55d;
    iStack_160 = iVar6;
    FUN_00679e4e();
    puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_168 = (undefined1 *)0x46d5b3;
    FUN_0040263d();
    puStack_168 = (undefined1 *)0x46d5ba;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_160 = 0x46d5c5;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x74) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar6 != 0) {
      iStack_15c = 0x46d5db;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_15c = 0x46d5ec;
        FUN_00878dfb();
      }
    }
    iStack_15c = 0x46d5f7;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
               *(IBinding **)(unaff_EBP + -0x38));
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
LAB_0046d609:
    iStack_15c = 0x46d60f;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_15c = 0x46d61a;
      FUN_00878dfb();
    }
  }
  else {
    if (iVar7 == 2) {
      iStack_15c = 0;
      puStack_168 = (undefined1 *)&iStack_160;
      *(int **)(unaff_EBP + -0x30) = &iStack_160;
      puStack_164 = (undefined1 *)0x55d;
      iStack_160 = iVar6;
      FUN_00679e4e();
      puStack_164 = (undefined1 *)(unaff_EBP + -0x134);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_168 = (undefined1 *)0x46d39c;
      FUN_0040263d();
      puStack_168 = (undefined1 *)0x46d3a3;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iStack_160 = 0x46d3ae;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0xcc) = iVar6;
      *(undefined4 *)(unaff_EBP + -0xd0) = 0;
      if (iVar6 != 0) {
        iStack_15c = 0x46d3d0;
        iVar6 = FUN_0041a581();
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          iStack_15c = 0x46d3e1;
          FUN_00878dfb();
        }
      }
      iStack_15c = 0x46d3ef;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
                 *(IBinding **)(unaff_EBP + -0xd0));
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_15c = 0x46d40a;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_15c = 0x46d415;
        FUN_00878dfb();
      }
      iStack_15c = unaff_EBP + -0xc0;
      iStack_160 = 0x46d428;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_15c = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_160 = unaff_EBP + -0x34;
      puStack_164 = (undefined1 *)0x46d43b;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0xc0) != 0) {
        iStack_15c = 0x46d455;
        FUN_00434e38();
      }
      iStack_15c = 0;
      iStack_160 = -1;
      puStack_164 = *(undefined1 **)(unaff_EBP + -0x34);
      puStack_168 = (undefined1 *)0x0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      iStack_15c = 0;
      iStack_160 = -1;
      puStack_168 = (undefined1 *)0x46d481;
      puStack_164 = &stack0xfffffeac;
      puStack_168 = (undefined1 *)FUN_00449713();
      puStack_164 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x30) = &iStack_160;
      puStack_168 = (undefined1 *)0x46d494;
      FUN_004033a1();
      puStack_164 = (undefined1 *)(unaff_EBP + -0x120);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_168 = (undefined1 *)0x46d4a7;
      FUN_0040263d();
      puStack_168 = (undefined1 *)0x46d4ae;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_160 = 0x46d4b9;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0xb8) = uVar5;
      iStack_15c = 0x46d4d1;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_15c = 0x46d4e2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      goto LAB_0046d609;
    }
    if (iVar7 == 4) {
      iStack_15c = unaff_EBP + -0x124;
      iStack_160 = 0x46d298;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_15c = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_160 = unaff_EBP + -0x34;
      puStack_164 = (undefined1 *)0x46d2ab;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x124) != 0) {
        iStack_15c = 0x46d2c5;
        FUN_00434e38();
      }
      iStack_15c = 0;
      iStack_160 = -1;
      puStack_164 = *(undefined1 **)(unaff_EBP + -0x34);
      puStack_168 = (undefined1 *)0x0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      iStack_15c = 0;
      iStack_160 = -1;
      puStack_168 = (undefined1 *)0x46d2f1;
      puStack_164 = &stack0xfffffeac;
      puStack_168 = (undefined1 *)FUN_00449713();
      puStack_164 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x30) = &iStack_160;
      puStack_168 = (undefined1 *)0x46d304;
      FUN_004033a1();
      puStack_164 = (undefined1 *)(unaff_EBP + -0x154);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_168 = (undefined1 *)0x46d317;
      FUN_0040263d();
      puStack_168 = (undefined1 *)0x46d31e;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_160 = 0x46d329;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x100) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      if (iVar6 != 0) {
        iStack_15c = 0x46d345;
        iVar6 = FUN_0041a581();
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          iStack_15c = 0x46d356;
          FUN_00878dfb();
        }
      }
      iStack_15c = 0x46d361;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
                 *(IBinding **)(unaff_EBP + -0x40));
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      goto LAB_0046d609;
    }
    if (iVar7 == 5) {
      iStack_15c = 0x46cf68;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_15c = 0x46cf75;
      FUN_00403191();
      iStack_15c = 0;
      iStack_160 = unaff_EBP + -0x58;
      puStack_164 = (undefined1 *)(unaff_EBP + -0x2c);
      *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_168;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_174 = 0x46cf96;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_160 = 0x46cfbf;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0xf8) = uVar5;
      iStack_15c = 0x46cfd7;
      iVar6 = FUN_00404b30();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_15c = 0x46cfe8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_15c = 0x46cff8;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_15c = 0x46d003;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_15c = 0x46d010;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_15c = 0x46d01b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_15c = 0x46d028;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_15c = 0x46d033;
        FUN_00878dfb();
      }
      iStack_15c = unaff_EBP + -0x104;
      iStack_160 = 0x46d046;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_15c = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_160 = unaff_EBP + -0x34;
      puStack_164 = (undefined1 *)0x46d059;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x104) != 0) {
        iStack_15c = 0x46d073;
        FUN_00434e38();
      }
      iStack_15c = 0;
      iStack_160 = -1;
      puStack_164 = *(undefined1 **)(unaff_EBP + -0x34);
      puStack_168 = (undefined1 *)0x0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      iStack_174 = 0;
      iStack_178 = -1;
      FUN_00449713();
      FUN_00456ad5();
      *(int **)(unaff_EBP + -0x30) = &iStack_178;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_178 = 0x46d0d8;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x108) = uVar5;
      iStack_174 = 0x46d0ed;
      iVar6 = FUN_00404b30();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_174 = 0x46d0fe;
        FUN_00878dfb();
      }
      iVar6 = unaff_EBP + -0x68;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_174 = 0x46d10b;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_174 = 0x46d116;
        FUN_00878dfb();
        iVar6 = extraout_ECX_02;
      }
      iStack_174 = 0;
      *(int **)(unaff_EBP + -0x30) = &iStack_178;
      iStack_178 = iVar6;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_178 = 0x46d150;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10c) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      if (iVar6 != 0) {
        iStack_174 = 0x46d16c;
        iVar6 = FUN_0041a581();
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          iStack_174 = 0x46d17d;
          FUN_00878dfb();
        }
      }
      iStack_174 = 0x46d188;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
                 *(IBinding **)(unaff_EBP + -0x44));
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_174 = 0x46d1a0;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_174 = 0x46d1ab;
        FUN_00878dfb();
      }
      iStack_174 = unaff_EBP + -0x110;
      iStack_178 = 0x46d1be;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_174 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_178 = unaff_EBP + -0x34;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x110) != 0) {
        iStack_174 = 0x46d1eb;
        FUN_00434e38();
      }
      iStack_174 = 0;
      iStack_178 = -1;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      iStack_15c = 0;
      iStack_160 = -1;
      puStack_168 = (undefined1 *)0x46d215;
      puStack_164 = &stack0xfffffeac;
      puStack_168 = (undefined1 *)FUN_00449713();
      puStack_164 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x30) = &iStack_160;
      puStack_168 = (undefined1 *)0x46d228;
      FUN_004033a1();
      puStack_164 = (undefined1 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_168 = (undefined1 *)0x46d23e;
      FUN_0040263d();
      puStack_168 = (undefined1 *)0x46d245;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_160 = 0x46d250;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0xfc) = uVar5;
      iStack_15c = 0x46d265;
      iVar6 = FUN_00404b30();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_15c = 0x46d276;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      goto LAB_0046d609;
    }
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    iStack_15c = 0x46d62a;
    FUN_00878dfb();
  }
  uVar5 = FUN_0040eea9();
  *(undefined4 *)(unaff_EBP + -0x44) = uVar5;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    iStack_15c = 0x46d640;
    FUN_00878dfb();
  }
  uVar5 = FUN_0040eed0();
  *(undefined4 *)(unaff_EBP + -0x40) = uVar5;
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    iStack_15c = unaff_EBP + -0x74;
    iStack_160 = 0x46d680;
    puStack_164 = (undefined1 *)FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0x2f;
  }
  else {
    iStack_15c = unaff_EBP + -0x7c;
    iStack_160 = 0x46d663;
    puStack_164 = (undefined1 *)FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  }
  iStack_15c = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_160;
  puStack_168 = (undefined1 *)0x46d698;
  FUN_004059fd();
  puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
  *(undefined4 *)(unaff_EBP + -4) = 0x2f;
  puStack_168 = (undefined1 *)0x46d6aa;
  FUN_0040263d();
  puStack_168 = (undefined1 *)0x46d6b1;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 0x31;
  iStack_160 = 0x46d6bf;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar5;
  iStack_15c = 0x46d6d1;
  iVar6 = FUN_0041a581();
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    iStack_15c = 0x46d6e2;
    FUN_00878dfb();
  }
  iVar6 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_15c = 0x46d6f2;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_15c = 0x46d6fd;
    FUN_00878dfb();
    iVar6 = extraout_ECX_04;
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402fa6();
    iVar6 = extraout_ECX_05;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402fa6();
    iVar6 = extraout_ECX_06;
  }
  iStack_15c = 0;
  puStack_168 = (undefined1 *)&iStack_160;
  *(int **)(unaff_EBP + -0x30) = &iStack_160;
  puStack_164 = (undefined1 *)0x58f;
  iStack_160 = iVar6;
  FUN_00679e4e();
  puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_168 = (undefined1 *)0x46d750;
  FUN_0040263d();
  puStack_168 = (undefined1 *)0x46d757;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_160 = 0x46d762;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar5;
  iStack_15c = 0x46d774;
  iVar6 = FUN_00404b30();
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    iStack_15c = 0x46d787;
    FUN_00878dfb();
  }
  iVar6 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_15c = 0x46d797;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_15c = 0x46d7a2;
    FUN_00878dfb();
    iVar6 = extraout_ECX_07;
  }
  iStack_15c = 0;
  puStack_168 = (undefined1 *)&iStack_160;
  *(int **)(unaff_EBP + -0x30) = &iStack_160;
  puStack_164 = (undefined1 *)0x590;
  iStack_160 = iVar6;
  FUN_00679e4e();
  puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_168 = (undefined1 *)0x46d7ca;
  FUN_0040263d();
  puStack_168 = (undefined1 *)0x46d7d1;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_160 = 0x46d7dc;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar5;
  iStack_15c = 0x46d7ee;
  iVar6 = FUN_00404b30();
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    iStack_15c = 0x46d7fc;
    FUN_00878dfb();
  }
  iVar6 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_15c = 0x46d80c;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_15c = 0x46d817;
    FUN_00878dfb();
    iVar6 = extraout_ECX_08;
  }
  if (*(int *)(unaff_EBP + 8) == 4) {
    if (*(int *)(unaff_EBP + 0x24) < *(int *)(unaff_EBP + 0x20)) {
      iStack_15c = unaff_EBP + 0x18;
      iStack_160 = 0x46d83c;
      puStack_164 = (undefined1 *)FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
    }
    else {
      iStack_15c = unaff_EBP + 0x24;
      iStack_160 = 0x46d856;
      puStack_164 = (undefined1 *)FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
      *(undefined4 *)(unaff_EBP + -4) = 0x37;
    }
    iStack_15c = 0;
    *(int **)(unaff_EBP + -0x30) = &iStack_160;
    puStack_168 = (undefined1 *)0x46d86b;
    FUN_004059fd();
    puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
    *(undefined4 *)(unaff_EBP + -4) = 0x37;
    puStack_168 = (undefined1 *)0x46d87d;
    FUN_0040263d();
    puStack_168 = (undefined1 *)0x46d884;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 0x39;
    iStack_160 = 0x46d892;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x20) = uVar5;
    iStack_15c = 0x46d8a1;
    iVar6 = FUN_0041a581();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      iStack_15c = 0x46d8b2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_15c = 0x46d8c2;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_15c = 0x46d8cd;
      FUN_00878dfb();
    }
    if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
      FUN_00402fa6();
    }
    bVar3 = *(byte *)(unaff_EBP + -0x10) & 4;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
joined_r0x0046d9d1:
    if (bVar3 != 0) {
      FUN_00402fa6();
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 5) {
      if (*(int *)(unaff_EBP + 0x24) < *(int *)(unaff_EBP + 0x20) + -1) {
        iStack_15c = unaff_EBP + 0x18;
        iStack_160 = 0x46d923;
        puStack_164 = (undefined1 *)FUN_00679e4e();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      }
      else {
        iStack_15c = unaff_EBP + 0x24;
        iStack_160 = 0x46d93d;
        puStack_164 = (undefined1 *)FUN_00679e4e();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
        *(undefined4 *)(unaff_EBP + -4) = 0x3b;
      }
      iStack_15c = 0;
      *(int **)(unaff_EBP + -0x30) = &iStack_160;
      puStack_168 = (undefined1 *)0x46d952;
      FUN_004059fd();
      puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
      *(undefined4 *)(unaff_EBP + -4) = 0x3b;
      puStack_168 = (undefined1 *)0x46d964;
      FUN_0040263d();
      puStack_168 = (undefined1 *)0x46d96b;
      FUN_004048a4();
      *(undefined4 *)(unaff_EBP + -4) = 0x3d;
      iStack_160 = 0x46d979;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0x20) = uVar5;
      iStack_15c = 0x46d988;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        iStack_15c = 0x46d999;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      iStack_15c = 0x46d9a9;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_15c = 0x46d9b4;
        FUN_00878dfb();
      }
      if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
        FUN_00402fa6();
      }
      bVar3 = *(byte *)(unaff_EBP + -0x10) & 0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0xf;
      goto joined_r0x0046d9d1;
    }
    iStack_15c = 0;
    puStack_168 = (undefined1 *)&iStack_160;
    *(int **)(unaff_EBP + 0x24) = &iStack_160;
    puStack_164 = (undefined1 *)0x593;
    iStack_160 = iVar6;
    FUN_00679e4e();
    puStack_164 = (undefined1 *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_168 = (undefined1 *)0x46da03;
    FUN_0040263d();
    puStack_168 = (undefined1 *)0x46da0a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_160 = 0x46da15;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x20) = uVar5;
    iStack_15c = 0x46da24;
    iVar6 = FUN_0041a581();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      iStack_15c = 0x46da32;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_15c = 0x46da42;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_15c = 0x46da4d;
      FUN_00878dfb();
    }
  }
  iStack_15c = unaff_EBP + 0x20;
  iStack_160 = 0x46da5d;
  piVar8 = (int *)FUN_00679d86();
  iStack_160 = *piVar8;
  iStack_15c = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  puStack_164 = (undefined1 *)0x46da6e;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    iStack_15c = 0x46da85;
    FUN_00403384();
  }
  iStack_15c = 0x46da94;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_15c = 0x46daa1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    iStack_15c = 0x46dab5;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      iStack_15c = 0x46dac0;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iStack_15c = 0x46dace;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + 0x20) = piVar8;
  uVar5 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 0x24) = uVar5;
  FUN_0040e48b();
  puStack_164 = *(undefined1 **)(unaff_EBP + -0x58);
  iStack_160 = *(int *)(unaff_EBP + -0x54);
  iStack_15c = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_178 = *(int *)(unaff_EBP + 0x24);
  iStack_174 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_168 = *(undefined1 **)(unaff_EBP + -0x20);
  iVar6 = (**(code **)(*piVar8 + 0x2c))();
  if (iVar6 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  piVar8 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (piVar8 == (int *)0x0) {
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + -0x14);
  }
  iVar6 = *piVar8;
  *(int **)(unaff_EBP + 0x20) = piVar8;
  iVar6 = (**(code **)(iVar6 + 0x80))();
  if (iVar6 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  iVar6 = *(int *)(unaff_EBP + 8);
  if ((iVar6 == 1) || (iVar6 == 2)) {
    FUN_004031b7();
    piVar8 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    if (piVar8 == (int *)0x0) {
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + -0x14);
    }
    iVar6 = *piVar8;
    *(int **)(unaff_EBP + 0x20) = piVar8;
    piStack_1c4 = (int *)0x46dc98;
    iVar6 = (**(code **)(iVar6 + 0x80))();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)&DAT_00963cc8;
      iStack_1c8 = *(int *)(unaff_EBP + 0x20);
      iStack_1cc = iVar6;
      FUN_00878e09();
    }
    piStack_1c4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_1c8 = 0x46dcb7;
    piStack_1c4 = (int *)FUN_00402bc3();
    if ((int)piStack_1c4 < 0) {
      iStack_1c8 = 0x46dcc2;
      FUN_00878dfb();
    }
    piStack_1c4 = (int *)0x3;
    iStack_1c8 = 0xff;
    iStack_1cc = 0x46dcd1;
    FUN_004031b7();
    piVar8 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (piVar8 == (int *)0x0) {
      piStack_1c4 = (int *)0x80004003;
      iStack_1c8 = 0x46dce6;
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + -0x14);
    }
    iVar6 = *piVar8;
    iStack_1cc = *(int *)(unaff_EBP + -0x28);
    iStack_1c8 = *(int *)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + 0x20) = piVar8;
    piStack_1c4 = *(int **)(unaff_EBP + -0x20);
    piVar8 = (int *)(**(code **)(iVar6 + 0x80))();
    if ((int)piVar8 < 0) {
      piStack_1ec = piVar8;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x28) == 0) {
      FUN_00403191();
      piStack_1ec = (int *)0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      piStack_1fc = (int *)0x46ddd5;
      (*DAT_0097b4c8)();
      piStack_1fc = (int *)0x46dde2;
      FUN_0087a1b0();
      piStack_1fc = (int *)0x0;
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0xffffffff;
      piStack_20c = (int *)0x46ddf4;
      puStack_208 = &stack0xfffffe08;
      piStack_20c = (int *)FUN_00449713();
      iStack_210 = 0x46ddfa;
      puStack_208 = (undefined1 *)FUN_00456ad5();
      *(int ***)(unaff_EBP + 0x18) = &piStack_204;
      piStack_20c = (int *)0x46de07;
      FUN_004033a1();
      puStack_208 = (undefined1 *)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      piStack_20c = (int *)0x46de1d;
      FUN_0040263d();
      piStack_20c = (int *)0x46de24;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      piStack_204 = (int *)0x46de2f;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + 0x24) = iVar6;
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      if (iVar6 != 0) {
        piStack_1fc = (int *)(unaff_EBP + 0x24);
        piStack_200 = (int *)0x46de45;
        piStack_1fc = (int *)FUN_0041a581();
        if (((int)piStack_1fc < 0) && (piStack_1fc != (int *)0x80004002)) {
          piStack_200 = (int *)0x46de56;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      piStack_218 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (piStack_218 == (int *)0x0) {
        piStack_1fc = (int *)0x80004003;
        piStack_200 = (int *)0x46de71;
        FUN_00878dfb();
        piStack_218 = *(int **)(unaff_EBP + -0x14);
      }
      iVar6 = *piStack_218;
      piStack_20c = *(int **)(unaff_EBP + 0x18);
      puStack_208 = *(undefined1 **)(unaff_EBP + -0x2c);
      iStack_210 = *(int *)(unaff_EBP + -0x40) + 0x2a;
      piStack_204 = *(int **)(unaff_EBP + -0x28);
      piStack_200 = *(int **)(unaff_EBP + -0x24);
      iStack_214 = *(int *)(unaff_EBP + -0x44) + 0x46;
      *(int **)(unaff_EBP + 0x28) = piStack_218;
      piStack_1fc = *(int **)(unaff_EBP + -0x20);
      puStack_21c = (undefined4 *)0x46de9d;
      iVar6 = (**(code **)(iVar6 + 0x80))();
      if (iVar6 < 0) {
        puStack_21c = (undefined4 *)&DAT_00963cc8;
        uStack_220 = *(undefined4 *)(unaff_EBP + 0x28);
        uStack_228 = 0x46deaf;
        iStack_224 = iVar6;
        FUN_00878e09();
      }
      puStack_21c = (undefined4 *)0x46deb7;
      FUN_004125e6();
      puStack_21c = (undefined4 *)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      uStack_220 = 0x46dec7;
      puStack_21c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_21c < 0) {
        uStack_220 = 0x46ded2;
        FUN_00878dfb();
      }
      puStack_21c = (undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_220 = 0x46dedf;
      puStack_21c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_21c < 0) {
        uStack_220 = 0x46deea;
        FUN_00878dfb();
      }
      puStack_21c = &DAT_00980690;
      uStack_220 = 0x46def7;
      FUN_00403191();
      puStack_21c = (undefined4 *)0x0;
      uStack_220 = 0;
      iStack_224 = -1;
      uStack_228 = *(undefined4 *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      uStack_22c = 0;
      uStack_230 = 0;
      iStack_234 = 0x46df0d;
      (*DAT_0097b4c8)();
      iStack_234 = 0x46df1a;
      FUN_0087a1b0();
      iStack_234 = 0;
      uStack_238 = 0;
      uStack_23c = 0xffffffff;
      uVar5 = FUN_00449713(&uStack_230);
      uVar5 = FUN_00456ad5(uVar5);
      *(undefined4 **)(unaff_EBP + 0x18) = &uStack_23c;
      FUN_004033a1(uVar5);
      iVar6 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      FUN_0040263d(iVar6);
      FUN_004048a4(iVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      uStack_23c = 0x46df67;
      iVar6 = FUN_004032b4();
      *(int *)(unaff_EBP + 0x24) = iVar6;
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      if (iVar6 != 0) {
        iStack_234 = unaff_EBP + 0x24;
        uStack_238 = 0x46df7d;
        iStack_234 = FUN_0041a581();
        if ((iStack_234 < 0) && (iStack_234 != -0x7fffbffe)) {
          uStack_238 = 0x46df8e;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      piVar8 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      if (piVar8 == (int *)0x0) {
        iStack_234 = 0x80004003;
        uStack_238 = 0x46dfa9;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x14);
      }
      iVar6 = *piVar8;
      uStack_23c = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_238 = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + 0x28) = piVar8;
      iStack_234 = *(undefined4 *)(unaff_EBP + -0x20);
      iVar6 = (**(code **)(iVar6 + 0x80))
                        (piVar8,*(int *)(unaff_EBP + -0x44) + 0x5a,
                         *(int *)(unaff_EBP + -0x40) + 0x2a,*(undefined4 *)(unaff_EBP + 0x18),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
    }
    else {
      piStack_1ec = (int *)0x46dd53;
      FUN_004031b7();
      piStack_200 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      if (piStack_200 == (int *)0x0) {
        FUN_00878dfb();
        piStack_200 = *(int **)(unaff_EBP + -0x14);
      }
      iVar6 = *piStack_200;
      piStack_1ec = *(int **)(unaff_EBP + -0x28);
      piStack_1fc = (int *)(*(int *)(unaff_EBP + -0x44) + 0x3c);
      *(int **)(unaff_EBP + 0x20) = piStack_200;
      piStack_204 = (int *)0x46dd94;
      iVar6 = (**(code **)(iVar6 + 0x80))();
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
    }
  }
  else {
    if ((iVar6 != 4) && (iVar6 != 5)) goto LAB_0046e022;
    FUN_004031b7();
    piVar8 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    if (piVar8 == (int *)0x0) {
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + -0x14);
    }
    iVar6 = *piVar8;
    *(int **)(unaff_EBP + 0x20) = piVar8;
    piStack_1c4 = (int *)0x46dc27;
    iVar6 = (**(code **)(iVar6 + 0x80))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
  }
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
LAB_0046e022:
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  FUN_004031b7();
  bVar13 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  if (bVar13) {
    FUN_00878dfb();
  }
  piStack_1c4 = (int *)0x46e074;
  puVar4 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  iVar6 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  if (iVar6 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  iVar6 = *piVar8;
  *(int **)(unaff_EBP + 0x20) = piVar8;
  iVar6 = (**(code **)(iVar6 + 100))();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46e109;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 4) == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar8;
  iVar6 = (**(code **)(*piVar2 + 0xe0))();
  if (iVar6 < 0) {
    iStack_1cc = 0x46e153;
    iStack_1c8 = iVar6;
    piStack_1c4 = piVar2;
    FUN_00878e09();
  }
  piStack_1c4 = (int *)0x46e161;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  piStack_1c4 = (int *)0x46e171;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  piStack_1c4 = (int *)0x46e181;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  piStack_1c4 = (int *)0x46e18e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  piStack_1c4 = (int *)0x46e19b;
  FUN_00403191();
  iVar6 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  if (iVar6 == 0) {
    piStack_1c4 = (int *)0x46e1ad;
    FUN_00878dfb();
  }
  piStack_1c4 = (int *)(unaff_EBP + -0x90);
  iStack_1c8 = unaff_EBP + -0xe0;
  iStack_1cc = unaff_EBP + -0x58;
  FUN_004250ac();
  piStack_1c4 = (int *)0x46e1e4;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46e1ef;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  piStack_1c4 = (int *)0x46e1fc;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46e207;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  piStack_1c4 = (int *)0x46e214;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46e21f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  piStack_1c4 = (int *)0x46e22f;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46e23a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  piStack_1c4 = (int *)0x46e24a;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46e255;
    FUN_00878dfb();
  }
  iVar6 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_1c4 = (int *)0x46e262;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    piStack_1c4 = (int *)0x46e26d;
    FUN_00878dfb();
    iVar6 = extraout_ECX_09;
  }
  if (*(int *)(unaff_EBP + 8) == 5) {
    piStack_1c4 = (int *)0x0;
    *(int **)(unaff_EBP + 0x20) = &iStack_1c8;
    iStack_1cc = 0x68f;
    iStack_1c8 = iVar6;
    FUN_00679e4e();
    iStack_1cc = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    iStack_1c8 = 0x46e2b6;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x74) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar6 != 0) {
      piStack_1c4 = (int *)0x46e2cc;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        piStack_1c4 = (int *)0x46e2dd;
        FUN_00878dfb();
      }
    }
    iVar6 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    piStack_1c4 = (int *)0x46e2ed;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      piStack_1c4 = (int *)0x46e2f8;
      FUN_00878dfb();
      iVar6 = extraout_ECX_10;
    }
    piStack_1c4 = (int *)0x0;
    *(int **)(unaff_EBP + 0x20) = &iStack_1c8;
    iStack_1cc = 0x55d;
    iStack_1c8 = iVar6;
    FUN_00679e4e();
    iStack_1cc = unaff_EBP + -0x144;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    iStack_1c8 = 0x46e332;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x7c) = iVar6;
    *(undefined4 *)(unaff_EBP + 0x28) = 0;
    if (iVar6 != 0) {
      piStack_1c4 = (int *)0x46e348;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        piStack_1c4 = (int *)0x46e359;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    piStack_1c4 = (int *)0x46e369;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)0x46e374;
      FUN_00878dfb();
    }
    piStack_1c4 = (int *)0x46e381;
    FUN_00403191();
    piStack_1c4 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    iStack_1c8 = 0x46e390;
    FUN_004031b7();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    if (bVar13) {
      piStack_1c4 = (int *)0x46e3a6;
      FUN_00878dfb();
    }
    piStack_1c4 = (int *)(unaff_EBP + -0x68);
    iStack_1c8 = 0;
    iStack_1cc = 0;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x10)
    ;
    piStack_1c4 = (int *)0x46e3d1;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
      piStack_1c4 = (int *)0x46e3de;
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    piStack_1c4 = (int *)0x46e3eb;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)0x46e3f6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    piStack_1c4 = (int *)0x46e403;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)0x46e40e;
      FUN_00878dfb();
    }
    piStack_1c4 = *(int **)(unaff_EBP + 0x14);
    iStack_1c8 = 0x46e41b;
    FUN_0040ee87();
    iVar6 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    if (iVar6 == 0) {
      piStack_1c4 = (int *)0x46e42d;
      FUN_00878dfb();
    }
    iStack_1cc = *(int *)(unaff_EBP + -0x68);
    iStack_1c8 = *(int *)(unaff_EBP + -100);
    piVar8 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x10);
    iVar6 = *piVar8;
    piStack_1c4 = *(int **)(unaff_EBP + -0x60);
    *(int **)(unaff_EBP + 0x20) = piVar8;
    iVar6 = (**(code **)(iVar6 + 100))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) == 0) {
      FUN_00878dfb();
    }
    iVar6 = (**(code **)(*(int *)*piVar8 + 0xe0))();
    if (iVar6 < 0) {
      FUN_00878e09();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 99;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 100;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    FUN_00403191();
    iVar6 = *piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    if (iVar6 == 0) {
      FUN_00878dfb();
    }
    piStack_1ec = (int *)(unaff_EBP + -0x68);
    FUN_004250ac();
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 99;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    FUN_004031b7();
    bVar13 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x69;
    if (bVar13) {
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    piStack_1fc = (int *)0x46e60a;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x14)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    iVar6 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    if (iVar6 == 0) {
      FUN_00878dfb();
    }
    piStack_1ec = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    iVar6 = *piStack_1ec;
    *(int **)(unaff_EBP + 0x20) = piStack_1ec;
    iVar6 = (**(code **)(iVar6 + 100))();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e6a4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    iVar6 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    *(int **)(unaff_EBP + 0x18) = piVar8;
    if (iVar6 == 0) {
      FUN_00878dfb();
    }
    piVar2 = (int *)*piVar8;
    piVar9 = (int *)(**(code **)(*piVar2 + 0xe0))();
    if ((int)piVar9 < 0) {
      piStack_204 = (int *)0x46e6f1;
      piStack_200 = piVar9;
      piStack_1fc = piVar2;
      FUN_00878e09();
    }
    piStack_1fc = (int *)0x46e6fe;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    piStack_1fc = (int *)(unaff_EBP + -0x90);
    piStack_200 = (int *)0x46e710;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e71c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    piStack_1fc = (int *)0x46e72c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    piStack_1fc = (int *)0x46e739;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    piStack_1fc = (int *)0x46e746;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    piStack_1fc = (int *)0x46e753;
    FUN_00403191();
    iVar6 = *piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    if (iVar6 == 0) {
      piStack_1fc = (int *)0x46e765;
      FUN_00878dfb();
    }
    piStack_1fc = (int *)(unaff_EBP + -0xe0);
    piStack_200 = (int *)(unaff_EBP + -0x58);
    piStack_204 = (int *)(unaff_EBP + -0x2c);
    puStack_208 = (undefined1 *)(unaff_EBP + -0x68);
    piStack_20c = *(int **)(unaff_EBP + 0x28);
    iStack_210 = unaff_EBP + -0x120;
    iStack_214 = 0x46e790;
    FUN_004250ac();
    piStack_1fc = (int *)0x46e79c;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e7a7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    piStack_1fc = (int *)0x46e7b4;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e7bf;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    piStack_1fc = (int *)0x46e7cc;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e7d7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    piStack_1fc = (int *)0x46e7e4;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e7ef;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    piStack_1fc = (int *)0x46e7ff;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e80a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    piStack_1fc = (int *)0x46e81a;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1fc = (int *)0x46e825;
      FUN_00878dfb();
    }
    uVar12 = -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & *(int *)(unaff_EBP + 0x14) - 0xcU;
    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(uVar12 + 300);
    piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    iVar6 = *piVar8;
    *(int **)(unaff_EBP + 0x20) = piVar8;
    if (iVar6 == 0) {
      piStack_1fc = (int *)0x46e857;
      FUN_00878dfb();
    }
    piStack_1fc = (int *)**(undefined4 **)(unaff_EBP + 0x20);
    iVar6 = *piStack_1fc;
    *(int **)(unaff_EBP + 0x20) = piStack_1fc;
    piStack_200 = (int *)0x46e87c;
    iVar6 = (**(code **)(iVar6 + 0xb4))();
    if (iVar6 < 0) {
      piStack_200 = (int *)&DAT_00963df8;
      piStack_204 = *(int **)(unaff_EBP + 0x20);
      piStack_20c = (int *)0x46e88e;
      puStack_208 = (undefined1 *)iVar6;
      FUN_00878e09();
    }
    piVar8 = *(int **)(unaff_EBP + 0x18);
    iVar6 = *piVar8;
    iVar7 = *(int *)(uVar12 + 0x128);
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(uVar12 + 300);
    if (iVar6 == 0) {
      piStack_200 = (int *)0x80004003;
      piStack_204 = (int *)0x46e8ae;
      FUN_00878dfb();
    }
    piVar8 = (int *)*piVar8;
    piStack_200 = (int *)(((iVar7 * 3000 - *(int *)(unaff_EBP + 0x20)) + -0x6665aaf) * 10);
    puStack_208 = (undefined1 *)0x46e8ce;
    piStack_204 = piVar8;
    iVar6 = (**(code **)(*piVar8 + 0xb4))();
    if (iVar6 < 0) {
      iStack_1cc = 0x46e8de;
      iStack_1c8 = iVar6;
      piStack_1c4 = piVar8;
      FUN_00878e09();
    }
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      piStack_1c4 = (int *)0x46e8f4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      piStack_1c4 = (int *)(unaff_EBP + -0x90);
      iStack_1c8 = 0x46e905;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        piStack_1c4 = (int *)0x46e911;
        FUN_00878dfb();
      }
      piStack_1c4 = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      iStack_1c8 = 0x46e920;
      FUN_004031b7();
      bVar13 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      if (bVar13) {
        piStack_1c4 = (int *)0x46e936;
        FUN_00878dfb();
      }
      piStack_1c4 = (int *)(unaff_EBP + -0x68);
      iStack_1c8 = 0;
      iStack_1cc = 0;
      puVar4 = (undefined4 *)FUN_0042a39f();
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x18) + 0x18);
      piStack_1c4 = (int *)0x46e964;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
      if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
        piStack_1c4 = (int *)0x46e971;
        (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      piStack_1c4 = (int *)0x46e97e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_1c4 = (int *)0x46e989;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      piStack_1c4 = (int *)0x46e999;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_1c4 = (int *)0x46e9a4;
        FUN_00878dfb();
      }
      *(undefined2 *)(unaff_EBP + -0x90) = 0xd;
      *(int **)(unaff_EBP + -0x88) = *(int **)(unaff_EBP + 0x14);
      piStack_1c4 = (int *)0x46e9bc;
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 4))();
      iVar6 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      if (iVar6 == 0) {
        piStack_1c4 = (int *)0x80004003;
        iStack_1c8 = 0x46e9ce;
        FUN_00878dfb();
      }
      iStack_1cc = *(int *)(unaff_EBP + -0x8c);
      piVar8 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar6 = *piVar8;
      iStack_1c8 = *(int *)(unaff_EBP + -0x88);
      *(int **)(unaff_EBP + 0x20) = piVar8;
      piStack_1c4 = *(int **)(unaff_EBP + -0x84);
      iVar6 = (**(code **)(iVar6 + 100))();
      if (iVar6 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x18);
      piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x18);
      *(int **)(unaff_EBP + 0x18) = piVar8;
      if (iVar6 == 0) {
        FUN_00878dfb();
      }
      iVar6 = (**(code **)(*(int *)*piVar8 + 0xe0))();
      if (iVar6 < 0) {
        piStack_1ec = (int *)0x46ea50;
        FUN_00878e09();
      }
      iVar6 = *(int *)(unaff_EBP + -0x18);
      if (*(int *)(iVar6 + 0x10) == 0) {
        FUN_00878dfb();
      }
      iVar7 = *piVar8;
      *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(iVar6 + 0x10);
      if (iVar7 == 0) {
        FUN_00878dfb();
      }
      piVar8 = (int *)*piVar8;
      FUN_004320e3();
      iVar6 = (**(code **)(*piVar8 + 0xb4))();
      if (iVar6 < 0) {
        piStack_1ec = piVar8;
        FUN_00878e09();
      }
      *(undefined4 *)(unaff_EBP + 0x24) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x70) == 0) {
          piStack_1ec = (int *)0x46eac0;
          FUN_00878dfb();
        }
        uVar12 = FUN_0040cf4d();
        if (uVar12 <= *(uint *)(unaff_EBP + 0x20)) break;
        FUN_0087a1b0();
        piStack_1ec = *(int **)(unaff_EBP + 0x20);
        piStack_1ec = (int *)FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffe18;
        FUN_00402e8e();
        piStack_1ec = (int *)(unaff_EBP + -0xf0);
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        FUN_0040263d();
        FUN_004048a4();
        piStack_1ec = (int *)(unaff_EBP + -0xb8);
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        piStack_1ec = (int *)0x46eb32;
        iVar6 = FUN_0041a485();
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          piStack_1ec = (int *)0x46eb43;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xb8) != (int *)0x0) {
          piStack_1ec = (int *)0x46eb57;
          (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
        }
        *(int ***)(unaff_EBP + -0x30) = &piStack_1ec;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        FUN_004115d9();
        FUN_00404e7f();
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        FUN_0040263d();
        piStack_1ec = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x7a;
        uVar5 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xcc) = uVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ebcf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xc0) != (int *)0x0) {
          piStack_1ec = (int *)0x46ebe3;
          (**(code **)(**(int **)(unaff_EBP + -0xc0) + 8))();
        }
        piStack_1ec = (int *)0x46ebe9;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        piStack_1ec = (int *)(unaff_EBP + -0x2c);
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ebff;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        piStack_1ec = (int *)0x46ec09;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        piStack_1ec = (int *)(unaff_EBP + -0x58);
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ec1f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        piStack_1ec = (int *)0x46ec2c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
        piStack_1ec = (int *)(unaff_EBP + -0xe0);
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ec45;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        piStack_1ec = (int *)0x46ec52;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
        piStack_1ec = (int *)(unaff_EBP + -0x90);
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ec6b;
          FUN_00878dfb();
        }
        piStack_1ec = *(int **)(unaff_EBP + -0xcc);
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        FUN_004031b7();
        iVar6 = **(int **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        if (iVar6 == 0) {
          piStack_1ec = (int *)0x46ec94;
          FUN_00878dfb();
        }
        piStack_1ec = (int *)(unaff_EBP + -0x58);
        piStack_1fc = *(int **)(unaff_EBP + 0x24);
        piStack_200 = (int *)(unaff_EBP + -0x134);
        piStack_204 = (int *)0x46ecc2;
        FUN_004250ac();
        piStack_1ec = (int *)0x46ecce;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ecd9;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        piStack_1ec = (int *)0x46ece6;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ecf1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        piStack_1ec = (int *)0x46ed01;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ed0c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        piStack_1ec = (int *)0x46ed1c;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ed27;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        piStack_1ec = (int *)0x46ed34;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ed3f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        piStack_1ec = (int *)0x46ed4c;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ed57;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        piStack_1ec = (int *)0x46ed67;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          piStack_1ec = (int *)0x46ed72;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      }
      piStack_1ec = (int *)0x46ed80;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      piStack_1ec = (int *)(unaff_EBP + -0x58);
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        piStack_1ec = (int *)0x46ed96;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      piStack_1ec = (int *)0x46eda0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      piStack_1ec = (int *)(unaff_EBP + -0x2c);
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        piStack_1ec = (int *)0x46edb6;
        FUN_00878dfb();
      }
      iVar6 = **(int **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x81;
      if (iVar6 == 0) {
        piStack_1ec = (int *)0x46edcb;
        FUN_00878dfb();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x50);
      piStack_204 = *(int **)(unaff_EBP + -0x2c);
      piStack_200 = *(int **)(unaff_EBP + -0x28);
      piStack_20c = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar6 = *piStack_20c;
      piStack_1fc = *(int **)(unaff_EBP + -0x24);
      puStack_208 = (undefined1 *)0x20;
      *(int **)(unaff_EBP + 0x20) = piStack_20c;
      iStack_210 = 0x46edf9;
      iVar6 = (**(code **)(iVar6 + 0x110))();
      if (iVar6 < 0) {
        piStack_1c4 = *(int **)(unaff_EBP + 0x20);
        iStack_1cc = 0x46ee0b;
        iStack_1c8 = iVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      piStack_1c4 = (int *)0x46ee18;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_1c4 = (int *)0x46ee23;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      piStack_1c4 = (int *)0x46ee30;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_1c4 = (int *)0x46ee3b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (*(int **)(unaff_EBP + 0x24) != (int *)0x0) {
        piStack_1c4 = (int *)0x46ee4c;
        (**(code **)(**(int **)(unaff_EBP + 0x24) + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    if (*(int **)(unaff_EBP + 0x28) != (int *)0x0) {
      piStack_1c4 = (int *)0x46ee5d;
      (**(code **)(**(int **)(unaff_EBP + 0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      piStack_1c4 = (int *)0x46ee6e;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
  }
  piStack_1c4 = (int *)(unaff_EBP + -0x80);
  iStack_1c8 = 0x46ee79;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  if (*(undefined4 **)(unaff_EBP + 0xc) == (undefined4 *)0x0) {
    piStack_1c4 = (int *)0x0;
  }
  else {
    piStack_1c4 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  iStack_1c8 = 0x46ee9a;
  FUN_004184ca();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  piStack_1c4 = (int *)0x46eeb0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_1c4 = (int *)(unaff_EBP + -0x2c);
  iStack_1c8 = 0x46eebf;
  iVar6 = FUN_00402e32();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46eecb;
    FUN_00878dfb();
  }
  piStack_1c4 = (int *)0x64;
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  iStack_1c8 = 0x46eedd;
  iStack_1cc = FUN_00411641();
  *(int **)(unaff_EBP + 0x20) = &iStack_1c8;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  iStack_1cc = 0x46eef5;
  FUN_0044974c();
  iStack_1cc = 0x46eefc;
  uVar5 = FUN_0047077a();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  piStack_1c4 = (int *)0x46ef0c;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46ef17;
    FUN_00878dfb();
  }
  piStack_1c4 = (int *)(unaff_EBP + -0xf4);
  iStack_1c8 = 0x46ef29;
  FUN_0046fcad();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  piStack_1c4 = (int *)0x46ef33;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_1c4 = (int *)(unaff_EBP + -0x2c);
  iStack_1c8 = 0x46ef3d;
  iVar6 = FUN_00402e32();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46ef49;
    FUN_00878dfb();
  }
  piStack_1c4 = (int *)0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iStack_1c8 = 0x46ef5f;
  FUN_004031b7();
  piStack_1c4 = (int *)(unaff_EBP + -0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  iStack_1c8 = 0x46ef76;
  iStack_1c8 = FUN_00449749();
  iStack_1cc = 0x46ef82;
  FUN_00411641();
  *(int **)(unaff_EBP + 0x18) = &iStack_1cc;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x44) + 8;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  piStack_1c4 = (int *)0x46efc2;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46efcd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  piStack_1c4 = (int *)0x46efda;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1c4 = (int *)0x46efe5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x48) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(*(int *)(unaff_EBP + -0x48) + -4) >> 1;
  }
  if (*(int *)(unaff_EBP + 0x20) < (int)uVar12) {
    piStack_1c4 = *(int **)(unaff_EBP + 0x20);
    iStack_1c8 = unaff_EBP + 0x20;
    iStack_1cc = 0x46f00f;
    FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 0x8a;
    piStack_1c4 = (int *)0x46f01c;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    FUN_00402676();
    iStack_1c8 = unaff_EBP + -0x80;
    *(int ***)(unaff_EBP + 0x20) = &piStack_1c4;
    iStack_1cc = 0x46f039;
    FUN_0046fcc9();
    iStack_1c8 = unaff_EBP + -0x48;
    iStack_1cc = 0x46f042;
    uVar5 = FUN_007d381d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = uVar5;
    piStack_1c4 = (int *)0x46f051;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    piStack_1c4 = (int *)(unaff_EBP + -0x2c);
    iStack_1c8 = 0x46f05b;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)0x46f067;
      FUN_00878dfb();
    }
    piStack_1c4 = (int *)0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_1c8 = 0x46f07d;
    FUN_004031b7();
    piStack_1c4 = (int *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    iStack_1c8 = 0x46f094;
    iStack_1c8 = FUN_00449749();
    iStack_1cc = 0x46f09d;
    FUN_00411641();
    *(int **)(unaff_EBP + 0x20) = &iStack_1cc;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    piStack_1c4 = (int *)0x46f0d6;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)0x46f0e1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    piStack_1c4 = (int *)0x46f0ee;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_1c4 = (int *)0x46f0f9;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    piStack_1c4 = (int *)0x46f108;
    FUN_00878dfb();
  }
  iVar10 = FUN_0040e48b();
  iVar6 = *(int *)(unaff_EBP + -0x1c);
  iVar7 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar7 + 0x48) = iVar10 / -2;
  if (iVar6 == 0) {
    piStack_1c4 = (int *)0x46f12b;
    FUN_00878dfb();
  }
  iVar11 = FUN_0040e53d();
  iVar6 = *(int *)(unaff_EBP + 0x10);
  iVar10 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar7 + 0x4c) = -iVar11;
  if (((iVar10 == 4) && (0 < *(int *)(unaff_EBP + 0x1c))) || (*(int *)(unaff_EBP + 8) == 5)) {
    *(int *)(iVar7 + 0x4c) = -iVar11 + 7 + iVar6;
  }
  piStack_1c4 = (int *)0x46f15b;
  FUN_0046f8b1();
  *(undefined4 *)(iVar7 + 0x54) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x80) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f18e;
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0xbc) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f1cc;
    (**(code **)(**(int **)(unaff_EBP + -0xbc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0xc4) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f1e0;
    (**(code **)(**(int **)(unaff_EBP + -0xc4) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f1f1;
    (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -200) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f205;
    (**(code **)(**(int **)(unaff_EBP + -200) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0xb0) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f219;
    (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f22a;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f23b;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x70) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f24c;
    (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f25d;
    (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0xa8) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f271;
    (**(code **)(**(int **)(unaff_EBP + -0xa8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    piStack_1c4 = (int *)0x46f282;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004030b1();
  }
  FUN_004115a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



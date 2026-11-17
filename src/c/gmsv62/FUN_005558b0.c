/* FUN_005558b0 - 0x005558b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005558b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int extraout_ECX_07;
  undefined *puVar7;
  int unaff_EBP;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined *puStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  int *piStack_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  undefined *puStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_74 = 0x5558d2;
  iVar2 = FUN_0054e7b3();
  *(uint *)(unaff_EBP + -0x38) = (uint)(iVar2 != 0);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((iVar2 != 0) == 0) {
    iStack_74 = 1;
    iStack_78 = *(int *)(unaff_EBP + 0xc);
    iStack_7c = unaff_EBP + 0x20;
    uStack_80 = 0x555915;
    puVar3 = (undefined4 *)FUN_005536ce();
    iStack_74 = 0x55591f;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar3);
  }
  else {
    iStack_74 = 0;
    iStack_78 = *(int *)(unaff_EBP + 0xc);
    iStack_7c = unaff_EBP + 0x20;
    uStack_80 = 0x5558f6;
    puVar3 = (undefined4 *)FUN_005536ce();
    iStack_74 = 0x555900;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar3);
  }
  FUN_004125e6();
  if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_00556aae;
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 200);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + 0x20) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555956;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_74 = 0x555963;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x5c;
    iStack_7c = unaff_EBP + -0x4c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_80;
    iStack_84 = 0x745;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_8c = 0x555984;
    uStack_80 = extraout_ECX_00;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_88 = (undefined1 *)0x555991;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555998;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x55599f;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_78 = 0x5559aa;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
    iStack_74 = 0x5559b9;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x5559ca;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_74 = 0x5559d7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x5559e2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_74 = 0x5559ef;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x5559fa;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555a07;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555a12;
      FUN_00878dfb();
    }
  }
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xcc);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x20) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555a2e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_74 = 0x555a3b;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x4c;
    iStack_7c = unaff_EBP + -0x5c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_80;
    iStack_84 = 0x91a;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_8c = 0x555a5c;
    uStack_80 = extraout_ECX_01;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_88 = (undefined1 *)0x555a69;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555a70;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x555a77;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_78 = 0x555a82;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
    iStack_74 = 0x555a91;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x555aa2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_74 = 0x555aaf;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555aba;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_74 = 0x555ac7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555ad2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555adf;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555aea;
      FUN_00878dfb();
    }
  }
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xd0);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x24) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555b06;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_74 = 0x555b13;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x4c;
    iStack_7c = unaff_EBP + -0x5c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_80;
    iStack_84 = 0x91b;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_8c = 0x555b34;
    uStack_80 = extraout_ECX_02;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_88 = (undefined1 *)0x555b41;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555b48;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x555b4f;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_78 = 0x555b5a;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
    iStack_74 = 0x555b69;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x555b7a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_74 = 0x555b87;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555b92;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_74 = 0x555b9f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555baa;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555bb7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555bc2;
      FUN_00878dfb();
    }
  }
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xd4);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x28) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555bde;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_74 = 0x555beb;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x4c;
    iStack_7c = unaff_EBP + -0x5c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_80;
    iStack_84 = 0xd1a;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_8c = 0x555c0c;
    uStack_80 = extraout_ECX_03;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_88 = (undefined1 *)0x555c19;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555c20;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x555c27;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_78 = 0x555c32;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
    iStack_74 = 0x555c41;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x555c52;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_74 = 0x555c5f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555c6a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_74 = 0x555c77;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555c82;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555c8f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555c9a;
      FUN_00878dfb();
    }
  }
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xdc);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x34) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555cb6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_74 = 0x555cc3;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x4c;
    iStack_7c = unaff_EBP + -0x5c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_80;
    iStack_84 = 0x742;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    uStack_8c = 0x555ce4;
    uStack_80 = extraout_ECX_04;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_88 = (undefined1 *)0x555cf1;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555cf8;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x555cff;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_78 = 0x555d0a;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
    iStack_74 = 0x555d19;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x555d2a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_74 = 0x555d37;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555d42;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_74 = 0x555d4f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555d5a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555d67;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555d72;
      FUN_00878dfb();
    }
  }
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xe0);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x30) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555d8e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_74 = 0x555d9b;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x4c;
    iStack_7c = unaff_EBP + -0x5c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_80;
    iStack_84 = 0x743;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    uStack_8c = 0x555dbc;
    uStack_80 = extraout_ECX_05;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_88 = (undefined1 *)0x555dc9;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555dd0;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x555dd7;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_78 = 0x555de2;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
    iStack_74 = 0x555df1;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x555e02;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_74 = 0x555e0f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555e1a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_74 = 0x555e27;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555e32;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555e3f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555e4a;
      FUN_00878dfb();
    }
  }
  piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xe4);
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x2c) = piVar4;
  if (iVar2 == 0) {
    iStack_74 = 0x555e66;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_74 = 0x555e73;
    FUN_00403191();
    iStack_74 = 0;
    iStack_78 = unaff_EBP + -0x4c;
    iStack_7c = unaff_EBP + -0x5c;
    puStack_88 = (undefined1 *)&uStack_80;
    *(undefined4 **)(unaff_EBP + -0x3c) = &uStack_80;
    iStack_84 = 0x744;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    uStack_8c = 0x555e94;
    uStack_80 = extraout_ECX_06;
    FUN_00679e4e();
    iStack_84 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_88 = (undefined1 *)0x555ea1;
    FUN_00405a1d();
    puStack_88 = (undefined1 *)0x555ea8;
    FUN_00402660();
    puStack_88 = (undefined1 *)0x555eaf;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_78 = 0x555eba;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
    iStack_74 = 0x555ec9;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_74 = 0x555eda;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_74 = 0x555ee7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555ef2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_74 = 0x555eff;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555f0a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_74 = 0x555f17;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x555f22;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar2 = *(int *)(unaff_EBP + 0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 == 1) {
    iStack_74 = 0x555f71;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)**(undefined4 **)(unaff_EBP + -0x34));
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x36f;
  }
  else if (iVar2 == 2) {
    iStack_74 = 0x555f5b;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)**(undefined4 **)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xc6f;
  }
  else if (iVar2 == 3) {
    iStack_74 = 0x555f45;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)**(undefined4 **)(unaff_EBP + -0x2c));
    *(undefined4 *)(unaff_EBP + -0x1c) = 0xfc0;
  }
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      iStack_74 = 0xff;
      iStack_78 = 0x556500;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 0x20);
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      *(int *)(unaff_EBP + 0x1c) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x55651a;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x28) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x55652d;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_74 = 0x55653e;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + 0x20) = piVar4;
      iVar2 = FUN_0040eed0();
      *(int *)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + 0x14) - iVar2;
      iVar2 = FUN_0040eea9();
      uStack_80 = *(undefined4 *)(unaff_EBP + 0x1c);
      puStack_88 = (undefined1 *)(*(int *)(unaff_EBP + 0x10) - iVar2);
      iStack_84 = *(int *)(unaff_EBP + 0x28);
      iStack_7c = *(int *)(unaff_EBP + -0x5c);
      iStack_78 = *(int *)(unaff_EBP + -0x58);
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_8c = *(undefined4 *)(unaff_EBP + 0x20);
      uStack_90 = 0x55657e;
      iVar2 = (**(code **)(*piVar4 + 0x80))();
      if (iVar2 < 0) {
        iStack_74 = *(undefined4 *)(unaff_EBP + 0x20);
        iStack_7c = 0x556590;
        iStack_78 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_74 = 0x55659d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_74 = 0x5565a8;
        FUN_00878dfb();
      }
    }
    if (*(short *)(unaff_EBP + -0x1c) != 0) {
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      iStack_74 = unaff_EBP + 0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_78 = 0x5565cc;
      puVar3 = (undefined4 *)FUN_00679d86();
      iStack_78 = *puVar3;
      iStack_74 = unaff_EBP + 0x20;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_7c = 0x5565dd;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      if (*(int *)(unaff_EBP + 0x28) != 0) {
        iStack_74 = 0x5565f4;
        FUN_00403384();
      }
      iStack_74 = 0x556603;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      iStack_74 = 0x556610;
      FUN_00403191();
      piStack_98 = *(int **)(unaff_EBP + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      if (piStack_98 == (int *)0x0) {
        iStack_74 = 0x556625;
        FUN_00878dfb();
        piStack_98 = *(int **)(unaff_EBP + 0x20);
      }
      iStack_7c = *(int *)(unaff_EBP + -0x4c);
      iStack_78 = *(int *)(unaff_EBP + -0x48);
      iVar2 = *piStack_98;
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_8c = *(undefined4 *)(unaff_EBP + -0x5c);
      puStack_88 = *(undefined1 **)(unaff_EBP + -0x58);
      uStack_90 = 0x20;
      iStack_84 = *(int *)(unaff_EBP + -0x54);
      uStack_94 = 0x20;
      *(int **)(unaff_EBP + 0x28) = piStack_98;
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
      puStack_9c = (undefined *)0x55664d;
      iVar2 = (**(code **)(iVar2 + 0x2c))();
      if (iVar2 < 0) {
        puStack_9c = &DAT_00963cc8;
        piStack_a0 = *(int **)(unaff_EBP + 0x28);
        piStack_a8 = (int *)0x556660;
        puStack_a4 = (undefined *)iVar2;
        FUN_00878e09();
      }
      puStack_9c = (undefined *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_a0 = (int *)0x55666d;
      puStack_9c = (undefined *)FUN_00402bc3();
      if ((int)puStack_9c < 0) {
        piStack_a0 = (int *)0x556678;
        FUN_00878dfb();
      }
      puStack_9c = (undefined *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_a0 = (int *)0x556685;
      puStack_9c = (undefined *)FUN_00402bc3();
      if ((int)puStack_9c < 0) {
        piStack_a0 = (int *)0x556690;
        FUN_00878dfb();
      }
      piStack_a0 = *(int **)(unaff_EBP + 0x20);
      if (piStack_a0 == (int *)0x0) {
        puStack_9c = (undefined *)0x80004003;
        piStack_a0 = (int *)0x5566a2;
        FUN_00878dfb();
        piStack_a0 = *(int **)(unaff_EBP + 0x20);
      }
      iVar2 = *piStack_a0;
      puStack_9c = (undefined *)0x0;
      *(int **)(unaff_EBP + 0x28) = piStack_a0;
      puStack_a4 = (undefined *)0x5566af;
      iVar2 = (**(code **)(iVar2 + 0x70))();
      if (iVar2 < 0) {
        puStack_a4 = &DAT_00963cc8;
        piStack_a8 = *(int **)(unaff_EBP + 0x28);
        uStack_b0 = 0x5566bd;
        puStack_ac = (undefined4 *)iVar2;
        FUN_00878e09();
      }
      piStack_a8 = *(int **)(unaff_EBP + 0x20);
      if (piStack_a8 == (int *)0x0) {
        puStack_a4 = (undefined *)0x80004003;
        piStack_a8 = (int *)0x5566ca;
        FUN_00878dfb();
        piStack_a8 = *(int **)(unaff_EBP + 0x20);
      }
      iVar2 = *piStack_a8;
      puStack_a4 = (undefined *)0x0;
      *(int **)(unaff_EBP + 0x28) = piStack_a8;
      puStack_ac = (undefined4 *)0x5566d7;
      iVar2 = (**(code **)(iVar2 + 0x78))();
      if (iVar2 < 0) {
        puStack_ac = (undefined4 *)&DAT_00963cc8;
        uStack_b0 = *(undefined4 *)(unaff_EBP + 0x28);
        uStack_b8 = 0x5566e5;
        iStack_b4 = iVar2;
        FUN_00878e09();
      }
      puStack_ac = &DAT_00980690;
      uStack_b0 = 0x5566f2;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_ac = (undefined4 *)0x80004003;
        uStack_b0 = 0x556701;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_ac = (undefined4 *)0x80004003;
          uStack_b0 = 0x55670c;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + 0x20) == 0) {
        puStack_ac = (undefined4 *)0x80004003;
        uStack_b0 = 0x55671a;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + 0x20);
      *(int **)(unaff_EBP + 0x28) = piVar4;
      *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
      puStack_ac = (undefined4 *)0x55672b;
      iVar2 = FUN_0040eed0();
      *(int *)(unaff_EBP + -0x38) = 0x20 - iVar2;
      puStack_ac = (undefined4 *)0x55673a;
      iStack_c4 = FUN_0040eea9();
      uStack_bc = *(undefined4 *)(unaff_EBP + 0x1c);
      uStack_c0 = *(undefined4 *)(unaff_EBP + -0x38);
      uStack_b8 = *(undefined4 *)(unaff_EBP + -0x5c);
      iStack_b4 = *(int *)(unaff_EBP + -0x58);
      iStack_c4 = -iStack_c4;
      uStack_b0 = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_c8 = *(undefined4 *)(unaff_EBP + 0x28);
      puStack_ac = *(undefined4 **)(unaff_EBP + -0x50);
      puStack_cc = (undefined *)0x55675a;
      iVar2 = (**(code **)(*piVar4 + 0x80))();
      if (iVar2 < 0) {
        puStack_cc = &DAT_00963cc8;
        uStack_d0 = *(undefined4 *)(unaff_EBP + 0x28);
        iStack_d4 = iVar2;
        FUN_00878e09();
      }
      puStack_cc = (undefined *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      uStack_d0 = 0x556779;
      iVar2 = FUN_00402bc3();
      puVar7 = puStack_cc;
      if (iVar2 < 0) {
        uStack_d0 = 0x556784;
        puStack_cc = (undefined *)iVar2;
        FUN_00878dfb();
        puVar7 = (undefined *)extraout_ECX_07;
      }
      puStack_cc = (undefined *)0x3;
      uStack_d0 = *(undefined4 *)(unaff_EBP + -0x1c);
      *(int **)(unaff_EBP + 0x28) = &iStack_d4;
      iStack_d4 = (int)puVar7;
      FUN_0046fc23(unaff_EBP + 0x20);
      FUN_007d7fb2();
      puStack_cc = (undefined *)0x3;
      uStack_d0 = 0xff;
      iStack_d4 = 0x5567af;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (piVar4 == (int *)0x0) {
        puStack_cc = (undefined *)0x80004003;
        uStack_d0 = 0x5567c4;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_d4 = *(int *)(unaff_EBP + -0x58);
      uStack_d0 = *(undefined4 *)(unaff_EBP + -0x54);
      *(int **)(unaff_EBP + 0x28) = piVar4;
      puStack_cc = *(undefined **)(unaff_EBP + -0x50);
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar4,*(undefined4 *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + 0x14) + -0x20
                         ,*(undefined4 *)(unaff_EBP + 0x20),*(undefined4 *)(unaff_EBP + -0x5c));
      if (iVar2 < 0) {
        iStack_74 = *(undefined4 *)(unaff_EBP + 0x28);
        iStack_7c = 0x5567fe;
        iStack_78 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_74 = 0x55680b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_74 = 0x556816;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_004125e6();
    }
    iStack_74 = 0xff;
    iStack_78 = 0x556832;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_74 = 0x556846;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_74 = 0x556851;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + 8) == 0) {
      iStack_74 = 0x556862;
      FUN_00878dfb();
    }
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + 0x28) = *(undefined4 *)(unaff_EBP + 8);
    iStack_78 = 0x556875;
    iStack_78 = FUN_0040eed0();
    iVar2 = *(int *)(unaff_EBP + 0x14);
    iStack_78 = iVar2 - iStack_78;
    iStack_7c = 0x556885;
    iStack_7c = FUN_0040eea9();
    iStack_7c = *(int *)(unaff_EBP + 0x10) - iStack_7c;
    uStack_80 = 0x556893;
    FUN_00470739();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_74 = 0x5568a0;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_74 = 0x5568ab;
      FUN_00878dfb();
    }
    iStack_74 = 0x5568b6;
    iVar6 = FUN_005540b6();
    if ((iVar6 == 0) || (*(int *)(unaff_EBP + 0x24) != 0)) {
LAB_0055693a:
      if (((*(int *)(unaff_EBP + 0xc) == 5400000) ||
          ((*(int *)(unaff_EBP + 0xc) == 0x5269a8 || (*(int *)(unaff_EBP + 0xc) == 5200000)))) &&
         (*(int *)(unaff_EBP + 0x24) == 0)) {
LAB_00556952:
        iStack_74 = 0xff;
        iStack_78 = 0x55695d;
        FUN_004295f1();
        iStack_74 = **(undefined4 **)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iStack_78 = 0x556970;
        FUN_004115d9();
        iStack_78 = 0x556977;
        iStack_78 = FUN_0040eed0();
        iStack_78 = iVar2 - iStack_78;
        iStack_7c = 0x556984;
        FUN_004115d9();
        iStack_7c = 0x55698b;
        iVar6 = FUN_0040eea9();
        iStack_7c = (*(int *)(unaff_EBP + 0x10) - iVar6) + 0x20;
        uStack_80 = 0x55699c;
        FUN_004115d9();
        uStack_80 = 0x5569a3;
        FUN_00470739();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        goto LAB_005569aa;
      }
    }
    else {
      if (*(int *)(unaff_EBP + 0xc) == 5400000) goto LAB_00556952;
      if ((*(int *)(unaff_EBP + 0xc) == 0x5269a8) || (*(int *)(unaff_EBP + 0xc) == 5200000))
      goto LAB_0055693a;
      iStack_74 = 0xff;
      iStack_78 = 0x5568eb;
      FUN_004295f1();
      iStack_74 = **(undefined4 **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_78 = 0x5568fe;
      FUN_004115d9();
      iStack_78 = 0x556905;
      iStack_78 = FUN_0040eed0();
      iStack_78 = iVar2 - iStack_78;
      iStack_7c = 0x556912;
      FUN_004115d9();
      iStack_7c = 0x556919;
      iVar6 = FUN_0040eea9();
      iStack_7c = (*(int *)(unaff_EBP + 0x10) - iVar6) + 0x20;
      uStack_80 = 0x55692a;
      FUN_004115d9();
      uStack_80 = 0x556931;
      FUN_00470739();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
LAB_005569aa:
      iStack_74 = 0x5569b0;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_74 = 0x5569bb;
        FUN_00878dfb();
      }
    }
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      iStack_74 = 0xff;
      iStack_78 = 0x5569cb;
      FUN_004295f1();
      iStack_74 = **(undefined4 **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_78 = 0x5569de;
      FUN_004115d9();
      iStack_78 = 0x5569e5;
      iStack_78 = FUN_0040eed0();
      iStack_78 = iVar2 - iStack_78;
      iStack_7c = 0x5569f2;
      FUN_004115d9();
      iStack_7c = 0x5569f9;
      iVar6 = FUN_0040eea9();
      iStack_7c = (*(int *)(unaff_EBP + 0x10) - iVar6) + 0x20;
      uStack_80 = 0x556a0a;
      FUN_004115d9();
      uStack_80 = 0x556a11;
      FUN_00470739();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_74 = 0x556a1e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        iStack_74 = 0x556a29;
        FUN_00878dfb();
      }
    }
    iStack_74 = 0x556a32;
    cVar1 = FUN_004115ef();
    if ((cVar1 == '\0') && (*(int *)(unaff_EBP + 0x2c) != 1)) {
      iStack_74 = 0xff;
      iStack_78 = 0x556a47;
      FUN_004295f1();
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_78 = 0x556a5a;
      FUN_004115d9();
      iStack_78 = 0x556a61;
      iVar6 = FUN_0040eed0();
      iStack_78 = (iVar2 - iVar6) + -0x1e;
      iStack_7c = 0x556a6f;
      FUN_004115d9();
      iStack_7c = 0x556a76;
      iVar2 = FUN_0040eea9();
      iStack_7c = (*(int *)(unaff_EBP + 0x10) - iVar2) + 1;
      uStack_80 = 0x556a87;
      FUN_004115d9();
      uStack_80 = 0x556a8e;
      FUN_00470739();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      goto LAB_00556a95;
    }
  }
  else {
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      iStack_74 = 0x555f97;
      FUN_00403191();
      piVar4 = *(int **)(unaff_EBP + 0x20);
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar2 == 0) {
        iStack_74 = 0x555fac;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x28) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x555fc0;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x1c) = iVar2;
      *(int *)(unaff_EBP + -0x38) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x555fd2;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x2c) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x555fe1;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_74 = 0x555ff2;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + 0x20) = piVar4;
      iVar2 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x28) = iVar2 << 1;
      iVar2 = FUN_0040e48b();
      *(int *)(unaff_EBP + 0x1c) = iVar2 << 1;
      iVar2 = FUN_0040eed0();
      *(int *)(unaff_EBP + 0x2c) = *(int *)(unaff_EBP + 0x14) + iVar2 * -2;
      iVar2 = FUN_0040eea9();
      uStack_80 = 0;
      iStack_84 = 0;
      puStack_88 = (undefined1 *)0x0;
      uStack_8c = 0;
      uStack_90 = *(undefined4 *)(unaff_EBP + 0x28);
      uStack_94 = *(undefined4 *)(unaff_EBP + 0x1c);
      puStack_a4 = (undefined *)(*(int *)(unaff_EBP + 0x10) + iVar2 * -2);
      iStack_7c = *(int *)(unaff_EBP + -0x5c);
      piStack_98 = (int *)0xff;
      puStack_9c = *(undefined **)(unaff_EBP + -0x38);
      iStack_78 = *(int *)(unaff_EBP + -0x58);
      piStack_a0 = *(int **)(unaff_EBP + 0x2c);
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      piStack_a8 = *(int **)(unaff_EBP + 0x20);
      puStack_ac = (undefined4 *)0x556063;
      iVar2 = (**(code **)(*piVar4 + 0x84))();
      if (iVar2 < 0) {
        iStack_74 = *(undefined4 *)(unaff_EBP + 0x20);
        iStack_7c = 0x556075;
        iStack_78 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_74 = 0x556082;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_74 = 0x55608d;
        FUN_00878dfb();
      }
    }
    iStack_74 = 0x55609a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_74 = 0x5560ae;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_74 = 0x5560b9;
        FUN_00878dfb();
      }
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + 0x28) = iVar2;
    *(int *)(unaff_EBP + -0x38) = iVar2;
    if (iVar2 == 0) {
      iStack_74 = 0x5560cc;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_74 = 0x5560dc;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      iStack_74 = 0x5560ea;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar2 = FUN_0040e53d();
    *(int *)(unaff_EBP + 0x2c) = iVar2 << 1;
    iVar2 = FUN_0040e48b();
    *(int *)(unaff_EBP + 0x28) = iVar2 << 1;
    iVar2 = FUN_0040eed0();
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x14) + iVar2 * -2;
    iVar2 = FUN_0040eea9();
    uStack_80 = 0;
    iStack_84 = 0;
    puStack_88 = (undefined1 *)0x0;
    uStack_8c = 0;
    uStack_90 = *(undefined4 *)(unaff_EBP + 0x2c);
    uStack_94 = *(undefined4 *)(unaff_EBP + 0x28);
    puStack_a4 = (undefined *)(*(int *)(unaff_EBP + 0x10) + iVar2 * -2);
    iStack_7c = *(int *)(unaff_EBP + -0x5c);
    piStack_98 = (int *)0xff;
    puStack_9c = *(undefined **)(unaff_EBP + -0x38);
    iStack_78 = *(int *)(unaff_EBP + -0x58);
    piStack_a0 = *(int **)(unaff_EBP + 0x1c);
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
    piStack_a8 = *(int **)(unaff_EBP + 0x20);
    puStack_ac = (undefined4 *)0x55615b;
    iVar2 = (**(code **)(*piVar4 + 0x84))();
    if (iVar2 < 0) {
      iStack_74 = *(undefined4 *)(unaff_EBP + 0x20);
      iStack_7c = 0x55616d;
      iStack_78 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_74 = 0x55617a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_74 = 0x556185;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + 0xc);
    iStack_74 = 0x556191;
    iVar6 = FUN_005540b6();
    if ((iVar6 == 0) || (*(int *)(unaff_EBP + 0x24) != 0)) {
LAB_005562c1:
      if (((iVar2 == 5400000) || ((iVar2 == 0x5269a8 || (iVar2 == 5200000)))) &&
         (*(int *)(unaff_EBP + 0x24) == 0)) {
LAB_005562de:
        iStack_74 = 0x5562eb;
        FUN_00403191();
        piVar4 = *(int **)(unaff_EBP + -0x24);
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        if (iVar2 == 0) {
          iStack_74 = 0x556300;
          FUN_00878dfb();
        }
        iVar2 = *piVar4;
        *(int *)(unaff_EBP + 0x24) = iVar2;
        if (iVar2 == 0) {
          iStack_74 = 0x556314;
          FUN_00878dfb();
        }
        iVar2 = *piVar4;
        *(int *)(unaff_EBP + 0x20) = iVar2;
        *(int *)(unaff_EBP + 0x1c) = iVar2;
        if (iVar2 == 0) {
          iStack_74 = 0x556326;
          FUN_00878dfb();
        }
        iVar2 = *piVar4;
        *(int *)(unaff_EBP + 0x28) = iVar2;
        if (iVar2 == 0) {
          iStack_74 = 0x556335;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_74 = 0x556346;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 0xc) = piVar4;
        iVar2 = FUN_0040e53d();
        *(int *)(unaff_EBP + 0x24) = iVar2 << 1;
        iVar2 = FUN_0040e48b();
        *(int *)(unaff_EBP + 0x20) = iVar2 << 1;
        iVar2 = FUN_0040eed0();
        *(int *)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + 0x14) + iVar2 * -2;
        iVar2 = FUN_0040eea9();
        uStack_80 = 0;
        iStack_84 = 0;
        puStack_88 = (undefined1 *)0x0;
        uStack_8c = 0;
        uStack_90 = *(undefined4 *)(unaff_EBP + 0x24);
        uStack_94 = *(undefined4 *)(unaff_EBP + 0x20);
        puStack_a4 = (undefined *)(*(int *)(unaff_EBP + 0x10) + (0x20 - iVar2) * 2);
        iStack_7c = *(int *)(unaff_EBP + -0x5c);
        piStack_98 = (int *)0xff;
        puStack_9c = *(undefined **)(unaff_EBP + 0x1c);
        iStack_78 = *(int *)(unaff_EBP + -0x58);
        piStack_a0 = *(int **)(unaff_EBP + 0x28);
        iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
        piStack_a8 = *(int **)(unaff_EBP + 0xc);
        puStack_ac = (undefined4 *)0x5563b9;
        iVar2 = (**(code **)(*piVar4 + 0x84))();
        if (iVar2 < 0) {
          iStack_74 = *(undefined4 *)(unaff_EBP + 0xc);
          iStack_7c = 0x5563cb;
          iStack_78 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        goto LAB_005563d2;
      }
    }
    else {
      if (iVar2 == 5400000) goto LAB_005562de;
      if ((iVar2 == 0x5269a8) || (iVar2 == 5200000)) goto LAB_005562c1;
      iStack_74 = 0x5561d5;
      FUN_00403191();
      piVar4 = *(int **)(unaff_EBP + -0x20);
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (iVar2 == 0) {
        iStack_74 = 0x5561ea;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x24) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x5561fe;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x20) = iVar2;
      *(int *)(unaff_EBP + 0x1c) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x556210;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x28) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x55621f;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_74 = 0x556230;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + 0xc) = piVar4;
      iVar2 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x24) = iVar2 << 1;
      iVar2 = FUN_0040e48b();
      *(int *)(unaff_EBP + 0x20) = iVar2 << 1;
      iVar2 = FUN_0040eed0();
      *(int *)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + 0x14) + iVar2 * -2;
      iVar2 = FUN_0040eea9();
      uStack_80 = 0;
      iStack_84 = 0;
      puStack_88 = (undefined1 *)0x0;
      uStack_8c = 0;
      uStack_90 = *(undefined4 *)(unaff_EBP + 0x24);
      uStack_94 = *(undefined4 *)(unaff_EBP + 0x20);
      puStack_a4 = (undefined *)(*(int *)(unaff_EBP + 0x10) + (0x20 - iVar2) * 2);
      iStack_7c = *(int *)(unaff_EBP + -0x5c);
      piStack_98 = (int *)0xff;
      puStack_9c = *(undefined **)(unaff_EBP + 0x1c);
      iStack_78 = *(int *)(unaff_EBP + -0x58);
      piStack_a0 = *(int **)(unaff_EBP + 0x28);
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      piStack_a8 = *(int **)(unaff_EBP + 0xc);
      puStack_ac = (undefined4 *)0x5562a3;
      iVar2 = (**(code **)(*piVar4 + 0x84))();
      if (iVar2 < 0) {
        iStack_74 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_7c = 0x5562b5;
        iStack_78 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
LAB_005563d2:
      iStack_74 = 0x5563d8;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_74 = 0x5563e3;
        FUN_00878dfb();
      }
    }
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      iStack_74 = 0x5563f9;
      FUN_00403191();
      piVar4 = *(int **)(unaff_EBP + -0x28);
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (iVar2 == 0) {
        iStack_74 = 0x55640e;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x24) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x556422;
        FUN_00878dfb();
      }
      iVar2 = *piVar4;
      *(int *)(unaff_EBP + 0x20) = iVar2;
      *(int *)(unaff_EBP + 0x28) = iVar2;
      if (iVar2 == 0) {
        iStack_74 = 0x556434;
        FUN_00878dfb();
      }
      iVar2 = **(int **)(unaff_EBP + -0x20);
      *(int *)(unaff_EBP + 0x18) = *piVar4;
      if (iVar2 == 0) {
        iStack_74 = 0x556446;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_74 = 0x556457;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + 0xc) = piVar4;
      iVar2 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x24) = iVar2 << 1;
      iVar2 = FUN_0040e48b();
      *(int *)(unaff_EBP + 0x20) = iVar2 << 1;
      iVar2 = FUN_0040eed0();
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + iVar2 * -2;
      iVar2 = FUN_0040eea9();
      uStack_80 = 0;
      iStack_84 = 0;
      puStack_88 = (undefined1 *)0x0;
      uStack_8c = 0;
      uStack_90 = *(undefined4 *)(unaff_EBP + 0x24);
      uStack_94 = *(undefined4 *)(unaff_EBP + 0x20);
      puStack_a4 = (undefined *)(*(int *)(unaff_EBP + 0x10) + (0x20 - iVar2) * 2);
      iStack_7c = *(int *)(unaff_EBP + -0x5c);
      piStack_98 = (int *)0xff;
      puStack_9c = *(undefined **)(unaff_EBP + 0x28);
      iStack_78 = *(int *)(unaff_EBP + -0x58);
      piStack_a0 = *(int **)(unaff_EBP + 0x14);
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
      piStack_a8 = *(int **)(unaff_EBP + 0xc);
      puStack_ac = (undefined4 *)0x5564ca;
      iVar2 = (**(code **)(*piVar4 + 0x84))();
      if (iVar2 < 0) {
        iStack_74 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_7c = 0x5564dc;
        iStack_78 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
LAB_00556a95:
      iStack_74 = 0x556a9b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_74 = 0x556aa6;
        FUN_00878dfb();
      }
    }
  }
  FUN_004125e6();
LAB_00556aae:
  FUN_004125e6();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



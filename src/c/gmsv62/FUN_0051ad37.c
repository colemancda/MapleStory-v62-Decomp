/* FUN_0051ad37 - 0x0051ad37 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051ad37(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  IBinding *pIVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *piVar8;
  int unaff_EBP;
  bool bVar9;
  int *piStack_120;
  code *pcStack_11c;
  int *piStack_118;
  undefined4 *puStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int *piStack_f8;
  undefined *puStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int *piStack_d8;
  undefined *puStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int *piStack_c4;
  int iStack_c0;
  undefined *puStack_bc;
  int *piStack_b8;
  undefined1 *puStack_b4;
  int iStack_b0;
  undefined1 *puStack_ac;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x44) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  puStack_ac = (undefined1 *)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_b0 = 0x51ad6a;
  puVar3 = (undefined4 *)FUN_00679d86();
  puStack_ac = (undefined1 *)*puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_b0 = unaff_EBP + -0x3c;
  puStack_b4 = (undefined1 *)0x51ad7d;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    puStack_ac = (undefined1 *)0x51ad93;
    FUN_00403384();
  }
  puStack_ac = (undefined1 *)0x51ada5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_ac = (undefined1 *)0x51adb5;
  FUN_00403191();
  puStack_ac = (undefined1 *)0x0;
  iStack_b0 = unaff_EBP + -0x84;
  puStack_b4 = (undefined1 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_b8 = (int *)0x51add1;
  puStack_bc = (undefined *)FUN_00411641();
  *(int ***)(unaff_EBP + 0xc) = &piStack_b8;
  iStack_c0 = 0x51addd;
  FUN_004033a1();
  puStack_bc = (undefined *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c0 = 0x51aded;
  FUN_00405a1d();
  iStack_c0 = 0x51adf4;
  FUN_00402660();
  iStack_c0 = 0x51adfb;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_b0 = 0x51ae06;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar4 != 0) {
    puStack_ac = (undefined1 *)0x51ae1c;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      puStack_ac = (undefined1 *)0x51ae2d;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_ac = (undefined1 *)0x51ae3d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_ac = (undefined1 *)0x51ae48;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_ac = (undefined1 *)0x51ae58;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_ac = (undefined1 *)0x51ae63;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_ac = (undefined1 *)0x51ae73;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_ac = (undefined1 *)0x51ae7e;
    FUN_00878dfb();
  }
  puStack_ac = &LAB_00450362;
  iStack_b0 = 3;
  puStack_b4 = (undefined1 *)0x4;
  piStack_b8 = (int *)(unaff_EBP + -0x1c);
  puStack_bc = (undefined *)0x51ae95;
  FUN_0087b2f0();
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_ac;
  iStack_b0 = 0x3cb;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_b8 = (int *)0x51aead;
  FUN_00679e4e();
  iStack_b0 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_b4 = (undefined1 *)0x51aebd;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x51aec4;
  puStack_ac = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b0 = 0x51aece;
  uVar5 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x58) = uVar5;
  iStack_b0 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_b4 = (undefined1 *)0x51aede;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_ac = (undefined1 *)0x51aeeb;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  do {
    FUN_0087a1b0();
    puStack_ac = *(undefined1 **)(unaff_EBP + 0xc);
    iStack_b0 = 0x51af04;
    puStack_ac = (undefined1 *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x40) = &stack0xffffff58;
    iStack_b0 = 0x51af12;
    FUN_00402e8e();
    puStack_ac = (undefined1 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_b0 = 0x51af22;
    FUN_0040263d();
    iStack_b0 = 0x51af29;
    FUN_004048a4();
    puStack_ac = (undefined1 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_b0 = 0x51af37;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_ac = (undefined1 *)0x51af45;
    iVar4 = FUN_0041a485();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      puStack_ac = (undefined1 *)0x51af56;
      FUN_00878dfb();
    }
    FUN_004027b3();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_ac = (undefined1 *)0x51af6b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_ac = (undefined1 *)0x51af76;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
  } while (*(int *)(unaff_EBP + 0xc) < 3);
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_ac = (undefined1 *)0x51af95;
    FUN_00878dfb();
  }
  iVar4 = FUN_0040e48b();
  puStack_ac = (undefined1 *)0x51afa8;
  FUN_00403191();
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_ac;
  iStack_b0 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_b4 = (undefined1 *)0x51afbe;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0x44) + 8;
  iStack_b0 = 0x51afd0;
  FUN_0044974c();
  iStack_b0 = 0x51afd7;
  iVar6 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x40) = iVar6;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_ac = (undefined1 *)0x51afe9;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    puStack_ac = (undefined1 *)0x51aff4;
    FUN_00878dfb();
  }
  iVar6 = (iVar6 + -1 + iVar4) / iVar4;
  *(int *)(unaff_EBP + -0x60) = iVar6;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_ac = (undefined1 *)0x51b010;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_ac = (undefined1 *)0x51b020;
    FUN_00878dfb();
  }
  iVar6 = iVar6 * iVar4;
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x5c) = iVar6;
  uVar5 = FUN_0040e48b();
  iVar4 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  piVar8 = (int *)(iVar4 + iVar6 + *(int *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_ac = (undefined1 *)0x51b05a;
    FUN_00878dfb();
  }
  uVar5 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  puStack_ac = (undefined1 *)0x51b06e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_ac = (undefined1 *)0x51b07b;
  FUN_00403191();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (bVar9) {
    puStack_ac = (undefined1 *)0x51b092;
    FUN_00878dfb();
  }
  puStack_ac = (undefined1 *)(unaff_EBP + -0x34);
  iStack_b0 = *(undefined4 *)(unaff_EBP + 0x14);
  puStack_b4 = *(undefined1 **)(unaff_EBP + 0xc);
  puStack_bc = *(undefined **)(unaff_EBP + 0x10);
  iStack_c0 = (800 - (int)piVar8) / 2;
  piStack_c4 = (int *)(unaff_EBP + -0x20);
  uStack_c8 = 0x51b0c0;
  piStack_b8 = piVar8;
  puVar3 = (undefined4 *)FUN_0042a39f();
  pIVar1 = (IBinding *)*puVar3;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x44) + 4);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0x10) = this;
  puStack_ac = (undefined1 *)0x51b0d2;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_ac = (undefined1 *)0x51b0e7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_ac = (undefined1 *)0x51b0f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_ac = (undefined1 *)0x51b0ff;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_ac = (undefined1 *)0x51b10a;
    FUN_00878dfb();
  }
  puStack_ac = (undefined1 *)0x51b119;
  puVar3 = (undefined4 *)FUN_00485656();
  puStack_ac = (undefined1 *)*puVar3;
  iStack_b0 = 0x51b126;
  FUN_0040ee87();
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar4 == 0) {
    puStack_ac = (undefined1 *)0x51b139;
    FUN_00878dfb();
  }
  piStack_b8 = *(int **)this;
  iVar4 = *piStack_b8;
  puStack_b4 = *(undefined1 **)(unaff_EBP + -0x54);
  iStack_b0 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_ac = *(undefined1 **)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + 0x14) = piStack_b8;
  puStack_bc = (undefined *)0x51b150;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    puStack_bc = &DAT_00963de8;
    iStack_c0 = *(undefined4 *)(unaff_EBP + 0x14);
    uStack_c8 = 0x51b164;
    piStack_c4 = (int *)iVar4;
    FUN_00878e09();
  }
  puStack_bc = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_c0 = 0x51b171;
  puStack_bc = (undefined *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    iStack_c0 = 0x51b17c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_bc = (undefined *)0x51b188;
  FUN_004125d9();
  puStack_bc = (undefined *)0x3;
  iStack_c0 = 0;
  piStack_c4 = (int *)0x51b193;
  FUN_004031b7();
  iVar4 = **(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar4 == 0) {
    puStack_bc = (undefined *)0x80004003;
    iStack_c0 = 0x51b1a8;
    FUN_00878dfb();
  }
  puStack_bc = (undefined *)(unaff_EBP + -0x54);
  iStack_c0 = unaff_EBP + -0x10;
  piStack_c4 = (int *)0x51b1b7;
  FUN_00425067();
  puStack_bc = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_c0 = 0x51b1c4;
  puStack_bc = (undefined *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    iStack_c0 = 0x51b1cf;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_bc = (undefined *)0x80004003;
    iStack_c0 = 0x51b1de;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  puStack_bc = (undefined *)0xffffff;
  iStack_c0 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_c8 = 0;
  uStack_cc = 0;
  puStack_d4 = (undefined *)0x51b1f5;
  piStack_d0 = piVar2;
  piStack_c4 = piVar8;
  iStack_dc = (**(code **)(*piVar2 + 0x8c))();
  if (iStack_dc < 0) {
    puStack_d4 = &DAT_00963cc8;
    uStack_e0 = 0x51b205;
    piStack_d8 = piVar2;
    FUN_00878e09();
  }
  puStack_d4 = (undefined *)0x3;
  piStack_d8 = (int *)0xc0;
  iStack_dc = 0x51b214;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_d4 = (undefined *)0x80004003;
    piStack_d8 = (int *)0x51b227;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + -0x10);
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_dc = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_d8 = *(int **)(unaff_EBP + -0x2c);
  puStack_d4 = *(undefined **)(unaff_EBP + -0x28);
  uStack_e8 = 0;
  uStack_ec = 0;
  puStack_f4 = (undefined *)0x51b246;
  piStack_f0 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x80))();
  if (iVar4 < 0) {
    puStack_f4 = &DAT_00963cc8;
    uStack_100 = 0x51b256;
    iStack_fc = iVar4;
    piStack_f8 = piVar8;
    FUN_00878e09();
  }
  puStack_f4 = (undefined *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_f8 = (int *)0x51b263;
  puStack_f4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    piStack_f8 = (int *)0x51b26e;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_f4 = (undefined *)0x80004003;
    piStack_f8 = (int *)0x51b27d;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined *)0x51b285;
  uVar5 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  if (0 < *(int *)(unaff_EBP + -0x60)) {
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x60);
    do {
      puStack_f4 = (undefined *)0x3;
      piStack_f8 = (int *)0xc0;
      iStack_fc = 0x51b2a5;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_f4 = (undefined *)0x80004003;
        piStack_f8 = (int *)0x51b2b9;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      uStack_104 = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_100 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_fc = *(int *)(unaff_EBP + -0x30);
      uStack_108 = 0;
      uStack_10c = *(undefined4 *)(unaff_EBP + 0xc);
      piStack_f8 = *(int **)(unaff_EBP + -0x2c);
      puStack_f4 = *(undefined **)(unaff_EBP + -0x28);
      puStack_114 = (undefined4 *)0x51b2d9;
      piStack_110 = piVar8;
      iVar4 = (**(code **)(*piVar8 + 0x80))();
      if (iVar4 < 0) {
        puStack_f4 = &DAT_00963cc8;
        uStack_100 = 0x51b2e9;
        iStack_fc = iVar4;
        piStack_f8 = piVar8;
        FUN_00878e09();
      }
      puStack_f4 = (undefined *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_f8 = (int *)0x51b2f6;
      puStack_f4 = (undefined *)FUN_00402bc3();
      if ((int)puStack_f4 < 0) {
        piStack_f8 = (int *)0x51b301;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_f4 = (undefined *)0x80004003;
        piStack_f8 = (int *)0x51b311;
        FUN_00878dfb();
      }
      puStack_f4 = (undefined *)0x51b319;
      iVar4 = FUN_0040e48b();
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + iVar4;
      piVar8 = (int *)(unaff_EBP + 0x14);
      *piVar8 = *piVar8 + -1;
    } while (*piVar8 != 0);
  }
  puStack_f4 = (undefined *)0x3;
  piStack_f8 = (int *)0xc0;
  iStack_fc = 0x51b334;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_f4 = (undefined *)0x80004003;
    piStack_f8 = (int *)0x51b348;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + -0x10);
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_f8 = *(int **)(unaff_EBP + -0x2c);
  puStack_f4 = *(undefined **)(unaff_EBP + -0x28);
  uStack_108 = 0;
  uStack_10c = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_114 = (undefined4 *)0x51b369;
  piStack_110 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x80))();
  if (iVar4 < 0) {
    puStack_114 = (undefined4 *)&DAT_00963cc8;
    piStack_120 = (int *)0x51b379;
    pcStack_11c = (code *)iVar4;
    piStack_118 = piVar8;
    FUN_00878e09();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_118 = (int *)0x51b386;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x51b391;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_114 = (undefined4 *)0x80004003;
    piStack_118 = (int *)0x51b3a0;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)0x51b3a8;
  FUN_0040e48b();
  puStack_114 = &DAT_00980690;
  piStack_118 = (int *)0x51b3b6;
  FUN_00403191();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_118 = (int *)0x51b3c3;
  FUN_00403191();
  puStack_114 = (undefined4 *)(unaff_EBP + -0x74);
  piStack_118 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  pcStack_11c = (code *)0x51b3d7;
  pcStack_11c = (code *)FUN_00449749();
  *(int ***)(unaff_EBP + 0xc) = &piStack_120;
  piStack_120 = extraout_ECX_00;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
  uVar5 = *(undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_004115d9(uVar5);
  iVar4 = FUN_0040e48b();
  iVar4 = iVar4 + (*(int *)(unaff_EBP + -0x5c) - *(int *)(unaff_EBP + -0x40)) / 2;
  FUN_004115d9(iVar4);
  FUN_00448e3a(iVar4,uVar5);
  puStack_114 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_118 = (int *)0x51b428;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x51b433;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_118 = (int *)0x51b440;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x51b44b;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + 0x10);
  if (*piVar8 == 0) {
    puStack_114 = (undefined4 *)0x80004003;
    piStack_118 = (int *)0x51b45c;
    FUN_00878dfb();
  }
  piVar8 = (int *)*piVar8;
  puStack_114 = (undefined4 *)0xffffffff;
  pcStack_11c = (code *)0x51b469;
  piStack_118 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0xe0))();
  if (iVar4 < 0) {
    pcStack_11c = (code *)&DAT_00963df8;
    piStack_120 = piVar8;
    FUN_00878e09(iVar4);
  }
  pcStack_11c = (code *)0x51b481;
  FUN_004125e6();
  pcStack_11c = FUN_004115cc;
  piStack_120 = (int *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087a0b8(unaff_EBP + -0x1c,4);
  pcStack_11c = (code *)0x51b49f;
  FUN_004027eb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    pcStack_11c = (code *)(*(int *)(unaff_EBP + -0x3c) + -0xc);
    piStack_120 = (int *)0x51b4b3;
    FUN_00403384();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



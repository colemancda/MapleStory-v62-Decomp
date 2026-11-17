/* FUN_0048eb24 - 0x0048eb24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048eb24(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined1 *puStack_b8;
  int iStack_b4;
  int *piStack_b0;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x70) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_98 = 0x11d7;
  iStack_9c = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_a0 = 0x48eb67;
  iStack_98 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_9c = 0x48eb74;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_98 = *(int *)(unaff_EBP + 8) + -0xc;
    iStack_9c = 0x48eb87;
    FUN_00403384();
  }
  iStack_98 = 0x578;
  iStack_9c = 0x48eb97;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_98 = 0;
  }
  else {
    iStack_98 = 0x48eba9;
    iStack_98 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_9c = 0x48ebb9;
  FUN_00450382();
  iStack_98 = unaff_EBP + -0x30;
  iStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 1000;
  piStack_b0 = (int *)0x48ebce;
  (**(code **)(**(int **)(extraout_ECX + 0x6c) + 0x20))();
  piStack_b0 = &DAT_00980690;
  iStack_b4 = 0x48ebdc;
  FUN_00403191();
  piStack_b0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_b4 = 0x48ebe9;
  FUN_00403191();
  piStack_b0 = (int *)0x0;
  iStack_b4 = 0;
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x54);
  iStack_bc = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_c0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_c0 = extraout_ECX_00;
  FUN_004033a1(u_UI_CashShop_img_CSItemSearch_Pri_00964cc4);
  iVar1 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_b8 = (undefined1 *)0x48ec2d;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_b0 = (int *)(unaff_EBP + -0x1c);
    iStack_b4 = 0x48ec43;
    piStack_b0 = (int *)FUN_00404b30();
    if (((int)piStack_b0 < 0) && (piStack_b0 != (int *)0x80004002)) {
      iStack_b4 = 0x48ec54;
      FUN_00878dfb();
    }
  }
  piStack_b0 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x48ec61;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    iStack_b4 = 0x48ec6c;
    FUN_00878dfb();
  }
  piStack_b0 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b4 = 0x48ec79;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    iStack_b4 = 0x48ec84;
    FUN_00878dfb();
  }
  piStack_b0 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b4 = 0x48ec91;
  piStack_b0 = (int *)FUN_00402bc3();
  if ((int)piStack_b0 < 0) {
    iStack_b4 = 0x48ec9c;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_b0 = (int *)0x80004003;
    iStack_b4 = 0x48ecab;
    FUN_00878dfb();
  }
  piStack_b0 = (int *)0x48ecb3;
  puStack_b8 = (undefined1 *)FUN_0040cf4d();
  piStack_b0 = (int *)(unaff_EBP + 0xb);
  iStack_b4 = 1;
  iStack_bc = 0x48ecc4;
  FUN_00495dce();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x80004003;
      iStack_b4 = 0x48ecd6;
      FUN_00878dfb();
    }
    piStack_b0 = (int *)0x48ecde;
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + 8)) break;
    piStack_b0 = (int *)0x48ecef;
    FUN_0087a1b0();
    piStack_b0 = (int *)0x0;
    iStack_b4 = 0;
    iStack_bc = *(undefined4 *)(unaff_EBP + 8);
    uStack_c0 = 0x48ecfc;
    puStack_b8 = auStack_ac;
    iStack_bc = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_b8;
    uStack_c0 = 0x48ed08;
    FUN_004033a1();
    iStack_bc = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_c0 = 0x48ed1b;
    FUN_0040263d();
    uStack_c0 = 0x48ed22;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_b8 = (undefined1 *)0x48ed2d;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      piStack_b0 = (int *)(unaff_EBP + -0x20);
      iStack_b4 = 0x48ed43;
      piStack_b0 = (int *)FUN_00404b30();
      if (((int)piStack_b0 < 0) && (piStack_b0 != (int *)0x80004002)) {
        iStack_b4 = 0x48ed54;
        FUN_00878dfb();
      }
    }
    piStack_b0 = (int *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_b4 = 0x48ed64;
    iVar1 = FUN_00402bc3();
    iStack_b4 = (int)piStack_b0;
    if (iVar1 < 0) {
      iStack_b4 = 0x48ed6f;
      piStack_b0 = (int *)iVar1;
      FUN_00878dfb();
      iStack_b4 = extraout_ECX_01;
    }
    piStack_b0 = (int *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_b4;
    puStack_b8 = &DAT_00964310;
    iStack_bc = 0x48ed80;
    FUN_004033a1();
    puStack_b8 = (undefined1 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_bc = 0x48ed90;
    FUN_0040263d();
    iStack_bc = 0x48ed97;
    iStack_b4 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_b8 = (undefined1 *)0x48eda1;
    uVar3 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    puStack_b8 = (undefined1 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_bc = 0x48edb1;
    piStack_b0 = (int *)FUN_00402bc3();
    if ((int)piStack_b0 < 0) {
      iStack_b4 = 0x48edbe;
      FUN_00878dfb();
    }
    piStack_b0 = (int *)0x0;
    *(int **)(unaff_EBP + -0x34) = &iStack_b4;
    puStack_b8 = &DAT_00964308;
    iStack_bc = 0x48edcf;
    FUN_004033a1();
    puStack_b8 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_bc = 0x48ede2;
    FUN_0040263d();
    iStack_bc = 0x48ede9;
    iStack_b4 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_b8 = (undefined1 *)0x48edf3;
    uVar3 = FUN_00412550();
    puStack_b8 = (undefined1 *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_bc = 0x48ee05;
    piStack_b0 = (int *)FUN_00402bc3();
    if ((int)piStack_b0 < 0) {
      iStack_b4 = 0x48ee12;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(unaff_EBP + 8) * 8;
    *(undefined4 *)(iVar1 + *(int *)(extraout_ECX + 100)) = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined4 *)(iVar1 + 4 + *(int *)(extraout_ECX + 100)) = uVar3;
    piStack_b0 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piStack_b0 != (int *)0x0) {
      iStack_b4 = 0x48ee37;
      (**(code **)(*piStack_b0 + 8))();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  }
  piStack_b0 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_b0 != (int *)0x0) {
    iStack_b4 = 0x48ee4f;
    (**(code **)(*piStack_b0 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_b0 = (int *)0x48ee5b;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_00720538 - 0x00720538 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00720538(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 *local_7c;
  
  FUN_00879bb8();
  *(undefined4 ***)(unaff_EBP + -0x14) = &local_7c;
  local_7c = (undefined4 *)0x0;
  FUN_004184ca();
  FUN_0078a024();
  local_7c = (undefined4 *)0x574;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    local_7c = (undefined4 *)0x0;
  }
  else {
    local_7c = (undefined4 *)0x72058e;
    local_7c = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
    uVar2 = FUN_00720e0f();
    iVar1 = *(int *)(extraout_ECX + 4);
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    (**(code **)(iVar1 + 0x2c))();
    local_7c = (undefined4 *)FUN_00720c68();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_007240e2();
  if (*(int *)(extraout_ECX + 0x5f0) == 0) {
    local_7c = &DAT_00980690;
    FUN_00403191();
    local_7c = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00403191();
    local_7c = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piVar3 = (int *)FUN_004489f5();
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar1 == 0) {
      local_7c = (undefined4 *)0x80004003;
      FUN_00878dfb();
    }
    local_7c = (undefined4 *)(unaff_EBP + -0x14);
    piVar3 = (int *)FUN_004113e5();
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar1 == 0) {
      local_7c = (undefined4 *)0x80004003;
      FUN_00878dfb();
    }
    iVar1 = *(int *)*piVar3;
    local_7c = *(undefined4 **)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + 8) = (int *)*piVar3;
    iVar1 = (**(code **)(iVar1 + 0x90))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    FUN_004125d9();
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5f8) + 4) + 0x1c))();
  }
  local_7c = (undefined4 *)0x7206d4;
  FUN_0071f61a();
  *(undefined4 *)(extraout_ECX + 0x5dc) = 0xffffffff;
  local_7c = (undefined4 *)0x68;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    local_7c = (undefined4 *)0x0;
  }
  else {
    local_7c = (undefined4 *)0x7206fc;
    local_7c = (undefined4 *)FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9a0();
  local_7c = (undefined4 *)0x0;
  (**(code **)(**(int **)(extraout_ECX + 0x580) + 8))();
  iVar1 = *(int *)(extraout_ECX + 0x580);
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 0x22;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x588) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x588) + 0x34) = 0x9c;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0x77;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x58c;
  do {
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar1 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar1 = FUN_00450382();
    (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 8;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x28;
  } while (*(int *)(unaff_EBP + 8) < 0x117);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_d4 = unaff_EBP + 8;
  iStack_d8 = 0x7208ed;
  puVar4 = (undefined4 *)FUN_00679d22();
  iStack_d8 = *puVar4;
  iStack_d4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_dc = 0x720903;
  FUN_0049967b();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  iStack_d4 = 0x720919;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_d4 = unaff_EBP + -0x48;
  iStack_d8 = 0x720927;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x720933;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_d4 = 0x720941;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_d4 = unaff_EBP + -0x38;
  puStack_e0 = &DAT_00980690;
  iStack_d8 = 0x72094f;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x72095b;
    FUN_00878dfb();
    puStack_e0 = extraout_ECX_00;
  }
  iStack_d4 = 0;
  iStack_d8 = unaff_EBP + -0x48;
  iStack_dc = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_e0,0x780);
  iVar1 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_d8 = 0x7209a2;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_d4 = 0x7209b4;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d4 = 0x7209c5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_d4 = 0x7209d2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x7209dd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_d4 = 0x7209ea;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x7209f5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_d4 = 0x720a02;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720a0d;
    FUN_00878dfb();
  }
  iStack_d4 = 0x720a17;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_d4 = unaff_EBP + -0x38;
  iStack_d8 = 0x720a25;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x720a31;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_d4 = 0x720a3f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_d4 = unaff_EBP + -0x48;
  puVar4 = &DAT_00980690;
  iStack_d8 = 0x720a4d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x720a59;
    FUN_00878dfb();
    puVar4 = extraout_ECX_01;
  }
  iStack_d4 = 0;
  iStack_d8 = unaff_EBP + -0x38;
  iStack_dc = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_e0 = puVar4;
  FUN_00679e4e(&puStack_e0,0x781);
  iVar1 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_d8 = 0x720aa0;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_d4 = 0x720ab2;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d4 = 0x720ac3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_d4 = 0x720ad0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720adb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_d4 = 0x720ae8;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720af3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_d4 = 0x720b00;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720b0b;
    FUN_00878dfb();
  }
  iStack_d4 = 0x720b15;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_d4 = unaff_EBP + -0x38;
  iStack_d8 = 0x720b23;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x720b2f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_d4 = 0x720b3d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_d4 = unaff_EBP + -0x48;
  puVar4 = &DAT_00980690;
  iStack_d8 = 0x720b4b;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_d4 = 0x720b57;
    FUN_00878dfb();
    puVar4 = extraout_ECX_02;
  }
  iStack_d4 = 0;
  iStack_d8 = unaff_EBP + -0x38;
  iStack_dc = unaff_EBP + -0x48;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_e0 = puVar4;
  FUN_00679e4e(&puStack_e0,0xa33);
  iVar1 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_d8 = 0x720b9e;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_d4 = 0x720bb0;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_d4 = 0x720bc1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_d4 = 0x720bce;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720bd9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_d4 = 0x720be6;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720bf1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_d4 = 0x720bfe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_d4 = 0x720c09;
    FUN_00878dfb();
  }
  iStack_d4 = 0x720c1a;
  FUN_004b2699();
  FUN_007223ee();
  FUN_0072207c();
  if (*(int *)(extraout_ECX + 0x5e0) != 0) {
    FUN_00722b22();
  }
  iStack_d4 = 0x720c49;
  piVar3 = (int *)FUN_006b42c2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *piVar3 = extraout_ECX;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_007d381d - 0x007d381d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d381d(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_2c = (undefined4 *)0x7d383f;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + 8);
  puStack_2c = *(undefined4 **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_30 = 0x7d3854;
  uVar3 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_30;
  FUN_004033a1(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044974c();
  uVar4 = FUN_0047077a();
  if (*piVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(*piVar1 + -4) >> 1;
  }
  *(bool *)(unaff_EBP + -0xd) = uVar4 == uVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_2c = (undefined4 *)0x7d3895;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_2c = (undefined4 *)0x7d38a0;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + -0xd) == '\0') {
    puStack_2c = (undefined4 *)0x7d38c8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    puStack_2c = (undefined4 *)(unaff_EBP + -0x24);
    uStack_30 = 0x7d38d2;
    puVar2 = &DAT_00980690;
    iVar5 = FUN_00402e32();
    puStack_2c = puVar2;
    if (iVar5 < 0) {
      puStack_2c = (undefined4 *)0x7d38de;
      FUN_00878dfb();
      puStack_2c = extraout_ECX;
    }
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_2c;
    uStack_30 = 0x872;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00679e4e(&puStack_2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_30 = 0x7d390b;
    FUN_0044974c();
    uStack_30 = 0x7d3912;
    iVar5 = FUN_00448ebb();
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) - iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_2c = (undefined4 *)0x7d3922;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_2c = (undefined4 *)0x7d392d;
      FUN_00878dfb();
    }
    puStack_2c = (undefined4 *)0x7d3937;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    puStack_2c = (undefined4 *)(unaff_EBP + -0x24);
    uStack_30 = 0x7d3941;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      puStack_2c = (undefined4 *)0x7d394d;
      FUN_00878dfb();
    }
    puStack_2c = *(undefined4 **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_30 = 0x7d3962;
    uVar3 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + 0x10) = &uStack_30;
    FUN_004033a1(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0044974c();
    uVar3 = FUN_0047077a();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
    puStack_2c = (undefined4 *)0x7d3991;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_2c = (undefined4 *)0x7d399c;
      FUN_00878dfb();
    }
    puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_30 = 0x7d39aa;
    FUN_0046fcad();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_2c = (undefined4 *)0x7d39b6;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    puStack_2c = (undefined4 *)0x7d39cb;
    FUN_00748897();
    puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
    uStack_30 = 0x7d39d7;
    puStack_2c = (undefined4 *)FUN_00679d86();
    puStack_2c = (undefined4 *)*puStack_2c;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_30 = 0x7d39f3;
    FUN_0046febf();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      puStack_2c = (undefined4 *)0x7d3a10;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    uVar3 = 1;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      puStack_2c = (undefined4 *)0x7d38b7;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



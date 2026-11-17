/* FUN_00682a6b - 0x00682a6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined * FUN_00682a6b(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  short *psVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar8;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  int unaff_EBP;
  float10 fVar9;
  undefined1 *puStack_60;
  undefined *local_5c;
  
  FUN_00879bb8();
  _local_5c = 0;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_60;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&puStack_60,0x3b4);
  iVar3 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_60 = (undefined1 *)0x682abb;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    _local_5c = CONCAT44(unaff_EBP + -0x14,0x682ad1);
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      _local_5c = CONCAT44(iVar3,0x682ae2);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  _local_5c = CONCAT44(unaff_EBP + -0x34,0x682aef);
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    _local_5c = CONCAT44(iVar3,0x682afa);
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  _local_5c = CONCAT44(0x682b05,local_5c);
  FUN_00682e53();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xc) = *(undefined4 *)(unaff_EBP + 8);
  _local_5c = (ulonglong)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_60 = (undefined1 *)0x682b23;
  iVar3 = FUN_00682ebf();
  if (iVar3 == 0) {
    _local_5c = CONCAT44(unaff_EBP + -0x24,unaff_EBP + 8);
    puStack_60 = (undefined1 *)0x682b59;
    FUN_00682f13();
    _local_5c = CONCAT44((VARIANTARG *)(unaff_EBP + -0x54),0x682b63);
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    puStack_60 = &stack0xffffffa8;
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffa8;
    local_5c = (undefined *)0x64b;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puVar4 = (undefined *)extraout_ECX;
    FUN_00679e4e();
    _local_5c = CONCAT44(puVar4,unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_60 = (undefined1 *)0x682b8a;
    FUN_0040263d();
    puStack_60 = (undefined1 *)0x682b91;
    psVar5 = (short *)FUN_004048a4();
    sVar1 = *psVar5;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (sVar1 == 8) {
      puVar4 = *(undefined **)(psVar5 + 4);
    }
    else {
      puVar4 = &DAT_0097812c;
    }
    _local_5c = CONCAT44(0xffffffff,puVar4);
    puStack_60 = (undefined1 *)0x682bb3;
    FUN_00454081();
    puVar4 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_5c = (undefined *)0x682bc0;
    iVar3 = FUN_00402bc3();
    local_5c = puVar4;
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682bcb);
      FUN_00878dfb();
      local_5c = extraout_ECX_00;
    }
    puVar4 = (undefined *)0x64;
    *(undefined ***)(unaff_EBP + -0x18) = &local_5c;
    puStack_60 = (undefined1 *)0x655;
    FUN_00679e4e(&local_5c);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d();
    uVar6 = FUN_004048a4();
    _local_5c = CONCAT44(puVar4,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_60 = (undefined1 *)0x682c01;
    puStack_60 = (undefined1 *)FUN_00412550();
    iVar7 = FUN_005dd3a5(0x50);
    iVar3 = 0xbe;
    if (iVar7 < 0xbe) {
      iVar3 = iVar7;
    }
    *(int *)(*(int *)(unaff_EBP + -0x20) + 0x14) = iVar3;
    puVar4 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_5c = (undefined *)0x682c2a;
    iVar3 = FUN_00402bc3();
    local_5c = puVar4;
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682c35);
      FUN_00878dfb();
      local_5c = extraout_ECX_01;
    }
    puVar4 = (undefined *)0x64;
    *(undefined ***)(unaff_EBP + -0x18) = &local_5c;
    puStack_60 = (undefined1 *)0x411;
    FUN_00679e4e(&local_5c);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d();
    uVar6 = FUN_004048a4();
    _local_5c = CONCAT44(puVar4,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_60 = (undefined1 *)0x682c6b;
    puVar4 = (undefined *)FUN_00412550();
    if (0x7a < (int)puVar4) {
      puVar4 = (undefined *)0x7b;
    }
    *(undefined **)(*(int *)(unaff_EBP + -0x20) + 0x18) = puVar4;
    puVar4 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_5c = (undefined *)0x682c88;
    iVar3 = FUN_00402bc3();
    puVar8 = puVar4;
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682c93);
      FUN_00878dfb();
      puVar8 = extraout_ECX_02;
    }
    _local_5c = 0x3ff0000000000000;
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_60;
    puStack_60 = puVar8;
    FUN_00679e4e(&puStack_60,0x667);
    iVar3 = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d(iVar3);
    puStack_60 = (undefined1 *)FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    fVar9 = (float10)FUN_00434352();
    *(double *)(unaff_EBP + -0x1c) = (double)fVar9;
    _local_5c = CONCAT44(0x682cdc,local_5c);
    iVar3 = FUN_00682e29();
    *(undefined8 *)(iVar3 + 0x20) = *(undefined8 *)(unaff_EBP + -0x1c);
    puVar4 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_5c = (undefined *)0x682cef;
    iVar3 = FUN_00402bc3();
    local_5c = puVar4;
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682cfa);
      FUN_00878dfb();
      local_5c = extraout_ECX_03;
    }
    puVar4 = (undefined *)0x64;
    *(undefined ***)(unaff_EBP + -0x18) = &local_5c;
    puStack_60 = (undefined1 *)0xca1;
    FUN_00679e4e(&local_5c);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d();
    uVar6 = FUN_004048a4();
    _local_5c = CONCAT44(puVar4,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_60 = (undefined1 *)0x682d30;
    uVar6 = FUN_00412550();
    _local_5c = CONCAT44(0x682d3c,local_5c);
    iVar3 = FUN_00682e29();
    *(undefined4 *)(iVar3 + 0x28) = uVar6;
    puVar4 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    local_5c = (undefined *)0x682d4c;
    iVar3 = FUN_00402bc3();
    local_5c = puVar4;
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682d57);
      FUN_00878dfb();
      local_5c = extraout_ECX_04;
    }
    puVar4 = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x18) = &local_5c;
    puStack_60 = (undefined1 *)0xca3;
    FUN_00679e4e(&local_5c);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d();
    uVar6 = FUN_004048a4();
    _local_5c = CONCAT44(puVar4,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_60 = (undefined1 *)0x682d8c;
    uVar6 = FUN_00412550();
    _local_5c = CONCAT44(0x682d98,local_5c);
    iVar3 = FUN_00682e29();
    *(undefined4 *)(iVar3 + 0x2c) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    _local_5c = CONCAT44(unaff_EBP + -0x44,0x682da8);
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682db3);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    _local_5c = CONCAT44(unaff_EBP + -0x54,0x682dc0);
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      _local_5c = CONCAT44(iVar3,0x682dcb);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      _local_5c = 0x682ddd;
      FUN_00682e91();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      _local_5c = CONCAT44(piVar2,0x682df0);
      (**(code **)(*piVar2 + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      _local_5c = CONCAT44(piVar2,0x682e01);
      (**(code **)(*piVar2 + 8))();
    }
    puVar4 = (undefined *)0x1;
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 4;
    _local_5c = CONCAT44(0x682b33,local_5c);
    FUN_00682e7b();
    _local_5c = CONCAT44(0x682b3b,local_5c);
    FUN_004027eb();
    _local_5c = CONCAT44(0x682b43,local_5c);
    FUN_004027eb();
    puVar4 = (undefined *)0x0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}



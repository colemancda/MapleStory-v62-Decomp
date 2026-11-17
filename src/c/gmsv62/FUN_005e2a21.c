/* FUN_005e2a21 - 0x005e2a21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined * FUN_005e2a21(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *puVar8;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *extraout_ECX_07;
  undefined *extraout_ECX_08;
  int unaff_EBP;
  bool bVar9;
  float10 fVar10;
  undefined1 *puStack_84;
  undefined *local_80;
  
  FUN_00879bb8();
  _local_80 = 0;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_84;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&puStack_84,0x3b4);
  iVar3 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_84 = (undefined1 *)0x5e2a71;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    _local_80 = CONCAT44(unaff_EBP + -0x18,0x5e2a87);
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      _local_80 = CONCAT44(iVar3,0x5e2a98);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  _local_80 = CONCAT44(unaff_EBP + -0x58,0x5e2aa5);
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    _local_80 = CONCAT44(iVar3,0x5e2ab0);
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  _local_80 = CONCAT44(0x5e2abe,local_80);
  FUN_004125cc();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  _local_80 = 0x40005e2ace;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    _local_80 = CONCAT44(0x5e2ae0,local_80);
    uVar4 = FUN_005e3017();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
  _local_80 = CONCAT44(0x5e2af3,local_80);
  FUN_005e30cb();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0xc) = *(undefined4 *)(unaff_EBP + 8);
  _local_80 = (ulonglong)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_84 = (undefined1 *)0x5e2b11;
  iVar3 = FUN_005e3166();
  if (iVar3 == 0) {
    _local_80 = CONCAT44(unaff_EBP + -0x28,unaff_EBP + 8);
    puStack_84 = (undefined1 *)0x5e2b4d;
    FUN_005e31ba();
    puStack_84 = &stack0xffffff84;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff84;
    local_80 = (undefined *)0x411;
    puVar7 = (undefined *)extraout_ECX;
    FUN_00679e4e();
    _local_80 = CONCAT44(puVar7,unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_84 = (undefined1 *)0x5e2b71;
    FUN_0040263d();
    puStack_84 = (undefined1 *)0x5e2b78;
    FUN_004048a4();
    puStack_84 = &stack0xffffff84;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff84;
    local_80 = (undefined *)0x412;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puVar7 = (undefined *)extraout_ECX_00;
    FUN_00679e4e();
    _local_80 = CONCAT44(puVar7,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_84 = (undefined1 *)0x5e2b9f;
    FUN_0040263d();
    puStack_84 = (undefined1 *)0x5e2ba6;
    FUN_004048a4();
    bVar9 = *(short *)(unaff_EBP + -0x48) == 0;
    if (*(short *)(unaff_EBP + -0x38) == 0) {
      if (bVar9) {
        *(undefined1 *)(unaff_EBP + -4) = 9;
        _local_80 = CONCAT44(unaff_EBP + -0x38,0x5e2fa5);
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          _local_80 = CONCAT44(iVar3,0x5e2fb0);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        _local_80 = CONCAT44(unaff_EBP + -0x48,0x5e2fbd);
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          _local_80 = CONCAT44(iVar3,0x5e2fc8);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        _local_80 = CONCAT44(0x5e2fd4,local_80);
        FUN_005e30dd();
        piVar2 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piVar2 != (int *)0x0) {
          _local_80 = CONCAT44(piVar2,0x5e2fe5);
          (**(code **)(*piVar2 + 8))();
        }
        piVar2 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar2 != (int *)0x0) {
          _local_80 = CONCAT44(piVar2,0x5e2ff5);
          (**(code **)(*piVar2 + 8))();
        }
        piVar2 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar2 != (int *)0x0) {
          _local_80 = CONCAT44(piVar2,0x5e3006);
          (**(code **)(*piVar2 + 8))();
        }
        goto LAB_005e3006;
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x2c) = 0;
    }
    else if (bVar9) {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x2c) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x2c) = 2;
    }
    _local_80 = CONCAT44((VARIANTARG *)(unaff_EBP + -0x78),0x5e2bed);
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    puStack_84 = &stack0xffffff84;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff84;
    local_80 = (undefined *)0x64b;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puVar7 = (undefined *)extraout_ECX_01;
    FUN_00679e4e();
    _local_80 = CONCAT44(puVar7,unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_84 = (undefined1 *)0x5e2c14;
    FUN_0040263d();
    puStack_84 = (undefined1 *)0x5e2c1b;
    psVar5 = (short *)FUN_004048a4();
    sVar1 = *psVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (sVar1 == 8) {
      puVar7 = *(undefined **)(psVar5 + 4);
    }
    else {
      puVar7 = &DAT_0097812c;
    }
    _local_80 = CONCAT44(0xffffffff,puVar7);
    puStack_84 = (undefined1 *)0x5e2c3d;
    FUN_00454081();
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2c4a;
    iVar3 = FUN_00402bc3();
    local_80 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2c55);
      FUN_00878dfb();
      local_80 = extraout_ECX_02;
    }
    puVar7 = (undefined *)0x64;
    *(undefined ***)(unaff_EBP + -0x1c) = &local_80;
    puStack_84 = (undefined1 *)0x655;
    FUN_00679e4e(&local_80);
    puStack_84 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d();
    uVar4 = FUN_004048a4();
    _local_80 = CONCAT44(puVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_84 = (undefined1 *)0x5e2c8b;
    puStack_84 = (undefined1 *)FUN_00412550();
    iVar6 = FUN_005dd3a5(0x50);
    iVar3 = 0x8c;
    if (iVar6 < 0x8c) {
      iVar3 = iVar6;
    }
    *(int *)(*(int *)(unaff_EBP + -0x24) + 0x14) = iVar3;
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2cb4;
    iVar3 = FUN_00402bc3();
    local_80 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2cbf);
      FUN_00878dfb();
      local_80 = extraout_ECX_03;
    }
    puVar7 = (undefined *)0x64;
    *(undefined ***)(unaff_EBP + -0x1c) = &local_80;
    puStack_84 = (undefined1 *)0x411;
    FUN_00679e4e(&local_80);
    puStack_84 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d();
    uVar4 = FUN_004048a4();
    _local_80 = CONCAT44(puVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_84 = (undefined1 *)0x5e2cf1;
    puVar7 = (undefined *)FUN_00412550();
    if (0x7a < (int)puVar7) {
      puVar7 = (undefined *)0x7b;
    }
    *(undefined **)(*(int *)(unaff_EBP + -0x24) + 0x18) = puVar7;
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2d0e;
    iVar3 = FUN_00402bc3();
    puVar8 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2d19);
      FUN_00878dfb();
      puVar8 = extraout_ECX_04;
    }
    _local_80 = 0x3ff0000000000000;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_84;
    puStack_84 = puVar8;
    FUN_00679e4e(&puStack_84,0x667);
    iVar3 = unaff_EBP + -0x68;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d(iVar3);
    puStack_84 = (undefined1 *)FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    fVar10 = (float10)FUN_00434352();
    *(double *)(unaff_EBP + -0x20) = (double)fVar10;
    _local_80 = CONCAT44(0x5e2d62,local_80);
    iVar3 = FUN_005e30a1();
    *(undefined8 *)(iVar3 + 0x20) = *(undefined8 *)(unaff_EBP + -0x20);
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2d75;
    iVar3 = FUN_00402bc3();
    local_80 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2d80);
      FUN_00878dfb();
      local_80 = extraout_ECX_05;
    }
    puVar7 = (undefined *)0x64;
    *(undefined ***)(unaff_EBP + -0x1c) = &local_80;
    puStack_84 = (undefined1 *)0xca1;
    FUN_00679e4e(&local_80);
    puStack_84 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d();
    uVar4 = FUN_004048a4();
    _local_80 = CONCAT44(puVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_84 = (undefined1 *)0x5e2db6;
    uVar4 = FUN_00412550();
    _local_80 = CONCAT44(0x5e2dc2,local_80);
    iVar3 = FUN_005e30a1();
    *(undefined4 *)(iVar3 + 0x28) = uVar4;
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2dd2;
    iVar3 = FUN_00402bc3();
    local_80 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2ddd);
      FUN_00878dfb();
      local_80 = extraout_ECX_06;
    }
    puVar7 = (undefined *)0x1;
    *(undefined ***)(unaff_EBP + -0x1c) = &local_80;
    puStack_84 = (undefined1 *)0xf7d;
    FUN_00679e4e(&local_80);
    puStack_84 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d();
    uVar4 = FUN_004048a4();
    _local_80 = CONCAT44(puVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_84 = (undefined1 *)0x5e2e13;
    iVar3 = FUN_00412550();
    _local_80 = CONCAT44(0x5e2e25,local_80);
    iVar6 = FUN_005e30a1();
    *(uint *)(iVar6 + 0x30) = (uint)(iVar3 != 0);
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2e35;
    iVar3 = FUN_00402bc3();
    local_80 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2e40);
      FUN_00878dfb();
      local_80 = extraout_ECX_07;
    }
    puVar7 = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x1c) = &local_80;
    puStack_84 = (undefined1 *)0xfea;
    FUN_00679e4e(&local_80);
    puStack_84 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d();
    uVar4 = FUN_004048a4();
    _local_80 = CONCAT44(puVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_84 = (undefined1 *)0x5e2e75;
    iVar3 = FUN_00412550();
    _local_80 = CONCAT44(0x5e2e87,local_80);
    iVar6 = FUN_005e30a1();
    *(uint *)(iVar6 + 0x34) = (uint)(iVar3 != 0);
    puVar7 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_80 = (undefined *)0x5e2e97;
    iVar3 = FUN_00402bc3();
    local_80 = puVar7;
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2ea2);
      FUN_00878dfb();
      local_80 = extraout_ECX_08;
    }
    puVar7 = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x1c) = &local_80;
    puStack_84 = (undefined1 *)0xbdc;
    FUN_00679e4e(&local_80);
    puStack_84 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d();
    uVar4 = FUN_004048a4();
    _local_80 = CONCAT44(puVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_84 = (undefined1 *)0x5e2ed7;
    iVar3 = FUN_00412550();
    _local_80 = CONCAT44(0x5e2ee9,local_80);
    iVar6 = FUN_005e30a1();
    *(uint *)(iVar6 + 0x38) = (uint)(iVar3 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    _local_80 = CONCAT44(unaff_EBP + -0x68,0x5e2ef9);
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2f04);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    _local_80 = CONCAT44(unaff_EBP + -0x78,0x5e2f11);
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2f1c);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    _local_80 = CONCAT44(unaff_EBP + -0x38,0x5e2f29);
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2f34);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    _local_80 = CONCAT44(unaff_EBP + -0x48,0x5e2f41);
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      _local_80 = CONCAT44(iVar3,0x5e2f4c);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      _local_80 = 0x5e2f5e;
      FUN_005e3100();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar2 != (int *)0x0) {
      _local_80 = CONCAT44(piVar2,0x5e2f72);
      (**(code **)(*piVar2 + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      _local_80 = CONCAT44(piVar2,0x5e2f82);
      (**(code **)(*piVar2 + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      _local_80 = CONCAT44(piVar2,0x5e2f93);
      (**(code **)(*piVar2 + 8))();
    }
    puVar7 = (undefined *)0x1;
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 5;
    _local_80 = CONCAT44(0x5e2b21,local_80);
    FUN_005e30dd();
    _local_80 = CONCAT44(0x5e2b29,local_80);
    FUN_004027eb();
    _local_80 = CONCAT44(0x5e2b31,local_80);
    FUN_004027eb();
    _local_80 = CONCAT44(0x5e2b39,local_80);
    FUN_004027eb();
LAB_005e3006:
    puVar7 = (undefined *)0x0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar7;
}



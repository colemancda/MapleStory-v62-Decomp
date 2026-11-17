/* FUN_004fd364 - 0x004fd364 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fd364(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  int *piStack_44;
  
  FUN_00879bb8();
  piStack_44 = (int *)0x0;
  puStack_50 = (undefined1 *)&piStack_48;
  *(int ***)(unaff_EBP + -0x14) = &piStack_48;
  puStack_4c = (undefined1 *)0x5ba;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_54 = 0x4fd395;
  FUN_00679e4e();
  puStack_4c = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_50 = (undefined1 *)0x4fd3a4;
  FUN_0040263d();
  puStack_50 = (undefined1 *)0x4fd3ab;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_48 = (int *)0x4fd3b6;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_44 = (int *)0x4fd3cc;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_44 = (int *)0x4fd3dd;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_44 = (int *)0x4fd3ea;
  piVar1 = (int *)(unaff_EBP + -0x2c);
  iVar2 = FUN_00402bc3();
  piStack_44 = piVar1;
  if (iVar2 < 0) {
    piStack_44 = (int *)0x4fd3f5;
    FUN_00878dfb();
    piStack_44 = extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_4c = (undefined1 *)&piStack_44;
    *(int ***)(unaff_EBP + -0x14) = &piStack_44;
    piStack_48 = (int *)0x5bb;
    puStack_50 = (undefined1 *)0x4fd412;
    FUN_00679e4e();
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd422;
    FUN_0040263d();
    puStack_4c = (undefined1 *)0x4fd429;
    piStack_44 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_48 = (int *)0x4fd433;
    uVar3 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0xc) = uVar3;
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd443;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_44 = (int *)0x4fd450;
      FUN_00878dfb();
    }
    puStack_4c = (undefined1 *)&piStack_44;
    *(int ***)(unaff_EBP + -0x14) = &piStack_44;
    piStack_48 = (int *)0x3ca;
    puStack_50 = (undefined1 *)0x4fd464;
    FUN_00679e4e();
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd474;
    FUN_0040263d();
    puStack_4c = (undefined1 *)0x4fd47b;
    piStack_44 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_48 = (int *)0x4fd485;
    uVar3 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x10) = uVar3;
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd495;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_44 = (int *)0x4fd4a2;
      FUN_00878dfb();
    }
    puStack_4c = (undefined1 *)&piStack_44;
    *(int ***)(unaff_EBP + -0x14) = &piStack_44;
    piStack_48 = (int *)0x3cb;
    puStack_50 = (undefined1 *)0x4fd4b6;
    FUN_00679e4e();
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd4c6;
    FUN_0040263d();
    puStack_4c = (undefined1 *)0x4fd4cd;
    piStack_44 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_48 = (int *)0x4fd4d7;
    uVar3 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x18) = uVar3;
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd4e7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_44 = (int *)0x4fd4f4;
      FUN_00878dfb();
    }
    puStack_4c = (undefined1 *)&piStack_44;
    *(int ***)(unaff_EBP + -0x14) = &piStack_44;
    piStack_48 = (int *)0x5bd;
    puStack_50 = (undefined1 *)0x4fd508;
    FUN_00679e4e();
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd518;
    FUN_0040263d();
    puStack_4c = (undefined1 *)0x4fd51f;
    piStack_44 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_48 = (int *)0x4fd529;
    uVar3 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x24) = uVar3;
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd539;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_44 = (int *)0x4fd546;
      FUN_00878dfb();
    }
    puStack_4c = (undefined1 *)&piStack_44;
    *(int ***)(unaff_EBP + -0x14) = &piStack_44;
    piStack_48 = (int *)0x5bc;
    puStack_50 = (undefined1 *)0x4fd55a;
    FUN_00679e4e();
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd56a;
    FUN_0040263d();
    puStack_4c = (undefined1 *)0x4fd571;
    piStack_44 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_48 = (int *)0x4fd57b;
    uVar3 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x20) = uVar3;
    piStack_48 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_4c = (undefined1 *)0x4fd58b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_44 = (int *)0x4fd598;
      FUN_00878dfb();
    }
    piStack_48 = (int *)&stack0xffffffc0;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffc0;
    piStack_44 = (int *)0x5ba;
    puStack_4c = (undefined1 *)0x4fd5ab;
    FUN_00679e4e();
    piStack_44 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_48 = (int *)0x4fd5bb;
    FUN_0040263d();
    piStack_48 = (int *)0x4fd5c2;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_44 = (int *)0x4fd5df;
    FUN_00402e8e();
    FUN_00408b49();
    FUN_00402fa6();
    iVar2 = *(int *)(unaff_EBP + -0x14);
    *(int *)(extraout_ECX + 0x3c) = iVar2;
    if (iVar2 != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_44 = (int *)0x4fd60e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_44 = (int *)0x4fd619;
      FUN_00878dfb();
    }
    piStack_44 = (int *)(unaff_EBP + -0x14);
    piStack_48 = (int *)0x4fd629;
    piStack_48 = (int *)FUN_00679d86();
    piStack_48 = (int *)*piStack_48;
    piStack_44 = (int *)(extraout_ECX + 0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_4c = (undefined1 *)0x4fd63a;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
    if (*(int *)(extraout_ECX + 0xc) == 0) {
      puStack_4c = (undefined1 *)&piStack_44;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_44;
      piStack_48 = (int *)0x5be;
      puStack_50 = (undefined1 *)0x4fd666;
      FUN_00679e4e();
      piStack_48 = (int *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_4c = (undefined1 *)0x4fd676;
      FUN_0040263d();
      puStack_4c = (undefined1 *)0x4fd67d;
      piStack_44 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_48 = (int *)0x4fd687;
      uVar3 = FUN_00412550();
      *(undefined4 *)(extraout_ECX + 0x14) = uVar3;
      piStack_48 = (int *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_4c = (undefined1 *)0x4fd697;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_44 = (int *)0x4fd6a4;
        FUN_00878dfb();
      }
      puStack_4c = (undefined1 *)&piStack_44;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_44;
      piStack_48 = (int *)0x3cc;
      puStack_50 = (undefined1 *)0x4fd6b8;
      FUN_00679e4e();
      piStack_48 = (int *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_4c = (undefined1 *)0x4fd6c8;
      FUN_0040263d();
      puStack_4c = (undefined1 *)0x4fd6cf;
      piStack_44 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_48 = (int *)0x4fd6d9;
      uVar3 = FUN_00412550();
      *(undefined4 *)(extraout_ECX + 0x1c) = uVar3;
      piStack_48 = (int *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_4c = (undefined1 *)0x4fd6e9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_44 = (int *)0x4fd6f6;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x44) == 0) {
        piStack_44 = (int *)0x4fd705;
        FUN_00878dfb();
      }
      piStack_44 = *(int **)(extraout_ECX + 0x14);
      piVar1 = *(int **)(extraout_ECX + 0x44);
      puStack_4c = (undefined1 *)0x4fd716;
      piStack_48 = piVar1;
      piStack_48 = (int *)(**(code **)(*piVar1 + 0x40))();
      puStack_4c = extraout_ECX_01;
      if ((int)piStack_48 < 0) {
        puStack_4c = (undefined1 *)0x4fd726;
        piStack_44 = piVar1;
        FUN_00878e09();
        puStack_4c = extraout_ECX_02;
      }
      piStack_44 = (int *)0xff;
      piStack_48 = (int *)(*(int *)(extraout_ECX + 0x1c) * 30000 + -0x3fffff9c);
      *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_4c;
      puStack_50 = (undefined1 *)0x0;
      uStack_54 = 0x4fd747;
      FUN_00424e0a();
      puStack_50 = (undefined1 *)0x0;
      uStack_54 = 0;
      *(undefined1 **)(unaff_EBP + -0x1c) = auStack_58;
      FUN_00433bdf(extraout_ECX + 0x44);
      uVar3 = FUN_004091f9(*(int *)(extraout_ECX + 0x24) != 0);
      puVar4 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x14,uVar3);
      piStack_44 = (int *)0x4fd780;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x40),
                 (IBinding *)*puVar4);
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_44 = (int *)0x4fd78d;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    else {
      *(int *)(extraout_ECX + 0x30) = *(int *)(extraout_ECX + 0x10) + 0x32;
      *(int *)(extraout_ECX + 0x2c) = *(int *)(extraout_ECX + 0x10) + -0x32;
      *(int *)(extraout_ECX + 0x38) = *(int *)(extraout_ECX + 0x18) + -100;
      *(int *)(extraout_ECX + 0x34) = *(int *)(extraout_ECX + 0x18) + 100;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_44 = (int *)0x4fd7bd;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_44 = (int *)0x4fd7ce;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_00433c19 - 0x00433c19 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00433c19(void)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piStack_70;
  int *piStack_6c;
  undefined *puStack_68;
  int *piStack_64;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffa4;
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  sVar1 = **(short **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 2;
  }
  piStack_64 = (int *)(unaff_EBP + 8);
  puStack_68 = (undefined *)0x433c60;
  piVar2 = (int *)FUN_00434eb3();
  if (piVar2 == (int *)0x0) {
    piStack_64 = (int *)0x433cac;
    FUN_00402e8e();
    iVar4 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      FUN_00402fa6();
      FUN_00434c51();
      FUN_00433fd5();
      return;
    }
    piStack_64 = (int *)0x433ce3;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_64 = (int *)0x433cf0;
    FUN_00403191();
    piStack_64 = (int *)0x0;
    puStack_68 = (undefined *)(unaff_EBP + -0x4c);
    piStack_6c = (int *)(unaff_EBP + -0x3c);
    *(int ***)(unaff_EBP + -0x2c) = &piStack_70;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_70 = extraout_ECX_00;
    FUN_004059fd(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00402660();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00404a02(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_68 = (undefined *)0x433d34;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
    piStack_64 = (int *)0x433d43;
    iVar4 = FUN_00438b9b();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      piStack_64 = (int *)0x433d54;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_64 = (int *)0x433d61;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_64 = (int *)0x433d6c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_64 = (int *)0x433d79;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_64 = (int *)0x433d84;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_64 = (int *)0x433d91;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_64 = (int *)0x433d9c;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x18);
    FUN_00434c5e();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_64 = (int *)0x433dc7;
    uVar3 = FUN_004351a1();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434c51();
    if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined4 **)(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
    uVar6 = -(uint)(*(int *)(unaff_EBP + -0x20) != 0) & *(int *)(unaff_EBP + -0x20) - 0x10U;
    piStack_64 = (int *)(unaff_EBP + -0x24);
    puStack_68 = (undefined *)0x433e02;
    uVar3 = FUN_00434f76();
    *(undefined4 *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 4) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402fa6();
  }
  else {
    uVar6 = -(uint)(*piVar2 != 0) & *piVar2 - 0x10U;
    puVar7 = (undefined4 *)(-(uint)(uVar6 != 0) & uVar6 + 0x10);
    piStack_64 = (int *)0x433c84;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               (IBinding *)*puVar7);
    uVar3 = (*DAT_0097b704)();
    puVar7[2] = uVar3;
    piStack_64 = (int *)0x433c97;
    FUN_00435255();
  }
  piStack_64 = (int *)0x433e25;
  FUN_004342c7();
  piStack_64 = (int *)0x433e2e;
  FUN_00403191();
  piStack_64 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_68 = (undefined *)0x433e3e;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    piStack_64 = (int *)0x433e53;
    FUN_00878dfb();
  }
  piStack_64 = (int *)(unaff_EBP + -0x4c);
  puStack_68 = (undefined *)(unaff_EBP + -0x14);
  piStack_6c = (int *)0x433e67;
  FUN_00433fe6();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_64 = (int *)0x433e74;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_64 = (int *)0x433e7f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_64 = (int *)0x433e8c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_64 = (int *)0x433e97;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    piStack_64 = (int *)0x433ea3;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  puStack_68 = (undefined *)0x433ebb;
  piStack_64 = piVar2;
  piVar5 = (int *)(**(code **)(*piVar2 + 0x2c))();
  if ((int)piVar5 < 0) {
    puStack_68 = &DAT_009640b0;
    piStack_70 = piVar5;
    piStack_6c = piVar2;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_68 = (undefined *)0x80004003;
    piStack_6c = (int *)0x433ed8;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  puStack_68 = (undefined *)((-(uint)(*(int *)(unaff_EBP + 0x10) != 0) & 0xfffffffe) + 1);
  piStack_70 = (int *)0x433eed;
  piStack_6c = piVar2;
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  if (iVar4 < 0) {
    piStack_70 = (int *)&DAT_009640b0;
    FUN_00878e09(iVar4,piVar2);
  }
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iVar4 = *(int *)(unaff_EBP + -0x28);
    piVar2 = (int *)(iVar4 + 0x48);
    *piVar2 = *piVar2 + 1;
    piStack_70 = (int *)(unaff_EBP + -0x14);
    FUN_00435345(iVar4 + 0x48);
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar2 != (int *)0x0) {
      piStack_70 = piVar2;
      (**(code **)(*piVar2 + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      piStack_70 = piVar2;
      (**(code **)(*piVar2 + 8))();
    }
    FUN_00433fd5();
    return;
  }
  piStack_70 = (int *)0x1;
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14));
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar2 == (int *)0x0) {
    piStack_70 = (int *)0x80004003;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x14);
  }
  iVar4 = *piVar2;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x5c);
  uVar8 = *(undefined4 *)(unaff_EBP + -0x58);
  uVar9 = *(undefined4 *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + 0xc) = piVar2;
  piStack_70 = *(int **)(unaff_EBP + -0x50);
  iVar4 = (**(code **)(iVar4 + 0x1c))(piVar2,uVar3,uVar8,uVar9);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0xc),&DAT_009640b0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_00433fd5(uVar3,uVar8,uVar9);
  return;
}



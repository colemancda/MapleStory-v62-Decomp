/* FUN_00856a7c - 0x00856a7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00856a7c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  
  FUN_00879bb8();
  if ((DAT_0097f7e8 & 1) == 0) {
    DAT_0097f7e8 = DAT_0097f7e8 | 1;
    puStack_1c = &LAB_00856c0d;
    DAT_0097f7e4 = (int *)0x0;
    uStack_20 = 0x856aae;
    FUN_008796d0();
  }
  piVar1 = DAT_0097f7e4;
  bVar5 = DAT_0097f7e4 != (int *)0x0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (bVar5) {
    puStack_1c = (undefined1 *)0x1;
    uStack_20 = 0x856ac8;
    (**(code **)(*piVar1 + 0x34))();
    puStack_1c = (undefined1 *)0x856acf;
    FUN_004c26e1();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  do {
    iVar2 = *piVar1;
    if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + -0x10))) break;
    puStack_1c = (undefined1 *)0x69c;
    uStack_20 = 0x856af7;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puStack_1c = (undefined1 *)0x856b08;
      iVar2 = FUN_007e62e9();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
    puStack_1c = (undefined1 *)0x856b2f;
    FUN_004c26c4();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puStack_1c = (undefined1 *)0x856b3e;
    FUN_004c26c4();
    puStack_1c = (undefined1 *)0x856b45;
    FUN_004c26e1();
    DAT_0097f7e4 = *(int **)(unaff_EBP + -0x14);
    puStack_1c = (undefined1 *)0x0;
    uStack_20 = 0;
    uStack_24 = *(undefined4 *)(unaff_EBP + -0x10);
    uVar4 = FUN_004726fc();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_24;
    FUN_00450368(uVar4);
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar6 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004c2677(0,uVar4);
    FUN_007eddac(uVar6,uVar4);
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    puStack_1c = (undefined1 *)(uint)(*(uint *)(unaff_EBP + -0x10) < iVar2 - 1U);
    uStack_20 = (uint)(0 < *(int *)(unaff_EBP + -0x10));
    uStack_24 = 0x856ba3;
    FUN_007edf11();
    puStack_1c = (undefined1 *)0x856bab;
    FUN_007e6e3c();
    puStack_1c = (undefined1 *)0x856bb3;
    uVar4 = FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_1c = (undefined1 *)0x856bbd;
    FUN_004c26e1();
    iVar2 = *(int *)(unaff_EBP + 8);
    if (iVar2 == 1) {
LAB_00856bd7:
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
    else {
      if (iVar2 == 2) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_1c = (undefined1 *)0x856bfc;
        FUN_004c26e1();
        break;
      }
      if (iVar2 == 0x2000) {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + -1;
      }
      else if (iVar2 == 0x2001) goto LAB_00856bd7;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_1c = (undefined1 *)0x856be6;
    FUN_004c26e1();
  } while (-1 < *(int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



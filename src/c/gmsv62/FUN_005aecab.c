/* FUN_005aecab - 0x005aecab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005aecab(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  int unaff_EBP;
  uint uVar5;
  uint auStack_4c [2];
  undefined *puStack_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 2) || (*(int *)(unaff_EBP + 8) == 1)) {
    iStack_3c = 0;
    iStack_40 = 0;
    puStack_44 = (undefined *)0x0;
    auStack_4c[1] = 0;
    *(uint **)(unaff_EBP + -0x24) = auStack_4c;
    auStack_4c[0] = extraout_ECX;
    FUN_00679d22(auStack_4c,0xa1e);
    iVar1 = FUN_007db791();
    if (iVar1 == 6) {
      iStack_3c = unaff_EBP + -0x28;
      iStack_40 = 0x5aed09;
      FUN_00455c59();
      iStack_3c = 0x5aed14;
      FUN_0045e4a2();
      iStack_3c = 4;
      iStack_40 = 0x5aed1d;
      uVar2 = FUN_004c10d7();
      iStack_3c = 0;
      iStack_40 = 0;
      puStack_44 = (undefined *)0x77;
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -0x18) = 0;
      auStack_4c[1] = 0x5aed32;
      FUN_0060142b();
      iStack_3c = 1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_40 = 0x5aed3f;
      FUN_00457cda();
      if (*(int *)(extraout_ECX + 0xb4) == 0) {
        iStack_3c = 0;
      }
      else {
        iStack_3c = *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + -4);
      }
      iStack_40 = 0x5aed59;
      FUN_00457cda();
      iVar1 = 0;
      for (uVar5 = 0;
          (iVar3 = *(int *)(extraout_ECX + 0xb4), iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)));
          uVar5 = uVar5 + 1) {
        if (*(int *)(iVar1 + 0x18 + iVar3) == 2) {
          *(char *)(unaff_EBP + -0x18) = *(char *)(unaff_EBP + -0x18) + '\x01';
        }
        iVar1 = iVar1 + 0x1c;
      }
      iStack_3c = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_40 = 0x5aed87;
      FUN_00457cda();
      iStack_3c = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_40 = 0x5aed92;
      FUN_00457cda();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar1 = 0;
      uVar5 = extraout_ECX_00;
      while ((iVar3 = *(int *)(extraout_ECX + 0xb4), iVar3 != 0 &&
             (uVar5 = *(uint *)(unaff_EBP + -0x18), uVar5 < *(uint *)(iVar3 + -4)))) {
        iVar3 = iVar3 + iVar1;
        if (*(int *)(iVar3 + 0x18) == 2) {
          if (*(int *)(unaff_EBP + -0x10) < 1) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          }
          else {
            if (**(int **)(iVar3 + 0x14) == 0) {
              iStack_40 = 0;
            }
            else {
              iStack_3c = 0x5aedf7;
              iStack_40 = FUN_00409205();
            }
            iStack_3c = 0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            puStack_44 = (undefined *)0x5aee09;
            FUN_00414edd();
            iStack_3c = 0;
            iStack_40 = 0;
            puStack_44 = &DAT_00965a54;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            auStack_4c[1] = 0x5aee1c;
            iStack_3c = FUN_004538dc();
            iStack_40 = unaff_EBP + -0x20;
            puStack_44 = (undefined *)0x5aee29;
            puVar4 = (undefined4 *)FUN_0045e070();
            iStack_3c = *puVar4;
            iStack_40 = 0x5aee30;
            uVar2 = FUN_0087b6ab();
            *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
            iStack_3c = 0x5aee3c;
            FUN_00414ebb();
            iStack_3c = *(undefined4 *)(iVar1 + 8 + *(int *)(extraout_ECX + 0xb4));
            iStack_40 = 0x5aee4e;
            FUN_00457d37();
            iStack_3c = CONCAT31((int3)((uint)*(int *)(extraout_ECX + 0xb4) >> 8),
                                 *(undefined1 *)(iVar1 + 0x18 + *(int *)(extraout_ECX + 0xb4)));
            iStack_40 = 0x5aee63;
            FUN_00457cda();
            iStack_3c = *(undefined4 *)(unaff_EBP + -0x24);
            iStack_40 = 0x5aee6e;
            FUN_00457d37();
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + -1;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iStack_3c = 0x5aee7c;
            FUN_00414ebb();
            uVar5 = extraout_ECX_02;
          }
        }
        else {
          iStack_3c = *(undefined4 *)(iVar3 + 8);
          iStack_40 = 0x5aedc4;
          FUN_00457d37();
          iStack_3c = CONCAT31((int3)((uint)*(int *)(extraout_ECX + 0xb4) >> 8),
                               *(undefined1 *)(iVar1 + 0x18 + *(int *)(extraout_ECX + 0xb4)));
          iStack_40 = 0x5aedd9;
          FUN_00457cda();
          uVar5 = extraout_ECX_01;
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        iVar1 = iVar1 + 0x1c;
      }
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        iStack_3c = 0;
        iStack_40 = 0;
        puStack_44 = (undefined *)0x0;
        auStack_4c[1] = 0;
        *(uint **)(unaff_EBP + -0x24) = auStack_4c;
        auStack_4c[0] = uVar5;
        FUN_00679d22(auStack_4c,0x1056);
        FUN_007db3ad();
      }
      iStack_3c = unaff_EBP + -0x38;
      iStack_40 = 0x5aeec6;
      FUN_004751b2();
      if (DAT_00978360 != 0) {
        iStack_3c = 0;
        iStack_40 = 0x5aeed6;
        FUN_008161f1();
      }
      if (*(int *)(extraout_ECX + 0x68) == 0) {
        *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(extraout_ECX + 0x68) = 1;
        if (*(int *)(extraout_ECX + 0x14) != 0) {
          iStack_3c = 0x5aeef4;
          FUN_00815de9();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_3c = 0x5aef00;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ptr_0058aae6 - 0x0058aae6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0058aae6(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_0058adec();
  iVar7 = DAT_00978134;
  if ((iVar2 == 0) || (*(int *)(*(int *)(extraout_ECX + 0x78) + 0x140) != 0)) goto LAB_0058acf4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045b90e(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045b90e(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 8) == 1) {
    iVar2 = *(int *)(unaff_EBP + -0x10);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (iVar3 < 4) {
LAB_0058acc0:
      uVar5 = 0x1c;
    }
    else {
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + -4);
      }
      if (0xc < iVar3) goto LAB_0058acc0;
      if (iVar2 != 0) {
        iVar3 = FUN_0087b4c0(iVar2,0x40);
        if (iVar3 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = iVar3 - iVar2;
        }
        if (uVar4 < 0x80000000) goto LAB_0058acc0;
        iVar2 = *(int *)(unaff_EBP + -0x10);
        if (iVar2 != 0) {
          iVar3 = FUN_0087b4c0(iVar2,0x2e);
          if (iVar3 == 0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = iVar3 - iVar2;
          }
          if (uVar4 < 0x80000000) goto LAB_0058acc0;
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + -4);
      }
      if (4 < iVar3) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + -4);
        }
        if (iVar2 < 0xd) {
          iVar2 = *(int *)(extraout_ECX + 0x7c);
          *(int *)(iVar7 + 4) = iVar2;
          if (iVar2 == 0) {
            if (*(int *)(iVar7 + 8) != 0) {
              FUN_00434e38(*(int *)(iVar7 + 8) + -0xc);
              *(undefined4 *)(iVar7 + 8) = 0;
            }
          }
          else {
            uVar5 = FUN_0045b90e(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            FUN_00414f8b(uVar5);
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (*(int *)(unaff_EBP + 8) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
            }
          }
          FUN_0047a88e();
          puVar6 = (undefined4 *)FUN_0045b90e(unaff_EBP + -0x18);
          uVar5 = *puVar6;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          puVar6 = (undefined4 *)FUN_0045b90e(unaff_EBP + 8);
          uVar1 = *puVar6;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar7 = FUN_00565a4e(uVar1,uVar5);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + 8) != 0) {
            FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
          }
          if (iVar7 != 0) {
            FUN_0058ae08(0);
          }
          goto LAB_0058acca;
        }
      }
      uVar5 = 3;
    }
    FUN_0057a546(uVar5,0);
  }
LAB_0058acca:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
LAB_0058acf4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



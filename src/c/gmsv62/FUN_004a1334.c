/* FUN_004a1334 - 0x004a1334 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004a1334(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  iVar4 = 0;
  iVar1 = *(int *)(extraout_ECX + 0x88);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
LAB_004a1368:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    iVar1 = 0;
    goto LAB_004a13bc;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar1 = FUN_004a3109(&DAT_00964d84);
    if (iVar1 == 0) goto LAB_004a1368;
  }
  if ((*(int *)(extraout_ECX + 0x90) == 0) ||
     (('/' < **(char **)(unaff_EBP + 8) && (**(char **)(unaff_EBP + 8) < ':')))) {
    iVar1 = *(int *)(extraout_ECX + 0x48);
    *(int *)(extraout_ECX + 0x5c) = iVar1;
    if (iVar1 < 0) goto LAB_004a13ab;
    if (*(int *)(extraout_ECX + 0x34) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x34) + -4);
    }
    if (iVar2 < iVar1) goto LAB_004a13ab;
    FUN_0045e053(unaff_EBP + -0x10,0,iVar1);
    iVar1 = *(int *)(extraout_ECX + 0x48);
    iVar2 = *(int *)(extraout_ECX + 0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0045e053(unaff_EBP + -0x14,iVar1 + iVar2,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar1 = *(int *)(unaff_EBP + -0x10);
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + -4);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
      }
      if (*(int *)(extraout_ECX + 0x8c) < iVar3 + iVar4 + iVar2) {
        iVar4 = 0;
        while( true ) {
          if (iVar1 == 0) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + -4);
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
          }
          iVar2 = FUN_004a227e(*(int *)(unaff_EBP + 8) + iVar4);
          if (*(int *)(extraout_ECX + 0x8c) < iVar2 + iVar1 + *(int *)(unaff_EBP + -0x18) + iVar4)
          break;
          iVar2 = FUN_004a227e(*(int *)(unaff_EBP + 8) + iVar4);
          iVar1 = *(int *)(unaff_EBP + -0x10);
          iVar4 = iVar4 + iVar2;
        }
        uVar5 = FUN_0045e070(unaff_EBP + -0x18,iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414f8b(uVar5);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00414ebb();
        if (iVar4 < *(int *)(unaff_EBP + 0x10)) {
          *(int *)(unaff_EBP + 0x10) = iVar4;
        }
      }
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
      }
      iVar2 = FUN_004a227e(*(undefined4 *)(unaff_EBP + 8));
      if (*(int *)(extraout_ECX + 0x8c) < iVar2 + iVar1 + iVar4) {
        FUN_00414f29();
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        FUN_0081b1ba();
      }
    }
    iVar1 = *(int *)(unaff_EBP + 8);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + -4);
    }
    FUN_0045efbb(iVar1,uVar5);
    iVar1 = *(int *)(unaff_EBP + -0x14);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + -4);
    }
    FUN_0045efbb(iVar1,uVar5);
    FUN_00414f8b(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
    }
    iVar1 = *(int *)(extraout_ECX + 0x48) + iVar1;
    iVar4 = *(int *)(unaff_EBP + -0x10);
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar4 + -4);
    }
    if (iVar2 < iVar1) {
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar4 + -4);
      }
    }
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      *(int *)(extraout_ECX + 0x48) = iVar1;
      *(undefined4 *)(extraout_ECX + 0x4c) = 0;
    }
    else {
      *(int *)(extraout_ECX + 0x4c) = iVar1 - *(int *)(extraout_ECX + 0x48);
    }
    FUN_004a2298(*(undefined4 *)(unaff_EBP + 0x10),1,0);
    iVar1 = iVar1 - *(int *)(extraout_ECX + 0x48);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  else {
    if (*(int *)(extraout_ECX + 0x34) == 0) {
      FUN_00414edd(&DAT_00978474,0xffffffff);
    }
LAB_004a13ab:
    iVar1 = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_004a13bc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}



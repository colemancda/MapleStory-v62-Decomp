/* FUN_00483627 - 0x00483627 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00483627(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  
  FUN_00879bb8();
  piVar2 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414edd(*(undefined4 *)(unaff_EBP + 0xc),0xffffffff);
  sVar4 = _strlen(&DAT_00964364);
  FUN_0045efbb(&DAT_00964364,sVar4);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(unaff_EBP + 8) + -4);
  }
  if (iVar8 < iVar6) {
    uVar5 = FUN_0045e070(unaff_EBP + 0xc,iVar8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
    }
    iVar6 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iVar6 = DAT_00980dfc;
    }
    iVar7 = DAT_00980dfc;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iVar7 = *(int *)(unaff_EBP + -0x18);
    }
    iVar6 = FUN_008858f0(iVar7,iVar6);
    if (iVar6 == 0) {
      uVar5 = FUN_0045e053(unaff_EBP + 0xc,iVar8,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414f8b(uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
      }
      uVar5 = 0;
      FUN_0045ed72(0);
      FUN_0045ee27(uVar5);
      iVar8 = *piVar2;
      if (iVar8 != 0) {
        FUN_00434e38(iVar8 + -0xc);
        *piVar2 = 0;
      }
      piVar2 = *(int **)(unaff_EBP + 0x14);
      if (*piVar2 != 0) {
        FUN_00434e38(*piVar2 + -0xc);
        *piVar2 = 0;
      }
      iVar8 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      iVar6 = 0;
      while( true ) {
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar8 + -4);
        }
        if (iVar7 <= iVar6) break;
        cVar1 = *(char *)(iVar6 + iVar8);
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          *(char *)(unaff_EBP + 0x17) = cVar1;
          iVar8 = unaff_EBP + 0x17;
LAB_004837f7:
          FUN_0045efbb(iVar8,1);
          iVar8 = *(int *)(unaff_EBP + -0x10);
        }
        else {
          if (cVar1 != ' ') {
            *(char *)(unaff_EBP + 0xf) = cVar1;
            iVar8 = unaff_EBP + 0xf;
            goto LAB_004837f7;
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        iVar6 = iVar6 + 1;
      }
      puVar3 = *(undefined4 **)(unaff_EBP + 0x10);
      uVar5 = 0;
      FUN_0045ed72(0);
      FUN_0045ee27(uVar5);
      uVar5 = 0;
      FUN_0045ed72(0);
      FUN_0045ee27(uVar5);
      if (((((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) ||
          ((char *)*piVar2 == (char *)0x0)) || (*(char *)*piVar2 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_00483871;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  uVar5 = 0;
LAB_00483871:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}



/* FUN_006406da - 0x006406da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006406da(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  undefined *puVar5;
  
  FUN_00879bb8();
  if (DAT_00978134 != 0) {
    iVar2 = *(int *)(DAT_00978134 + 0x6c);
    if (iVar2 == 0) {
      (*DAT_0097b384)(0,unaff_EBP + -0x114,0x104);
      FUN_008280b0(unaff_EBP + -0x114);
      FUN_008280f6(unaff_EBP + -0x114);
      FUN_008280d3(unaff_EBP + -0x114);
      puVar5 = (undefined *)(unaff_EBP + -0x114);
LAB_006407d2:
      FUN_00414edd(puVar5,0xffffffff);
      goto LAB_006407da;
    }
    if (iVar2 == 1) {
      iVar2 = (*DAT_0097b6c8)(0,unaff_EBP + -0x218,0x10,0);
      if (-1 < iVar2) {
        piVar1 = *(int **)(unaff_EBP + 8);
        FUN_00414edd(unaff_EBP + -0x218,0xffffffff);
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar2 + -4);
        }
        if (*(char *)(iVar2 + -1 + iVar4) == '\\') {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + -4);
          }
          uVar3 = FUN_0045e053(unaff_EBP + -0x10,0,iVar2 + -1);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_00414f8b(uVar3);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
        }
        goto LAB_006407da;
      }
    }
    else if (iVar2 == 2) {
      puVar5 = &DAT_00968378;
      goto LAB_006407d2;
    }
  }
  FUN_00414f29();
LAB_006407da:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



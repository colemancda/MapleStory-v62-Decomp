/* FUN_004e6425 - 0x004e6425 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004e6425(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0x1a8);
  cVar2 = FUN_00433bfa(0);
  if (cVar2 == '\0') {
    piVar3 = (int *)FUN_00485656(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*piVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00404a94();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    FUN_004125d9();
    piVar3 = (int *)FUN_00485656(unaff_EBP + -0x18);
    iVar5 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00404abb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    piVar3 = *(int **)(unaff_EBP + -0x18);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (*piVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = FUN_00404a94();
    if (iVar5 + (3 - *(int *)(unaff_EBP + -0x10)) <= *(int *)(unaff_EBP + 8)) {
      if (*piVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar5 = FUN_00404a94();
      if (*(int *)(unaff_EBP + 8) <=
          iVar5 + 5 + (*(int *)(extraout_ECX + 0x1ac) - *(int *)(unaff_EBP + -0x10))) {
        if (*piVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar5 = FUN_00404abb();
        if (iVar5 + (5 - *(int *)(unaff_EBP + -0x14)) <= *(int *)(unaff_EBP + 0xc)) {
          if (*piVar1 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar5 = FUN_00404abb();
          if (*(int *)(unaff_EBP + 0xc) <=
              iVar5 + 5 + (*(int *)(extraout_ECX + 0x1b0) - *(int *)(unaff_EBP + -0x14))) {
            uVar4 = *(undefined4 *)(extraout_ECX + 0x6e0);
            if (*piVar1 == 0) {
              FUN_00878dfb(0x80004003);
            }
            uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
            iVar5 = FUN_00404a94(uVar6,uVar4);
            FUN_0074d755(iVar5 + 10 + (*(int *)(extraout_ECX + 0x1ac) - *(int *)(unaff_EBP + -0x10))
                         ,uVar6,uVar4);
            goto LAB_004e65a5;
          }
        }
      }
    }
    FUN_0074d6fb();
  }
LAB_004e65a5:
  if (DAT_00978358 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_007a4a29(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}



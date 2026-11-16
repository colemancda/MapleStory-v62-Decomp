/* FUN_514093dc - 0x514093dc in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514093dc(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *piVar5;
  
  FUN_5140ad20();
  psVar2 = (short *)**(undefined4 **)(unaff_EBP + 0xc);
  if (((int)psVar2 - *(int *)(unaff_EBP + 0x10) >> 4) + 1 < 6) {
    FUN_51405a7c((void *)(unaff_EBP + -0x40),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5140e068);
  }
  if (*psVar2 != 0xd) {
    FUN_51405a7c((void *)(unaff_EBP + -0x40),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5140e068);
  }
  piVar5 = *(int **)(unaff_EBP + 8);
  FUN_51409d30(piVar5);
  if (*(int **)(psVar2 + 4) != (int *)0x0) {
    FUN_5140a168((void *)(unaff_EBP + -0x20),*(int **)(psVar2 + 4),'\x01');
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*piVar5 == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar5 = (int *)*piVar5;
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + 0x10) = piVar5;
    iVar3 = (**(code **)(iVar3 + 100))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar3 < 0) {
      FUN_5140ac55(iVar3,*(int **)(unaff_EBP + 0x10),&DAT_514101c0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_51405818((short *)(unaff_EBP + -0x20));
    if (iVar3 < 0) {
      FUN_5140ac47(iVar3);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
  }
  if (psVar2[-8] != 5) {
    FUN_51405a7c((void *)(unaff_EBP + -0x40),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5140e068);
  }
  sVar1 = psVar2[-0x10];
  *(undefined8 *)(unaff_EBP + -0x20) = *(undefined8 *)(psVar2 + -4);
  if (sVar1 != 5) {
    FUN_51405a7c((void *)(unaff_EBP + -0x40),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5140e068);
  }
  *(undefined8 *)(unaff_EBP + -0x18) = *(undefined8 *)(psVar2 + -0xc);
  FUN_5140a555((short *)(unaff_EBP + -0x40));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_5140a555((short *)(unaff_EBP + -0x30));
  iVar3 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_5140ac47(0x80004003);
  }
  piVar5 = (int *)*piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  uVar4 = ftol();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar4 = ftol();
  iVar3 = (**(code **)(*piVar5 + 0x90))
                    (*(undefined4 *)(unaff_EBP + 0x10),uVar4,*(undefined4 *)(unaff_EBP + -0x10),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar3 < 0) {
    FUN_5140ac55(iVar3,*(int **)(unaff_EBP + 0x10),&DAT_514101c0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_51405818((short *)(unaff_EBP + -0x30));
  if (iVar3 < 0) {
    FUN_5140ac47(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_51405818((short *)(unaff_EBP + -0x40));
  if (iVar3 < 0) {
    FUN_5140ac47(iVar3);
  }
  if (psVar2[-0x18] != 5) {
    FUN_51405a7c((void *)(unaff_EBP + -0x40),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5140e068);
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined8 *)(iVar3 + 0x28) = *(undefined8 *)(psVar2 + -0x14);
  if (psVar2[-0x20] != 5) {
    FUN_51405a7c((void *)(unaff_EBP + -0x40),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_5140e068);
  }
  *(undefined8 *)(iVar3 + 0x30) = *(undefined8 *)(psVar2 + -0x1c);
  if (psVar2[-0x28] != 3) {
    FUN_51405a7c((void *)(unaff_EBP + -0x50),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x50),(ThrowInfo *)&DAT_5140e068);
  }
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(psVar2 + -0x24);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 0xc) = psVar2 + -0x30;
  return;
}



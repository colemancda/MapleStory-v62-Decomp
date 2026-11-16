/* FUN_50c0f3e3 - 0x50c0f3e3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0f3e3(void)

{
  undefined4 *this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(iVar1 + 0x18);
  FUN_50c026fc();
  piVar2 = *(int **)(iVar1 + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = (undefined4 *)(iVar1 + 0x40);
  if ((piVar2 == (int *)0x0) || (iVar4 = *piVar2, iVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar4 + -4) >> 1;
  }
  if (uVar3 == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iVar4 = FUN_50c0fca4((undefined4 *)(unaff_EBP + 8),(int *)(iVar1 + 0x2c),(int *)(iVar1 + 0x38));
    if (iVar4 < 0) {
      FUN_50c061b4((void *)(unaff_EBP + -0x24),iVar4,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x24),(ThrowInfo *)&DAT_50c14eb0);
    }
    FUN_50c05e8d();
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 8));
    }
    FUN_50c02a72(this);
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *this = piVar2;
    if (piVar2 != (int *)0x0) {
      FUN_50c02a85(piVar2);
    }
  }
  FUN_50c10184(this,*(undefined4 **)(unaff_EBP + 0xc));
  piVar2 = (int *)(iVar1 + 0x1c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



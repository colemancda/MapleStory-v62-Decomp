/* FUN_50c09315 - 0x50c09315 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c09315(void)

{
  uint uVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  uVar1 = *(uint *)(extraout_ECX + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if ((uVar1 & 0x14) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x14),(ThrowInfo *)&DAT_50c15658);
  }
  if (((uVar1 & 4) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar2 = (int *)FUN_50c092ea(extraout_ECX);
    (**(code **)(*piVar2 + 0x10))(1);
    *(uint *)(extraout_ECX + 8) = *(uint *)(extraout_ECX + 8) & 0xfffffffd;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



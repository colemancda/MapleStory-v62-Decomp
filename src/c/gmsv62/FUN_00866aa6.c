/* FUN_00866aa6 - 0x00866aa6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00866aa6(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_0086a6f0(extraout_ECX,extraout_ECX);
  if (iVar1 != 0x755) {
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + -0x10) = iVar1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00960898);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



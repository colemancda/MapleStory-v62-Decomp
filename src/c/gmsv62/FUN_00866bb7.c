/* FUN_00866bb7 - 0x00866bb7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00866bb7(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004f162d();
  if (iVar1 != 0) {
    uVar2 = FUN_004f162d();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00960898);
  }
  iVar1 = FUN_0079d6ab();
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_009608f8);
  }
  iVar1 = (*DAT_0097b704)();
  if (5000 < iVar1 - *(int *)(extraout_ECX + 0x20)) {
    *(int *)(extraout_ECX + 0x20) = iVar1;
    iVar1 = FUN_0086a8c0();
    if (iVar1 != 0x755) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x14,&DAT_009608f8);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



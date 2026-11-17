/* FUN_007b3e66 - 0x007b3e66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b3e66(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if ((-1 < iVar1) && (iVar1 < 6)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_004b8b0a();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    **(short **)(unaff_EBP + -0x10) = (short)*(undefined4 *)(unaff_EBP + 0xc) + -0x50e0;
    *(char *)(*(int *)(unaff_EBP + -0x10) + 2) = (char)iVar1;
    FUN_007b445d(unaff_EBP + 0xc,unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004b8ba3(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



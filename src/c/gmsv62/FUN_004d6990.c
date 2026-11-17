/* FUN_004d6990 - 0x004d6990 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004d6990(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 8);
  FUN_004d6d8d(unaff_EBP + 8,unaff_EBP + -0x14);
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_004d6ccc(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}



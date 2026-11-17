/* FUN_0059c0e3 - 0x0059c0e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0059c0e3(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_0087bfd1(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x124);
  if (iVar1 != -1) {
    **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x114);
    FUN_0087c166(iVar1);
  }
  else {
    **(undefined4 **)(unaff_EBP + 0xc) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1 != -1;
}



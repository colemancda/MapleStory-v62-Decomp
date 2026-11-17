/* FUN_00828a7f - 0x00828a7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00828a7f(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2f3c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00829aa1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00829a43();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



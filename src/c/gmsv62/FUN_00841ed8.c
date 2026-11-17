/* FUN_00841ed8 - 0x00841ed8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00841ed8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  extraout_ECX[6] = &PTR_FUN_008f33e4;
  FUN_008419b4();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_008f33e8;
  FUN_00841963();
  DAT_00979254 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



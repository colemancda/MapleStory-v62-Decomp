/* FUN_008619ed - 0x008619ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008619ed(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_007f44ed(0x3ff0000000000000);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007f44ed(0x3ff0000000000000);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007f44ed(0x3ff0000000000000);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_007f44ed(0x3ff0000000000000);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0048b92c();
  FUN_0085fd35();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



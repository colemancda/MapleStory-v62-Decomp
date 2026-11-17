/* FUN_0066c089 - 0x0066c089 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0066c089(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0063435b();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0063435b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



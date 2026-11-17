/* FUN_004aa49d - 0x004aa49d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004aa49d(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0048bae8();
  FUN_0045e60b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 200) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_0045e60b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



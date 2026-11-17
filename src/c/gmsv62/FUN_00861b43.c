/* FUN_00861b43 - 0x00861b43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00861b43(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f3690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[9] = &PTR_FUN_008f3694;
  FUN_00862f7a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[1] = &PTR_FUN_008f3698;
  FUN_00862f02();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



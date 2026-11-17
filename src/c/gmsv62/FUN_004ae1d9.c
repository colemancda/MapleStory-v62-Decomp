/* FUN_004ae1d9 - 0x004ae1d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ae1d9(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((-1 < *(int *)(unaff_EBP + 8)) || (*(int *)(unaff_EBP + 8) < *(int *)(extraout_ECX + 0x38))) {
    FUN_00414f8b(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_008476d3 - 0x008476d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008476d3(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0045cdbc(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
    FUN_00471102(unaff_EBP + 8,0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



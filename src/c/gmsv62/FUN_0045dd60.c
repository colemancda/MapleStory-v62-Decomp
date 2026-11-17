/* FUN_0045dd60 - 0x0045dd60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045dd60(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x10,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
  FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x18) = 1;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



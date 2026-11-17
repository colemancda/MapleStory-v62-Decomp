/* FUN_00569ad3 - 0x00569ad3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00569ad3(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(7,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(0);
  FUN_004751b2(unaff_EBP + -0x1c);
  (*DAT_0097b514)(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



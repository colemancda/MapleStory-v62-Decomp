/* FUN_004eaed3 - 0x004eaed3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eaed3(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x72,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(0xf);
  FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
  FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
  FUN_0045d247(*(undefined4 *)(unaff_EBP + 0x10));
  FUN_00457cda(*(undefined4 *)(unaff_EBP + 0x14));
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



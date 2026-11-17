/* FUN_006bd313 - 0x006bd313 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd313(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x86,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(3);
  FUN_00457d37(*(undefined4 *)(extraout_ECX + 0x57c));
  FUN_004751b2(unaff_EBP + -0x1c);
  FUN_006bd2ae();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



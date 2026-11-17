/* FUN_00717971 - 0x00717971 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00717971(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00717adb();
  FUN_00717e43();
  FUN_0060142b(0x3e,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(5);
  FUN_004751b2(unaff_EBP + -0x1c);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0xa8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



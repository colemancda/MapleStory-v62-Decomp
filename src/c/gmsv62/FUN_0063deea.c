/* FUN_0063deea - 0x0063deea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063deea(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x7c,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(0);
  FUN_004751b2(unaff_EBP + -0x1c);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xc0) + 4) + 0x1c))(0);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xe0) + 4) + 0x1c))(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



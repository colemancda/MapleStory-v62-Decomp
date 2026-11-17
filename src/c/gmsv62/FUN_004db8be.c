/* FUN_004db8be - 0x004db8be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004db8be(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x6f,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(0x25);
  FUN_004751b2(unaff_EBP + -0x1c);
  (**(code **)(*extraout_ECX + 0x34))(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



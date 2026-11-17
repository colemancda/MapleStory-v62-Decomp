/* FUN_005f6b51 - 0x005f6b51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f6b51(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  *(undefined ***)(extraout_ECX + 0x88) = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x80,4,2,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(extraout_ECX + 0x68) = &PTR_FUN_008ecd0c;
  FUN_005f6ad3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_005f6cd3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004d7d1e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



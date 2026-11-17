/* FUN_005f6a29 - 0x005f6a29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005f6a29(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(undefined4 *)(extraout_ECX + 0x70) = 0;
  *(undefined4 *)(extraout_ECX + 0x74) = 0;
  *(undefined4 *)(extraout_ECX + 0x78) = 0;
  *(undefined ***)(extraout_ECX + 0x68) = &PTR_FUN_008ecd0c;
  *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x80,4,2,FUN_00483ba7,FUN_00414ebb);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x90) = 0;
  *(undefined4 *)(extraout_ECX + 0x94) = 0;
  *(undefined4 *)(extraout_ECX + 0x98) = 0;
  *(undefined ***)(extraout_ECX + 0x88) = &PTR_FUN_008e8ab0;
  return extraout_ECX;
}



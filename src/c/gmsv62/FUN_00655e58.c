/* FUN_00655e58 - 0x00655e58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00655e58(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0x30) = 0;
  *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  *(undefined4 *)(extraout_ECX + 0x40) = 0;
  *(undefined4 *)(extraout_ECX + 0x44) = 0;
  *(undefined ***)(extraout_ECX + 0x34) = &PTR_FUN_008ed430;
  *(undefined4 *)(extraout_ECX + 0x48) = 0;
  *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(undefined4 *)(extraout_ECX + 100) = 0;
  *(undefined4 *)(extraout_ECX + 0x68) = 0;
  *(undefined4 *)(extraout_ECX + 0x6c) = 0;
  *(undefined4 *)(extraout_ECX + 0x70) = 0;
  *(undefined4 *)(extraout_ECX + 0x74) = 0;
  *(undefined4 *)(extraout_ECX + 0x78) = 0;
  *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  *(undefined4 *)(extraout_ECX + 0x80) = 0;
  *(undefined4 *)(extraout_ECX + 0x84) = 0;
  *(undefined4 *)(extraout_ECX + 0x88) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0087b2f0(extraout_ECX + 0x8c,4,3,&LAB_00450362,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



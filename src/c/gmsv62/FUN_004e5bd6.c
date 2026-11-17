/* FUN_004e5bd6 - 0x004e5bd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004e5bd6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0059f06c();
  extraout_ECX[0x3c] = 0;
  extraout_ECX[0x3d] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x3b] = &PTR_FUN_008eac4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004f1433();
  extraout_ECX[0x4c] = 0;
  extraout_ECX[0x4d] = 0;
  extraout_ECX[0x4e] = 0;
  extraout_ECX[0x4f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x50,4,0x12,&LAB_0048c051,FUN_00411629);
  extraout_ECX[0x62] = 0;
  extraout_ECX[100] = 0;
  extraout_ECX[0x6b] = 0;
  extraout_ECX[0x6c] = 0;
  extraout_ECX[0x6d] = 0;
  extraout_ECX[0x71] = 0;
  extraout_ECX[0x72] = 0;
  extraout_ECX[0x73] = 0;
  extraout_ECX[0x6f] = &PTR_FUN_008eac48;
  extraout_ECX[0x74] = 0;
  extraout_ECX[0x75] = 0;
  extraout_ECX[0x76] = 0;
  extraout_ECX[0x77] = 0;
  extraout_ECX[0x78] = 0;
  extraout_ECX[0x7c] = 0;
  extraout_ECX[0x7d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x7e] = 0;
  FUN_0074b9b2();
  extraout_ECX[0x1b9] = 0;
  extraout_ECX[0x1ba] = 0;
  extraout_ECX[0x1bd] = 0;
  extraout_ECX[0x1be] = 0;
  extraout_ECX[0x1bf] = 0;
  extraout_ECX[0x1bb] = &PTR_FUN_008eac44;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_004e5d96();
  *extraout_ECX = &PTR_FUN_008eac20;
  extraout_ECX[1] = &PTR_FUN_008eabd4;
  extraout_ECX[2] = &PTR_FUN_008eabd0;
  extraout_ECX[3] = &PTR_FUN_008eabcc;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



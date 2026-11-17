/* FUN_00563706 - 0x00563706 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00563706(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar1;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0059f06c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x3c] = 0;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x3e] = 0;
  extraout_ECX[0x3f] = 0;
  extraout_ECX[0x40] = 0;
  extraout_ECX[0x41] = 0;
  extraout_ECX[0x42] = 0;
  extraout_ECX[0x43] = 0;
  extraout_ECX[0x44] = 0;
  extraout_ECX[0x45] = 0;
  extraout_ECX[0x46] = 0;
  extraout_ECX[0x47] = 0;
  extraout_ECX[0x48] = 0;
  extraout_ECX[0x4a] = 0;
  extraout_ECX[0x4c] = 0;
  extraout_ECX[0x4e] = 0;
  extraout_ECX[0x4f] = 0;
  extraout_ECX[0x50] = 0;
  extraout_ECX[0x51] = 0;
  extraout_ECX[0x53] = 0;
  extraout_ECX[0x54] = 0;
  extraout_ECX[0x55] = 0;
  extraout_ECX[0x56] = 0;
  extraout_ECX[0x57] = 0;
  extraout_ECX[0x58] = 0xffffffff;
  extraout_ECX[0x59] = 0;
  extraout_ECX[0x5a] = 0;
  extraout_ECX[0x5d] = 0;
  extraout_ECX[0x5e] = 0;
  extraout_ECX[0x5f] = 0;
  extraout_ECX[0x5b] = &PTR_FUN_008ebc74;
  extraout_ECX[0x61] = 0;
  extraout_ECX[0x62] = 0;
  extraout_ECX[100] = 0;
  extraout_ECX[0x66] = 0;
  extraout_ECX[0x68] = 0;
  extraout_ECX[0x6a] = 0;
  extraout_ECX[0x6c] = 0;
  extraout_ECX[0x6d] = 0;
  extraout_ECX[0x6e] = 0;
  extraout_ECX[0x6f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0087b2f0(extraout_ECX + 0x70,4,5,FUN_00483ba7,FUN_00414ebb);
  *extraout_ECX = &PTR_FUN_008ebc64;
  extraout_ECX[1] = &PTR_LAB_008ebc18;
  extraout_ECX[2] = &PTR_FUN_008ebc14;
  extraout_ECX[3] = &PTR_FUN_008ebc10;
  bVar1 = DAT_00973abc != 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (bVar1) {
    FUN_00867060();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



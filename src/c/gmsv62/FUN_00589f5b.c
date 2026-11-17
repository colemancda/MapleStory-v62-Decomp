/* FUN_00589f5b - 0x00589f5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00589f5b(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  DAT_00979430 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x20,4,2,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x35] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0074b9b2();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *extraout_ECX = &PTR_FUN_008ec450;
  extraout_ECX[1] = &PTR_FUN_008ec404;
  extraout_ECX[2] = &PTR_FUN_008ec400;
  _OOBECompleteWnfWaitCallback_28(10,0xffffffb0,0x14a,0xb4,0xc001adb0,0,uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



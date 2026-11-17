/* FUN_00657830 - 0x00657830 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00657830(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_0074b9b2();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x159] = 0;
  FUN_0087b2f0(extraout_ECX + 0x15a,0xc,10,FUN_0046a1fc,FUN_0046a2d2);
  extraout_ECX[0x178] = 0;
  extraout_ECX[0x17a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x17b,8,10,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 399,8,10,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x1a3,8,10,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x1b8] = 0;
  extraout_ECX[0x1ba] = 0;
  extraout_ECX[0x1bc] = 0;
  extraout_ECX[0x1be] = 0;
  extraout_ECX[0x1c0] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *extraout_ECX = &PTR_FUN_008ed49c;
  extraout_ECX[1] = &PTR_LAB_008ed450;
  extraout_ECX[2] = &PTR_FUN_008ed44c;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0xfcc);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



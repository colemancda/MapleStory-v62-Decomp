/* FUN_0057fa8a - 0x0057fa8a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0057fa8a(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004de520();
  DAT_0097940c = -(uint)(extraout_ECX + 0x33 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x34] = 0xffffffff;
  extraout_ECX[0x33] = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined1 *)(extraout_ECX + 0x35) = 0;
  extraout_ECX[0x36] = 0;
  FUN_0087b2f0(extraout_ECX + 0x37,8,9,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x49,8,9,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x5b,4,9,&LAB_005851b4,thunk_FUN_0056ad97);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 100,4,9,&LAB_005851b4,thunk_FUN_0056ad97);
  extraout_ECX[0x6d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x6e,4,0x12,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008ec288;
  extraout_ECX[1] = &PTR_FUN_008ec23c;
  extraout_ECX[2] = &PTR_FUN_008ec238;
  FUN_004de5cc(0,0xff,0,0xffffff24,0xfffff855,0xffffff24,0xfffff855,0xffffff24,0xfffff855,200,0,200)
  ;
  FUN_004de636(200,0xa2,0,10,0,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



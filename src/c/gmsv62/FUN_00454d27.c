/* FUN_00454d27 - 0x00454d27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00454d27(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x1b,8,0x1e,&LAB_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x58] = 0;
  extraout_ECX[0x85] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x86,4,4,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x8a] = 0;
  extraout_ECX[0x8b] = 0;
  extraout_ECX[0x8c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0074b9b2();
  extraout_ECX[0x1c7] = 0;
  extraout_ECX[0x1c8] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar1 = (*DAT_0097b704)();
  extraout_ECX[0x1cc] = uVar1;
  extraout_ECX[0x1ce] = 0;
  *extraout_ECX = &PTR_FUN_008e9378;
  extraout_ECX[1] = &PTR_LAB_008e932c;
  extraout_ECX[2] = &PTR_FUN_008e9328;
  _memset(extraout_ECX + 0x7a,0,0x28);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



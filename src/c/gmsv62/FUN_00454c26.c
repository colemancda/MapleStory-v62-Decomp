/* FUN_00454c26 - 0x00454c26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00454c26(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x1d,4,10,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = (*DAT_0097b704)();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x29] = uVar1;
  *extraout_ECX = &PTR_FUN_008e92f4;
  extraout_ECX[1] = &PTR_LAB_008e92a8;
  extraout_ECX[2] = &PTR_FUN_008e92a4;
  return extraout_ECX;
}



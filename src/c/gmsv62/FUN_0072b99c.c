/* FUN_0072b99c - 0x0072b99c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0072b99c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0xffffffff;
  extraout_ECX[0x28] = 0xffffffff;
  extraout_ECX[0x29] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x2a,4,0x90,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0xba] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008f0e68;
  extraout_ECX[1] = &PTR_FUN_008f0e1c;
  extraout_ECX[2] = &PTR_FUN_008f0e18;
  FUN_0081420c(0xf2,0x11e,0x13b,0x7f,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



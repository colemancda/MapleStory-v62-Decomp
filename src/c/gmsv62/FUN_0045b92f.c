/* FUN_0045b92f - 0x0045b92f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0045b92f(void)

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
  extraout_ECX[0x26] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x27,4,2,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x29,4,2,&LAB_0045e0d1,FUN_0044973c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008e957c;
  extraout_ECX[1] = &PTR_FUN_008e9530;
  extraout_ECX[2] = &PTR_FUN_008e952c;
  return extraout_ECX;
}



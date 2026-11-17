/* FUN_0052991d - 0x0052991d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0052991d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x1b,4,6,&LAB_00450362,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  *extraout_ECX = &PTR_FUN_008eb3dc;
  extraout_ECX[1] = &PTR_LAB_008eb390;
  extraout_ECX[2] = &PTR_FUN_008eb38c;
  return extraout_ECX;
}



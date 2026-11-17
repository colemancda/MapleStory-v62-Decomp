/* FUN_0077cb1e - 0x0077cb1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0077cb1e(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0087b2f0(extraout_ECX + 1,4,7,&LAB_00450362,FUN_004115cc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[10] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0xb,4,5,FUN_00483ba7,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x10,4,5,FUN_00483ba7,FUN_00414ebb);
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x16] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x18,0x80,5,&LAB_0077cbc8,&LAB_0077ccbf);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008f1550;
  return extraout_ECX;
}



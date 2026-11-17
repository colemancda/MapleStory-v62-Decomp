/* FUN_0048be10 - 0x0048be10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0048be10(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0078b0ed(0);
  DAT_00979114 = -(uint)(extraout_ECX != (undefined4 *)0xffffe1a7) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x79c] = 0;
  extraout_ECX[0x79d] = 0;
  extraout_ECX[0x7a1] = 0;
  extraout_ECX[0x7a4] = 0;
  extraout_ECX[0x7a5] = 0;
  extraout_ECX[0x7a6] = 0;
  extraout_ECX[0x7a7] = 0;
  extraout_ECX[0x7a8] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0087b2f0(extraout_ECX + 0x7a9,4,5,&LAB_0048c051,FUN_00411629);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008e980c;
  extraout_ECX[1] = &PTR_LAB_008e97e8;
  extraout_ECX[2] = &PTR_FUN_008e97e4;
  extraout_ECX[0x1e] = &PTR_LAB_008e97d0;
  return extraout_ECX;
}



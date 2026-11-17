/* FUN_004737f3 - 0x004737f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004737f3(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_009784c4 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 0;
  extraout_ECX[2] = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  extraout_ECX[3] = &PTR_FUN_008e96d8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00473902(0,0);
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0xf] = &PTR_FUN_008e96d4;
  extraout_ECX[0x16] = 0;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x14] = &PTR_FUN_008e96d4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004738ae(0);
  extraout_ECX[0x1f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x23] = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x24] = 0;
  *extraout_ECX = &PTR_FUN_008e96d0;
  FUN_00475946();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



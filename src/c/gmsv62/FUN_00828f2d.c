/* FUN_00828f2d - 0x00828f2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00828f2d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00979168 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 1,4,9,&LAB_008290f4,thunk_FUN_006eaf37);
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[10] = &PTR_FUN_008f2f4c;
  extraout_ECX[0xc] = 0x1f;
  extraout_ECX[0xe] = 100;
  extraout_ECX[0xf] = 0x18;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0x1f;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x15] = 0x18;
  extraout_ECX[0x14] = 100;
  extraout_ECX[0x10] = &PTR_FUN_008f2f48;
  extraout_ECX[0x16] = &PTR_FUN_008f2f48;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x18] = 0x1f;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1b] = 0x18;
  extraout_ECX[0x1a] = 100;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0x1f;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0x18;
  extraout_ECX[0x1c] = &PTR_FUN_008f1074;
  extraout_ECX[0x20] = 100;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0x1f;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0x18;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x22] = &PTR_FUN_008f2f44;
  extraout_ECX[0x26] = 100;
  extraout_ECX[0x28] = 0;
  *extraout_ECX = &PTR_FUN_008f2f40;
  return extraout_ECX;
}



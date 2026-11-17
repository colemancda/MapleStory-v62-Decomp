/* FUN_00828531 - 0x00828531 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00828531(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00973a94 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0x1f;
  extraout_ECX[6] = 0;
  extraout_ECX[3] = &PTR_FUN_008f2f28;
  FUN_0055c465(100);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[10] = 0;
  extraout_ECX[0xb] = 0x1f;
  extraout_ECX[0xc] = 0;
  extraout_ECX[9] = &PTR_FUN_008f2f24;
  FUN_0055c6da(100);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0x1f;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0xf] = &PTR_FUN_008f2f20;
  FUN_0055c7a9(100);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x16] = 0;
  extraout_ECX[0x17] = 0x1f;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x15] = &PTR_FUN_008f2f1c;
  FUN_0055c878(100);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0x1f;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1b] = &PTR_FUN_008f2f18;
  FUN_0055c947(100);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0x1f;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x21] = &PTR_FUN_008f2f14;
  FUN_0055ca16(100);
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x27] = &PTR_FUN_008e8ab0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2e] = 0x1f;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x2c] = &PTR_FUN_008f2f10;
  FUN_0055cae5(100);
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x3c] = 0x1f;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x3a] = &PTR_FUN_008ecb0c;
  extraout_ECX[0x3e] = 100;
  extraout_ECX[0x3f] = 0x18;
  extraout_ECX[0x42] = 0;
  extraout_ECX[0x43] = 0;
  extraout_ECX[0x44] = 0;
  extraout_ECX[0x40] = &PTR_FUN_008f2f0c;
  extraout_ECX[0x46] = 0;
  extraout_ECX[0x47] = 0x1f;
  extraout_ECX[0x48] = 0;
  extraout_ECX[0x49] = 100;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x45] = &PTR_FUN_008ecb4c;
  extraout_ECX[0x4a] = 0x18;
  extraout_ECX[0x4d] = 0;
  extraout_ECX[0x4e] = 0;
  extraout_ECX[0x4f] = 0;
  extraout_ECX[0x4b] = &PTR_FUN_008f0b48;
  *extraout_ECX = &PTR_FUN_008f2f08;
  return extraout_ECX;
}



/* FUN_5040967c - 0x5040967c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * FUN_5040967c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[4] = 0;
  if (extraout_ECX + 5 != (undefined4 *)0x0) {
    extraout_ECX[5] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_5042d8c4;
  FUN_5040bff1();
  extraout_ECX[3] = &PTR_LAB_5042d8ac;
  extraout_ECX[7] = 0;
  extraout_ECX[9] = 0;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0x1f;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x28] = &PTR_FUN_5042d8a8;
  extraout_ECX[0x2c] = 100;
  extraout_ECX[0x2d] = 0x18;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x2e] = "Fh@PhTCP";
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3a] = 0;
  extraout_ECX[0x36] = &PTR_FUN_5042d8a4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x3d] = 0;
  (*DAT_50438c10)(extraout_ECX + 0x15);
  (*DAT_50438c10)(extraout_ECX + 0x19);
  (*DAT_50438c10)(extraout_ECX + 0x21);
  memset(extraout_ECX + 0x3b,0,8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



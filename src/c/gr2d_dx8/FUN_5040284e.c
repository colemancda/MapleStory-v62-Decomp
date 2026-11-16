/* FUN_5040284e - 0x5040284e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * FUN_5040284e(void)

{
  uint *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[2] = 0;
  if (extraout_ECX + 3 != (undefined4 *)0x0) {
    extraout_ECX[3] = 0;
  }
  *extraout_ECX = &PTR_LAB_5042d2e8;
  extraout_ECX[1] = &PTR_LAB_5042d2d4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[7] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x2d] = 0;
  FUN_50405027((int)(extraout_ECX + 0x2c));
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x2f] = 0;
  FUN_5040505a((int)(extraout_ECX + 0x2e));
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x35] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_50407ae7(extraout_ECX + 0x4a);
  extraout_ECX[0x9a] = 0;
  extraout_ECX[0x9b] = 0;
  extraout_ECX[0x9c] = 0;
  extraout_ECX[0xc5] = 0;
  extraout_ECX[0xc6] = 0;
  extraout_ECX[199] = 0;
  extraout_ECX[200] = 0;
  extraout_ECX[0xda] = 0;
  extraout_ECX[0xc9] = 0;
  extraout_ECX[0xca] = 0;
  extraout_ECX[0xcb] = 1;
  extraout_ECX[0xcc] = 1;
  extraout_ECX[0xcd] = 1;
  extraout_ECX[0xd6] = 0;
  extraout_ECX[0xd7] = 0;
  extraout_ECX[0xd8] = 0;
  extraout_ECX[0xd9] = 0;
  extraout_ECX[0xdb] = 0;
  extraout_ECX[0xdc] = 0;
  extraout_ECX[0xdd] = 0;
  extraout_ECX[0xde] = 0;
  extraout_ECX[0xdf] = 0;
  extraout_ECX[0xe0] = 1;
  extraout_ECX[0xe2] = 0;
  extraout_ECX[0xe3] = 0;
  extraout_ECX[0xe4] = 0;
  extraout_ECX[0xe5] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  memset(extraout_ECX + 8,0,0x5c);
  memset(extraout_ECX + 0x1f,0,0x10);
  extraout_ECX[0xd0] = 0;
  extraout_ECX[0xd2] = 0;
  extraout_ECX[0xd4] = 0;
  extraout_ECX[0xce] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0xd1] = 0;
  extraout_ECX[0xd3] = 0;
  extraout_ECX[0xd5] = 0;
  extraout_ECX[0xcf] = 0;
  (*DAT_50438c00)(extraout_ECX + 0xce);
  puVar1 = FUN_504015ff();
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = (uint)&PTR_FUN_5042d2c0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xe1] = puVar1;
  return extraout_ECX;
}



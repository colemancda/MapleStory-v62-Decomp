/* FUN_50c032b6 - 0x50c032b6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c032b6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[4] = 0;
  if (extraout_ECX + 5 != (undefined4 *)0x0) {
    extraout_ECX[5] = 0;
  }
  *extraout_ECX = &PTR_LAB_50c13210;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_LAB_50c131fc;
  FUN_50c03391();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[7] = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xb] = 0x1f;
  extraout_ECX[9] = &PTR_FUN_50c131f8;
  extraout_ECX[0xd] = 100;
  extraout_ECX[0xe] = 0x18;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0xf] = &PTR_FUN_50c131f4;
  return extraout_ECX;
}



/* FUN_50c07e98 - 0x50c07e98 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c07e98(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[3] = 0;
  if (extraout_ECX + 4 != (undefined4 *)0x0) {
    extraout_ECX[4] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_50c13534;
  FUN_50c07ee2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  extraout_ECX[9] = 0;
  return extraout_ECX;
}



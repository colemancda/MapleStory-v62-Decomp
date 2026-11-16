/* FUN_50c036e7 - 0x50c036e7 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c036e7(void)

{
  uint *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[4] = 0;
  if (extraout_ECX + 5 != (undefined4 *)0x0) {
    extraout_ECX[5] = 0;
  }
  *extraout_ECX = &PTR_LAB_50c13338;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_LAB_50c131fc;
  FUN_50c037e6();
  extraout_ECX[7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 0;
  puVar1 = FUN_50c025fb();
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = (uint)&PTR_FUN_50c13334;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xb] = puVar1;
  return extraout_ECX;
}



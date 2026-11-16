/* FUN_50c05bee - 0x50c05bee in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c05bee(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = (undefined4 *)FUN_50c041b0();
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_50c03048();
    *puVar1 = &PTR_FUN_50c13118;
    puVar1[1] = &PTR_FUN_50c13114;
    puVar1[2] = &PTR_LAB_50c13110;
    InterlockedIncrement(&DAT_50c1ca34);
  }
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement(puVar1 + 3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return *(undefined4 *)(unaff_EBP + -0x10);
}



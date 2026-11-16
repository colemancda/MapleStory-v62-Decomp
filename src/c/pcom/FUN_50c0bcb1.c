/* FUN_50c0bcb1 - 0x50c0bcb1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0bcb1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = (undefined4 *)FUN_50c0c872();
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_50c0c72a(puVar1);
    *puVar1 = &PTR_LAB_50c14680;
    puVar1[0xb] = &PTR_LAB_50c1467c;
    InterlockedIncrement(&DAT_50c1ca34);
  }
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement(puVar1 + 1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return *(undefined4 *)(unaff_EBP + -0x10);
}



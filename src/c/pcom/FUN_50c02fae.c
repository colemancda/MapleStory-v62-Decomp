/* FUN_50c02fae - 0x50c02fae in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c02fae(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = -0x7ff8fff2;
  puVar1 = (undefined4 *)FUN_50c041b0();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
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
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 3);
    InterlockedDecrement(puVar1 + 3);
    iVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
      (**(code **)puVar1[1])(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}



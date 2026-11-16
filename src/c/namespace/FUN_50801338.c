/* FUN_50801338 - 0x50801338 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50801338(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int iVar2;
  
  FUN_5080e090();
  iVar2 = -0x7ff8fff2;
  puVar1 = (undefined4 *)FUN_508043c2();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50801763(puVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
    (*(code *)puVar1[6])();
    iVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
      (**(code **)puVar1[0x11])(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}



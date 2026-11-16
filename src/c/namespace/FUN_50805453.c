/* FUN_50805453 - 0x50805453 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50805453(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_5080e090();
  uVar2 = 0x8007000e;
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
    uVar2 = 0;
    (*(code *)puVar1[6])();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return uVar2;
}



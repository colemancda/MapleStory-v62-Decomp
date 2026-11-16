/* FUN_50810d65 - 0x50810d65 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50810d65(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  uVar3 = 0x8007000e;
  puVar2 = (undefined4 *)FUN_50804413();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_5080274f(puVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
    uVar3 = 0;
    FUN_5080e45c();
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar2;
  *unaff_FS_OFFSET = uVar1;
  return uVar3;
}



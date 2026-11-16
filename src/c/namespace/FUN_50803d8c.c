/* FUN_50803d8c - 0x50803d8c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50803d8c(void)

{
  uint *puVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_5080e090();
  uVar2 = 0x8007000e;
  puVar1 = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_50806403(puVar1);
    *puVar1 = (uint)&PTR_LAB_50817724;
    puVar1[1] = (uint)&PTR_LAB_50817714;
    InterlockedIncrement(&DAT_5081e594);
  }
  if (puVar1 != (uint *)0x0) {
    uVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return uVar2;
}



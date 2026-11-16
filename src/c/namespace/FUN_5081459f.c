/* FUN_5081459f - 0x5081459f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5081459f(void)

{
  uint *puVar1;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_508016d1(puVar1);
    *puVar1 = (uint)&PTR_FUN_508170f8;
    InterlockedIncrement(&DAT_5081e594);
  }
  if (puVar1 != (uint *)0x0) {
    InterlockedIncrement((LONG *)(puVar1 + 1));
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement((LONG *)(puVar1 + 1));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return *(undefined4 *)(unaff_EBP + -0x10);
}



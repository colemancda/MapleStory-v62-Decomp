/* FUN_50801645 - 0x50801645 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50801645(void)

{
  uint *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar2 = -0x7ff8fff2;
  puVar1 = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_508016d1(puVar1);
    *puVar1 = (uint)&PTR_FUN_508170f8;
    InterlockedIncrement(&DAT_5081e594);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (uint *)0x0) {
    InterlockedIncrement((LONG *)(puVar1 + 1));
    InterlockedDecrement((LONG *)(puVar1 + 1));
    iVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
      (**(code **)(*puVar1 + 0x1c))(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}



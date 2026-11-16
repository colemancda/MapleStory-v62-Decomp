/* FUN_510016d0 - 0x510016d0 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 FUN_510016d0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_51005950();
  uVar2 = 0x8007000e;
  puVar1 = FUN_51001acd();
  *(uint **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_510013e8();
    *puVar1 = (uint)&PTR_FUN_510060d0;
    InterlockedIncrement(&DAT_510092e4);
    *puVar1 = (uint)&PTR_FUN_51006140;
  }
  DAT_51009324 = puVar1;
  if (puVar1 != (uint *)0x0) {
    InterlockedIncrement((LONG *)(puVar1 + 1));
    uVar2 = 0;
    InterlockedDecrement((LONG *)(DAT_51009324 + 1));
  }
  **(int **)(unaff_EBP + 8) = (int)DAT_51009324;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



/* FUN_51001359 - 0x51001359 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int FUN_51001359(void)

{
  uint *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_51005950();
  iVar2 = -0x7ff8fff2;
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
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (uint *)0x0) {
    InterlockedIncrement((LONG *)(puVar1 + 1));
    InterlockedDecrement((LONG *)(puVar1 + 1));
    iVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
      (**(code **)(*puVar1 + 0x2c))(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}



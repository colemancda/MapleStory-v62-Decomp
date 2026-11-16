/* FUN_50002b96 - 0x50002b96 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_50002b96(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar2 = -0x7ff8fff2;
  puVar1 = (undefined4 *)FUN_50003c1b();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_50002c30();
    *puVar1 = &PTR_FUN_50014140;
    puVar1[1] = &PTR_FUN_5001413c;
    puVar1[2] = &PTR_FUN_50014138;
    InterlockedIncrement(&DAT_5001da54);
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



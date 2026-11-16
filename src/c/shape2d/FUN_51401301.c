/* FUN_51401301 - 0x51401301 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51401301(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int iVar2;
  
  FUN_5140ad20();
  iVar2 = -0x7ff8fff2;
  puVar1 = (undefined4 *)FUN_514027be();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_51401606(puVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 4);
    InterlockedDecrement(puVar1 + 4);
    iVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
      (**(code **)puVar1[2])(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}



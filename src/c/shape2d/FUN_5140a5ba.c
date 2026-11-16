/* FUN_5140a5ba - 0x5140a5ba in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_5140a5ba(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_5140ad20();
  uVar2 = 0x8007000e;
  puVar1 = (undefined4 *)FUN_514027be();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_51401606(puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 4);
    uVar2 = 0;
    InterlockedDecrement(puVar1 + 4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return uVar2;
}



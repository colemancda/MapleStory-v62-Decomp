/* FUN_504061a1 - 0x504061a1 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_504061a1(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_5042a430();
  uVar2 = 0x8007000e;
  puVar1 = (undefined4 *)FUN_5040757c();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50406bcb(puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 5);
    uVar2 = 0;
    InterlockedDecrement(puVar1 + 5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return uVar2;
}



/* FUN_51404938 - 0x51404938 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51404938(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = (undefined4 *)FUN_51405574();
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_51405202(puVar1);
    *puVar1 = &PTR_LAB_5140c7e8;
    puVar1[0xb] = &PTR_LAB_5140c7e4;
    InterlockedIncrement(&DAT_51411574);
  }
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement(puVar1 + 1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return *(undefined4 *)(unaff_EBP + -0x10);
}



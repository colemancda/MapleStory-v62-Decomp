/* FUN_504103ae - 0x504103ae in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_504103ae(void)

{
  uint *puVar1;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = FUN_504015ff();
  *(uint **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_50410996(puVar1);
    *puVar1 = (uint)&PTR_LAB_5042da3c;
    InterlockedIncrement(&DAT_50438a3c);
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



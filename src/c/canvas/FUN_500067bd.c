/* FUN_500067bd - 0x500067bd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_500067bd(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = (undefined4 *)FUN_50003c1b();
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
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
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement(puVar1 + 3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar1;
  return *(undefined4 *)(unaff_EBP + -0x10);
}



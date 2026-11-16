/* FUN_518110e4 - 0x518110e4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_518110e4(void)

{
  uint *puVar1;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = FUN_518019c0();
  *(uint **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_518114b7(puVar1);
    *puVar1 = (uint)&PTR_LAB_51818494;
    InterlockedIncrement(&DAT_5181f8a0);
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



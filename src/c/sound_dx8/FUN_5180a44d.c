/* FUN_5180a44d - 0x5180a44d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180a44d(void)

{
  uint *puVar1;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar1 = FUN_518019c0();
  *(uint **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (uint *)0x0) {
    FUN_5180a483(puVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



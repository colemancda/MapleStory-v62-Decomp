/* FUN_51802391 - 0x51802391 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51802391(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar1 = (undefined4 *)FUN_5180283a();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5180255f(puVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



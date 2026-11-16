/* FUN_518113fa - 0x518113fa in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518113fa(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_518184fc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = &PTR_FUN_518184f8;
  FUN_518103e1((int)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



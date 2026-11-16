/* FUN_51809b7a - 0x51809b7a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51809b7a(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_51809cb3();
  FUN_51809bac();
  return;
}



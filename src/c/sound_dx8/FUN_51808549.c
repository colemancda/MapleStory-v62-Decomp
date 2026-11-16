/* FUN_51808549 - 0x51808549 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51808549(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_518198cc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_51805e03(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51806355(extraout_ECX + 0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_51819824;
  return;
}



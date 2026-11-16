/* FUN_5180defe - 0x5180defe in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180defe(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_51819c84;
  extraout_ECX[0x16] = &PTR_LAB_51819cdc;
  extraout_ECX[0x17] = &PTR_LAB_51819c80;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180e40b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180cb4a(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



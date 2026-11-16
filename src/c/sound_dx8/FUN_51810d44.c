/* FUN_51810d44 - 0x51810d44 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51810d44(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[6] = &PTR_FUN_51818470;
  FUN_518103e1((int)(extraout_ECX + 6));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_51818474;
  *extraout_ECX = &PTR_LAB_51818148;
  return;
}



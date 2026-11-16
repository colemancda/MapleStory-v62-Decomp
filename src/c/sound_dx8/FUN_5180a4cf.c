/* FUN_5180a4cf - 0x5180a4cf in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180a4cf(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_51819968;
  iVar1 = extraout_ECX[6];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    (*DAT_5181f9c0)(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_51818148;
  return;
}



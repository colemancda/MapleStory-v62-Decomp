/* FUN_5180de72 - 0x5180de72 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_5180de72(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_51809aa0();
  *extraout_ECX = &PTR_LAB_51819a40;
  InterlockedIncrement(&DAT_5181f8a0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180e3ae();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x16] = &PTR_LAB_51819cdc;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1b] = 0;
  extraout_ECX[0x1c] = 0;
  *extraout_ECX = &PTR_LAB_51819c84;
  extraout_ECX[0x17] = &PTR_LAB_51819c80;
  return extraout_ECX;
}



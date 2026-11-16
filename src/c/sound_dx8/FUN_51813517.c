/* FUN_51813517 - 0x51813517 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51813517(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[3] = 0;
  if (extraout_ECX + 4 != (undefined4 *)0x0) {
    extraout_ECX[4] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51813868();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[6] = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[1] = &PTR_FUN_51819704;
  extraout_ECX[9] = 0;
  *extraout_ECX = &PTR_LAB_518196e8;
  extraout_ECX[2] = &PTR_FUN_518196e4;
  return extraout_ECX;
}



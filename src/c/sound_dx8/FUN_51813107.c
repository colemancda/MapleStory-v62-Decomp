/* FUN_51813107 - 0x51813107 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51813107(void)

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
  FUN_5181330e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[6] = 0;
  extraout_ECX[1] = &PTR_FUN_51819698;
  extraout_ECX[7] = 0;
  *extraout_ECX = &PTR_LAB_5181967c;
  extraout_ECX[2] = &PTR_FUN_51819678;
  return extraout_ECX;
}



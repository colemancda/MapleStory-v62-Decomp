/* FUN_51811f24 - 0x51811f24 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51811f24(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[5] = 0;
  if (extraout_ECX + 6 != (undefined4 *)0x0) {
    extraout_ECX[6] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51812df0();
  extraout_ECX[8] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x16] = &PTR_FUN_51819640;
  *extraout_ECX = &PTR_LAB_51819604;
  extraout_ECX[1] = &PTR_LAB_518195bc;
  extraout_ECX[2] = &PTR_LAB_51819590;
  extraout_ECX[4] = &PTR_LAB_5181958c;
  extraout_ECX[3] = &PTR_FUN_51819588;
  return extraout_ECX;
}



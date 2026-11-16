/* FUN_518064ef - 0x518064ef in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518064ef(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_518197b8;
  puVar1 = (undefined4 *)extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(extraout_ECX);
  }
  *extraout_ECX = &PTR_FUN_51819848;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_51806865();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_51819824;
  return;
}



/* FUN_5180aeb0 - 0x5180aeb0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180aeb0(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_51819980;
  extraout_ECX[1] = &PTR_LAB_5181999c;
  extraout_ECX[2] = &PTR_LAB_5181997c;
  iVar1 = extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_51803161((int)(extraout_ECX + 3));
    extraout_ECX[4] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5180cad9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_518199a0;
  return;
}



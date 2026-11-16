/* FUN_5180afc5 - 0x5180afc5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180afc5(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_518199c0;
  extraout_ECX[1] = &PTR_LAB_518199dc;
  extraout_ECX[2] = &PTR_LAB_518199bc;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_5180b0f2((int)extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_518022c9(extraout_ECX + 0x1e);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_518022c9(extraout_ECX + 0x1b);
  iVar1 = extraout_ECX[0x19];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_51803161((int)(extraout_ECX + 0x18));
    extraout_ECX[0x19] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5180c9ce();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_518199a0;
  return;
}



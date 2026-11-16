/* FUN_5180d13c - 0x5180d13c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180d13c(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x38);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5180206f(iVar2 + 0x40);
  piVar1 = (int *)(iVar2 + 0x3c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x38) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



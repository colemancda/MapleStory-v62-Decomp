/* FUN_51807070 - 0x51807070 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51807070(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x24);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5181022b(*(void **)(unaff_EBP + 8),extraout_ECX + 0x38);
  FUN_5181022b(*(void **)(unaff_EBP + 0xc),extraout_ECX + 0x40);
  piVar1 = (int *)(extraout_ECX + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



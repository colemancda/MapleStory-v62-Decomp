/* FUN_50409902 - 0x50409902 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50409902(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  FUN_50401895();
  *(undefined4 *)(extraout_ECX + 0x24) = 0;
  piVar1 = (int *)(extraout_ECX + 0x20);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  }
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x98);
  FUN_50401895();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_504068bd(extraout_ECX + 0xb8);
  FUN_5040686c(extraout_ECX + 0xa0);
  piVar1 = (int *)(extraout_ECX + 0x9c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x98) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



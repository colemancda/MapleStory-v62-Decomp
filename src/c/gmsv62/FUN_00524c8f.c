/* FUN_00524c8f - 0x00524c8f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00524c8f(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x10);
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004f1a88();
  FUN_00524ec7();
  FUN_00524ec7();
  FUN_00524fff();
  piVar1 = (int *)(extraout_ECX + 0x14);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x10) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



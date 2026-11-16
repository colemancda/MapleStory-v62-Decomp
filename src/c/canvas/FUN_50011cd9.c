/* FUN_50011cd9 - 0x50011cd9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50011cd9(void)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_500024f7();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    uVar2 = FUN_50002527(0x10,0x10);
    *(undefined4 *)(extraout_ECX + 0x14) = uVar2;
  }
  *(undefined4 *)(extraout_ECX + 0x14) = **(undefined4 **)(extraout_ECX + 0x14);
  piVar1 = (int *)(extraout_ECX + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



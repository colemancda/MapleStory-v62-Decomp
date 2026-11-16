/* FUN_5000b465 - 0x5000b465 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000b465(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x44);
  FUN_500024f7();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5000f522((void *)(extraout_ECX + 0x4c),*(int *)(unaff_EBP + 8));
  *(undefined4 *)(extraout_ECX + 0x68) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  piVar1 = (int *)(extraout_ECX + 0x48);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x44) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



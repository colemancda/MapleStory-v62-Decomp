/* FUN_500039a5 - 0x500039a5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500039a5(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = *(undefined4 **)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  (*(code *)*puVar1)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50003649(extraout_ECX + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_500035b0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



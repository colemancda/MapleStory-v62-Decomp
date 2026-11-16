/* FUN_500037e0 - 0x500037e0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500037e0(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piVar1 = *(int **)(extraout_ECX + 0x84);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(extraout_ECX + 0x48) = &PTR_FUN_500141dc;
  FUN_5000f634(extraout_ECX + 0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_50003bdf((int *)(extraout_ECX + 0x3c));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50002dee();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



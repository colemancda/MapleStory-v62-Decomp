/* FUN_5080345a - 0x5080345a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080345a(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piVar1 = *(int **)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(extraout_ECX + 8) = &PTR_FUN_508171c0;
  FUN_50804352(extraout_ECX + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50802468();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50802220();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_508021d0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



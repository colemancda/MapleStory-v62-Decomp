/* FUN_50802220 - 0x50802220 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50802220(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_50804209((int *)(extraout_ECX + 0x18));
  if (*(int **)(extraout_ECX + 0x14) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x14));
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  piVar1 = *(int **)(extraout_ECX + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(extraout_ECX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_50802b44 - 0x50802b44 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50802b44(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(extraout_ECX + 0x18) = &PTR_FUN_50817350;
  FUN_50804352(extraout_ECX + 0x18);
  if (*(int **)(extraout_ECX + 0x14) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x14));
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  if (*(int **)(extraout_ECX + 0x10) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0x10));
    *(undefined4 *)(extraout_ECX + 0x10) = 0;
  }
  iVar1 = *(int *)(extraout_ECX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_508032a9(extraout_ECX + 8);
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_508029c7();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50802220();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_508021d0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



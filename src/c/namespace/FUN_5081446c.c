/* FUN_5081446c - 0x5081446c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5081446c(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_50813cfc(extraout_ECX + 0x10);
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  if (*(int **)(extraout_ECX + 0xc) != (int *)0x0) {
    FUN_508040b6(*(int **)(extraout_ECX + 0xc));
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



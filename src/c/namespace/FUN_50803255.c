/* FUN_50803255 - 0x50803255 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50803255(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_508032a9(extraout_ECX + 0x18);
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  }
  iVar1 = *(int *)(extraout_ECX + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_508032a9(extraout_ECX + 0x10);
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



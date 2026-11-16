/* FUN_5080c60b - 0x5080c60b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080c60b(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(uint *)(extraout_ECX + 8) = *(uint *)(extraout_ECX + 8) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  piVar1 = (int *)FUN_5080c552(extraout_ECX);
  (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



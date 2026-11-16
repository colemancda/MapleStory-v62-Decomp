/* FUN_50c0940a - 0x50c0940a in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0940a(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  piVar1 = (int *)FUN_50c092ea(extraout_ECX);
  (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



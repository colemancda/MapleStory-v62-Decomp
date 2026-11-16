/* FUN_518067b2 - 0x518067b2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518067b2(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(uint *)(extraout_ECX + 8) = *(uint *)(extraout_ECX + 8) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  piVar1 = (int *)FUN_518066f9(extraout_ECX);
  (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



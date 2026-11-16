/* FUN_5180668a - 0x5180668a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180668a(void)

{
  uint uVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  uVar1 = *(uint *)(extraout_ECX + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if ((uVar1 & 0x14) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x14),(ThrowInfo *)&DAT_5181b518);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(extraout_ECX + 8) = uVar1 | 2;
  piVar2 = (int *)FUN_518066f9(extraout_ECX);
  (**(code **)(*piVar2 + 8))(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



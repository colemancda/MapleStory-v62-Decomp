/* FUN_5180885e - 0x5180885e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined8 FUN_5180885e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined8 uVar4;
  
  FUN_5180ea30();
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x14),(ThrowInfo *)&DAT_5181b518);
  }
  FUN_5180878f(*(undefined4 *)(extraout_ECX + 0x10),*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + 0xc),0);
  iVar2 = (*DAT_5181fa9c)(*(undefined4 *)(extraout_ECX + 0x10));
  if (iVar2 == 0) {
    uVar3 = (*DAT_5181fad4)();
    uVar1 = *(undefined4 *)(extraout_ECX + 0xc);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = *(undefined4 *)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_5180878f(*(undefined4 *)(extraout_ECX + 0x10),uVar3,uVar1,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x18),(ThrowInfo *)&DAT_5181b518);
  }
  uVar4 = FUN_5180878f(*(undefined4 *)(extraout_ECX + 0x10),*(undefined4 *)(extraout_ECX + 8),
                       *(undefined4 *)(extraout_ECX + 0xc),0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}



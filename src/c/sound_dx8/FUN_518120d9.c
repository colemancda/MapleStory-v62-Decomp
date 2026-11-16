/* FUN_518120d9 - 0x518120d9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518120d9(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x20);
  FUN_518017b5();
  iVar2 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = (*DAT_5181fa04)(0,0,0x7fffffff,0);
    *(int *)(extraout_ECX + 0x54) = iVar2;
    if (iVar2 == 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x20),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  if (*(int *)(extraout_ECX + 0x50) == 0) {
    iVar2 = (*DAT_5181fa0c)(0,1,0,0);
    *(int *)(extraout_ECX + 0x50) = iVar2;
    if (iVar2 == 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x20),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  FUN_5181022b((void *)(extraout_ECX + 0x30),*(int *)(unaff_EBP + 0xc));
  FUN_5181022b((void *)(extraout_ECX + 0x28),*(int *)(unaff_EBP + 8));
  piVar1 = (int *)(extraout_ECX + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



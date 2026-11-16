/* FUN_51804038 - 0x51804038 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51804038(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_51810370(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_518010fc(*(void **)(unaff_EBP + -0x18));
  if (iVar2 < 0) {
    FUN_51802c9b((void *)(unaff_EBP + -0x2c),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_5181a2e0);
  }
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x3c);
  FUN_518017b5();
  iVar2 = *(int *)(extraout_ECX + 0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    FUN_5181022b((void *)(extraout_ECX + 0x44),unaff_EBP + -0x1c);
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(extraout_ECX + 0x48);
    FUN_51810353(iVar3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar3 + 4) = iVar2;
    FUN_51810353(iVar3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  piVar1 = (int *)(extraout_ECX + 0x40);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_51813012(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}



/* ptr_51814776 - 0x51814776 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void ptr_51814776(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_5180ce33((void *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar2 = *(int *)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b((void *)(unaff_EBP + -0x2c),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_5181a2e0);
  }
  piVar3 = (int *)(*(int *)(extraout_ECX + 0x14) + 0x18);
  *piVar3 = 0;
  piVar1 = *(int **)(extraout_ECX + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,piVar3);
  }
  if (*piVar3 != 0) {
    if (*(int *)(extraout_ECX + 0x3c) == 0) {
      iVar2 = FUN_51804b19();
      *(uint *)(unaff_EBP + -0x10) = (-(uint)(*(int *)(iVar2 + 0x18) != 0) & 0xfffffc17) + 1000;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x10) = 100;
    }
    FUN_51804b19();
    FUN_51809d68();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_518011d6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_51813012(unaff_EBP + -0x24);
    }
    if (iVar2 == 0) {
      FUN_51802a89(u_Sound_DX8__Scheduler_is_stopped_5181f6c8,0);
      FUN_51802c9b((void *)(unaff_EBP + -0x2c),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  iVar2 = (**(code **)(**(int **)(extraout_ECX + 100) + 0x1c))(*(int **)(extraout_ECX + 100));
  if (-1 < iVar2) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    FUN_5180c435();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  FUN_51804b19();
  FUN_51809d68();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_51801359();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_51813012(unaff_EBP + -0x24);
  }
  FUN_51802c9b((void *)(unaff_EBP + -0x2c),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_5181a2e0);
}



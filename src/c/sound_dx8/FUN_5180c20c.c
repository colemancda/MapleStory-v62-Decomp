/* FUN_5180c20c - 0x5180c20c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180c20c(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_5180ce33((void *)(unaff_EBP + -0x24),(int *)(unaff_EBP + -0x1c));
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  piVar1 = *(int **)(extraout_ECX + 0x68);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    FUN_51802a89(u_Sound_DX8__Sound_is_not_initiali_5181f538,0);
    FUN_51802c9b((void *)(unaff_EBP + -0x34),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_5181a2e0);
  }
  if (*(int *)(*(int *)(extraout_ECX + 100) + 0x18) != 0) {
    *(undefined4 *)(extraout_ECX + 0x84) = 0;
    *(undefined4 *)(extraout_ECX + 0x88) = 0;
    iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,extraout_ECX + 0x80,0);
    if (iVar3 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x34),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  iVar3 = *(int *)(extraout_ECX + 0x74);
  *(uint *)(unaff_EBP + -0x14) = (uint)(*(int *)(extraout_ECX + 0x2c) == -1);
  if (iVar3 == 0) {
LAB_5180c309:
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x14);
    FUN_51804b19();
    FUN_51809d68();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar4 = FUN_518011d6();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_51813012(unaff_EBP + -0x2c);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_5180c3f0;
    if ((*(int *)(*(int *)(extraout_ECX + 100) + 0x18) == 0) && (*(int *)(unaff_EBP + -0x14) == 0))
    {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    iVar3 = (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x30))
                      (*(int **)(extraout_ECX + 0x68),0,0,uVar4);
    *(int *)(unaff_EBP + -0x14) = iVar3;
    if (iVar3 < 0) {
      FUN_51804b19();
      FUN_51809d68();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_51801359();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_51813012(unaff_EBP + -0x2c);
      }
      if (*(int *)(unaff_EBP + -0x14) != -0x7787ff6a) {
        FUN_51802c9b((void *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x14),(int *)0x0,'\0')
        ;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_5181a2e0);
      }
      *(undefined4 *)(extraout_ECX + 0x74) = 1;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x20) = 1;
    }
  }
  else {
    bVar2 = FUN_5180c1a1(extraout_ECX);
    if (CONCAT31(extraout_var,bVar2) != 0) goto LAB_5180c309;
    FUN_51804b19();
    FUN_51809d68();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar4 = FUN_518011d6();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51813012(unaff_EBP + -0x18);
    }
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_5180c435();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
LAB_5180c3f0:
  FUN_51802a89(u_Sound_DX8__Scheduler_is_stopped_5181f6c8,0);
  FUN_51802c9b((void *)(unaff_EBP + -0x34),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_5181a2e0);
}



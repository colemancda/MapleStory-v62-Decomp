/* FUN_5180e027 - 0x5180e027 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180e027(void)

{
  int iVar1;
  void *this;
  int unaff_EBP;
  
  FUN_5180ea30();
  FUN_5180c4c1((void *)(unaff_EBP + -0x28),(int)this);
  iVar1 = *(int *)((int)this + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x60) - *(int *)((int)this + 100);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (-1 < iVar1) {
      *(int *)(unaff_EBP + -0x10) = iVar1;
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 100;
  }
  FUN_51804b19();
  FUN_51809d68();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_518011d6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_51813012(unaff_EBP + -0x18);
  }
  if (iVar1 == 0) {
    FUN_51802a89(u_Sound_DX8__Scheduler_is_stopped_5181f6c8,0);
    FUN_51802c9b((void *)(unaff_EBP + -0x20),0x80004005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_5181a2e0);
  }
  FUN_5180dfe5(this,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



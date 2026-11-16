/* FUN_51806b22 - 0x51806b22 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51806b22(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_5180e990(0x80004003);
    }
    piVar3 = *(int **)((int)this + 0x20);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,param_1);
  }
  else if (param_2 == 1) {
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_5180e990(0x80004003);
    }
    piVar1 = *(int **)((int)this + 0x20);
    if (piVar1 == (int *)0x0) {
      FUN_5180e990(0x80004003);
    }
    piVar3 = *(int **)((int)this + 0x20);
    piVar1 = FUN_51806c2c(piVar1);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,(int)piVar1 + param_1);
  }
  else {
    if (param_2 != 2) {
      FUN_51802c9b(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
    }
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_5180e990(0x80004003);
    }
    piVar1 = FUN_518060d6(*(int **)((int)this + 0x20));
    if ((piVar1 == (int *)0x0) && (param_1 != 0)) {
      FUN_51802c9b(local_24,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_5181a2e0);
    }
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_5180e990(0x80004003);
    }
    piVar3 = *(int **)((int)this + 0x20);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,(int)piVar1 + param_1);
  }
  if (iVar2 < 0) {
    FUN_5180e99e(iVar2,piVar3,&DAT_5181f528);
  }
  return;
}



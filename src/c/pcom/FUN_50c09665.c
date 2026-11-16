/* FUN_50c09665 - 0x50c09665 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c09665(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_50c101c4(0x80004003);
    }
    piVar3 = *(int **)((int)this + 0x20);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,param_1);
  }
  else if (param_2 == 1) {
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_50c101c4(0x80004003);
    }
    piVar1 = *(int **)((int)this + 0x20);
    if (piVar1 == (int *)0x0) {
      FUN_50c101c4(0x80004003);
    }
    piVar3 = *(int **)((int)this + 0x20);
    piVar1 = FUN_50c086d8(piVar1);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,(int)piVar1 + param_1);
  }
  else {
    if (param_2 != 2) {
      FUN_50c061b4(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_14,(ThrowInfo *)&DAT_50c14eb0);
    }
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_50c101c4(0x80004003);
    }
    piVar1 = FUN_50c0976f(*(int **)((int)this + 0x20));
    if ((piVar1 == (int *)0x0) && (param_1 != 0)) {
      FUN_50c061b4(local_24,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_50c14eb0);
    }
    if (*(int *)((int)this + 0x20) == 0) {
      FUN_50c101c4(0x80004003);
    }
    piVar3 = *(int **)((int)this + 0x20);
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,(int)piVar1 + param_1);
  }
  if (iVar2 < 0) {
    FUN_50c101d2(iVar2,piVar3,&DAT_50c174c8);
  }
  return;
}



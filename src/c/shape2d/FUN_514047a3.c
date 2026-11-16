/* FUN_514047a3 - 0x514047a3 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __cdecl FUN_514047a3(_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_18 [16];
  int *local_8;
  
  piVar1 = FUN_51405d75(param_2);
  if (piVar1 == (int *)0x0) {
    local_8 = (int *)0x0;
    if (*(int *)param_1 != 0) {
      iVar2 = memcmp(&DAT_514101b0,&DAT_514101a0,0x10);
      if (iVar2 == 0) {
        local_8 = *(int **)param_1;
        (**(code **)(*local_8 + 4))(local_8);
      }
      else {
        if (*(int *)param_1 == 0) {
          FUN_5140ac47(0x80004003);
        }
        iVar2 = (**(code **)**(undefined4 **)param_1)
                          (*(undefined4 **)param_1,&DAT_514101a0,&local_8);
        if (iVar2 < 0) {
          FUN_51405a7c(local_18,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_18,(ThrowInfo *)&DAT_5140e068);
        }
      }
    }
    if (DAT_51411aec == 0) {
      FUN_51405dac();
    }
    iVar2 = (*DAT_51411ae0)(&local_8,param_2);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    if (iVar2 < 0) {
      FUN_51405a7c(local_18,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_18,(ThrowInfo *)&DAT_5140e068);
    }
  }
  else {
    local_8 = (int *)0x0;
    if (DAT_51411aec == 0) {
      FUN_51405dac();
    }
    iVar2 = (*DAT_51411ae0)(&local_8,param_2);
    if (iVar2 < 0) {
      FUN_51405a7c(local_18,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_18,(ThrowInfo *)&DAT_5140e068);
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(param_1,(IBinding *)0x0);
    iVar2 = memcmp(&DAT_514101b0,&DAT_514101a0,0x10);
    if (iVar2 == 0) {
      piVar1 = *(int **)param_1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int **)param_1 = local_8;
    }
    else if (local_8 == (int *)0x0) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(param_1,(IBinding *)0x0);
    }
    else {
      piVar1 = *(int **)param_1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)param_1 = 0;
      iVar2 = (**(code **)*local_8)(local_8,&DAT_514101b0,param_1);
      (**(code **)(*local_8 + 8))(local_8);
      if (iVar2 < 0) {
        FUN_51405a7c(local_18,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_18,(ThrowInfo *)&DAT_5140e068);
      }
    }
  }
  return;
}



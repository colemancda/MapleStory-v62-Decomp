/* FUN_5000c8ce - 0x5000c8ce in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_5000c8ce(undefined4 param_1,_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_2,
            undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_14 [16];
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(param_2,(IBinding *)0x0);
  piVar1 = *(int **)param_2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)param_2 = 0;
  if (DAT_50081ff4 == 0) {
    FUN_5000a83a();
  }
  if (DAT_50081fe0 == (code *)0x0) {
    iVar2 = -0x7ffbfe10;
  }
  else {
    iVar2 = (*DAT_50081fe0)(param_1,&DAT_50019518,param_2,param_3);
    if (-1 < iVar2) {
      return;
    }
  }
  FUN_50007006(local_14,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_50015eb8);
}



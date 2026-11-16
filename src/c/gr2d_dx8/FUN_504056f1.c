/* FUN_504056f1 - 0x504056f1 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl
FUN_504056f1(undefined4 param_1,_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_2,
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
  if (DAT_50438fac == 0) {
    FUN_50401c7b();
  }
  if (DAT_50438f98 == (code *)0x0) {
    iVar2 = -0x7ffbfe10;
  }
  else {
    iVar2 = (*DAT_50438f98)(param_1,&DAT_50435388,param_2,param_3);
    if (-1 < iVar2) {
      return;
    }
  }
  FUN_50405e1f(local_14,iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_50430d08);
}



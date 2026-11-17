/* FUN_0040381b - 0x0040381b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040381b(undefined4 param_1,_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_2,
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
  if (DAT_0097bc30 == (code *)0x0) {
    iVar2 = -0x7ffbfe10;
  }
  else {
    iVar2 = (*DAT_0097bc30)(param_1,&DAT_00963cc8,param_2,param_3);
    if (-1 < iVar2) {
      return;
    }
  }
  FUN_00403880(iVar2,0,0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_008f7618);
}



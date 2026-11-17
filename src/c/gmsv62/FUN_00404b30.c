/* FUN_00404b30 - 0x00404b30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00404b30(_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 == (undefined4 *)0x0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(param_1,(IBinding *)0x0);
    iVar4 = -0x7fffbffe;
  }
  else {
    iVar4 = (**(code **)*puVar1)(puVar1,&DAT_00963ce8,&param_2);
    piVar2 = param_2;
    if (iVar4 < 0) {
      piVar2 = *(int **)param_1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined4 *)param_1 = 0;
    }
    else {
      piVar3 = *(int **)param_1;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(int **)param_1 = piVar2;
    }
  }
  return iVar4;
}



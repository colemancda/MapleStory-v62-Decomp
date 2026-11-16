/* FUN_508053f3 - 0x508053f3 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_508053f3(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    iVar4 = -0x7fffbffe;
  }
  else {
    iVar4 = (**(code **)*puVar1)(puVar1,&DAT_5081d210,&param_1);
    piVar2 = param_1;
    if (iVar4 < 0) {
      piVar2 = *(int **)this;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined4 *)this = 0;
    }
    else {
      piVar3 = *(int **)this;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(int **)this = piVar2;
    }
  }
  return iVar4;
}



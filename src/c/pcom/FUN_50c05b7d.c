/* FUN_50c05b7d - 0x50c05b7d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c05b7d(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((int *)*param_1 == (int *)0x0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    iVar4 = -0x7fffbffe;
  }
  else {
    puVar1 = *(undefined4 **)*param_1;
    if (puVar1 == (undefined4 *)0x0) {
      iVar4 = -0x7fffbffd;
    }
    else {
      iVar4 = (**(code **)*puVar1)(puVar1,&DAT_50c17340,&param_1);
    }
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



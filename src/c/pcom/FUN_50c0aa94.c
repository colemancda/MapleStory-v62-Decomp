/* FUN_50c0aa94 - 0x50c0aa94 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0aa94(void *this,undefined4 param_1,int *param_2,int param_3)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this_00;
  int *piVar1;
  int iVar2;
  
  this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x18);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this_00,(IBinding *)0x0);
  if (param_3 != 0) {
    piVar1 = *(int **)this_00;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)this_00 = 0;
    iVar2 = (**(code **)(*param_2 + 0x40))(param_2,param_1,param_3,this_00);
    if (-1 < iVar2) {
      return;
    }
  }
  FUN_50c0aae0();
  return;
}



/* FUN_5180a284 - 0x5180a284 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_5180a284(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*(int *)this + 0x48))();
  piVar1 = param_2;
  if ((int)param_2 < 100) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x3c),(IBinding *)0x0
              );
    (**(code **)(*(int *)this + 0x4c))(iVar2 + param_1);
  }
  else {
    param_2 = this;
    iVar3 = FUN_51810efb((void *)((int)this + 0x3c),(int *)&param_2);
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5180e990(iVar3);
    }
    iVar3 = (*DAT_5181fadc)();
    *(int *)((int)this + 0x4c) = iVar3;
    *(int *)((int)this + 0x48) = iVar3 + (int)piVar1;
    *(int *)((int)this + 0x44) = iVar2;
    *(int *)((int)this + 0x40) = iVar2 + param_1;
  }
  return;
}



/* FUN_5180a2f4 - 0x5180a2f4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_5180a2f4(void *this,int *param_1)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this_00;
  int *piVar1;
  int iVar2;
  
  this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x3c);
  if (*(int *)this_00 != 0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this_00,(IBinding *)0x0);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)(*DAT_5181fadc)();
      piVar1 = *(int **)((int)this + 0x48);
      if (piVar1 == param_1 || (int)piVar1 - (int)param_1 < 0) {
        iVar2 = *(int *)((int)this + 0x40);
      }
      else {
        iVar2 = *(int *)((int)this + 0x4c);
        if (iVar2 - (int)param_1 < 0) {
          iVar2 = ((*(int *)((int)this + 0x40) - *(int *)((int)this + 0x44)) *
                  ((int)param_1 - iVar2)) / ((int)piVar1 - iVar2) + *(int *)((int)this + 0x44);
        }
        else {
          iVar2 = *(int *)((int)this + 0x44);
        }
      }
      (**(code **)(*(int *)this + 0x4c))(iVar2);
      if (*(int **)((int)this + 0x48) != param_1 &&
          -1 < (int)*(int **)((int)this + 0x48) - (int)param_1) {
        param_1 = this;
        iVar2 = FUN_51810efb(this_00,(int *)&param_1);
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          FUN_5180e990(iVar2);
        }
      }
    }
    else {
      (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)((int)this + 0x40));
    }
  }
  return;
}



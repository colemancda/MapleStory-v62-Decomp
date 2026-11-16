/* FUN_51805650 - 0x51805650 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_51805650(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Dst;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)(*DAT_5181fc80)(0x48), puVar2 == (undefined4 *)0x0)) {
LAB_51805699:
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = this;
    puVar5 = puVar2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if (*(int *)((int)this + 0x40) != 0) {
      _Dst = (void *)(*DAT_5181fc80)(*(int *)((int)this + 0x40));
      puVar2[0x11] = _Dst;
      if (_Dst == (void *)0x0) {
        if (param_1 == (undefined4 *)0x0) {
          (*DAT_5181fc88)(puVar2);
        }
        goto LAB_51805699;
      }
      memcpy(_Dst,*(void **)((int)this + 0x44),*(size_t *)((int)this + 0x40));
    }
    piVar1 = (int *)puVar2[0xf];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return puVar2;
}



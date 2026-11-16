/* FUN_518112a0 - 0x518112a0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_518112a0(void *this,int param_1)

{
  int iVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this_00;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  while (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)((-(uint)(puVar2 != (undefined4 *)0x0) & (uint)(puVar2 + -4)) + 4);
    this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_5181075e(this);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this_00,(IBinding *)*puVar2);
    puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}



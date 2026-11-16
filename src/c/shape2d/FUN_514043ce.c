/* FUN_514043ce - 0x514043ce in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_514043ce(void *this,int param_1)

{
  int iVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this_00;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  while (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)((-(uint)(puVar2 != (undefined4 *)0x0) & (uint)(puVar2 + -4)) + 4);
    this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_51404415(this);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this_00,(IBinding *)*puVar2);
    puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}



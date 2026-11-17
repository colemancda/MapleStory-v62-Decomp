/* FUN_0041262c - 0x0041262c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041262c(int param_1)

{
  int iVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  while (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)((-(uint)(puVar2 != (undefined4 *)0x0) & (uint)(puVar2 + -4)) + 4);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004136ab();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
    puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}



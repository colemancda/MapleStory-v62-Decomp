/* FUN_50c0951b - 0x50c0951b in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0951b(void *this,IBinding *param_1,IBinding *param_2)

{
  int iVar1;
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x1c),param_1);
  if (param_2 == (IBinding *)0x0) {
    iVar1 = FUN_50c07ce1((void *)((int)this + 0x20),(int *)&param_1);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_50c101c4(iVar1);
    }
  }
  else {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x20),param_2);
  }
  iVar1 = FUN_50c0957d((int)this);
  *(uint *)((int)this + 0xc) =
       *(uint *)((int)this + 0xc) | (-(uint)(iVar1 == 0) & 0xfffffff8) + 0x10;
  *(void **)((int)this + 8) = this;
  return;
}



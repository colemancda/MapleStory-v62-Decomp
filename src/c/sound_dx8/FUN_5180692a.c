/* FUN_5180692a - 0x5180692a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_5180692a(void *this,IBinding *param_1,IBinding *param_2)

{
  int iVar1;
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x1c),param_1);
  if (param_2 == (IBinding *)0x0) {
    iVar1 = FUN_5180698c((void *)((int)this + 0x20),(int *)&param_1);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_5180e990(iVar1);
    }
  }
  else {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x20),param_2);
  }
  iVar1 = FUN_518069ec((int)this);
  *(uint *)((int)this + 0xc) =
       *(uint *)((int)this + 0xc) | (-(uint)(iVar1 == 0) & 0xfffffff8) + 0x10;
  *(void **)((int)this + 8) = this;
  return;
}



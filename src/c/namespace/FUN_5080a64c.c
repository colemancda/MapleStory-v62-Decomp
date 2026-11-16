/* FUN_5080a64c - 0x5080a64c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080a64c(void *this,int param_1,IBinding *param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  *(uint *)((int)this + 8) = (-(uint)(param_1 != 0) & 0xfffffffe) + 4 | 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0xc),param_2);
  iVar1 = (**(code **)(*(int *)param_2 + 0x10))(param_2,(int)this + 0x14);
  *(int *)((int)this + 0x10) = iVar1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    *(int *)((int)this + 0x10) = iVar1;
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
      *(int *)((int)this + 0x10) = iVar1;
      if (iVar1 == 0) {
        FUN_5080450d(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
      }
      *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x10;
    }
    else {
      *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x30;
    }
  }
  else {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x70;
  }
  return;
}



/* FUN_5080febc - 0x5080febc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall
FUN_5080febc(void *this,int *param_1,_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = FUN_508052c7(param_1);
    for (iVar3 = *(int *)(*(int *)((int)this + 4) + (uVar2 % *(uint *)((int)this + 8)) * 4);
        iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      bVar1 = FUN_50803f09((void *)(iVar3 + 8),param_1);
      if (bVar1) {
        if (param_2 != (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0) {
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    (param_2,*(IBinding **)(iVar3 + 0xc));
        }
        return iVar3 + 0xc;
      }
    }
  }
  return 0;
}



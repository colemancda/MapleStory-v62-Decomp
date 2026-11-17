/* FUN_00701d8e - 0x00701d8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00701d8e(int param_1,int param_2)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(param_1 + 0x5c4),
             *(IBinding **)(param_1 + 0x5b4 + param_2 * 8));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(param_1 + 0x5c4) + 4),
             *(IBinding **)(param_1 + 0x5b8 + param_2 * 8));
  return;
}



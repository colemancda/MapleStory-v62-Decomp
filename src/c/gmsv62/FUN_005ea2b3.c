/* FUN_005ea2b3 - 0x005ea2b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ea2b3(int param_1,IBinding *param_2)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1c),param_2);
  if (param_2 != (IBinding *)0x0) {
    (**(code **)(*(int *)param_2 + 8))(param_2);
  }
  return;
}



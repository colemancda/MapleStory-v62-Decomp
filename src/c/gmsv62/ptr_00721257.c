/* ptr_00721257 - 0x00721257 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00721257(int param_1,uint param_2)

{
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  
  if ((param_2 < 0x7da) || (0x7dd < param_2)) {
    if (param_2 == 0x7e7) {
      FUN_00720e2c(0);
    }
    FUN_0078a282(param_2);
  }
  else {
    FUN_007220df(param_2 - 0x7da);
    p_Var1 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                       ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5ec),
                        (IBinding *)0x0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5e8),
               *(IBinding **)p_Var1);
  }
  return;
}



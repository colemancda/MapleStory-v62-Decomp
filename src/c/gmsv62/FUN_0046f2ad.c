/* FUN_0046f2ad - 0x0046f2ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0046f2ad(int param_1)

{
  _CIP<struct_IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 4),(IBinding *)0x0);
  p_Var1 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                     ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x18),
                      (IBinding *)0x0);
  p_Var1 = _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                     ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x14),
                      *(IBinding **)p_Var1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x10),
             *(IBinding **)p_Var1);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



/* ptr_0049fe52 - 0x0049fe52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0049fe52(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  FUN_004a3147(param_2 + 1,0,0,0);
  *(undefined4 *)(param_1 + 0x7c) = param_2[6];
  *(undefined4 *)(param_1 + 0x80) = param_2[7];
  *(undefined4 *)(param_1 + 0x84) = param_2[8];
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x88),
             (IBinding *)param_2[9]);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x8c),
             (IBinding *)param_2[10]);
  FUN_008180db(-(uint)(param_1 != 0) & param_1 + 4U);
  return;
}



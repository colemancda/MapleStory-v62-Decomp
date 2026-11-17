/* FUN_006d1da3 - 0x006d1da3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006d1da3(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00449941(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 8),(IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0xc),(IBinding *)0x0);
  return;
}



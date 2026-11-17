/* FUN_00820292 - 0x00820292 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00820292(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00434e79();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1c),(IBinding *)0x0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x24),(IBinding *)0x0);
  return;
}



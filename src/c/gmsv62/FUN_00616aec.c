/* FUN_00616aec - 0x00616aec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00616aec(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[3] = 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 5),(IBinding *)0x0);
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  return;
}



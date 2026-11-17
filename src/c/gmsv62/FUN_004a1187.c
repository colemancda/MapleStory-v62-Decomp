/* FUN_004a1187 - 0x004a1187 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004a1187(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x14),(IBinding *)0x0);
  return;
}



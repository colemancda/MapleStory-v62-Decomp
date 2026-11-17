/* FUN_007b1e21 - 0x007b1e21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007b1e21(int param_1)

{
  *(undefined4 *)(param_1 + 0x2490) = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x2494),(IBinding *)0x0);
  *(undefined4 *)(DAT_00978368 + 0x3300) = 0;
  return;
}



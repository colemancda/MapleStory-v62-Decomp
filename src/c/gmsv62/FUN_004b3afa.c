/* FUN_004b3afa - 0x004b3afa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b3afa(int *param_1)

{
  if (param_1[5] != -1) {
    FUN_00818133(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 1));
    (**(code **)(*param_1 + 0x14))();
    FUN_00816370(param_1);
    param_1[9] = 0;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 6),(IBinding *)0x0);
    param_1[5] = -1;
  }
  return;
}



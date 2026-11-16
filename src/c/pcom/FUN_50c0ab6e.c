/* FUN_50c0ab6e - 0x50c0ab6e in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __fastcall FUN_50c0ab6e(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_50c0aae0();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x18),(IBinding *)0x0);
  }
  return param_1 + 8;
}



/* FUN_50c0ee44 - 0x50c0ee44 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0ee44(void *this,undefined2 *param_1)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x18),(IBinding *)0x0);
  FUN_50c0eeb8((void *)((int)this + 8),param_1);
  return;
}



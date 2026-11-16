/* FUN_50c0afd1 - 0x50c0afd1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0afd1(void *this,short *param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)((int)this + 0x18),(IBinding *)0x0);
  iVar1 = FUN_50c08269((short *)((int)this + 8));
  if (iVar1 < 0) {
    FUN_50c101c4(iVar1);
  }
  iVar1 = FUN_50c0cb59((short *)((int)this + 8),param_1);
  if (iVar1 < 0) {
    FUN_50c061b4(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50c14eb0);
  }
  return;
}



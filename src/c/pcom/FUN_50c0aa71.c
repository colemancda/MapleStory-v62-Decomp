/* FUN_50c0aa71 - 0x50c0aa71 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0aa71(int param_1)

{
  int iVar1;
  
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x18),(IBinding *)0x0);
  iVar1 = FUN_50c08269((short *)(param_1 + 8));
  if (iVar1 < 0) {
    FUN_50c101c4(iVar1);
  }
  return;
}



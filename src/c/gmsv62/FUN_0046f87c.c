/* FUN_0046f87c - 0x0046f87c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0046f87c(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x54) == 0)) {
    iVar1 = FUN_007d1e08();
    if ((*(int *)(param_1 + 0x44) < iVar1 - *(int *)(param_1 + 0x40)) || (param_2 != 0)) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 4),(IBinding *)0x0);
    }
  }
  return;
}



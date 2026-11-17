/* FUN_0057196f - 0x0057196f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0057196f(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x84);
  iVar1 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_0043fd71();
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((*(int *)(param_1 + 0xcc) != 0) && (*(int *)(param_1 + 0xd0) != 0)) {
    iVar1 = FUN_007d1e08();
    if (*(int *)(param_1 + 0xd0) < iVar1) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0xcc),(IBinding *)0x0
                );
      *(int *)(param_1 + 0xd0) = 0;
    }
  }
  FUN_008162ff();
  return;
}



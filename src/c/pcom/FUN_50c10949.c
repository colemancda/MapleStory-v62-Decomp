/* FUN_50c10949 - 0x50c10949 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall
FUN_50c10949(void *this,int *param_1,_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) == 0) {
    *param_1 = 0;
    uVar2 = *(uint *)((int)this + 8);
    uVar3 = FUN_50c04c85((int *)(iVar1 + 8));
    for (piVar4 = (int *)(*(int *)((int)this + 4) + 4 + (uVar3 % uVar2) * 4);
        piVar4 < (int *)(*(int *)((int)this + 4) + uVar2 * 4); piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        *param_1 = *piVar4;
        break;
      }
    }
  }
  else {
    *param_1 = *(int *)(iVar1 + 4);
  }
  if (param_2 != (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(param_2,*(IBinding **)(iVar1 + 0xc));
  }
  return iVar1 + 8;
}



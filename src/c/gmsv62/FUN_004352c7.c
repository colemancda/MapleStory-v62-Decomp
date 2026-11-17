/* FUN_004352c7 - 0x004352c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_004352c7(int param_1,int *param_2,_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_0087a024(*param_2,5);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + (uVar1 % *(uint *)(param_1 + 8)) * 4);
    if (iVar2 != 0) {
      do {
        if (*(int *)(iVar2 + 8) == *param_2) {
          if (param_3 != (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0) {
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      (param_3,*(IBinding **)(iVar2 + 0xc));
          }
          return iVar2 + 0xc;
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != 0);
    }
  }
  return 0;
}



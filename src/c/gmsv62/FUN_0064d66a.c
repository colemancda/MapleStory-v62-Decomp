/* FUN_0064d66a - 0x0064d66a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0064d66a(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)FUN_0064d5d4(param_1);
  puVar1 = param_3;
  *param_3 = *puVar2;
  FUN_00414f8b(puVar2 + 1);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar1 + 3),(IBinding *)puVar2[3]);
  param_3 = puVar1 + 2;
  FUN_00654842();
  for (uVar4 = 0; (iVar3 = puVar2[2], iVar3 != 0 && (uVar4 < *(uint *)(iVar3 + -4)));
      uVar4 = uVar4 + 1) {
    param_1 = *(undefined4 **)(iVar3 + 4 + uVar4 * 8);
    iVar3 = FUN_00650e34(param_2,*param_1,&param_1);
    if (iVar3 != 0) {
      iVar3 = puVar2[2] + uVar4 * 8;
      FUN_0065487e(0xffffffff);
      FUN_00654469(iVar3);
    }
  }
  return;
}



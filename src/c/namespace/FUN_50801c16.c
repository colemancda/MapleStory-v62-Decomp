/* FUN_50801c16 - 0x50801c16 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50801c16(undefined4 param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 local_14 [4];
  int local_c;
  
  if (param_4 == 0) {
    local_14[0] = 0x4003;
    local_c = param_2;
    if (param_2 == 0) {
      local_24 = DAT_5081ead8;
      uStack_20 = DAT_5081eadc;
      uStack_1c = DAT_5081eae0;
      uStack_18 = DAT_5081eae4;
      puVar3 = &local_24;
    }
    else {
      puVar3 = (undefined4 *)local_14;
    }
    iVar1 = (**(code **)(*param_3 + 0x10))
                      (param_3,param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3],param_5);
  }
  else {
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1,param_4);
  }
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else if (((param_2 == 0) || (param_4 != 0)) || (iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



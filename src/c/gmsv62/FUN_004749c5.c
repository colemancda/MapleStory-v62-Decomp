/* FUN_004749c5 - 0x004749c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004749c5(uint param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_8;
  
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar4 = *(uint *)(param_1 + 8);
    if ((*(uint *)(param_1 + 0x24) <= uVar3) &&
       ((*(uint *)(param_1 + 0x24) < uVar3 || (*(uint *)(param_1 + 0x20) <= uVar4)))) {
      uVar5 = *(uint *)(param_1 + 0x2c);
      if ((uVar3 <= uVar5) && ((uVar3 < uVar5 || (uVar4 <= *(uint *)(param_1 + 0x28))))) {
        uVar6 = uVar3 + CARRY4(param_3,uVar4);
        local_8 = param_1;
        if ((uVar6 <= uVar5) && ((uVar6 < uVar5 || (param_3 + uVar4 <= *(uint *)(param_1 + 0x28)))))
        {
          FUN_00879c20(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18),param_2,param_3);
          puVar1 = (uint *)(param_1 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar2;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,uVar2);
          return uVar2;
        }
        uVar8 = FUN_00474666(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),uVar3,0);
        *(undefined8 *)(param_1 + 8) = uVar8;
      }
    }
  }
  local_8 = 0;
  iVar7 = (*DAT_0097b454)(*(undefined4 *)(param_1 + 0x10),param_2,param_3,&local_8,0);
  if (iVar7 != 0) {
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_8;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar2,local_8);
    return local_8;
  }
  param_3 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_3,&DAT_008f9b80);
}



/* FUN_004748b5 - 0x004748b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_004748b5(uint param_1,DWORD param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_8;
  
  uVar2 = param_4;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar4 = *(uint *)(param_1 + 8);
    if ((*(uint *)(param_1 + 0x24) <= uVar3) &&
       ((*(uint *)(param_1 + 0x24) < uVar3 || (*(uint *)(param_1 + 0x20) <= uVar4)))) {
      uVar5 = *(uint *)(param_1 + 0x2c);
      if ((uVar3 <= uVar5) && ((uVar3 < uVar5 || (uVar4 <= *(uint *)(param_1 + 0x28))))) {
        uVar6 = uVar3 + CARRY4(param_4,uVar4);
        local_8 = param_1;
        if ((uVar6 <= uVar5) && ((uVar6 < uVar5 || (param_4 + uVar4 <= *(uint *)(param_1 + 0x28)))))
        {
          FUN_00879c20(param_3,*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18),param_4);
          puVar1 = (uint *)(param_1 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar2;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar3,uVar2);
          return uVar2;
        }
        uVar9 = FUN_00474666(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),uVar3,0);
        *(undefined8 *)(param_1 + 8) = uVar9;
      }
    }
  }
  local_8 = 0;
  DVar7 = SetFilePointer(*(HANDLE *)(param_1 + 0x10),0,(PLONG)0x0,1);
  if ((DVar7 != param_2) &&
     (DVar7 = (*DAT_0097b460)(*(undefined4 *)(param_1 + 0x10),param_2,0,0), DVar7 != param_2)) {
    param_2 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_2,&DAT_008f9b80);
  }
  iVar8 = (*DAT_0097b450)(*(undefined4 *)(param_1 + 0x10),param_3,param_4,&local_8,0);
  if ((iVar8 == 0) && (iVar8 = (*DAT_0097b49c)(), iVar8 != 0x6d)) {
    param_2 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_2,&DAT_008f9b80);
  }
  puVar1 = (uint *)(param_1 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + local_8;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar2,local_8);
  return local_8;
}



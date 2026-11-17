/* FUN_00474bfa - 0x00474bfa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00474bfa(int *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar4 = param_3;
  if (param_1[6] == 0) {
LAB_00474c7e:
    if (param_3 != 0) {
      iVar5 = 0;
      goto LAB_00474c99;
    }
  }
  else {
    uVar3 = param_1[3];
    uVar2 = param_1[2];
    if ((uVar3 < (uint)param_1[9]) || ((uVar3 <= (uint)param_1[9] && (uVar2 < (uint)param_1[8]))))
    goto LAB_00474c7e;
    if (param_3 != 0) {
      iVar5 = 0;
      uVar3 = uVar3 + CARRY4(uVar2,param_3);
      if ((uVar3 <= (uint)param_1[0xb]) &&
         ((uVar3 < (uint)param_1[0xb] || (uVar2 + param_3 <= (uint)param_1[10]))))
      goto LAB_00474c4c;
      goto LAB_00474c7e;
    }
    if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
      iVar5 = (param_1[0xb] - uVar3) - (uint)((uint)param_1[10] < uVar2);
      uVar4 = param_1[10] - uVar2;
LAB_00474c4c:
      uVar3 = (**(code **)(*param_2 + 0x18))(param_1[2] + param_1[6],uVar4);
      if (uVar4 == uVar3) {
        puVar1 = (uint *)(param_1 + 2);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar4;
        param_1[3] = param_1[3] + iVar5 + (uint)CARRY4(uVar3,uVar4);
        return uVar4;
      }
      param_2 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_2,&DAT_008f9b80);
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x3c))();
  iVar5 = ((int)((ulonglong)uVar6 >> 0x20) - param_1[3]) - (uint)((uint)uVar6 < (uint)param_1[2]);
LAB_00474c99:
  if (iVar5 == 0) {
    uVar4 = (**(code **)(*param_2 + 0x20))(param_1,uVar4);
    return uVar4;
  }
  param_2 = (int *)0x57;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_2,&DAT_008f9b80);
}



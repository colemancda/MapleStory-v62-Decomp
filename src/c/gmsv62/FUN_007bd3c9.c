/* FUN_007bd3c9 - 0x007bd3c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_007bd3c9(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = DAT_00978368;
  if (*(int *)(DAT_00978368 + 0x2b40) == 0) {
    local_8 = 0x80;
    local_c = 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x52c);
    iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x10))();
    uVar2 = *(undefined4 *)(iVar3 + 4);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(param_1 + 4) + 0x10))();
    local_14 = *puVar4;
    iVar3 = FUN_006509a1(param_3);
    piVar5 = (int *)FUN_00411537(local_24,iVar3 + 0x16c);
    if ((uVar1 & 1) == 0) {
      piVar5[2] = -piVar5[2];
      *piVar5 = -*piVar5;
      FUN_004459fe(piVar5,piVar5 + 2);
    }
    (*DAT_0097b54c)(piVar5,local_14,uVar2);
    piVar5 = (int *)(local_10 + 0x2b44);
    param_3 = 6;
    do {
      iVar3 = *piVar5;
      local_8 = local_8 << 1;
      if (iVar3 != 0) {
        if ((iVar3 == *(int *)(local_10 + 0x2088)) && (*param_2 != 0x236a6e)) {
LAB_007bd4de:
          local_8 = local_8 | 1;
          local_c = local_c + 1;
        }
        else {
          iVar3 = FUN_007c0104(iVar3);
          if ((iVar3 != 0) &&
             (((*(uint *)(iVar3 + 0x52c) & 0xfffffffe) != 0x12 || (*param_2 == 0x236a6e)))) {
            puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
            iVar6 = (*DAT_0097b57c)(local_24,*puVar4,puVar4[1]);
            if ((iVar6 != 0) &&
               ((*param_2 != 0x236a6e || ((*(uint *)(iVar3 + 0x52c) & 0xfffffffe) == 0x12))))
            goto LAB_007bd4de;
          }
        }
      }
      piVar5 = piVar5 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_c;
  }
  return local_8;
}



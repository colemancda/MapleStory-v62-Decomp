/* FUN_005a7eca - 0x005a7eca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_005a7eca(int param_1,undefined4 param_2,int *param_3,uint *param_4,undefined4 *param_5,
            int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [16];
  int local_c;
  int local_8;
  
  param_5[1] = 0;
  *param_5 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    local_8 = *(int *)(*(int *)(param_1 + 0xe8) + -4);
  }
  local_8 = local_8 + -1;
  if (-1 < local_8) {
    iVar4 = local_8 * 0x1c;
    local_c = param_1;
    do {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xe8) + iVar4);
      puVar6 = local_38;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      if (((param_6 == 0) || (*(int *)(local_20 + 0x18) != 0)) &&
         (iVar2 = (*DAT_0097b5a0)(local_1c,param_2,local_38), param_1 = local_c, iVar2 != 0)) {
        if (param_6 != 0) {
          if (*(int *)(local_20 + 0x18) == 0) goto LAB_005a7f42;
          if (param_6 != 0) {
            iVar4 = *(int *)(local_20 + 0x18);
            goto LAB_005a7f65;
          }
        }
        iVar4 = *(int *)(local_20 + 0x14);
LAB_005a7f65:
        *param_3 = iVar4;
        if (10 < iVar4) {
          uVar3 = (iVar4 / 10) * 2 + 1;
          if (uVar3 == 0) {
            iVar4 = FUN_004133f0();
          }
          else {
            uVar1 = FUN_004133f0();
            iVar4 = uVar1 % uVar3 + (iVar4 - iVar4 / 10);
          }
          *param_3 = iVar4;
        }
        uVar3 = 0;
        if (((0 < *param_3) && (*(int *)(local_20 + 0x20) != 0)) && (*(int *)(local_20 + 0x24) != 0)
           ) {
          uVar3 = (uint)CONCAT11(*(undefined1 *)(local_20 + 0x20),*(undefined1 *)(local_20 + 0x24));
        }
        *param_4 = uVar3;
        *param_5 = local_28;
        param_5[1] = local_24;
        return 1;
      }
LAB_005a7f42:
      local_8 = local_8 + -1;
      iVar4 = iVar4 + -0x1c;
    } while (-1 < local_8);
  }
  return 0;
}



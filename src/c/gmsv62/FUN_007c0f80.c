/* FUN_007c0f80 - 0x007c0f80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007c0f80(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_8;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  if (iVar2 != 0 || iVar3 != 0) {
    param_2 = *(int **)(param_1 + 8);
    local_8 = param_3;
    if ((iVar2 != *(int *)((int)param_2 + 0x1780)) || (iVar3 != *(int *)((int)param_2 + 0x1784))) {
      uVar6 = *(uint *)(param_1 + 0x30);
      do {
        if (uVar6 == 0) {
          return;
        }
        piVar1 = (int *)(uVar6 + 4);
        uVar6 = *(int *)(uVar6 - 0xc) + 0x10U & -(uint)(*(int *)(uVar6 - 0xc) != 0);
        param_2 = *(int **)(*piVar1 + 0x10);
      } while ((iVar2 != *(int *)((int)param_2 + 0x1780)) ||
              (iVar3 != *(int *)((int)param_2 + 0x1784)));
    }
    if (param_2 != (int *)0x0) {
      if (*(uint *)((int)param_2 + 0xd78) < *(uint *)(param_3 + 0xd78)) {
        FUN_007c20ba(&local_8,&param_2);
      }
      puVar5 = (undefined4 *)FUN_007c1a92();
      *puVar5 = *(undefined4 *)(local_8 + 0xd78);
      puVar5[1] = *(undefined4 *)((int)param_2 + 0xd78);
      puVar5[2] = *(undefined4 *)(local_8 + 0x1778);
      puVar5[3] = *(undefined4 *)(local_8 + 0x177c);
      puVar5[4] = *(undefined4 *)((int)param_2 + 0x1778);
      uVar4 = *(undefined4 *)((int)param_2 + 0x177c);
      puVar5[7] = 0;
      puVar5[5] = uVar4;
      puVar5[6] = param_4;
    }
  }
  return;
}



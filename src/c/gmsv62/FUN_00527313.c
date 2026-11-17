/* FUN_00527313 - 0x00527313 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00527313(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  byte local_214 [256];
  byte local_114;
  undefined4 local_113;
  byte local_da;
  byte local_cf;
  byte local_ce;
  uint local_14;
  undefined4 local_10;
  char *local_c;
  int local_8;
  
  piVar7 = *(int **)(param_1 + 8);
  if ((piVar7 != (int *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00879c20(local_214,param_1 + 0x824,0x100);
    _memset((void *)(param_1 + 0x824),0,0x100);
    local_10 = (*DAT_0097b704)();
    local_114 = 0;
    puVar3 = &local_113;
    for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    iVar6 = (**(code **)(*piVar7 + 0x24))(piVar7,0x100,&local_114);
    if (iVar6 < 0) {
      FUN_00526cad(0);
    }
    else {
      if (((local_da & 0x80) != 0) && (local_214[0x14] == '\0')) {
        *(uint *)(param_1 + 0x92c) = *(uint *)(param_1 + 0x92c) ^ 0x10000000;
      }
      if (((local_cf & 0x80) != 0) && (local_214[0x90] == '\0')) {
        *(uint *)(param_1 + 0x92c) = *(uint *)(param_1 + 0x92c) ^ 0x20000000;
      }
      if (((local_ce & 0x80) != 0) && (local_214[0x91] == '\0')) {
        *(uint *)(param_1 + 0x92c) = *(uint *)(param_1 + 0x92c) ^ 0x40000000;
      }
      iVar6 = 1;
      piVar7 = (int *)(param_1 + 0x428);
      do {
        if ((((&local_114)[iVar6] & 0x80) != 0) && (iVar2 = *piVar7, iVar2 != 0)) {
          if (((*(uint *)(param_1 + 0x92c) & 0x20000000) == 0) && ((0x5f < iVar2 && (iVar2 < 0x6a)))
             ) {
            iVar2 = *(int *)(&DAT_0096532c + iVar2 * 4);
          }
          uVar4 = (undefined1)iVar6;
          *(undefined1 *)(param_1 + 0x824 + iVar2) = uVar4;
          if (0x9f < iVar2) {
            if (iVar2 < 0xa2) {
              *(undefined1 *)(param_1 + 0x834) = uVar4;
            }
            else if (iVar2 < 0xa4) {
              *(undefined1 *)(param_1 + 0x835) = uVar4;
            }
            else if (iVar2 < 0xa6) {
              *(undefined1 *)(param_1 + 0x836) = uVar4;
            }
          }
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 < 0x100);
      local_14 = FUN_00527587();
      local_8 = 0;
      iVar6 = 1;
      do {
        if ((((iVar6 != 0xa0) && (iVar6 != 0xa1)) && (iVar6 != 0xa2)) &&
           (((iVar6 != 0xa3 && (iVar6 != 0xa4)) && (iVar6 != 0xa5)))) {
          bVar1 = *(byte *)(param_1 + 0x824 + iVar6);
          local_c = (char *)(param_1 + 0x824 + iVar6);
          if (bVar1 != local_214[iVar6]) {
            bVar5 = local_214[iVar6];
            if (bVar1 != 0) {
              bVar5 = bVar1;
            }
            if (param_2 != 0) {
              uVar8 = ((bVar5 & 0x80) << 1 | bVar5 & 0xffffff7f) << 0x10 |
                      (-(uint)(bVar1 != 0) & 0x80000000) + 0x80000000 | local_14;
              puVar3 = (undefined4 *)FUN_0052771e();
              puVar3[2] = uVar8;
              *puVar3 = 0x100;
              puVar3[1] = iVar6;
            }
            if (*local_c != '\0') {
              local_8 = iVar6;
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x100);
      if (local_8 == 0) {
        iVar6 = *(int *)(param_1 + 0x928);
        if (iVar6 != 0) {
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (*(char *)(iVar6 + 0x824 + param_1) == '\0') {
            *(undefined4 *)(param_1 + 0x928) = 0;
            *(undefined4 *)(param_1 + 0x924) = 0;
          }
        }
      }
      else {
        *(int *)(param_1 + 0x928) = -local_8;
        *(undefined4 *)(param_1 + 0x924) = local_10;
      }
    }
  }
  return;
}



/* FUN_005583b2 - 0x005583b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005583b2(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_f0 [49];
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_20 = 0;
  local_14 = 0;
  local_18 = 0;
  local_24 = 0;
  piVar4 = *(int **)(param_1 + 0x10c);
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    do {
      iVar2 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
      local_2c = piVar4;
      local_1c = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
      local_10 = 0;
      do {
        iVar2 = local_10;
        if (piVar4[local_10 * 5 + 3] != 0) {
          if (local_10 == 0) {
            iVar6 = 1;
            local_f0[0] = 0;
          }
          else {
            iVar6 = FUN_0044da62(*(undefined4 *)piVar4[local_10 * 5 + 4],2,local_f0,1);
          }
          local_c = 0;
          if (iVar6 < 1) break;
          local_28 = piVar4 + iVar2 * 5 + 1;
          piVar5 = local_f0;
          do {
            if ((*piVar5 == 0xb) && (param_3 != 0)) {
              puVar1 = &param_3;
            }
            else {
              puVar1 = (undefined4 *)(param_2 + *piVar5 * 4);
            }
            iVar2 = FUN_0055a499(puVar1,0);
            if (iVar2 != 0) break;
            local_c = local_c + 1;
            piVar5 = piVar5 + 1;
          } while (local_c < iVar6);
          if (iVar6 <= local_c) break;
        }
        local_10 = local_10 + 1;
      } while (local_10 < 0x31);
      if (piVar4[0xf8] == 0) {
LAB_005584d5:
        if (0x30 < local_10) {
          if (*piVar4 == 1) {
            return local_8;
          }
          if ((*piVar4 == 2) && (local_18 == 0)) {
            local_18 = 1;
            local_24 = local_8;
          }
          else if (local_14 == 0) {
            local_14 = 1;
            local_20 = local_8;
          }
        }
      }
      else {
        iVar6 = 0;
        iVar2 = param_4;
        do {
          iVar3 = FUN_0055a499(iVar2,0);
          if (iVar3 == 0) break;
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar6 < 3);
        piVar4 = local_2c;
        if (2 < iVar6) goto LAB_005584d5;
      }
      local_8 = local_8 + 1;
      piVar4 = local_1c;
    } while (local_1c != (int *)0x0);
    if (local_14 != 0) {
      return local_20;
    }
    if (local_18 != 0) {
      return local_24;
    }
  }
  return -1;
}



/* FUN_100080d0 - 0x100080d0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int __cdecl
FUN_100080d0(uint param_1,uint param_2,int *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,int param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  uint local_4;
  
  local_4 = 0;
  puVar1 = (uint *)(**(code **)(param_9 + 0x20))(*(undefined4 *)(param_9 + 0x28),0x120,4);
  if (puVar1 == (uint *)0x0) {
    return -4;
  }
  iVar2 = FUN_10007c00(param_3,param_1,0x101,0x1000d1b8,0x1000d234,param_6,param_4,param_8,&local_4,
                       puVar1);
  if (iVar2 == 0) {
    if (*param_4 != 0) {
      iVar2 = FUN_10007c00(param_3 + param_1,param_2,0,0x1000d2b0,0x1000d328,param_7,param_5,param_8
                           ,&local_4,puVar1);
      if (iVar2 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(param_9 + 0x18) = s_oversubscribed_distance_tree_100114e0;
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(param_9 + 0x18) = s_incomplete_distance_tree_100114c4;
          (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_10008203;
      }
      *(char **)(param_9 + 0x18) = s_empty_distance_tree_with_lengths_100114a0;
      iVar2 = -3;
LAB_10008203:
      (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(param_9 + 0x18) = s_oversubscribed_literal_length_tr_1001147c;
      (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_10008246;
  }
  *(char **)(param_9 + 0x18) = s_incomplete_literal_length_tree_1001145c;
  iVar2 = -3;
LAB_10008246:
  (**(code **)(param_9 + 0x24))(*(undefined4 *)(param_9 + 0x28),puVar1);
  return iVar2;
}



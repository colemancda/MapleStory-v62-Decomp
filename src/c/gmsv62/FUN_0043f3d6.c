/* FUN_0043f3d6 - 0x0043f3d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043f3d6(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  uint local_8;
  
  local_8 = (uint)((*(uint *)(param_1 + 0x4b4) & 0xfffffffe) == 10);
  if (*(int *)(param_1 + 0x468) == 0) {
    piVar2 = &DAT_008e8ca8;
    if (local_8 == 0) {
      piVar2 = &DAT_008e8c98;
    }
    *param_2 = *piVar2;
    param_2[1] = piVar2[1];
    param_2[2] = piVar2[2];
    param_2[3] = piVar2[3];
    iVar1 = FUN_0043f522();
    if (iVar1 != 0) {
      param_2[3] = param_2[3] + *(int *)(param_1 + 0x4a0);
      param_2[1] = param_2[1] + *(int *)(param_1 + 0x4a0);
      *param_2 = *param_2 + *(int *)(param_1 + 0x49c);
      param_2[2] = param_2[2] + *(int *)(param_1 + 0x49c);
      (*DAT_0097b500)(param_2,param_2,param_1 + 0x488);
    }
  }
  else {
    *param_2 = *(int *)(param_1 + 0x46c);
    param_2[1] = *(int *)(param_1 + 0x470);
    param_2[2] = *(int *)(param_1 + 0x474);
    param_2[3] = *(int *)(param_1 + 0x478);
  }
  if ((*(byte *)(param_1 + 0x4b4) & 1) == 0) {
    param_2[2] = -param_2[2];
    *param_2 = -*param_2;
    FUN_004459fe(param_2,param_2 + 2);
  }
  (*DAT_0097b54c)(param_2,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce4));
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x468) == 0) {
      piVar2 = &DAT_008e8ca8;
      if (local_8 == 0) {
        piVar2 = &DAT_008e8c98;
      }
    }
    else {
      piVar2 = (int *)(param_1 + 0x46c);
    }
    local_18 = *piVar2;
    iStack_14 = piVar2[1];
    local_10 = piVar2[2];
    iStack_c = piVar2[3];
    if ((*(byte *)(param_1 + 0x4b4) & 1) == 0) {
      local_10 = -local_10;
      local_18 = -local_18;
      FUN_004459fe(&local_18,&local_10);
    }
    (*DAT_0097b54c)(&local_18,*(undefined4 *)(param_1 + 0xce8),*(undefined4 *)(param_1 + 0xcec));
    (*DAT_0097b500)(param_2,param_2,&local_18);
  }
  return;
}



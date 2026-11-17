/* FUN_0043cbe5 - 0x0043cbe5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0043cbe5(short *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  int *piVar4;
  int iVar5;
  byte *lp;
  uint local_5c;
  uint local_54;
  char *local_48;
  uint local_40;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008e8c80;
  puStack_10 = &LAB_0087b11c;
  local_14 = ExceptionList;
  local_8 = 0;
  if (*param_1 != 0x5a4d) {
    return 0;
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x1e) + (int)param_1);
  if (*piVar4 != 0x4550) {
    return 0;
  }
  if ((short)piVar4[6] == 0x20b) {
    iVar5 = piVar4[0x22];
  }
  else {
    iVar5 = piVar4[0x1e];
  }
  if (iVar5 == 0) {
    return 0;
  }
  if (param_2 < (char *)0x10000) {
    param_2 = param_2 + -1;
  }
  else {
    local_54 = 0;
    local_48 = param_2;
    while (*local_48 != '\0') {
      local_48 = local_48 + 1;
      local_54 = local_54 + 1;
      if (0xff < local_54) {
        return 0;
      }
    }
    piVar4 = (int *)(*(int *)((int)param_1 + iVar5 + 0x20) + (int)param_1);
    bVar2 = false;
    ExceptionList = &local_14;
    for (local_40 = 0; local_40 < *(uint *)((int)param_1 + iVar5 + 0x18); local_40 = local_40 + 1) {
      lp = (byte *)(*piVar4 + (int)param_1);
      local_48 = param_2;
      BVar3 = IsBadReadPtr(lp,4);
      if (BVar3 != 0) {
        ExceptionList = local_14;
        return 0;
      }
      bVar1 = true;
      for (local_5c = 0; local_5c < local_54; local_5c = local_5c + 1) {
        if ((uint)*lp != (int)*local_48) {
          bVar1 = false;
          break;
        }
        lp = lp + 1;
        local_48 = local_48 + 1;
      }
      if (bVar1) {
        bVar2 = true;
        break;
      }
      piVar4 = piVar4 + 1;
    }
    if (!bVar2) {
      ExceptionList = local_14;
      return 0;
    }
    param_2 = (char *)(uint)*(ushort *)
                             ((int)param_1 + local_40 * 2 + *(int *)((int)param_1 + iVar5 + 0x24));
  }
  ExceptionList = local_14;
  return *(int *)((int)param_1 + (int)param_2 * 4 + *(int *)((int)param_1 + iVar5 + 0x1c)) +
         (int)param_1;
}



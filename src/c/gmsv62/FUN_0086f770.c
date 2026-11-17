/* FUN_0086f770 - 0x0086f770 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char * FUN_0086f770(short *param_1,char *param_2)

{
  char cVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  byte *lp;
  char *pcVar7;
  char *pcVar8;
  char local_e8 [128];
  undefined1 *local_68;
  byte *local_64;
  char local_60;
  uint local_5c;
  char local_58;
  uint local_54;
  int *local_50;
  ushort *local_4c;
  char *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  char *local_38;
  short *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  char *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008f3e68;
  puStack_10 = &LAB_0087b11c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff08;
  ExceptionList = &local_14;
  BVar2 = IsBadReadPtr(param_1,4);
  if (BVar2 != 0) {
    ExceptionList = local_14;
    return (char *)0x0;
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_8 = 0;
  local_34 = param_1;
  if (*param_1 != 0x5a4d) {
    ExceptionList = local_14;
    return (char *)0x0;
  }
  local_3c = (int *)(*(int *)(param_1 + 0x1e) + (int)param_1);
  if (*local_3c != 0x4550) {
    ExceptionList = local_14;
    return (char *)0x0;
  }
  if ((short)local_3c[6] == 0x20b) {
    local_30 = local_3c[0x22];
    local_28 = local_3c[0x23];
    local_44 = local_3c;
  }
  else {
    local_30 = local_3c[0x1e];
    local_28 = local_3c[0x1f];
  }
  if (local_30 == 0) {
    ExceptionList = local_14;
    return (char *)0x0;
  }
  local_40 = local_30 + (int)param_1;
  if (param_2 < (char *)0x10000) {
    local_38 = param_2 + -1;
  }
  else {
    local_54 = 0;
    local_48 = param_2;
    while (*local_48 != '\0') {
      local_48 = local_48 + 1;
      local_54 = local_54 + 1;
      if (0xff < local_54) {
        ExceptionList = local_14;
        return (char *)0x0;
      }
    }
    local_50 = (int *)(*(int *)(local_40 + 0x20) + (int)param_1);
    local_58 = '\0';
    for (local_38 = (char *)0x0; local_38 < *(uint *)(local_40 + 0x18);
        local_38 = (char *)((int)local_38 + 1)) {
      lp = (byte *)(*local_50 + (int)param_1);
      local_48 = param_2;
      local_64 = lp;
      BVar2 = IsBadReadPtr(lp,4);
      if (BVar2 != 0) {
        ExceptionList = local_14;
        return (char *)0x0;
      }
      local_60 = '\x01';
      pcVar7 = param_2;
      for (local_5c = 0; local_5c < local_54; local_5c = local_5c + 1) {
        if ((uint)*lp != (int)*pcVar7) {
          local_60 = '\0';
          break;
        }
        lp = lp + 1;
        pcVar7 = pcVar7 + 1;
        local_64 = lp;
        local_48 = pcVar7;
      }
      if (local_60 != '\0') {
        local_58 = '\x01';
        break;
      }
      local_50 = local_50 + 1;
    }
    if (local_58 == '\0') {
      ExceptionList = local_14;
      return (char *)0x0;
    }
    local_4c = (ushort *)((int)param_1 + (int)local_38 * 2 + *(int *)(local_40 + 0x24));
    local_38 = (char *)(uint)*local_4c;
  }
  local_2c = (int *)((int)param_1 + (int)local_38 * 4 + *(int *)(local_40 + 0x1c));
  local_24 = (char *)(*local_2c + (int)param_1);
  if (((char *)(local_30 + (int)param_1) <= local_24) &&
     (local_24 < (char *)(local_28 + local_30 + (int)param_1))) {
    uVar5 = 0xffffffff;
    pcVar7 = local_24;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = local_e8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    puVar3 = (undefined1 *)FUN_0087ccbc(local_e8,&DAT_0096dffc);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_68 = puVar3;
    pHVar4 = GetModuleHandleA(local_e8);
    local_24 = (char *)FUN_0086f770(pHVar4,puVar3);
  }
  ExceptionList = local_14;
  return local_24;
}



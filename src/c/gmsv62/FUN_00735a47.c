/* FUN_00735a47 - 0x00735a47 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00735a47(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  byte local_5;
  
  iVar3 = FUN_00455c59(local_24);
  iVar3 = *(int *)(iVar3 + 4);
  FUN_0045e4a2();
  piVar5 = (int *)(param_1 + 0x78);
  local_10 = 6;
  local_c = piVar5;
  do {
    (**(code **)(*(int *)(*piVar5 + 4) + 0x1c))(1);
    piVar5 = piVar5 + 2;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  iVar4 = 0;
  if (*(int *)(param_1 + 0xac) == 0) {
    sVar1 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
    if ((int)sVar1 % 10 == 1) {
      iVar4 = 5;
    }
    else {
      sVar1 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
      iVar4 = (-(uint)((int)sVar1 % 10 != 2) & 0xfffffff6) + 10;
    }
    local_5 = FUN_0045f03e(iVar3 + 0x33,*(undefined4 *)(iVar3 + 0x35));
    local_1c = FUN_0045f084(iVar3 + 0x41,*(undefined4 *)(iVar3 + 0x45));
    local_18 = FUN_0045f084(iVar3 + 0x49,*(undefined4 *)(iVar3 + 0x4d));
    local_14 = FUN_0045f084(iVar3 + 0x51,*(undefined4 *)(iVar3 + 0x55));
    local_10 = FUN_0045f084(iVar3 + 0x59,*(undefined4 *)(iVar3 + 0x5d));
    sVar1 = FUN_0045f084(iVar3 + 0x81,*(undefined4 *)(iVar3 + 0x85));
    if ((int)(iVar4 + (local_5 + 4) * 5) <=
        (int)sVar1 + (int)(short)local_10 + (int)(short)local_14 + (int)(short)local_18 +
        (int)(short)local_1c) {
      (**(code **)(*(int *)(*local_c + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 4) + 0x1c))(0);
    }
    iVar4 = local_10;
    if (*(int *)(param_1 + 0xac) == 0) {
      sVar1 = FUN_0045f084(iVar3 + 0x69,*(undefined4 *)(iVar3 + 0x6d));
      sVar2 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
      iVar4 = (int)sVar2 / 100;
      if (iVar4 == 0) {
        iVar4 = 0xc;
      }
      else if (iVar4 == 1) {
        iVar4 = 0x36;
      }
      else if (iVar4 == 2) {
        iVar4 = 10;
      }
      else if (iVar4 < 3) {
LAB_00735bdb:
        iVar4 = 0;
      }
      else if (iVar4 < 5) {
        iVar4 = 0x14;
      }
      else {
        if (iVar4 != 5) goto LAB_00735bdb;
        iVar4 = 0x2a;
      }
      iVar4 = FUN_00736c6a(sVar1 - iVar4);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*local_c + 4) + 0x1c))(0);
      }
      sVar1 = FUN_0045f084(iVar3 + 0x79,*(undefined4 *)(iVar3 + 0x7d));
      sVar2 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
      iVar4 = FUN_00738082((int)sVar2);
      iVar4 = FUN_00736eaa(sVar1 - iVar4);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 4) + 0x1c))(0);
      }
      sVar1 = FUN_0045f084(iVar3 + 0x41,*(undefined4 *)(iVar3 + 0x45));
      if (sVar1 < 5) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x88) + 4) + 0x1c))(0);
      }
      local_10 = iVar3 + 0x49;
      sVar1 = FUN_0045f084(local_10,*(undefined4 *)(iVar3 + 0x4d));
      if (sVar1 < 5) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x90) + 4) + 0x1c))(0);
      }
      sVar1 = FUN_0045f084(iVar3 + 0x51,*(undefined4 *)(iVar3 + 0x55));
      if (sVar1 < 5) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x98) + 4) + 0x1c))(0);
      }
      sVar1 = FUN_0045f084(iVar3 + 0x59,*(undefined4 *)(iVar3 + 0x5d));
      if (sVar1 < 5) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xa0) + 4) + 0x1c))(0);
      }
      sVar1 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
      local_c = (int *)((int)sVar1 / 100);
      if (local_c == (int *)0x1) {
        sVar1 = FUN_0045f084(iVar3 + 0x41,*(undefined4 *)(iVar3 + 0x45));
        if (0x23 < sVar1) {
          return;
        }
        (**(code **)(*(int *)(*(int *)(param_1 + 0x88) + 4) + 0x1c))(0);
      }
      if (((local_c == (int *)0x3) || (local_c == (int *)0x4)) &&
         (sVar1 = FUN_0045f084(local_10,*(undefined4 *)(iVar3 + 0x4d)), sVar1 < 0x1a)) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x90) + 4) + 0x1c))(0);
      }
      if (local_c == (int *)0x2) {
        sVar1 = FUN_0045f084(iVar3 + 0x51,*(undefined4 *)(iVar3 + 0x55));
        if (0x14 < sVar1) {
          return;
        }
        (**(code **)(*(int *)(*(int *)(param_1 + 0x98) + 4) + 0x1c))(0);
      }
      if (local_c != (int *)0x5) {
        return;
      }
      sVar1 = FUN_0045f084(local_10,*(undefined4 *)(iVar3 + 0x4d));
      if (0x14 < sVar1) {
        return;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x90) + 4);
      goto LAB_00735f0c;
    }
  }
  local_10 = iVar4;
  local_1c = FUN_0045f084(iVar3 + 0x69,*(undefined4 *)(iVar3 + 0x6d));
  sVar1 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
  iVar4 = (int)sVar1 / 100;
  if (iVar4 == 0) {
    iVar4 = 8;
  }
  else if (iVar4 == 1) {
    iVar4 = 0x14;
  }
  else if (iVar4 == 2) {
    iVar4 = 6;
  }
  else if (iVar4 < 3) {
LAB_00735e02:
    iVar4 = 0;
  }
  else if (iVar4 < 5) {
    iVar4 = 0x10;
  }
  else {
    if (iVar4 != 5) goto LAB_00735e02;
    iVar4 = 0x12;
  }
  iVar4 = FUN_007370ee((short)local_1c + iVar4);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(*local_c + 4) + 0x1c))(0);
  }
  local_1c = FUN_0045f084(iVar3 + 0x79,*(undefined4 *)(iVar3 + 0x7d));
  sVar1 = FUN_0045f084(iVar3 + 0x39,*(undefined4 *)(iVar3 + 0x3d));
  iVar3 = (int)sVar1 / 100;
  if (iVar3 == 0) {
    iVar3 = 6;
  }
  else if (iVar3 == 1) {
    iVar3 = 2;
  }
  else if (iVar3 == 2) {
    iVar3 = 0x12;
  }
  else if (iVar3 < 3) {
LAB_00735e7a:
    iVar3 = 0;
  }
  else if (iVar3 < 5) {
    iVar3 = 10;
  }
  else {
    if (iVar3 != 5) goto LAB_00735e7a;
    iVar3 = 0xe;
  }
  iVar3 = FUN_00737178((short)local_1c + iVar3);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x80) + 4) + 0x1c))(0);
  }
  iVar3 = *(int *)(param_1 + 0xac);
  if (iVar3 == 0x40) {
    iVar3 = *(int *)(param_1 + 0x88);
  }
  else if (iVar3 == 0x80) {
    iVar3 = *(int *)(param_1 + 0x90);
  }
  else if (iVar3 == 0x100) {
    iVar3 = *(int *)(param_1 + 0x98);
  }
  else if (iVar3 == 0x200) {
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  else if (iVar3 == 0x800) {
    iVar3 = *local_c;
  }
  else {
    if (iVar3 != 0x2000) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x80);
  }
  iVar3 = *(int *)(iVar3 + 4);
LAB_00735f0c:
  (**(code **)(iVar3 + 0x1c))(0);
  return;
}



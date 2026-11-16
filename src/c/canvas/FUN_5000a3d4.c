/* FUN_5000a3d4 - 0x5000a3d4 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_5000a3d4(void *this,uint param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_4c [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  void *local_8;
  
  local_8 = this;
  iVar2 = abs(param_2);
  piVar7 = (int *)(iVar2 * 0x10 + *(int *)((int)this + 0x2004));
  local_28 = param_1 >> 8 & 0xff;
  local_1c = *piVar7;
  local_18 = piVar7[1];
  local_14 = piVar7[2];
  local_24 = param_1 >> 0x10 & 0xff;
  local_10 = piVar7[3];
  local_20 = param_1 >> 0x18;
  local_2c = param_1 & 0xff;
  iVar2 = (local_1c >> 4) + local_2c;
  iVar3 = (local_18 >> 4) + local_28;
  iVar5 = (local_14 >> 4) + local_24;
  iVar8 = (local_10 >> 4) + local_20;
  if (iVar2 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0xff;
    if (iVar2 < 0x100) {
      iVar9 = iVar2;
    }
  }
  local_3c = iVar9 >> 4;
  if (iVar3 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar3;
    if (0xff < iVar3) {
      iVar9 = 0xff;
    }
  }
  local_38 = iVar9 >> 4;
  if (iVar5 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar5;
    if (0xff < iVar5) {
      iVar9 = 0xff;
    }
  }
  local_34 = iVar9 >> 4;
  if (iVar8 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar8;
    if (0xff < iVar8) {
      iVar9 = 0xff;
    }
  }
  local_c = (iVar9 >> 4) << 4 | iVar9 >> 4;
  uVar10 = local_34 << 4 | local_34;
  uVar6 = local_38 << 4 | local_38;
  uVar4 = local_3c << 4 | local_3c;
  *(ushort *)(*(int *)((int)local_8 + 0x2014) + param_2 * 2) =
       (ushort)(((uVar10 & 0xfff8) << 5 | uVar6 & 0xfc) << 3) | (ushort)(uVar4 >> 3) & 0x1f;
  if (iVar2 - 1U < 0xfe) {
    local_1c = local_1c + (local_2c - uVar4) * 0x10;
  }
  if (iVar3 - 1U < 0xfe) {
    local_18 = local_18 + (local_28 - uVar6) * 0x10;
  }
  if (iVar5 - 1U < 0xfe) {
    local_14 = local_14 + (local_24 - uVar10) * 0x10;
  }
  if (iVar8 - 1U < 0xfe) {
    local_10 = local_10 + (local_20 - local_c) * 0x10;
  }
  iVar2 = abs(param_2);
  FUN_5000a6a3(&local_1c,local_4c);
  pvVar1 = local_8;
  if (iVar2 < *(int *)((int)local_8 + 0x200c) + -1) {
    FUN_5000a612((int *)((iVar2 + 1) * 0x10 + *(int *)((int)local_8 + 0x2004)),local_4c);
  }
  FUN_5000a631(&local_1c,local_4c);
  if (0 < iVar2) {
    FUN_5000a612((int *)(*(int *)((int)pvVar1 + 0x2008) + -0x10 + iVar2 * 0x10),local_4c);
  }
  FUN_5000a66a(&local_1c,local_4c);
  FUN_5000a612((int *)(iVar2 * 0x10 + *(int *)((int)pvVar1 + 0x2008)),local_4c);
  FUN_5000a6da(&local_1c,local_4c);
  if (iVar2 < *(int *)((int)pvVar1 + 0x200c) + -1) {
    FUN_5000a612((int *)((iVar2 + 1) * 0x10 + *(int *)((int)pvVar1 + 0x2008)),local_4c);
  }
  return;
}



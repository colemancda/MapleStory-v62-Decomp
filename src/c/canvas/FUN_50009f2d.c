/* FUN_50009f2d - 0x50009f2d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_50009f2d(void *this,uint param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_3c [4];
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
  piVar11 = (int *)(iVar2 * 0x10 + *(int *)((int)this + 0x2004));
  local_28 = param_1 >> 8 & 0xff;
  local_1c = *piVar11;
  local_18 = piVar11[1];
  local_14 = piVar11[2];
  local_24 = param_1 >> 0x10 & 0xff;
  local_10 = piVar11[3];
  local_20 = param_1 >> 0x18;
  local_2c = param_1 & 0xff;
  iVar2 = (local_1c >> 4) + local_2c;
  iVar3 = (local_18 >> 4) + local_28;
  iVar6 = (local_14 >> 4) + local_24;
  iVar12 = (local_10 >> 4) + local_20;
  if (iVar2 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0xff;
    if (iVar2 < 0x100) {
      iVar9 = iVar2;
    }
  }
  if (iVar3 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar3;
    if (0xff < iVar3) {
      iVar4 = 0xff;
    }
  }
  if (iVar6 < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar6;
    if (0xff < iVar6) {
      iVar7 = 0xff;
    }
  }
  if (iVar12 < 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = iVar12;
    if (0xff < iVar12) {
      iVar13 = 0xff;
    }
  }
  local_c = (iVar13 >> 4) << 4 | iVar13 >> 4;
  uVar8 = (iVar4 >> 4) << 4 | iVar4 >> 4;
  uVar10 = (iVar7 >> 4) << 4 | iVar7 >> 4;
  uVar5 = (iVar9 >> 4) << 4 | iVar9 >> 4;
  *(ushort *)(*(int *)((int)local_8 + 0x2014) + param_2 * 2) =
       (ushort)(((local_c & 0xfff0) << 4 | uVar10 & 0xf0) << 4) | (ushort)(uVar5 >> 4) & 0xf |
       (ushort)uVar8 & 0xf0;
  if (iVar2 - 1U < 0xfe) {
    local_1c = local_1c + (local_2c - uVar5) * 0x10;
  }
  if (iVar3 - 1U < 0xfe) {
    local_18 = local_18 + (local_28 - uVar8) * 0x10;
  }
  if (iVar6 - 1U < 0xfe) {
    local_14 = local_14 + (local_24 - uVar10) * 0x10;
  }
  if (iVar12 - 1U < 0xfe) {
    local_10 = local_10 + (local_20 - local_c) * 0x10;
  }
  iVar2 = abs(param_2);
  FUN_5000a6a3(&local_1c,local_3c);
  pvVar1 = local_8;
  if (iVar2 < *(int *)((int)local_8 + 0x200c) + -1) {
    FUN_5000a612((int *)((iVar2 + 1) * 0x10 + *(int *)((int)local_8 + 0x2004)),local_3c);
  }
  FUN_5000a631(&local_1c,local_3c);
  if (0 < iVar2) {
    FUN_5000a612((int *)(*(int *)((int)pvVar1 + 0x2008) + -0x10 + iVar2 * 0x10),local_3c);
  }
  FUN_5000a66a(&local_1c,local_3c);
  FUN_5000a612((int *)(iVar2 * 0x10 + *(int *)((int)pvVar1 + 0x2008)),local_3c);
  FUN_5000a6da(&local_1c,local_3c);
  if (iVar2 < *(int *)((int)pvVar1 + 0x200c) + -1) {
    FUN_5000a612((int *)((iVar2 + 1) * 0x10 + *(int *)((int)pvVar1 + 0x2008)),local_3c);
  }
  return;
}



/* FUN_50007457 - 0x50007457 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50007457(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  uVar1 = param_2 >> 0x10 & 0xff;
  uVar2 = param_2 >> 8 & 0xff;
  uVar4 = param_2 & 0xff;
  if (uVar2 < uVar1) {
    local_8 = uVar2;
    if (uVar4 < uVar2) {
      local_8 = uVar4;
    }
  }
  else {
    local_8 = uVar4;
    if (uVar1 <= uVar4) {
      local_8 = uVar1;
    }
  }
  uVar5 = uVar2;
  if (uVar2 < uVar1) {
    uVar5 = uVar1;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  iVar6 = local_8 + uVar5;
  uVar7 = iVar6 + 1 >> 1;
  param_1[2] = uVar7;
  if (local_8 == uVar5) {
    param_1[1] = 0;
    *param_1 = 0x80;
  }
  else {
    if (uVar1 == local_8) {
      iVar3 = uVar2 - uVar4;
      iVar8 = 0x80;
    }
    else if (uVar2 == local_8) {
      iVar3 = uVar4 - uVar1;
      iVar8 = 0xd5;
    }
    else {
      iVar3 = uVar1 - uVar2;
      iVar8 = 0x2a;
    }
    *param_1 = iVar8 - (iVar3 * 0xff) / (int)((uVar5 - local_8) * 6) & 0xff;
    if (0x7f < uVar7) {
      iVar6 = 0x1fe - iVar6;
    }
    param_1[1] = (int)((uVar5 - local_8) * 0xff) / iVar6;
  }
  return;
}



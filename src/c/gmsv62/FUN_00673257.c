/* FUN_00673257 - 0x00673257 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00673257(uint param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  
  uVar2 = (uint)param_2 >> 4 & 0xf0f0f0f ^ param_1 & 0xf0f0f0f;
  param_1 = param_1 ^ uVar2;
  uVar4 = (uint)param_2 ^ uVar2 << 4;
  uVar2 = param_1 >> 4 & 0x1010101 ^ uVar4 & 0x1010101;
  uVar4 = uVar4 ^ uVar2;
  param_1 = param_1 ^ uVar2 << 4;
  uVar2 = param_1 >> 9 & 0x550055 ^ param_1 & 0x550055;
  param_1 = param_1 ^ uVar2 << 9 ^ uVar2;
  uVar2 = uVar4 >> 9 & 0x550055 ^ uVar4 & 0x550055;
  uVar4 = uVar4 ^ uVar2 << 9 ^ uVar2;
  uVar2 = param_1 >> 0x12 & 0x3333 ^ param_1 & 0x3333;
  param_1 = param_1 ^ uVar2 << 0x12 ^ uVar2;
  uVar2 = uVar4 >> 0x12 & 0x3333 ^ uVar4 & 0x3333;
  uVar4 = uVar4 ^ uVar2 << 0x12 ^ uVar2;
  local_8 = 0x10;
  uVar2 = uVar4 >> 0x10 & 0xff ^ uVar4 & 0xff;
  uVar4 = uVar4 ^ uVar2 << 0x10 ^ uVar2;
  param_2 = param_3;
  param_3 = (uint *)0x1;
  do {
    uVar4 = uVar4 & 0xfffffff;
    if (((uint)param_3 & 0x7efc) == 0) {
      param_1 = (param_1 & 0xfffffff) >> 1 | param_1 << 0x1b;
      iVar1 = 0x1b;
      uVar2 = uVar4 >> 1;
    }
    else {
      param_1 = (param_1 & 0xfffffff) >> 2 | param_1 << 0x1a;
      iVar1 = 0x1a;
      uVar2 = uVar4 >> 2;
    }
    uVar4 = uVar2 | uVar4 << iVar1;
    uVar2 = param_1 >> 0x10;
    uVar3 = param_1 >> 8 & 0xff;
    uVar3 = *(uint *)(&DAT_008edba8 +
                     ((param_1 & 0xc0 | uVar3 >> 5) >> 2 | param_1 >> 0x18 & 0xe) * 4) |
            *(uint *)(&DAT_008edaa8 +
                     (((uVar2 & 0xff) >> 5 & 4 | uVar2 & 0x40) >> 1 | uVar2 & 0x1d) * 4) |
            *(uint *)(&DAT_008ed9a8 + (uVar3 >> 1 & 0x3f) * 4) |
            *(uint *)(&DAT_008ed8a8 + (param_1 & 0x3f) * 4);
    uVar2 = *(uint *)(&DAT_008edfa8 +
                     (((uVar4 & 0xff) >> 4 & 8 | uVar4 >> 0x10 & 0xc0) >> 2 | uVar4 >> 0x18 & 0xd) *
                     4) |
            *(uint *)(&DAT_008edda8 + ((uVar4 >> 8 & 0xff) >> 6 & 2 | uVar4 >> 8 & 0x3d) * 4) |
            *(uint *)(&DAT_008edca8 + (uVar4 & 0x3f) * 4) |
            *(uint *)(&DAT_008edea8 + (uVar4 >> 0x10 & 0x3f) * 4);
    *param_2 = uVar2 << 0x10 | uVar3 & 0xffff;
    param_3 = (uint *)((int)param_3 << 1);
    param_2[1] = uVar2 & 0xffff0000 | uVar3 >> 0x10;
    param_2 = param_2 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}



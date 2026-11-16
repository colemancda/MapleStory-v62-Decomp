/* FUN_50809cbc - 0x50809cbc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50809cbc(uint param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  uVar2 = (uint)param_2 >> 4 & 0xf0f0f0f ^ param_1 & 0xf0f0f0f;
  uVar5 = param_1 ^ uVar2;
  uVar4 = (uint)param_2 ^ uVar2 << 4;
  uVar2 = uVar5 >> 4 & 0x1010101 ^ uVar4 & 0x1010101;
  uVar4 = uVar4 ^ uVar2;
  uVar5 = uVar5 ^ uVar2 << 4;
  uVar2 = uVar5 >> 9 & 0x550055 ^ uVar5 & 0x550055;
  uVar5 = uVar5 ^ uVar2 << 9 ^ uVar2;
  uVar2 = uVar4 >> 9 & 0x550055 ^ uVar4 & 0x550055;
  uVar4 = uVar4 ^ uVar2 << 9 ^ uVar2;
  uVar2 = uVar5 >> 0x12 & 0x3333 ^ uVar5 & 0x3333;
  uVar5 = uVar5 ^ uVar2 << 0x12 ^ uVar2;
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
      uVar5 = (uVar5 & 0xfffffff) >> 1 | uVar5 << 0x1b;
      iVar1 = 0x1b;
      uVar2 = uVar4 >> 1;
    }
    else {
      uVar5 = (uVar5 & 0xfffffff) >> 2 | uVar5 << 0x1a;
      iVar1 = 0x1a;
      uVar2 = uVar4 >> 2;
    }
    uVar4 = uVar2 | uVar4 << iVar1;
    uVar2 = uVar5 >> 0x10;
    uVar3 = uVar5 >> 8 & 0xff;
    uVar3 = *(uint *)(&DAT_50817c40 + ((uVar5 & 0xc0 | uVar3 >> 5) >> 2 | uVar5 >> 0x18 & 0xe) * 4)
            | *(uint *)(&DAT_50817b40 +
                       (((uVar2 & 0xff) >> 5 & 4 | uVar2 & 0x40) >> 1 | uVar2 & 0x1d) * 4) |
            *(uint *)(&DAT_50817a40 + (uVar3 >> 1 & 0x3f) * 4) |
            *(uint *)(&DAT_50817940 + (uVar5 & 0x3f) * 4);
    uVar2 = *(uint *)(&DAT_50818040 +
                     (((uVar4 & 0xff) >> 4 & 8 | uVar4 >> 0x10 & 0xc0) >> 2 | uVar4 >> 0x18 & 0xd) *
                     4) |
            *(uint *)(&DAT_50817e40 + ((uVar4 >> 8 & 0xff) >> 6 & 2 | uVar4 >> 8 & 0x3d) * 4) |
            *(uint *)(&DAT_50817d40 + (uVar4 & 0x3f) * 4) |
            *(uint *)(&DAT_50817f40 + (uVar4 >> 0x10 & 0x3f) * 4);
    *param_2 = uVar2 << 0x10 | uVar3 & 0xffff;
    param_3 = (uint *)((int)param_3 << 1);
    param_2[1] = uVar2 & 0xffff0000 | uVar3 >> 0x10;
    param_2 = param_2 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}



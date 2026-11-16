/* FUN_100083d0 - 0x100083d0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083d0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  uint *local_8;
  int local_4;
  
  uVar6 = 0xa5774477;
  uVar2 = 0xa5bbaa11;
  local_8 = &DAT_10016b2c;
  local_c = 1;
  local_4 = 0x10;
  do {
    uVar2 = uVar2 & 0xfffffff;
    if ((local_c & 0x7efc) == 0) {
      uVar6 = (uVar6 & 0xfffffff) >> 1 | uVar6 << 0x1b;
      iVar1 = 0x1b;
      uVar3 = uVar2 >> 1;
    }
    else {
      uVar6 = (uVar6 & 0xfffffff) >> 2 | uVar6 << 0x1a;
      iVar1 = 0x1a;
      uVar3 = uVar2 >> 2;
    }
    uVar2 = uVar2 << iVar1 | uVar3;
    uVar5 = uVar6 >> 8 & 0xff;
    uVar3 = uVar6 >> 0x10;
    uVar5 = *(uint *)(&UNK_1000d6a0 + ((uVar6 & 0xc0 | uVar5 >> 5) >> 2 | uVar6 >> 0x18 & 0xe) * 4)
            | *(uint *)(&UNK_1000d5a0 +
                       (((uVar3 & 0xff) >> 5 & 4 | uVar3 & 0x40) >> 1 | uVar3 & 0x1d) * 4) |
            *(uint *)(&UNK_1000d4a0 + (uVar5 >> 1 & 0x3f) * 4) |
            *(uint *)(&UNK_1000d3a0 + (uVar6 & 0x3f) * 4);
    uVar3 = *(uint *)(&UNK_1000daa0 +
                     (((uVar2 & 0xff) >> 4 & 8 | uVar2 >> 0x10 & 0xc0) >> 2 | uVar2 >> 0x18 & 0xd) *
                     4) |
            *(uint *)(&UNK_1000d8a0 + ((uVar2 >> 8 & 0xff) >> 6 & 2 | uVar2 >> 8 & 0x3d) * 4) |
            *(uint *)(&UNK_1000d7a0 + (uVar2 & 0x3f) * 4) |
            *(uint *)(&UNK_1000d9a0 + (uVar2 >> 0x10 & 0x3f) * 4);
    *local_8 = uVar3 << 0x10 | uVar5 & 0xffff;
    local_8[1] = uVar3 & 0xffff0000 | uVar5 >> 0x10;
    local_8 = local_8 + 2;
    local_c = local_c << 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  uVar2 = 0;
  _DAT_10016bb0 = 0;
  _DAT_10016bb4 = 0;
  _DAT_10016bc0 = 0;
  _DAT_10016bc4 = 1;
  _DAT_10016bc8 = 1;
  do {
    pHVar4 = LoadLibraryA(*(LPCSTR *)((int)&PTR_s_Kernel32_dll_10011544 + uVar2));
    *(HMODULE *)((int)&DAT_10016b08 + uVar2) = pHVar4;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x24);
  FUN_100085c0(&DAT_10016b08);
  return;
}



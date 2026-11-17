/* FUN_008452bc - 0x008452bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008452bc(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  cVar2 = FUN_0042452b();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x208c) = 0;
    uVar3 = FUN_007d1e08();
    *(undefined4 *)(param_1 + 0x2090) = uVar3;
  }
  FUN_00455c59(local_18);
  if (local_14 != 0) {
    FUN_0045e7c2(0);
  }
  uVar4 = FUN_00424561();
  uVar1 = uVar4 & 0xffff;
  uVar4 = local_c;
  while (local_c = uVar1, local_c != 0) {
    local_8 = FUN_0042459a();
    local_10 = FUN_0042459a();
    if (local_10 < 0) {
      FUN_005d1070(&local_8);
    }
    else {
      FUN_004b8f75(&local_8,&local_10);
    }
    local_14 = FUN_0042459a();
    if (((local_8 / 10000) % 100 != 0) && ((local_8 / 10000) % 10 == 2)) {
      FUN_004b8f75(&local_8,&local_14);
    }
    uVar4 = local_c - 1;
    uVar1 = uVar4;
  }
  local_c = uVar4;
  uVar3 = FUN_0042452b();
  FUN_007b029d(uVar3);
  FUN_00833dbd();
  return;
}



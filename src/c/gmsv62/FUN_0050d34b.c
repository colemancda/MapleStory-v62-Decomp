/* FUN_0050d34b - 0x0050d34b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0050d34b(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_8;
  
  bVar5 = *(int *)(param_1 + 0x728) == -1;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x728) = uVar3 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x7a8) = uVar4;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(param_1 + 2000) = uVar4;
  local_8 = 2;
  do {
    sVar2 = FUN_00424561();
    uVar1 = FUN_0042452b();
    uVar4 = 0;
    if ((bVar5) || (*(int *)(param_1 + 0x728) != 1)) {
      uVar4 = 1;
    }
    FUN_0050c41b((int)sVar2,uVar1,uVar4);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((*(int *)(param_1 + 0x728) == 2) || (*(int *)(param_1 + 0x728) == 3)) {
    FUN_0050c339();
  }
  if (bVar5) {
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x7ec) = uVar3 & 0xffff;
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x7f0) = uVar3 & 0xffff;
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x7f4) = uVar3 & 0xffff;
  }
  return;
}



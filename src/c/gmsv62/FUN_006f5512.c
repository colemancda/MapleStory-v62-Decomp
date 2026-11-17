/* FUN_006f5512 - 0x006f5512 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_006f5512(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = param_3 >> 5;
  if (uVar1 != 0) {
    puVar4 = param_1;
    uVar5 = uVar1;
    do {
      *puVar4 = *(undefined4 *)((param_2 - (int)param_1) + (int)puVar4);
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  for (uVar1 = uVar1 << 5; uVar1 < param_3; uVar1 = uVar1 + 1) {
    uVar2 = FUN_006f557e(uVar1);
    FUN_006f55a6(uVar1,uVar2);
  }
  for (; param_3 < 0x80; param_3 = param_3 + 1) {
    iVar3 = _rand();
    FUN_006f55a6(param_3,iVar3 % 2);
  }
  return param_1;
}



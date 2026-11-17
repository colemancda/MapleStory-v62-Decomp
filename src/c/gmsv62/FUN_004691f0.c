/* FUN_004691f0 - 0x004691f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004691f0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_0042459a();
  FUN_0045e3a0(uVar2);
  uVar3 = FUN_00424561();
  *(uint *)(param_1 + 0x1c) = uVar3 & 0xffff;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x24) = uVar3 & 0xff;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar3 = FUN_00424561();
  *(uint *)(param_1 + 0x28) = uVar3 & 0xffff;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x34) = uVar3 & 0xff;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x3c) = uVar3 & 0xff;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x40) = uVar3 & 0xff;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x44) = uVar3 & 0xff;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x48) = uVar3 & 0xff;
  uVar3 = FUN_00424561();
  *(uint *)(param_1 + 0x4c) = uVar3 & 0xffff;
  uVar3 = FUN_00424561();
  *(uint *)(param_1 + 0x50) = uVar3 & 0xffff;
  uVar3 = FUN_00424561();
  *(uint *)(param_1 + 0x54) = uVar3 & 0xffff;
  uVar3 = FUN_0042452b();
  uVar1 = uVar3 & 0xff;
  uVar3 = param_2;
  while (param_2 = uVar1, param_2 != 0) {
    uVar2 = FUN_0042459a();
    puVar4 = (undefined4 *)FUN_0045f1e3(0xffffffff);
    uVar3 = param_2 - 1;
    *puVar4 = uVar2;
    uVar1 = uVar3;
  }
  param_2 = uVar3;
  uVar3 = FUN_0042452b();
  for (uVar3 = uVar3 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
    param_2 = FUN_0042459a();
    FUN_0046984e(&param_2,0xffffffff);
  }
  return;
}



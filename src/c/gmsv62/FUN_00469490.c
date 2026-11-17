/* FUN_00469490 - 0x00469490 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00469490(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_00424561();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0042459a();
    FUN_0045e3a0(uVar2);
  }
  if ((uVar1 & 2) != 0) {
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x1c) = uVar3 & 0xffff;
  }
  if ((uVar1 & 8) != 0) {
    uVar3 = FUN_0042452b();
    *(uint *)(param_1 + 0x24) = uVar3 & 0xff;
  }
  if ((uVar1 & 4) != 0) {
    uVar2 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x28) = uVar3 & 0xffff;
  }
  if ((uVar1 & 0x20) != 0) {
    uVar2 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if ((uVar1 & 0x40) != 0) {
    uVar2 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if ((uVar1 & 0x80) != 0) {
    uVar3 = FUN_0042452b();
    *(uint *)(param_1 + 0x34) = uVar3 & 0xff;
  }
  if ((uVar1 & 0x100) != 0) {
    uVar3 = FUN_0042452b();
    *(uint *)(param_1 + 0x3c) = uVar3 & 0xff;
  }
  if ((uVar1 & 0x200) != 0) {
    uVar3 = FUN_0042452b();
    *(uint *)(param_1 + 0x40) = uVar3 & 0xff;
  }
  if ((uVar1 & 0x400) != 0) {
    uVar3 = FUN_0042452b();
    *(uint *)(param_1 + 0x44) = uVar3 & 0xff;
  }
  if ((uVar1 & 0x800) != 0) {
    uVar3 = FUN_0042452b();
    *(uint *)(param_1 + 0x48) = uVar3 & 0xff;
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x4c) = uVar3 & 0xffff;
  }
  if ((uVar1 & 0x2000) != 0) {
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x50) = uVar3 & 0xffff;
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = FUN_00424561();
    *(uint *)(param_1 + 0x54) = uVar3 & 0xffff;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar1 = FUN_0042452b();
    for (uVar1 = uVar1 & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = FUN_0042459a();
      puVar4 = (undefined4 *)FUN_0045f1e3(0xffffffff);
      *puVar4 = uVar2;
    }
  }
  return;
}



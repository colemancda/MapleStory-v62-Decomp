/* FUN_00660e91 - 0x00660e91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00660e91(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    iVar1 = FUN_00413367(param_1,*(undefined4 *)(param_1 + 8));
    if (0 < iVar1) {
      param_3 = 1;
    }
    iVar1 = FUN_00413367(param_1 + 0xc,*(undefined4 *)(param_1 + 0x14));
    if (0 < iVar1) {
      param_3 = param_3 | 2;
    }
    iVar1 = FUN_00413367(param_1 + 0x18,*(undefined4 *)(param_1 + 0x20));
    if (0 < iVar1) {
      param_3 = param_3 | 4;
    }
    iVar1 = FUN_00413367(param_1 + 0x24,*(undefined4 *)(param_1 + 0x2c));
    if (0 < iVar1) {
      param_3 = param_3 | 8;
    }
    iVar1 = FUN_00413367(param_1 + 0x30,*(undefined4 *)(param_1 + 0x38));
    if (0 < iVar1) {
      param_3 = param_3 | 0x10;
    }
    iVar1 = FUN_00413367(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x44));
    if (0 < iVar1) {
      param_3 = param_3 | 0x20;
    }
    iVar1 = FUN_00413367(param_1 + 0x48,*(undefined4 *)(param_1 + 0x50));
    if (0 < iVar1) {
      param_3 = param_3 | 0x40;
    }
    iVar1 = FUN_00413367(param_1 + 0x54,*(undefined4 *)(param_1 + 0x5c));
    if (0 < iVar1) {
      param_3 = param_3 | 0x80;
    }
    iVar1 = FUN_00413367(param_1 + 0x60,*(undefined4 *)(param_1 + 0x68));
    if (0 < iVar1) {
      param_3 = param_3 | 0x100;
    }
    iVar1 = FUN_00413367(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x74));
    if (0 < iVar1) {
      param_3 = param_3 | 0x200;
    }
    iVar1 = FUN_00413367(param_1 + 0x78,*(undefined4 *)(param_1 + 0x80));
    if (0 < iVar1) {
      param_3 = param_3 | 0x400;
    }
    iVar1 = FUN_00413367(param_1 + 0x84,*(undefined4 *)(param_1 + 0x8c));
    if (0 < iVar1) {
      param_3 = param_3 | 0x800;
    }
  }
  FUN_00457d37(param_3);
  if ((param_3 & 1) != 0) {
    uVar2 = FUN_00413367(param_1,*(undefined4 *)(param_1 + 8));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 2) != 0) {
    uVar2 = FUN_00413367(param_1 + 0xc,*(undefined4 *)(param_1 + 0x14));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 4) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x18,*(undefined4 *)(param_1 + 0x20));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 8) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x24,*(undefined4 *)(param_1 + 0x2c));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x10) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x30,*(undefined4 *)(param_1 + 0x38));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x20) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x44));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x40) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x48,*(undefined4 *)(param_1 + 0x50));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x80) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x54,*(undefined4 *)(param_1 + 0x5c));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x100) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x60,*(undefined4 *)(param_1 + 0x68));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x200) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x74));
    FUN_0045d247(uVar2);
  }
  if ((param_3 & 0x400) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x78,*(undefined4 *)(param_1 + 0x80));
    FUN_00457cda(uVar2);
  }
  if ((param_3 & 0x800) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x84,*(undefined4 *)(param_1 + 0x8c));
    FUN_00457cda(uVar2);
  }
  return;
}



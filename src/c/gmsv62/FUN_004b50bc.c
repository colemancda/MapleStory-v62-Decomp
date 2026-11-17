/* FUN_004b50bc - 0x004b50bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b50bc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_14 [4];
  
  puVar2 = local_14;
  if (param_3 == 0) {
    uVar3 = FUN_0042459a();
    *param_1 = uVar3;
    puVar2 = param_1 + 1;
  }
  else {
    FUN_0042459a();
  }
  FUN_004245d2(puVar2,0xd);
  if (param_3 == 0) {
    uVar1 = FUN_0042452b();
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    uVar1 = FUN_0042452b();
    *(undefined1 *)((int)param_1 + 0x12) = uVar1;
    uVar3 = FUN_0042459a();
    *(undefined4 *)((int)param_1 + 0x13) = uVar3;
    uVar3 = FUN_0042459a();
    *(undefined4 *)((int)param_1 + 0x17) = uVar3;
  }
  else {
    FUN_0042452b();
    FUN_0042452b();
    FUN_0042459a();
    FUN_0042459a();
  }
  FUN_004245d2((int)param_1 + 0x1b,0x18);
  FUN_0042452b();
  uVar3 = FUN_004b8c01();
  *(undefined4 *)((int)param_1 + 0x35) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x3d) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x45) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x4d) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x55) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x5d) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x65) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x6d) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x75) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x7d) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x85) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0x8d) = uVar3;
  FUN_0042459a();
  uVar3 = FUN_004133b5();
  *(undefined4 *)((int)param_1 + 0x99) = uVar3;
  FUN_00424561();
  uVar3 = FUN_004b8c34();
  *(undefined4 *)((int)param_1 + 0xa1) = uVar3;
  FUN_0042459a();
  uVar3 = FUN_004133b5();
  *(undefined4 *)((int)param_1 + 0xb9) = uVar3;
  FUN_0042459a();
  uVar3 = FUN_004b8ce9();
  *(undefined4 *)((int)param_1 + 0xc5) = uVar3;
  uVar1 = FUN_0042452b();
  *(undefined1 *)((int)param_1 + 0xc9) = uVar1;
  uVar3 = FUN_0042459a();
  *(undefined4 *)((int)param_1 + 0xcf) = uVar3;
  return;
}



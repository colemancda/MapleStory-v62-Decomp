/* FUN_004b556c - 0x004b556c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_004b556c(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_0042459a();
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_0042452b();
    *(undefined1 *)(param_1 + 0x12) = uVar1;
  }
  if ((uVar2 & 2) != 0) {
    uVar3 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x13) = uVar3;
  }
  if ((uVar2 & 4) != 0) {
    uVar3 = FUN_0042459a();
    *(undefined4 *)(param_1 + 0x17) = uVar3;
  }
  if ((uVar2 & 8) != 0) {
    FUN_004245d2(param_1 + 0x1b,8);
  }
  if ((uVar2 & 0x80000) != 0) {
    FUN_004245d2(param_1 + 0x23,8);
  }
  if ((uVar2 & 0x100000) != 0) {
    FUN_004245d2(param_1 + 0x2b,8);
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_0042452b();
    uVar3 = FUN_004b8c01();
    *(undefined4 *)(param_1 + 0x35) = uVar3;
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x3d) = uVar3;
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x45) = uVar3;
  }
  if ((uVar2 & 0x80) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x4d) = uVar3;
  }
  if ((uVar2 & 0x100) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x55) = uVar3;
  }
  if ((uVar2 & 0x200) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x5d) = uVar3;
  }
  if ((uVar2 & 0x400) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x65) = uVar3;
  }
  if ((uVar2 & 0x800) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x6d) = uVar3;
  }
  if ((uVar2 & 0x1000) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x75) = uVar3;
  }
  if ((uVar2 & 0x2000) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x7d) = uVar3;
  }
  if ((uVar2 & 0x4000) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x85) = uVar3;
  }
  if ((uVar2 & 0x8000) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0x8d) = uVar3;
  }
  if ((uVar2 & 0x10000) != 0) {
    FUN_0042459a();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x99) = uVar3;
  }
  if ((uVar2 & 0x20000) != 0) {
    FUN_00424561();
    uVar3 = FUN_004b8c34();
    *(undefined4 *)(param_1 + 0xa1) = uVar3;
  }
  if ((uVar2 & 0x40000) != 0) {
    FUN_0042459a();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0xad) = uVar3;
  }
  if ((uVar2 & 0x200000) != 0) {
    FUN_0042459a();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0xb9) = uVar3;
  }
  return uVar2;
}



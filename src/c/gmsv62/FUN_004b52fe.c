/* FUN_004b52fe - 0x004b52fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b52fe(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_00457d37(param_2);
  if ((param_2 & 1) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x12));
  }
  if ((param_2 & 2) != 0) {
    FUN_00457d37(*(undefined4 *)(param_1 + 0x13));
  }
  if ((param_2 & 4) != 0) {
    FUN_00457d37(*(undefined4 *)(param_1 + 0x17));
  }
  if ((param_2 & 8) != 0) {
    FUN_00457fa0(param_1 + 0x1b,8);
  }
  if ((param_2 & 0x80000) != 0) {
    FUN_00457fa0(param_1 + 0x23,8);
  }
  if ((param_2 & 0x100000) != 0) {
    FUN_00457fa0(param_1 + 0x2b,8);
  }
  if ((param_2 & 0x10) != 0) {
    uVar1 = FUN_0045f03e(param_1 + 0x33,*(undefined4 *)(param_1 + 0x35));
    FUN_00457cda(uVar1);
  }
  if ((param_2 & 0x20) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x39,*(undefined4 *)(param_1 + 0x3d));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x41,*(undefined4 *)(param_1 + 0x45));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x80) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x49,*(undefined4 *)(param_1 + 0x4d));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x100) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x51,*(undefined4 *)(param_1 + 0x55));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x200) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x59,*(undefined4 *)(param_1 + 0x5d));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x400) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x61,*(undefined4 *)(param_1 + 0x65));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x800) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x69,*(undefined4 *)(param_1 + 0x6d));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x71,*(undefined4 *)(param_1 + 0x75));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x2000) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x79,*(undefined4 *)(param_1 + 0x7d));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x4000) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x81,*(undefined4 *)(param_1 + 0x85));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x8000) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x89,*(undefined4 *)(param_1 + 0x8d));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x10000) != 0) {
    uVar2 = FUN_00413367(param_1 + 0x91,*(undefined4 *)(param_1 + 0x99));
    FUN_00457d37(uVar2);
  }
  if ((param_2 & 0x20000) != 0) {
    uVar2 = FUN_0045f084(param_1 + 0x9d,*(undefined4 *)(param_1 + 0xa1));
    FUN_0045d247(uVar2);
  }
  if ((param_2 & 0x40000) != 0) {
    uVar2 = FUN_00413367(param_1 + 0xa5,*(undefined4 *)(param_1 + 0xad));
    FUN_00457d37(uVar2);
  }
  if ((param_2 & 0x200000) != 0) {
    uVar2 = FUN_00413367(param_1 + 0xb1,*(undefined4 *)(param_1 + 0xb9));
    FUN_00457d37(uVar2);
  }
  return;
}



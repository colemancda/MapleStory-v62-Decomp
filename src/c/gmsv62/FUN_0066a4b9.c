/* FUN_0066a4b9 - 0x0066a4b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0066a4b9(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (((param_2 & 1) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    local_8 = 1;
  }
  if (((param_2 & 2) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    local_8 = local_8 | 2;
  }
  if (((param_2 & 4) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    local_8 = local_8 | 4;
  }
  if (((param_2 & 8) != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    local_8 = local_8 | 8;
  }
  if (((param_2 & 0x10) != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    local_8 = local_8 | 0x10;
  }
  if (((param_2 & 0x20) != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    local_8 = local_8 | 0x20;
  }
  if (((param_2 & 0x40) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    local_8 = local_8 | 0x40;
  }
  if (((param_2 & 0x80) != 0) && (*(int *)(param_1 + 0x94) != 0)) {
    local_8 = local_8 | 0x80;
  }
  if (((param_2 & 0x100) != 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    local_8 = local_8 | 0x100;
  }
  if (((param_2 & 0x200) != 0) && (*(int *)(param_1 + 0xac) != 0)) {
    local_8 = local_8 | 0x200;
  }
  if (((param_2 & 0x400) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    local_8 = local_8 | 0x400;
  }
  if (((param_2 & 0x800) != 0) && (*(int *)(param_1 + 200) != 0)) {
    local_8 = local_8 | 0x800;
  }
  if (((param_2 & 0x1000) != 0) && (*(int *)(param_1 + 0xd4) != 0)) {
    local_8 = local_8 | 0x1000;
  }
  if (((param_2 & 0x2000) != 0) && (*(int *)(param_1 + 0xe0) != 0)) {
    local_8 = local_8 | 0x2000;
  }
  if (((param_2 & 0x4000) != 0) && (*(int *)(param_1 + 0xec) != 0)) {
    local_8 = local_8 | 0x4000;
  }
  if (((param_2 & 0x8000) != 0) && (*(int *)(param_1 + 0xf8) != 0)) {
    local_8 = local_8 | 0x8000;
  }
  if (((param_2 & 0x40000) != 0) && (*(int *)(param_1 + 0x120) != 0)) {
    local_8 = local_8 | 0x40000;
  }
  if (((param_2 & 0x80000) != 0) && (*(int *)(param_1 + 300) != 0)) {
    local_8 = local_8 | 0x80000;
  }
  if (((param_2 & 0x10000) != 0) && (*(int *)(param_1 + 0x104) != 0)) {
    local_8 = local_8 | 0x10000;
  }
  if (((param_2 & 0x20000) != 0) && (*(int *)(param_1 + 0x110) != 0)) {
    local_8 = local_8 | 0x20000;
  }
  if (((param_2 & 0x200000) != 0) && (*(int *)(param_1 + 0x144) != 0)) {
    local_8 = local_8 | 0x200000;
  }
  if (((param_2 & 0x400000) != 0) && (*(int *)(param_1 + 0x150) != 0)) {
    local_8 = local_8 | 0x400000;
  }
  if (((param_2 & 0x1000000) != 0) && (*(int *)(param_1 + 0x160) != 0)) {
    local_8 = local_8 | 0x1000000;
  }
  if (((param_2 & 0x2000000) != 0) && (*(int *)(param_1 + 0x170) != 0)) {
    local_8 = local_8 | 0x2000000;
  }
  if (((param_2 & 0x4000000) != 0) && (*(int *)(param_1 + 0x17c) != 0)) {
    local_8 = local_8 | 0x4000000;
  }
  if (((param_2 & 0x10000000) != 0) && (*(int *)(param_1 + 0x188) != 0)) {
    local_8 = local_8 | 0x10000000;
  }
  if ((param_2 & 0x8000000) != 0) {
    local_8 = local_8 | 0x8000000;
  }
  FUN_00457d37(local_8);
  if ((local_8 & 1) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x28));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x2c));
    FUN_0045d247((*(int *)(param_1 + 0x30) - param_4) / 500);
  }
  if ((local_8 & 2) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x38));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x3c));
    FUN_0045d247((*(int *)(param_1 + 0x40) - param_4) / 500);
  }
  if ((local_8 & 4) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x48));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x4c));
    FUN_0045d247((*(int *)(param_1 + 0x50) - param_4) / 500);
  }
  if ((local_8 & 8) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x58));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x5c));
    FUN_0045d247((*(int *)(param_1 + 0x60) - param_4) / 500);
  }
  if ((local_8 & 0x10) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x68));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x6c));
    FUN_0045d247((*(int *)(param_1 + 0x70) - param_4) / 500);
  }
  if ((local_8 & 0x20) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x78));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x7c));
    FUN_0045d247((*(int *)(param_1 + 0x80) - param_4) / 500);
  }
  if ((local_8 & 0x40) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x88));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x8c));
    FUN_0045d247((*(int *)(param_1 + 0x90) - param_4) / 500);
  }
  if ((local_8 & 0x80) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x94));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x98));
    FUN_0045d247((*(int *)(param_1 + 0x9c) - param_4) / 500);
  }
  if ((local_8 & 0x100) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xa0));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xa4));
    FUN_0045d247((*(int *)(param_1 + 0xa8) - param_4) / 500);
  }
  if ((local_8 & 0x200) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xac));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xb0));
    FUN_0045d247((*(int *)(param_1 + 0xb4) - param_4) / 500);
  }
  if ((local_8 & 0x400) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xbc));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xc0));
    FUN_0045d247((*(int *)(param_1 + 0xc4) - param_4) / 500);
  }
  if ((local_8 & 0x800) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 200));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xcc));
    FUN_0045d247((*(int *)(param_1 + 0xd0) - param_4) / 500);
  }
  if ((local_8 & 0x1000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xd4));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xd8));
    FUN_0045d247((*(int *)(param_1 + 0xdc) - param_4) / 500);
  }
  if ((local_8 & 0x2000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xe0));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xe4));
    FUN_0045d247((*(int *)(param_1 + 0xe8) - param_4) / 500);
  }
  if ((local_8 & 0x4000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xec));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xf0));
    FUN_0045d247((*(int *)(param_1 + 0xf4) - param_4) / 500);
  }
  if ((local_8 & 0x8000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0xf8));
    FUN_00457d37(*(undefined4 *)(param_1 + 0xfc));
    FUN_0045d247((*(int *)(param_1 + 0x100) - param_4) / 500);
  }
  if ((local_8 & 0x40000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x120));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x124));
    FUN_0045d247((*(int *)(param_1 + 0x128) - param_4) / 500);
  }
  if ((local_8 & 0x80000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 300));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x130));
    FUN_0045d247((*(int *)(param_1 + 0x134) - param_4) / 500);
  }
  if ((local_8 & 0x10000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x104));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x108));
    FUN_0045d247((*(int *)(param_1 + 0x10c) - param_4) / 500);
  }
  if ((local_8 & 0x20000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x110));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x114));
    FUN_0045d247((*(int *)(param_1 + 0x118) - param_4) / 500);
  }
  if ((local_8 & 0x200000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x144));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x148));
    FUN_0045d247((*(int *)(param_1 + 0x14c) - param_4) / 500);
  }
  if ((local_8 & 0x400000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x150));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x154));
    FUN_0045d247((*(int *)(param_1 + 0x158) - param_4) / 500);
  }
  if ((local_8 & 0x1000000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x160));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x164));
    FUN_0045d247((*(int *)(param_1 + 0x168) - param_4) / 500);
  }
  if ((local_8 & 0x2000000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x170));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x174));
    FUN_0045d247((*(int *)(param_1 + 0x178) - param_4) / 500);
  }
  if ((local_8 & 0x4000000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x17c));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x180));
    FUN_0045d247((*(int *)(param_1 + 0x184) - param_4) / 500);
  }
  if ((local_8 & 0x10000000) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x188));
    FUN_00457d37(*(undefined4 *)(param_1 + 0x18c));
    FUN_0045d247((*(int *)(param_1 + 400) - param_4) / 500);
  }
  if ((local_8 & 0x8000000) != 0) {
    FUN_00457d37(*(undefined4 *)(param_1 + 0x1ac));
    uVar2 = *(uint *)(param_1 + 0x1b0);
    while (uVar2 != 0) {
      iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
      FUN_0066acc1(param_3);
      uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    }
  }
  return;
}



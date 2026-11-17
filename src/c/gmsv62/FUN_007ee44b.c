/* FUN_007ee44b - 0x007ee44b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007ee44b(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_007e6d8e();
  if (iVar1 < *(int *)(param_1 + 0x80)) {
    iVar1 = FUN_007e6d8e();
    if (1 < (*(int *)(param_1 + 0x80) - iVar1) / 8) {
      uVar2 = FUN_007e6d8e();
      *(undefined4 *)(param_1 + 0x84) = uVar2;
      *(undefined4 *)(param_1 + 0x8c) = 1;
      goto LAB_007ee4be;
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
  iVar3 = FUN_007e6dd4();
  if (iVar1 < iVar3) {
    uVar2 = FUN_007e6dd4();
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x84) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
LAB_007ee4be:
  if (param_3 != 0) {
    iVar1 = FUN_007e6d8e();
    *(int *)(param_1 + 0x84) = iVar1;
    if ((iVar1 < *(int *)(param_1 + 0x80)) && (-1 < (*(int *)(param_1 + 0x80) - iVar1) / 8)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
  }
  *(uint *)(param_1 + 0x78) =
       (-(uint)(*(int *)(param_1 + 0x8c) != 0) & 0xfffffffe) +
       (-(uint)(param_3 != 0) & 0xffffffd1) + 0x9d;
  if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x80)) {
    iVar1 = -6;
  }
  else {
    iVar1 = ((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) + -6) / 2;
  }
  *(int *)(param_1 + 0x7c) = iVar1 + 0x1c;
  uVar2 = FUN_007e6ce4();
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0x84) + 0x56;
  }
  else {
    iVar1 = FUN_007e6d18();
  }
  *(int *)(param_1 + 0x94) = iVar1;
  return;
}



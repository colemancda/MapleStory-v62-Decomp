/* FUN_0047c31f - 0x0047c31f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0047c31f(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0x58);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((*(int *)(param_1 + 0x80) == 1) || (*(int *)(param_1 + 0x80) == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(DAT_00978368 + 0x3320) = uVar1;
  if ((*(int *)(param_1 + 0x80) == 2) || (*(int *)(param_1 + 0x80) == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(DAT_00978368 + 0x3324) = uVar1;
  iVar2 = FUN_00429303();
  if (param_3 != 0) {
    if (iVar2 != 0) {
      FUN_005a7fcf();
    }
    FUN_00818d06(*(undefined4 *)(param_1 + 0x84));
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    param_2 = (undefined4 *)(((*(int *)(param_1 + 0x5c) + 1) * 100) / 0x14);
  }
  else {
    param_2 = (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar2 = ((*(int *)(param_1 + 100) + 1) * 100) / 0x14;
  }
  else {
    iVar2 = 0;
  }
  if (DAT_00978130 != 0) {
    FUN_0047ccfd(param_2,0);
    FUN_0047cd42(iVar2);
  }
  if (DAT_009784c0 != 0) {
    *(undefined4 *)(DAT_009784c0 + 0x970) = *(undefined4 *)(param_1 + 0x70);
  }
  return;
}



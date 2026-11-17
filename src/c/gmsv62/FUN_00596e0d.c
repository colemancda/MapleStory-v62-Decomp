/* FUN_00596e0d - 0x00596e0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00596e0d(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = (*DAT_0097b704)();
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  iVar2 = (*DAT_0097b704)();
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = iVar2 - *(int *)(param_1 + 0x24);
    if (uVar3 < 700) {
      return;
    }
    if (uVar3 < 0xaf0) {
      FUN_00597516(uVar3 - 700);
      return;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
      FUN_00597130();
    }
    iVar2 = ((iVar2 * 0xc + *(int *)(param_1 + 0x24) * -0xc) - 0x8340U) / 1000 + 1;
    if (iVar2 < *(int *)(param_1 + 0x20)) {
      FUN_0059772b(iVar2);
      return;
    }
    FUN_0059772b(0xffffffff);
    if (iVar2 < *(int *)(param_1 + 0x20) + 10) {
      return;
    }
  }
  else if ((uint)(iVar2 - *(int *)(param_1 + 0x28)) < 0x5dd) {
    return;
  }
  FUN_00596a19();
  return;
}



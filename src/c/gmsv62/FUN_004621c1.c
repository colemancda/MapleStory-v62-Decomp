/* FUN_004621c1 - 0x004621c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004621c1(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0042459a();
  iVar2 = FUN_0042459a();
  iVar3 = FUN_0042459a();
  if (((iVar1 < 0) || (iVar2 < 0)) || (iVar3 < 0)) {
    FUN_00464f0d(0x81);
    FUN_00464e98();
  }
  else {
    uVar4 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    uVar4 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    uVar4 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    FUN_008161f1(0);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x4d8) != 0) {
      FUN_00457a26();
    }
    if (*(int *)(param_1 + 0x4c4) != 0) {
      iVar1 = FUN_0045d3dd(*(int *)(param_1 + 0x4c4));
      if (-1 < iVar1) {
        FUN_0045b49e(*(undefined4 *)(param_1 + 0x4c4));
        *(undefined4 *)(param_1 + 0x4c4) = 0;
      }
    }
    if (*(int *)(param_1 + 0x4e0) != 0) {
      *(undefined4 *)(param_1 + 0x4e0) = 0;
      FUN_0045d5ff();
    }
  }
  return;
}



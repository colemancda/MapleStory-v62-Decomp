/* FUN_0053551e - 0x0053551e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053551e(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x535532;
  FUN_0074d6fb();
  if (param_2 == 0x202) {
    uStack_10 = 0;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x78);
    iStack_14 = 0x53554b;
    FUN_008161f1();
  }
  else if (param_2 == 0x203) {
    if (*(int *)(param_1 + 0x74) < 0) {
      return;
    }
    uStack_10 = *(undefined4 *)(DAT_00978368 + 0x2040);
    iStack_14 = *(int *)(*(int *)(*(int *)(param_1 + 0x70) + 0x50) + 4 +
                        *(int *)(param_1 + 0x74) * 8) + 0x34;
    iStack_18 = 0x53558b;
    iVar1 = (*DAT_0097b4bc)();
    iStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    if (iVar1 == 0) {
      FUN_00679d22(auStack_28,0x116b);
      FUN_007db3ad();
      return;
    }
    FUN_00679d22(auStack_28,0x11b2);
    iVar1 = FUN_007db791();
    if (iVar1 != 6) {
      return;
    }
    iStack_18 = *(int *)(*(int *)(param_1 + 0x70) + 0x50) + *(int *)(param_1 + 0x74) * 8;
    uStack_1c = 0x5355e9;
    FUN_0052b2f3();
    iStack_18 = 1;
    uStack_1c = 0x5355f4;
    (**(code **)(*(int *)(param_1 + -4) + 0x34))();
    return;
  }
  uStack_10 = 0x535552;
  FUN_0074d6fb();
  return;
}



/* FUN_004c168a - 0x004c168a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c168a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    piStack_1c = &DAT_0097bd2c;
    uStack_20 = 0x4c16a7;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      iVar1 = *(int *)(param_1 + 0x1c) + -4;
      goto LAB_004c16b9;
    }
  }
  iVar1 = 0;
LAB_004c16b9:
  if (iVar1 != 0) {
    piStack_1c = &local_c;
    uStack_20 = 0x4c16d0;
    FUN_00455c59();
    if (local_8 != 0) {
      piStack_1c = (int *)0x0;
      uStack_20 = 0x4c16e1;
      FUN_0045e7c2();
    }
    piStack_1c = *(int **)(param_1 + 0x14);
    piStack_24 = &local_c;
    uStack_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_28 = 0x4c16f2;
    iVar1 = FUN_00458c4f();
    uVar2 = *(undefined4 *)(iVar1 + 4);
    if (local_8 != 0) {
      piStack_1c = (int *)0x0;
      uStack_20 = 0x4c1703;
      FUN_00449913();
    }
    piStack_1c = (int *)0x4c170d;
    iVar1 = FUN_0045e2eb();
    if (0x3fa10f < iVar1) {
      piStack_1c = (int *)0x4c171b;
      iVar1 = FUN_0045e2eb();
      if (iVar1 < 0x3fa11a) {
        piStack_1c = *(int **)(param_1 + 0x14);
        uStack_20 = *(undefined4 *)(param_1 + 0x10);
        uStack_28 = 0x4c1731;
        piStack_24 = (int *)uVar2;
        uVar2 = FUN_006bf517();
        return uVar2;
      }
    }
    piStack_1c = (int *)0x0;
    uStack_20 = 0;
    piStack_24 = (int *)0x0;
    uStack_28 = 0;
    FUN_00679d22(auStack_2c,0xd1b);
    FUN_007db3ad();
  }
  return 0;
}



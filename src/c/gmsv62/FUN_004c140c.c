/* FUN_004c140c - 0x004c140c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c140c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *local_8;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    puStack_20 = &DAT_0097bd2c;
    uStack_24 = 0x4c142a;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      iVar2 = *(int *)(param_1 + 0x1c) + -4;
      goto LAB_004c143c;
    }
  }
  iVar2 = 0;
LAB_004c143c:
  if (iVar2 != 0) {
    puStack_20 = (undefined4 *)local_10;
    uStack_24 = 0x4c1453;
    FUN_00455c59();
    if (local_c != 0) {
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0x4c1464;
      FUN_0045e7c2();
    }
    puStack_20 = *(undefined4 **)(param_1 + 0x14);
    puStack_28 = local_10;
    uStack_24 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = 0x4c1475;
    iVar2 = FUN_00458c4f();
    piVar1 = *(int **)(iVar2 + 4);
    if (local_c != 0) {
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0x4c1486;
      FUN_00449913();
      local_c = 0;
    }
    if (piVar1 != (int *)0x0) {
      puStack_20 = (undefined4 *)0x4c1498;
      iVar2 = (**(code **)(*piVar1 + 4))();
      if (iVar2 == 0) {
        local_8 = (undefined1 *)DAT_00973a94;
        puStack_20 = (undefined4 *)0x4c14c2;
        puStack_20 = (undefined4 *)FUN_0045e2eb();
        uStack_24 = 0x4c14cb;
        iVar2 = FUN_005540b6();
        if ((iVar2 == 0) && (piVar1[6] == 0 && piVar1[7] == 0)) {
          local_8 = (undefined1 *)DAT_00973a94;
          puStack_20 = (undefined4 *)0x4c14e6;
          puStack_20 = (undefined4 *)FUN_0045e2eb();
          uStack_24 = 0x4c14ef;
          iVar2 = FUN_0055443a();
          if (iVar2 == 0) {
            local_8 = (undefined1 *)DAT_00973a94;
            puStack_20 = (undefined4 *)0x4c1502;
            puStack_20 = (undefined4 *)FUN_0045e2eb();
            uStack_24 = 0x4c150b;
            iVar2 = FUN_005544ee();
            if (iVar2 == 0) {
              local_8 = (undefined1 *)DAT_00973a94;
              puStack_20 = (undefined4 *)0x4c151e;
              puStack_20 = (undefined4 *)FUN_0045e2eb();
              uStack_24 = 0x4c1527;
              iVar2 = FUN_005542d2();
              if (iVar2 == 0) {
                puStack_20 = *(undefined4 **)(param_1 + 0x14);
                uStack_24 = *(undefined4 *)(param_1 + 0x10);
                local_8 = (undefined1 *)&uStack_2c;
                uStack_30 = 1;
                FUN_004c2533(piVar1);
                uStack_30 = 0x4c1548;
                uVar3 = FUN_0060f3de();
                return uVar3;
              }
            }
          }
        }
        uVar3 = 0x365;
      }
      else {
        uVar3 = 0xd12;
      }
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0;
      puStack_28 = (undefined1 *)0x0;
      uStack_2c = 0;
      FUN_00679d22(&uStack_30,uVar3);
      FUN_007db3ad();
    }
  }
  return 0;
}



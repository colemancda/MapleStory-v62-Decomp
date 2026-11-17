/* FUN_004c12ae - 0x004c12ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c12ae(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    puStack_20 = &DAT_0097bd2c;
    uStack_24 = 0x4c12d5;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      iVar2 = *(int *)(param_1 + 0x1c) + -4;
      goto LAB_004c12e7;
    }
  }
  iVar2 = 0;
LAB_004c12e7:
  if (iVar2 != 0) {
    puStack_20 = (undefined4 *)local_10;
    uStack_24 = 0x4c12fe;
    FUN_00455c59();
    if (local_c != 0) {
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0x4c130f;
      FUN_0045e7c2();
    }
    puStack_20 = *(undefined4 **)(param_1 + 0x14);
    puStack_28 = local_10;
    uStack_24 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = 0x4c1320;
    iVar2 = FUN_00458c4f();
    piVar1 = *(int **)(iVar2 + 4);
    if (local_c != 0) {
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0x4c1331;
      FUN_00449913();
      local_c = 0;
    }
    if (piVar1 != (int *)0x0) {
      puStack_20 = (undefined4 *)0x4c1343;
      iVar2 = (**(code **)(*piVar1 + 4))();
      if (iVar2 == 0) {
        local_8 = DAT_00973a94;
        puStack_20 = (undefined4 *)0x4c136d;
        puStack_20 = (undefined4 *)FUN_0045e2eb();
        uStack_24 = 0x4c1376;
        iVar2 = FUN_005540b6();
        if ((iVar2 == 0) && (piVar1[6] == 0 && piVar1[7] == 0)) {
          local_8 = DAT_00973a94;
          puStack_20 = (undefined4 *)0x4c1391;
          puStack_20 = (undefined4 *)FUN_0045e2eb();
          uStack_24 = 0x4c139a;
          iVar2 = FUN_0055443a();
          if (iVar2 == 0) {
            local_8 = DAT_00973a94;
            puStack_20 = (undefined4 *)0x4c13ad;
            puStack_20 = (undefined4 *)FUN_0045e2eb();
            uStack_24 = 0x4c13b6;
            iVar2 = FUN_005542d2();
            if (iVar2 == 0) {
              puStack_20 = (undefined4 *)param_4;
              uStack_24 = param_3;
              puStack_28 = *(undefined1 **)(param_1 + 0x14);
              uStack_2c = *(undefined4 *)(param_1 + 0x10);
              FUN_004c2533(piVar1,1);
              uVar3 = FUN_0068e4ef();
              return uVar3;
            }
          }
        }
      }
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0;
      puStack_28 = (undefined1 *)0x0;
      uStack_2c = 0;
      FUN_00679d22(auStack_30);
      FUN_007db3ad();
    }
  }
  return 0;
}



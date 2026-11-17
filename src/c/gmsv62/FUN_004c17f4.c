/* FUN_004c17f4 - 0x004c17f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004c17f4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    puStack_20 = &DAT_0097bd2c;
    uStack_24 = 0x4c1812;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      iVar2 = *(int *)(param_1 + 0x1c) + -4;
      goto LAB_004c1824;
    }
  }
  iVar2 = 0;
LAB_004c1824:
  if (iVar2 != 0) {
    puStack_20 = (undefined4 *)local_10;
    uStack_24 = 0x4c183b;
    FUN_00455c59();
    if (local_c != 0) {
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0x4c184c;
      FUN_0045e7c2();
    }
    puStack_20 = *(undefined4 **)(param_1 + 0x14);
    piStack_28 = (int *)local_10;
    uStack_24 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = 0x4c185d;
    iVar2 = FUN_00458c4f();
    piVar1 = *(int **)(iVar2 + 4);
    if (local_c != 0) {
      puStack_20 = (undefined4 *)0x0;
      uStack_24 = 0x4c186e;
      FUN_00449913();
      local_c = 0;
    }
    puStack_20 = (undefined4 *)0x4c1878;
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 == 0) {
      local_8 = DAT_00973a94;
      puStack_20 = (undefined4 *)0x4c18a2;
      puStack_20 = (undefined4 *)FUN_0045e2eb();
      uStack_24 = 0x4c18ab;
      iVar2 = FUN_005540b6();
      if ((iVar2 == 0) && (piVar1[6] == 0 && piVar1[7] == 0)) {
        local_8 = DAT_00973a94;
        puStack_20 = (undefined4 *)0x4c18c6;
        puStack_20 = (undefined4 *)FUN_0045e2eb();
        uStack_24 = 0x4c18cf;
        iVar2 = FUN_0055443a();
        if (iVar2 == 0) {
          local_8 = DAT_00973a94;
          puStack_20 = (undefined4 *)0x4c18e2;
          puStack_20 = (undefined4 *)FUN_0045e2eb();
          uStack_24 = 0x4c18eb;
          iVar2 = FUN_005544ee();
          if (iVar2 == 0) {
            local_8 = DAT_00973a94;
            puStack_20 = (undefined4 *)0x4c18fe;
            puStack_20 = (undefined4 *)FUN_0045e2eb();
            uStack_24 = 0x4c1907;
            iVar2 = FUN_005542d2();
            if (iVar2 == 0) {
              puStack_20 = *(undefined4 **)(param_1 + 0x14);
              uStack_24 = *(undefined4 *)(param_1 + 0x10);
              uStack_2c = 0x4c191a;
              piStack_28 = piVar1;
              uVar3 = FUN_0060904b();
              return uVar3;
            }
          }
        }
      }
      uVar3 = 0xed9;
    }
    else {
      uVar3 = 0xd12;
    }
    puStack_20 = (undefined4 *)0x0;
    uStack_24 = 0;
    piStack_28 = (int *)0x0;
    uStack_2c = 0;
    FUN_00679d22(auStack_30,uVar3);
    FUN_007db3ad();
  }
  return 0;
}



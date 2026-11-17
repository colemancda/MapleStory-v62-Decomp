/* FUN_0063dd67 - 0x0063dd67 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0063dd67(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 < 6) {
    return;
  }
  if (param_2 < 8) {
LAB_0063de69:
    uStack_14 = 3000;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    uStack_18 = 0x63de95;
    FUN_0063d9d1();
    uStack_14 = 1;
    uStack_18 = 0x63dea6;
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe0) + 4) + 0x1c))();
    if (param_2 == 7) {
      uVar5 = 0xe17;
    }
    else {
      if (param_2 != 6) {
        return;
      }
      uVar5 = 0xe18;
    }
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    FUN_00679d22(auStack_28,uVar5);
    FUN_007db3ad();
  }
  else {
    if (param_2 != 9) {
      if (param_2 == 10) {
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
        uStack_14 = 0x63de00;
        FUN_0063c703();
        return;
      }
      if (param_2 == 0xb) {
        uStack_14 = 0x63ddae;
        uVar2 = FUN_0042452b();
        *(uint *)(param_1 + 0x88) = uVar2 & 0xff;
        uStack_14 = 0x63ddbf;
        cVar1 = FUN_0042452b();
        uVar5 = 0;
        if ((cVar1 < 0) && (*(int *)(param_1 + 0x9c) == 0)) {
          uVar5 = 1;
        }
        *(undefined4 *)(param_1 + 0xa0) = uVar5;
        *(int *)(param_1 + 0x9c) = (int)cVar1;
        return;
      }
      if (param_2 != 0xc) {
        if (param_2 != 0xe) {
          return;
        }
        goto LAB_0063de69;
      }
    }
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = 0x78;
    uStack_14 = 0x63de1b;
    iVar3 = FUN_007d1e08();
    *(int *)(param_1 + 0x90) = iVar3;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0x90) = iVar3;
    uStack_14 = 0x63de3b;
    iVar3 = FUN_007d1e08();
    iVar3 = iVar3 + 30000;
    *(int *)(param_1 + 0x98) = iVar3;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0x98) = iVar3;
    piVar4 = (int *)(param_1 + 200);
    iVar3 = 3;
    do {
      uStack_14 = 1;
      uStack_18 = 0x63de61;
      (**(code **)(*(int *)(*piVar4 + 4) + 0x1c))();
      piVar4 = piVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



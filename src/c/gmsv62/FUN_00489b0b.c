/* FUN_00489b0b - 0x00489b0b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00489b0b(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  puStack_20 = (undefined1 *)0x489b1e;
  FUN_0074d6fb();
  puStack_20 = (undefined1 *)0x489b2f;
  FUN_00486745();
  puStack_20 = local_10;
  iStack_24 = 0x489b3e;
  iVar2 = FUN_00455c59();
  local_8 = *(undefined4 *)(iVar2 + 4);
  if (local_c != 0) {
    puStack_20 = (undefined1 *)0x0;
    iStack_24 = 0x489b54;
    FUN_0045e7c2();
  }
  if (param_2 == 0x201) {
    puStack_20 = (undefined1 *)param_5;
    iVar2 = *(int *)(param_1 + 0x560);
    iStack_24 = param_4;
    uStack_28 = 0x489b79;
    uVar3 = FUN_00489e57();
    if (((-1 < (int)uVar3) && (iVar2 = *(int *)(iVar2 + 0x488), iVar2 != 0)) &&
       ((uVar3 < *(uint *)(iVar2 + -4) && (*(uint *)(param_1 + 0x55c) != uVar3)))) {
      puStack_20 = (undefined1 *)0x0;
      *(uint *)(param_1 + 0x55c) = uVar3;
      iStack_24 = 0x489bad;
      FUN_008161f1();
    }
  }
  else if (param_2 == 0x203) {
    puStack_20 = (undefined1 *)param_5;
    iStack_24 = param_4;
    piVar4 = (int *)(*(int *)(param_1 + 0x560) + 0x488);
    uStack_28 = 0x489bd9;
    uVar3 = FUN_00489e57();
    if (((-1 < (int)uVar3) && (iVar2 = *piVar4, iVar2 != 0)) && (uVar3 < *(uint *)(iVar2 + -4))) {
      iVar5 = uVar3 * 0x37;
      iVar2 = *(int *)(iVar5 + 0x10 + iVar2) / 1000000;
      iStack_24 = 0x489c09;
      puStack_20 = (undefined1 *)iVar2;
      puStack_20 = (undefined1 *)FUN_0048aa38();
      if (puStack_20 == (undefined1 *)0x0) {
        puStack_20 = (undefined1 *)(iVar2 + -1);
        iStack_24 = 0x489c40;
        FUN_004b2699();
        puStack_20 = (undefined1 *)0x0;
        iStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0;
        FUN_00679d22(&uStack_30,0x115);
        FUN_007db3ad();
      }
      else {
        iVar1 = *piVar4;
        uStack_28 = *(undefined4 *)(iVar1 + 4 + iVar5);
        uStack_2c = *(undefined4 *)(iVar1 + iVar5);
        uStack_30 = 0x489c25;
        iStack_24 = iVar2;
        FUN_0045d059();
        *(undefined4 *)(param_1 + 0x55c) = 0xffffffff;
      }
    }
  }
  return;
}



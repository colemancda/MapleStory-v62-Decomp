/* FUN_0053be11 - 0x0053be11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0053be11(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 local_10 [4];
  int *local_c;
  undefined4 local_8;
  
  puStack_20 = (undefined1 *)0x53be24;
  FUN_0074d6fb();
  puStack_20 = local_10;
  iStack_24 = 0x53be33;
  iVar1 = FUN_00455c59();
  local_8 = *(undefined4 *)(iVar1 + 4);
  if (local_c != (int *)0x0) {
    puStack_20 = (undefined1 *)0x0;
    iStack_24 = 0x53be49;
    FUN_0045e7c2();
  }
  if (param_2 == 0x201) {
    puStack_20 = (undefined1 *)param_5;
    iVar1 = *(int *)(param_1 + 0x558);
    iStack_24 = param_4;
    iStack_28 = 0x53be6b;
    uVar2 = FUN_0053c101();
    if (((-1 < (int)uVar2) && (iVar1 = *(int *)(iVar1 + 0x4c), iVar1 != 0)) &&
       ((uVar2 < *(uint *)(iVar1 + -4) && (*(uint *)(param_1 + 0x554) != uVar2)))) {
      puStack_20 = (undefined1 *)0x0;
      *(uint *)(param_1 + 0x554) = uVar2;
      iStack_24 = 0x53be9f;
      FUN_008161f1();
    }
  }
  else if (param_2 == 0x203) {
    puStack_20 = (undefined1 *)param_5;
    iStack_24 = param_4;
    piVar4 = (int *)(*(int *)(param_1 + 0x558) + 0x4c);
    iStack_28 = 0x53becb;
    local_c = piVar4;
    uVar2 = FUN_0053c101();
    if (((-1 < (int)uVar2) && (iVar1 = *piVar4, iVar1 != 0)) && (uVar2 < *(uint *)(iVar1 + -4))) {
      puStack_20 = (undefined1 *)0x53befa;
      iVar1 = FUN_0045e2eb();
      iVar1 = iVar1 / 1000000;
      iStack_24 = 0x53bf0d;
      puStack_20 = (undefined1 *)iVar1;
      iVar3 = FUN_0048aa38();
      puStack_20 = (undefined1 *)(iVar1 + -1);
      iStack_24 = 0x53bf21;
      FUN_004b2699();
      if (iVar3 == 0) {
        puStack_20 = (undefined1 *)0x0;
        iStack_24 = 0;
        iStack_28 = 0;
        uStack_2c = 0;
        FUN_00679d22(auStack_30,0x115);
        FUN_007db3ad();
      }
      else {
        *(undefined4 *)(param_1 + 0x554) = 0xffffffff;
        iStack_28 = *local_c + uVar2 * 8;
        uStack_2c = 0x53bf46;
        iStack_24 = iVar1;
        puStack_20 = (undefined1 *)iVar3;
        FUN_0052b48a();
      }
    }
  }
  return;
}



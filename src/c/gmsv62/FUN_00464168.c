/* FUN_00464168 - 0x00464168 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00464168(int param_1)

{
  int iVar1;
  uint uVar2;
  int iStack00000004;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  int local_c;
  int local_8;
  
  iStack_1c = 8;
  piStack_20 = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uStack_24 = 0x464185;
  local_c = param_1;
  local_8 = param_1;
  FUN_004245d2();
  uVar2 = 0;
  iStack00000004 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x488);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar2)) goto LAB_004641bf;
    if ((*(int *)(iVar1 + iStack00000004) == local_c) &&
       (((int *)(iVar1 + iStack00000004))[1] == local_8)) break;
    uVar2 = uVar2 + 1;
    iStack00000004 = iStack00000004 + 0x37;
  }
  iStack_1c = uVar2 * 0x37 + *(int *)(param_1 + 0x488);
  piStack_20 = (int *)0x4641bf;
  FUN_004657d7();
LAB_004641bf:
  iStack_1c = 0;
  piStack_20 = (int *)0x4641cd;
  FUN_008161f1();
  iStack_1c = 1;
  piStack_20 = (int *)0x4641d6;
  FUN_00489a0e();
  iStack_1c = 0;
  piStack_20 = (int *)0x4641e2;
  FUN_008161f1();
  iStack_1c = 0;
  piStack_20 = (int *)0x0;
  uStack_24 = 0;
  uStack_28 = 0;
  FUN_00679d22(auStack_2c,0x222);
  FUN_007db3ad();
  return;
}



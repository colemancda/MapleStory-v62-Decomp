/* FUN_00834015 - 0x00834015 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00834015(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_00978358 != 0) {
    FUN_0062fd7f();
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x2098) + 0xd7 + iVar3) != 0) {
        uVar5 = 0;
        uVar1 = FUN_0045e2eb(0);
        FUN_008341aa(uVar1,uVar5);
      }
      if (*(int *)(*(int *)(param_1 + 0x2098) + 0x25f + iVar3) != 0) {
        uVar5 = 0;
        uVar1 = FUN_0045e2eb(0);
        FUN_008341aa(uVar1,uVar5);
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 < 0x181);
    iVar3 = FUN_00455c59(local_1c);
    iVar3 = *(int *)(iVar3 + 4);
    local_14 = iVar3;
    if (local_18 != 0) {
      FUN_0045e7c2(0);
      local_18 = 0;
    }
    piVar4 = (int *)(iVar3 + 999);
    local_8 = 5;
    do {
      if (*piVar4 == 0) {
        local_10 = 0;
      }
      else {
        local_10 = *(int *)(*piVar4 + -4);
      }
      local_10 = local_10 + -1;
      iVar3 = 1;
      if (0 < local_10) {
        do {
          if (*(int *)(*piVar4 + 4 + iVar3 * 8) != 0) {
            uVar5 = 0;
            uVar1 = FUN_0045e2eb(0);
            FUN_00834236(uVar1,uVar5);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_10);
      }
      piVar4 = piVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    uVar1 = FUN_0083cbf6();
    FUN_008342a3(uVar1);
    FUN_0083432d(0);
    FUN_0062fd7f();
    local_10 = DAT_0097926c;
    local_c = FUN_0083419f();
    while (local_c != 0) {
      puVar2 = (undefined2 *)FUN_004b97dc(&local_c,0);
      local_14 = CONCAT22((short)((uint)puVar2 >> 0x10),*puVar2);
      local_8 = local_14;
      iVar3 = FUN_005ee726(&local_14);
      if ((iVar3 != 0) && (iVar3 = FUN_0062d5eb(local_8), iVar3 != 0)) {
        local_14 = 1;
        FUN_0062fcac(&local_8,&local_14);
      }
    }
    FUN_008344dd();
  }
  return;
}



/* FUN_00549500 - 0x00549500 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00549500(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int iStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  undefined1 local_14 [4];
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = (undefined1 *)0x0;
  piStack_28 = (int *)0x1f4;
  local_8 = DAT_00978368;
  puStack_2c = (undefined1 *)0x549523;
  iVar3 = FUN_004becbc();
  if (iVar3 != 0) {
    puStack_24 = local_14;
    piStack_28 = (int *)0x549536;
    FUN_00455c59();
    if (local_10 != 0) {
      puStack_24 = (undefined1 *)0x0;
      piStack_28 = (int *)0x549547;
      FUN_0045e7c2();
    }
    puStack_24 = (undefined1 *)param_5;
    local_c = (int *)(param_1 + -4);
    piStack_28 = (int *)param_4;
    puStack_2c = (undefined1 *)0x54955a;
    uVar4 = FUN_00549749();
    piStack_28 = *(int **)(param_1 + 0x574);
    puStack_2c = local_14;
    uStack_30 = (undefined1 *)0x54956f;
    puStack_24 = (undefined1 *)uVar4;
    iVar3 = FUN_00458c4f();
    piVar1 = *(int **)(iVar3 + 4);
    if (local_10 != 0) {
      puStack_24 = (undefined1 *)0x0;
      piStack_28 = (int *)0x549582;
      FUN_00449913();
      local_10 = 0;
    }
    if (piVar1 != (int *)0x0) {
      puStack_24 = (undefined1 *)0x549596;
      iVar3 = FUN_0045e2eb();
      if (iVar3 == *(int *)(param_1 + 0x584)) {
        if (param_2 == 0x202) {
          piStack_28 = (int *)0x5495b5;
          puStack_24 = (undefined1 *)uVar4;
          FUN_00549ddf();
        }
        if (param_2 == 0x203) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x58c) + 0x18);
          puStack_24 = (undefined1 *)0x5495d2;
          iVar3 = (**(code **)(*piVar1 + 0x18))();
          puStack_24 = (undefined1 *)0x5495de;
          iVar5 = (**(code **)(*piVar2 + 0x18))();
          if (iVar3 < iVar5) {
            uVar4 = 0x116a;
            iStack_34 = iVar3;
          }
          else {
            puStack_24 = *(undefined1 **)(local_8 + 0x2040);
            piStack_28 = (int *)(*(int *)(param_1 + 0x58c) + 0x34);
            puStack_2c = (undefined1 *)0x549612;
            iVar3 = (*DAT_0097b4bc)();
            if (iVar3 != 0) {
              puStack_24 = (undefined1 *)0x0;
              piStack_28 = (int *)0x0;
              puStack_2c = (undefined1 *)0x0;
              uStack_30 = (undefined1 *)0x0;
              FUN_00679d22(&iStack_34,0x1193);
              iVar3 = FUN_007db791();
              if (iVar3 != 6) {
                return;
              }
              puStack_24 = *(undefined1 **)(*(int *)(param_1 + 0x58c) + 0x20);
              uStack_30 = *(undefined1 **)(param_1 + 0x574);
              iStack_34 = 0x549681;
              puStack_2c = (undefined1 *)uVar4;
              piStack_28 = piVar1;
              FUN_0052a6b2();
              puStack_24 = (undefined1 *)0x1;
              piStack_28 = (int *)0x54968b;
              (**(code **)(*local_c + 0x34))();
              return;
            }
            uVar4 = 0x116b;
            iStack_34 = extraout_ECX;
          }
          puStack_24 = (undefined1 *)0x0;
          uStack_30 = puStack_24;
          puStack_2c = puStack_24;
          piStack_28 = (int *)puStack_24;
          FUN_00679d22(&iStack_34,uVar4);
          FUN_007db3ad();
          return;
        }
      }
    }
    puStack_24 = (undefined1 *)0x549698;
    FUN_0074d6fb();
  }
  return;
}



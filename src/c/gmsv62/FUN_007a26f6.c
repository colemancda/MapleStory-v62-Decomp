/* FUN_007a26f6 - 0x007a26f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007a26f6(int param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_30 [4];
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((param_2 != 0) && (iVar3 = FUN_0044dddc(*(undefined4 *)(param_1 + 0x4a4)), iVar3 == 0x2f)) {
    iVar3 = FUN_00455c59(local_20);
    iVar3 = *(int *)(iVar3 + 4);
    local_c = iVar3;
    if (local_1c != 0) {
      FUN_0045e7c2(0);
      local_1c = 0;
    }
    iVar4 = FUN_006509a1(param_3);
    local_18 = FUN_00413367(iVar4 + 0x118,*(undefined4 *)(iVar4 + 0x120));
    if (0 < local_18) {
      if (*(int *)(iVar3 + 0x3eb) == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(*(int *)(iVar3 + 0x3eb) + -4);
      }
      local_8 = local_8 + -1;
      local_10 = 0;
      param_3 = 1;
      if (local_8 < 1) {
        return 0;
      }
      do {
        iVar4 = FUN_00458c4f(local_28,2,param_3);
        piVar1 = *(int **)(iVar4 + 4);
        if (local_24 != 0) {
          FUN_00449913(0);
          local_24 = 0;
        }
        if (((piVar1 != (int *)0x0) && (iVar4 = FUN_0045e2eb(), iVar4 / 10000 == 0xcf)) &&
           (iVar4 = (**(code **)(*piVar1 + 0x18))(), 0 < iVar4)) {
          bVar2 = FUN_0045f03e(iVar3 + 0x33,*(undefined4 *)(iVar3 + 0x35));
          iVar4 = FUN_0045e2eb();
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00554db7(iVar4);
          }
          if (iVar4 <= (int)(uint)bVar2) {
            param_2 = (**(code **)(*piVar1 + 0x18))();
            iVar4 = param_3 + 1;
            if (iVar4 <= local_8) {
              do {
                iVar3 = FUN_00458c4f(local_30,2,iVar4);
                piVar1 = *(int **)(iVar3 + 4);
                if (local_2c != 0) {
                  FUN_00449913(0);
                  local_2c = 0;
                }
                if (piVar1 != (int *)0x0) {
                  local_14 = FUN_0045e2eb();
                  iVar3 = FUN_0045e2eb();
                  if (iVar3 == local_14) {
                    iVar3 = (**(code **)(*piVar1 + 0x18))();
                    param_2 = param_2 + iVar3;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar3 = local_c;
              } while (iVar4 <= local_8);
            }
            if (local_18 <= param_2) {
              uVar5 = FUN_0045e2eb();
              return uVar5;
            }
          }
        }
        param_3 = param_3 + 1;
        if (local_8 < param_3) {
          return local_10;
        }
      } while( true );
    }
  }
  return 0;
}



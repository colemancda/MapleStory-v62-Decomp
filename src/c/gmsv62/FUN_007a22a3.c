/* FUN_007a22a3 - 0x007a22a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_007a22a3(int param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 *param_6)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = DAT_00978368;
  local_20 = param_1;
  iVar3 = FUN_00455c59(local_30);
  iVar3 = *(int *)(iVar3 + 4);
  local_10 = iVar3;
  FUN_0045e4a2();
  iVar4 = FUN_00732f96(*(undefined4 *)(param_1 + 0x4a4));
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    iVar4 = FUN_006509a1(param_3);
    local_14 = FUN_00413367(iVar4 + 0x118,*(undefined4 *)(iVar4 + 0x120));
    if (local_14 != 0) goto LAB_007a233b;
    iVar4 = FUN_006509a1(param_3);
    local_14 = FUN_00413367(iVar4 + 0x10c,*(undefined4 *)(iVar4 + 0x114));
    if (local_14 != 0) goto LAB_007a233b;
  }
  local_14 = 1;
LAB_007a233b:
  iVar4 = FUN_00413367(iVar5 + 0x2540,*(undefined4 *)(iVar5 + 0x2548));
  if (iVar4 != 0) {
    local_14 = local_14 * 2;
  }
  local_1c = 0;
  iVar4 = FUN_00413367(iVar5 + 0x2768,*(undefined4 *)(iVar5 + 0x2770));
  if (iVar4 < 1) {
    local_c = 0;
    if (*(int *)(iVar3 + 0x3eb) != 0) {
      local_c = *(int *)(*(int *)(iVar3 + 0x3eb) + -4);
    }
    local_c = local_c + -1;
    if ((param_2 != (int *)0x0) &&
       (((*param_2 == 0x4f837d || (*param_2 == 0x4f837c)) && (local_8 = 1, 0 < local_c)))) {
      do {
        iVar3 = FUN_00458c4f(local_28,2,local_8);
        piVar1 = *(int **)(iVar3 + 4);
        if (local_24 != 0) {
          FUN_00449913(0);
          local_24 = 0;
        }
        if (piVar1 != (int *)0x0) {
          uVar7 = *(undefined4 *)(local_20 + 0x4a4);
          uVar6 = FUN_0045e2eb();
          iVar3 = FUN_0073302a(uVar7,uVar6);
          if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar1 + 0x18))(), local_14 <= iVar3)) {
            bVar2 = FUN_0045f03e(local_10 + 0x33,*(undefined4 *)(local_10 + 0x35));
            iVar3 = FUN_0045e2eb();
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_00554db7(iVar3);
            }
            if ((iVar3 <= (int)(uint)bVar2) &&
               (((*param_2 == 0x4f837d && (iVar3 = FUN_0045e2eb(), iVar3 / 1000 == 0x91c)) ||
                ((*param_2 == 0x4f837c && (iVar3 = FUN_0045e2eb(), iVar3 / 1000 == 0x91b)))))) {
              iVar3 = local_8;
              local_1c = local_8;
              if (param_4 != (int *)0x0) {
                iVar5 = FUN_0045e2eb();
                *param_4 = iVar5;
              }
              if (iVar3 != 0) goto LAB_007a2668;
              break;
            }
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 <= local_c);
    }
    local_8 = 1;
    if (local_c < 1) {
      return local_1c;
    }
    do {
      iVar3 = FUN_00458c4f(local_28,2,local_8);
      piVar1 = *(int **)(iVar3 + 4);
      if (local_24 != 0) {
        FUN_00449913(0);
        local_24 = 0;
      }
      if (piVar1 != (int *)0x0) {
        uVar7 = *(undefined4 *)(local_20 + 0x4a4);
        uVar6 = FUN_0045e2eb();
        iVar3 = FUN_0073302a(uVar7,uVar6);
        if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar1 + 0x18))(), local_14 <= iVar3)) {
          bVar2 = FUN_0045f03e(local_10 + 0x33,*(undefined4 *)(local_10 + 0x35));
          iVar3 = FUN_0045e2eb();
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_00554db7(iVar3);
          }
          if (((iVar3 <= (int)(uint)bVar2) && (iVar3 = FUN_0045e2eb(), iVar3 / 1000 != 0x91c)) &&
             (iVar3 = FUN_0045e2eb(), iVar3 / 1000 != 0x91b)) {
            local_1c = local_8;
            if (param_4 != (int *)0x0) {
              iVar3 = FUN_0045e2eb();
              *param_4 = iVar3;
            }
            break;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 <= local_c);
    if (local_c < local_8) {
      return local_1c;
    }
    if ((param_2 != (int *)0x0) && (*param_2 == 0x3eba9d)) {
      return local_1c;
    }
  }
  else {
    iVar5 = FUN_00413367(iVar5 + 0x2768,*(undefined4 *)(iVar5 + 0x2770));
    local_c = 0;
    if (*(int *)(iVar3 + 0x3eb) != 0) {
      local_c = *(int *)(*(int *)(iVar3 + 0x3eb) + -4);
    }
    local_c = local_c + -1;
    iVar3 = 1;
    if (0 < local_c) {
      do {
        iVar4 = FUN_00458c4f(local_18,2,iVar3);
        piVar1 = *(int **)(iVar4 + 4);
        if (local_14 != 0) {
          FUN_00449913(0);
          local_14 = 0;
        }
      } while ((((piVar1 == (int *)0x0) || (iVar4 = FUN_0045e2eb(), iVar4 != iVar5 + 0x1f95ef)) ||
               (local_1c = iVar3, iVar4 = (**(code **)(*piVar1 + 0x18))(), iVar4 < 1)) &&
              (iVar3 = iVar3 + 1, iVar3 <= local_c));
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar5 + 0x1f95ef;
    }
  }
LAB_007a2668:
  local_c = 0;
  if (*(int *)(local_10 + 0x3f7) != 0) {
    local_c = *(int *)(*(int *)(local_10 + 0x3f7) + -4);
  }
  local_c = local_c + -1;
  iVar3 = 1;
  if (0 < local_c) {
    do {
      iVar5 = FUN_00458c4f(local_28,5,iVar3);
      iVar5 = *(int *)(iVar5 + 4);
      if (local_24 != 0) {
        FUN_00449913(0);
        local_24 = 0;
      }
      if (iVar5 != 0) {
        uVar7 = *(undefined4 *)(local_20 + 0x4a4);
        uVar6 = FUN_0045e2eb();
        iVar5 = FUN_0064cb77(uVar7,uVar6);
        if (iVar5 != 0) {
          if (param_5 != (int *)0x0) {
            *param_5 = iVar3;
          }
          if (param_6 == (undefined4 *)0x0) {
            return local_1c;
          }
          uVar7 = FUN_0045e2eb();
          *param_6 = uVar7;
          return local_1c;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= local_c);
  }
  return local_1c;
}



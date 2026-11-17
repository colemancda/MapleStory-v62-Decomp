/* FUN_004868df - 0x004868df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004868df(int param_1,int *param_2,int **param_3)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int **ppiVar8;
  int *piStack_14;
  
  if ((*(int *)(*(int *)(param_1 + 0x3d8) + 0x1e88) == 0) && (((uint)param_3 & 0x80000000) == 0)) {
    uVar3 = (uint)param_3 >> 0x10 & 0xff;
    if (uVar3 == 0x36) {
      uVar3 = 0x2a;
    }
    pcVar1 = (char *)(uVar3 * 5 + 4 + DAT_00979110);
    if (*(uint *)(DAT_00978364 + 0x80) ==
        (-(uint)(*(int *)(param_1 + 0x80) != 0) & *(int *)(param_1 + 0x80) + 4U)) {
      if ((*pcVar1 == '\x05') && (*(int *)(pcVar1 + 1) == 0x35)) {
        piStack_14 = (int *)0x48695b;
        FUN_00486745();
      }
      if (param_2 == (int *)&DAT_0000000d) {
        piStack_14 = (int *)&param_2;
        puVar4 = (undefined4 *)FUN_0045b90e();
        if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        piStack_14 = (int *)0x4869b7;
        FUN_00414ebb();
        if (bVar2) {
          return 1;
        }
        param_3 = &piStack_14;
        ppiVar8 = &piStack_14;
        FUN_0048b998(&piStack_14);
        FUN_0045b90e(ppiVar8);
        FUN_0048676b();
        return 1;
      }
      if (param_2 == (int *)0x1b) {
        piStack_14 = (int *)0x48698a;
        FUN_00486745();
        return 1;
      }
      if (param_2 < (int *)0x25) {
        return 1;
      }
      if ((int *)0x28 < param_2) {
        return 1;
      }
      piStack_14 = (int *)0x486981;
      FUN_00486745();
    }
    else if (param_2 == (int *)&DAT_0000000d) {
      piStack_14 = (int *)&param_2;
      puVar4 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      piStack_14 = (int *)0x486ac4;
      FUN_00414ebb();
      if (!bVar2) {
        return 1;
      }
      piStack_14 = (int *)0x486acf;
      FUN_00486707();
      return 1;
    }
    if (*pcVar1 == '\x05') {
      if (*(int *)(pcVar1 + 1) == 0x35) {
        piStack_14 = (int *)&param_2;
        piVar5 = (int *)FUN_00486ada();
        *(undefined4 *)((-(uint)(*piVar5 != 0) & *piVar5 - 0xcU) + 0x15c) = 1;
        if (param_2 == (int *)0x0) {
          return 1;
        }
        piStack_14 = param_2;
        (**(code **)(*param_2 + 8))();
        return 1;
      }
      if (*(int *)(pcVar1 + 1) == 0x34) {
        piStack_14 = (int *)&param_2;
        param_2 = (int *)0x0;
        uVar6 = FUN_0044dddc(*(undefined4 *)(param_1 + 0xd1));
        piVar5 = (int *)FUN_00486aff(uVar6);
        if (piVar5 != (int *)0x0) {
          piStack_14 = piVar5;
          iVar7 = FUN_0044dddc();
          if ((iVar7 == 0x2d) || (piStack_14 = piVar5, iVar7 = FUN_0044dddc(), iVar7 == 0x2e)) {
            piStack_14 = (int *)0x0;
            FUN_007c582b(piVar5);
          }
          else {
            piStack_14 = param_2;
            FUN_007c56a1(piVar5);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



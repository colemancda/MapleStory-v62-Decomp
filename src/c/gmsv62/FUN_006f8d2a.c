/* FUN_006f8d2a - 0x006f8d2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f8d2a(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_2 == 3000) && (param_3 == 500)) {
    FUN_006f8f84(param_4);
  }
  else {
    if (param_3 == 200) {
      if (param_2 == 7000) {
        iVar3 = 0x12;
        do {
          FUN_00499fb8(param_4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else if (param_2 == 0x1b5a) {
        iVar3 = 4;
        do {
          FUN_00499fb8(param_4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else {
        iVar3 = 4;
        if (param_2 == 0x1b5e) {
          do {
            FUN_00499fb8(param_4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else if (param_2 == 0x1b62) {
          iVar3 = 3;
          do {
            FUN_00499fb8(param_4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else {
          iVar3 = 3;
          if (param_2 == 0x1b65) {
            do {
              FUN_00499fb8(param_4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          else if (param_2 == 0x1b68) {
            do {
              FUN_00499fb8(param_4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      uVar2 = 1;
      if (((*(int *)(param_1[0x171] + 0x48) == 0) || (*(int *)(param_1[0x173] + 0x48) == 0)) ||
         (uVar1 = uVar2, *(int *)(param_1[0x175] + 0x48) == 0)) {
        uVar1 = 0;
      }
      FUN_00499fb8(uVar1);
      if (((*(int *)(param_1[0x179] + 0x48) == 0) || (*(int *)(param_1[0x17b] + 0x48) == 0)) ||
         (uVar1 = uVar2, *(int *)(param_1[0x17d] + 0x48) == 0)) {
        uVar1 = 0;
      }
      FUN_00499fb8(uVar1);
      if ((*(int *)(param_1[0x181] + 0x48) == 0) ||
         (uVar1 = uVar2, *(int *)(param_1[0x183] + 0x48) == 0)) {
        uVar1 = 0;
      }
      FUN_00499fb8(uVar1);
      if ((*(int *)(param_1[0x187] + 0x48) == 0) ||
         (uVar1 = uVar2, *(int *)(param_1[0x189] + 0x48) == 0)) {
        uVar1 = 0;
      }
      FUN_00499fb8(uVar1);
      if ((*(int *)(param_1[0x18d] + 0x48) == 0) ||
         (uVar1 = uVar2, *(int *)(param_1[399] + 0x48) == 0)) {
        uVar1 = 0;
      }
      FUN_00499fb8(uVar1);
      if (((((*(int *)(param_1[0x16d] + 0x48) == 0) || (*(int *)(param_1[0x16f] + 0x48) == 0)) ||
           (*(int *)(param_1[0x177] + 0x48) == 0)) ||
          ((*(int *)(param_1[0x17f] + 0x48) == 0 || (*(int *)(param_1[0x185] + 0x48) == 0)))) ||
         (*(int *)(param_1[0x18b] + 0x48) == 0)) {
        uVar2 = 0;
      }
      FUN_00499fb8(uVar2);
    }
    FUN_008161f1(0);
    if (param_3 == 100) {
      (**(code **)(*param_1 + 0x20))(param_2);
    }
  }
  return;
}



/* FUN_0066bc4c - 0x0066bc4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0066bc4c(int param_1,undefined *param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_8;
  
  if (DAT_0097b140 == 0) {
    DAT_0097b144 = FUN_0064d61f(0xf4241);
    DAT_0097b148 = FUN_0064d61f(0x1e8481);
    DAT_0097b14c = FUN_0064d61f(&DAT_004dd1e0);
    DAT_0097b140 = 1;
  }
  puVar1 = param_2;
  uVar5 = param_3 & 0x800;
  param_3 = param_3 & 0x2000;
  iVar3 = FUN_00413367(param_2 + 0x18,*(undefined4 *)(param_2 + 0x20));
  if ((iVar3 / 100 < 0) || (9 < iVar3 / 100)) {
    param_4 = 0;
  }
  else {
    if (uVar5 != 0) {
      _rand();
    }
    if (param_3 != 0) {
      FUN_00413367(puVar1 + 0x3c,*(undefined4 *)(puVar1 + 0x44));
      _rand();
    }
    if (uVar5 != 0) {
      param_2 = (undefined *)0xf4241;
      iVar3 = FUN_004b8f25(&param_2,&local_8);
      if (((iVar3 != 0) && (0 < local_8)) && (DAT_0097b144 != 0)) {
        iVar3 = FUN_00650e14();
        if (iVar3 <= local_8) {
          local_8 = iVar3;
        }
        if (param_4 == 0) {
          iVar3 = FUN_006509a1(local_8);
          uVar4 = *(undefined4 *)(iVar3 + 0x150);
          iVar3 = iVar3 + 0x148;
        }
        else {
          iVar3 = FUN_006509a1(local_8);
          uVar4 = *(undefined4 *)(iVar3 + 0x144);
          iVar3 = iVar3 + 0x13c;
        }
        FUN_00413367(iVar3,uVar4);
      }
      param_2 = &DAT_004dd1e0;
      iVar3 = FUN_004b8f25(&param_2,&local_8);
      if (((iVar3 != 0) && (0 < local_8)) && (DAT_0097b14c != 0)) {
        iVar3 = FUN_00650e14();
        if (iVar3 <= local_8) {
          local_8 = iVar3;
        }
        if (param_4 == 0) {
          iVar3 = FUN_006509a1(local_8);
          uVar4 = *(undefined4 *)(iVar3 + 0x150);
          iVar3 = iVar3 + 0x148;
        }
        else {
          iVar3 = FUN_006509a1(local_8);
          uVar4 = *(undefined4 *)(iVar3 + 0x144);
          iVar3 = iVar3 + 0x13c;
        }
        FUN_00413367(iVar3,uVar4);
      }
    }
    if (param_3 != 0) {
      param_2 = (undefined *)0x1e8481;
      iVar3 = FUN_004b8f25(&param_2,&local_8);
      if (((iVar3 != 0) && (0 < local_8)) && (DAT_0097b148 != 0)) {
        iVar3 = FUN_00650e14();
        if (iVar3 <= local_8) {
          local_8 = iVar3;
        }
        if (param_4 == 0) {
          iVar3 = FUN_006509a1(local_8);
          uVar4 = *(undefined4 *)(iVar3 + 0x150);
          iVar3 = iVar3 + 0x148;
        }
        else {
          iVar3 = FUN_006509a1(local_8);
          uVar4 = *(undefined4 *)(iVar3 + 0x144);
          iVar3 = iVar3 + 0x13c;
        }
        FUN_00413367(iVar3,uVar4);
      }
    }
    param_4 = 0;
    if (uVar5 != 0) {
      sVar2 = FUN_0045f084(param_1 + 0x69,*(undefined4 *)(param_1 + 0x6d));
      if (sVar2 < 30000) {
        FUN_0045f084(param_1 + 0x69,*(undefined4 *)(param_1 + 0x6d));
        uVar4 = FUN_004b8c34();
        *(undefined4 *)(param_1 + 0x6d) = uVar4;
        param_4 = 1;
      }
    }
    if (param_3 != 0) {
      sVar2 = FUN_0045f084(param_1 + 0x79,*(undefined4 *)(param_1 + 0x7d));
      if (sVar2 < 30000) {
        FUN_0045f084(param_1 + 0x79,*(undefined4 *)(param_1 + 0x7d));
        uVar4 = FUN_004b8c34();
        *(undefined4 *)(param_1 + 0x7d) = uVar4;
        param_4 = 1;
      }
    }
  }
  return param_4;
}



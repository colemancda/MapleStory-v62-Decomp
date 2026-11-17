/* FUN_0079c757 - 0x0079c757 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0079c757(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  if (param_2 != (int *)0x0) {
    FUN_00486ada(&local_8);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    iVar2 = FUN_005e2932(piVar1);
    if (iVar2 == 0) {
      return;
    }
    if ((*(int *)(iVar2 + 0x2c) == 0) && (iVar3 = FUN_00614c6f(), iVar3 != 0)) {
      return;
    }
    if ((*(int *)(iVar2 + 0x2c) == 1) && (iVar2 = FUN_00614c6f(), iVar2 == 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x30))(0);
  }
  piVar1 = param_2;
  FUN_00486ada(&param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  iVar2 = FUN_006158e9();
  if ((iVar2 == 0) && (iVar2 = FUN_00615923(), iVar2 == 0)) {
    param_2 = (int *)0x0;
  }
  else {
    param_2 = (int *)0x1;
  }
  if ((piVar1 == (int *)0x3ea) || ((param_1[0x138] == 0x3ea && (piVar1 == (int *)0x0)))) {
    if ((int *)param_1[0x138] == piVar1) {
      return;
    }
    param_1[0x5ec] = (uint)(piVar1 != (int *)0x0);
    if ((param_2 == (int *)0x0) && (param_3 == 0)) {
      FUN_0079364b();
      return;
    }
    iVar2 = FUN_00444e82(piVar1);
    if ((param_3 != 0) || (iVar2 == 0)) goto LAB_0079c8a5;
    uVar4 = 1;
    iVar2 = 1;
  }
  else {
    if ((piVar1 == (int *)0x3e8) || (piVar1 == (int *)0x3e9)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    iVar3 = FUN_00444e82(piVar1);
    if ((param_3 != 0) || (iVar2 = (int)param_2, iVar3 == 0)) goto LAB_0079c8a5;
  }
  FUN_007933cc(iVar2,uVar4);
LAB_0079c8a5:
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 == 0) {
    iVar2 = param_1[0x77d];
  }
  else {
    iVar2 = *(int *)(DAT_00978368 + 0x2b3c);
  }
  FUN_0079757b(iVar2);
  FUN_007953b8();
  FUN_0079601e(param_1[0x5ee]);
  FUN_00796bff(param_1[0x5ef]);
  return;
}



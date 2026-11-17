/* FUN_0079c68e - 0x0079c68e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0079c68e(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_8;
  
  local_8 = param_1;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x30))(0);
  }
  FUN_00486ada(&local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  iVar1 = FUN_006158e9();
  if (iVar1 == 0) {
    iVar1 = FUN_00615923();
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_0079c6df;
  }
  uVar2 = 1;
LAB_0079c6df:
  if ((param_3 == 0) && ((param_1[0x13d] != 0) != param_2)) {
    FUN_007933cc(uVar2,1);
  }
  FUN_00444e5a(param_2);
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 == 0) {
    iVar1 = param_1[0x77d];
  }
  else {
    iVar1 = *(int *)(DAT_00978368 + 0x2b3c);
  }
  FUN_0079757b(iVar1);
  FUN_007953b8();
  FUN_0079601e(param_1[0x5ee]);
  FUN_00796bff(param_1[0x5ef]);
  return;
}



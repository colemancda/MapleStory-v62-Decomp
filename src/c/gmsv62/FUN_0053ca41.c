/* FUN_0053ca41 - 0x0053ca41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0053ca41(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 uVar4;
  int iStack_24;
  undefined1 *local_20;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *local_8;
  
  local_20 = (undefined1 *)param_3;
  iStack_24 = param_2;
  local_8 = (undefined1 *)FUN_0053cb20();
  if (local_8 != (undefined1 *)0x0) {
    local_20 = local_10;
    iStack_24 = 0x53ca76;
    FUN_00455c59();
    if (local_c != 0) {
      local_20 = (undefined1 *)0x0;
      iStack_24 = 0x53ca87;
      FUN_0045e7c2();
    }
    local_20 = local_8;
    iStack_24 = param_1[0x15a];
    iVar2 = FUN_00458c4f(local_10);
    iVar2 = *(int *)(iVar2 + 4);
    iStack_24 = extraout_ECX;
    if (local_c != 0) {
      local_20 = (undefined1 *)0x0;
      iStack_24 = 0x53caac;
      FUN_00449913();
      iStack_24 = extraout_ECX_00;
    }
    local_8 = (undefined1 *)&iStack_24;
    local_20 = (undefined1 *)iVar2;
    piVar1 = &iStack_24;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
      piVar1 = (int *)local_8;
    }
    local_8 = (undefined1 *)piVar1;
    iVar3 = FUN_0052dfe5();
    if (iVar3 == 0) {
      local_20 = (undefined1 *)0x0;
      iStack_24 = 0;
      uVar4 = 0;
      iVar3 = (**(code **)(*param_1 + 0x30))(iVar2,0);
      param_3 = iVar3 + 0x14 + param_3;
      iVar3 = (**(code **)(*param_1 + 0x2c))(param_3);
      FUN_00759767(iVar3 + param_2,param_3,iVar2,uVar4);
      return 0;
    }
  }
  local_20 = (undefined1 *)0x53caff;
  FUN_0074d6fb();
  return 0;
}



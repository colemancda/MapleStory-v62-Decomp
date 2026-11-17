/* FUN_00871980 - 0x00871980 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00871980(undefined4 *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7b68;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1[4];
  local_4 = 0;
  if (iVar1 != 0) {
    local_14 = param_2;
    local_10 = 0;
    FUN_00871f10(local_1c,&local_14);
    iVar2 = *(int *)(local_1c[0] + 0x10);
    if (iVar2 != 0) {
      FUN_00871240();
      FUN_00402614(iVar2);
    }
    iVar3 = FUN_008729b0(&param_2);
    piVar4 = (int *)FUN_00872600(local_1c,&param_2);
    iVar2 = *piVar4;
    while (iVar2 != iVar3) {
      FUN_00872590();
    }
    FUN_00871e40(&local_14,iVar2,iVar3);
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return iVar1 == 0;
}



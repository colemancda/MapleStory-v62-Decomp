/* FUN_00871610 - 0x00871610 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00871610(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  MMRESULT MVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7b2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = local_15;
  *(undefined1 *)((int)param_1 + 5) = local_15;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = (undefined4 *)FUN_00402605(0x18);
  puVar1[1] = 0;
  puVar1[5] = 1;
  FUN_00878d4a();
  if (DAT_0097fca4 == (undefined4 *)0x0) {
    DAT_0097fca4 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_0097fca4[2] = 0;
  }
  DAT_0097fca0 = DAT_0097fca0 + 1;
  FUN_00878de6();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00402614(puVar1);
  }
  puVar1 = DAT_0097fca4;
  iVar2 = FUN_00402605(0x18);
  *(undefined4 **)(iVar2 + 4) = puVar1;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  param_1[2] = iVar2;
  param_1[4] = 0;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  local_4 = 0;
  MVar3 = timeSetEvent(60000,0,FUN_00871550,0,1);
  param_1[5] = MVar3;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_00402605(0x18);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    *param_1 = 0;
  }
  else {
    InitializeCriticalSection(lpCriticalSection);
    *param_1 = lpCriticalSection;
  }
  ExceptionList = local_c;
  return param_1;
}



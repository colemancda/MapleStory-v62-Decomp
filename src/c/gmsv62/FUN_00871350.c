/* FUN_00871350 - 0x00871350 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00871350(undefined4 *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7aa8;
  local_c = ExceptionList;
  if (param_1[2] == 0) {
    param_1[1] = param_2;
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  iVar1 = FUN_008712a0();
  if (iVar1 != 0) {
    *(undefined4 *)param_1[2] = param_2;
    *(undefined4 *)(param_1[2] + 4) = param_2;
    FUN_00871280();
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



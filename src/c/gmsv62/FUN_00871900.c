/* FUN_00871900 - 0x00871900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00871900(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7b48;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  local_18 = 0;
  local_1c = param_2;
  FUN_00871f10(local_14,&local_1c);
  *(undefined4 *)(local_14[0] + 0x10) = param_3;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



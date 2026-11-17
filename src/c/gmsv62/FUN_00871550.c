/* FUN_00871550 - 0x00871550 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00871550(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection_00;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7b10;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)*DAT_0097fc9c;
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  iVar1 = *(int *)DAT_0097fc9c[2];
  iVar2 = DAT_0097fc9c[2];
  while (iVar1 != iVar2) {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)**(undefined4 **)(iVar1 + 0x10);
    EnterCriticalSection(lpCriticalSection_00);
    local_4._0_1_ = 1;
    FUN_008713f0();
    FUN_00871480();
    local_4 = (uint)local_4._1_3_ << 8;
    LeaveCriticalSection(lpCriticalSection_00);
    FUN_00872590();
    iVar2 = DAT_0097fc9c[2];
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



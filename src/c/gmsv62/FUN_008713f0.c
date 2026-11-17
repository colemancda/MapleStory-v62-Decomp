/* FUN_008713f0 - 0x008713f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008713f0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7ac8;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)param_1[2];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    if ((*piVar1 != piVar1[1]) && (DAT_0097fc64 != 0)) {
      uVar2 = FUN_00875080(&DAT_0096ef44,*piVar1,piVar1[1]);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



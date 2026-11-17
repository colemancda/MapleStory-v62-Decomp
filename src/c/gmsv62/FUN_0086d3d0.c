/* FUN_0086d3d0 - 0x0086d3d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0086d3d0(char *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  LPCSTR pCVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  char *local_4;
  
  DAT_0097fc68 = DAT_0097fc68 + 1;
  if (param_1[1] != '\0') {
    return 0x755;
  }
  local_4 = param_1;
  if (*param_1 == '\0') {
    if (DAT_0097fc68 < 3) {
      return 0x755;
    }
    uVar1 = FUN_00875080(&DAT_0096e0c0);
    FUN_0086cff0(param_1 + 0x24,uVar1);
    return 0x262;
  }
  if (DAT_0097fb48 == 0) {
    uVar1 = FUN_00875080(&DAT_0096e0a4);
    FUN_0086cff0(param_1 + 0x24,uVar1);
    return 0x28a;
  }
  if (DAT_0097fb58 != (HANDLE)0x0) {
    local_4 = (char *)0x0;
    BVar2 = GetExitCodeProcess(DAT_0097fb58,(LPDWORD)&local_4);
    if ((BVar2 != 0) && (local_4 != (char *)0x103)) {
      uVar1 = FUN_00875080(&DAT_0096e088);
      FUN_0086cff0(param_1 + 0x24,uVar1);
      return 0x26c;
    }
  }
  pCVar3 = (LPCSTR)FUN_00875080(&DAT_0096e074);
  pvVar4 = OpenMutexA(0x100000,0,pCVar3);
  if (pvVar4 == (HANDLE)0x0) {
    pCVar3 = (LPCSTR)FUN_00875080(&DAT_0096e068);
    pvVar4 = OpenMutexA(0x100000,0,pCVar3);
    if (pvVar4 == (HANDLE)0x0) {
      DVar5 = GetLastError();
      uVar1 = FUN_00875080(&DAT_0096e000,DVar5);
      FUN_0086cff0(param_1 + 0x24,uVar1);
      return 0x294;
    }
  }
  CloseHandle(pvVar4);
  pCVar3 = (LPCSTR)FUN_00875080(&DAT_0096e054);
  pvVar4 = OpenMutexA(0x100000,0,pCVar3);
  if (pvVar4 == (HANDLE)0x0) {
    pCVar3 = (LPCSTR)FUN_00875080(&DAT_0096e048);
    pvVar4 = OpenMutexA(0x100000,0,pCVar3);
    if (pvVar4 == (HANDLE)0x0) {
      DVar5 = GetLastError();
      uVar1 = FUN_00875080(&DAT_0096e024,DVar5);
      FUN_0086cff0(param_1 + 0x24,uVar1);
      return 0x276;
    }
  }
  CloseHandle(pvVar4);
  return 0x755;
}



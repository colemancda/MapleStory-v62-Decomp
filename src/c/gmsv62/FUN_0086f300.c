/* FUN_0086f300 - 0x0086f300 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086f300(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR pCVar4;
  LSTATUS LVar5;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  LPDWORD lpReserved;
  DWORD *pDVar6;
  LPDWORD lpType;
  int *lpData;
  int local_424;
  int local_420;
  HKEY local_41c;
  DWORD local_418 [258];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7a8b;
  local_c = ExceptionList;
  local_418[1] = 4;
  local_420 = 0;
  local_424 = 1;
  ExceptionList = &local_c;
  FUN_00878970();
  local_4 = 0;
  cVar1 = FUN_00878a40(param_1,&local_424);
  if ((cVar1 == '\0') && (GetLastError(), DAT_0097fc64 != 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_00875080(&DAT_0096ea10,param_1,local_10,DVar2);
    FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
  }
  pDVar6 = local_418;
  phkResult = &local_41c;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  dwOptions = 0;
  lpClass = (LPSTR)0x0;
  DVar2 = 0;
  pCVar4 = (LPCSTR)FUN_00875080(&DAT_0096e9dc);
  LVar5 = RegCreateKeyExA((HKEY)0x80000001,pCVar4,DVar2,lpClass,dwOptions,samDesired,
                          lpSecurityAttributes,phkResult,pDVar6);
  if (LVar5 == 0) {
    if (local_418[0] == 2) {
      pDVar6 = local_418 + 1;
      lpData = &local_420;
      lpType = (LPDWORD)0x0;
      lpReserved = (LPDWORD)0x0;
      pCVar4 = (LPCSTR)FUN_00875080(param_2);
      RegQueryValueExA(local_41c,pCVar4,lpReserved,lpType,(LPBYTE)lpData,pDVar6);
    }
    RegCloseKey(local_41c);
    if (local_424 == local_420) goto LAB_0086f478;
    if (DAT_0097fc64 == 0) goto LAB_0086f4af;
    uVar3 = FUN_00875080(&DAT_0096e9c4,local_424,local_420);
  }
  else {
    if (DAT_0097fc64 != 0) {
      uVar3 = FUN_00875080(&DAT_0096e9ac,LVar5);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
    }
LAB_0086f478:
    if (local_424 == param_3) {
      local_4 = 0xffffffff;
      FUN_008789b0();
      ExceptionList = local_c;
      return 1;
    }
    if (DAT_0097fc64 == 0) goto LAB_0086f4af;
    uVar3 = FUN_00875080(&DAT_0096e994,local_424,param_3);
  }
  FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
LAB_0086f4af:
  local_4 = 0xffffffff;
  FUN_008789b0();
  ExceptionList = local_c;
  return 0;
}



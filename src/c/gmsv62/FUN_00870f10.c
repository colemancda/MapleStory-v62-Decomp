/* FUN_00870f10 - 0x00870f10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00870f10(undefined4 param_1)

{
  LPCSTR pCVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  LPSTR lpClass;
  DWORD DVar4;
  REGSAM samDesired;
  LPDWORD lpReserved;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  LPDWORD lpType;
  DWORD dwType;
  HKEY *phkResult;
  int *lpData;
  int *lpData_00;
  DWORD *pDVar5;
  int local_10;
  HKEY local_c;
  DWORD local_8;
  DWORD local_4;
  
  pDVar5 = &local_8;
  phkResult = &local_c;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  DVar4 = 0;
  lpClass = (LPSTR)0x0;
  DVar3 = 0;
  local_8 = 0;
  local_4 = 4;
  local_10 = 0;
  pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096ee60);
  lpData = &local_10;
  LVar2 = RegCreateKeyExA((HKEY)0x80000001,pCVar1,DVar3,lpClass,DVar4,samDesired,
                          lpSecurityAttributes,phkResult,pDVar5);
  if (LVar2 == 0) {
    if (local_8 == 2) {
      pDVar5 = &local_4;
      lpType = (LPDWORD)0x0;
      lpReserved = (LPDWORD)0x0;
      pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096ee54);
      lpData_00 = &local_10;
      RegQueryValueExA(local_c,pCVar1,lpReserved,lpType,(LPBYTE)lpData,pDVar5);
      if (local_10 != 0) {
        FUN_00870ff0(1,param_1);
        local_10 = 0;
        dwType = 4;
        DVar4 = 0;
        DVar3 = local_4;
        pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096ee48);
        RegSetValueExA(local_c,pCVar1,DVar4,dwType,(BYTE *)lpData_00,DVar3);
      }
    }
    RegCloseKey(local_c);
  }
  return local_10;
}



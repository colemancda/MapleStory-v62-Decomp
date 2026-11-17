/* FUN_00870540 - 0x00870540 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_00870540(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  LSTATUS LVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  DWORD DVar10;
  LPCSTR pCVar11;
  REGSAM samDesired;
  LPBOOL lpUsedDefaultChar;
  HKEY *phkResult;
  undefined1 local_53d;
  HKEY local_53c;
  DWORD local_538;
  BYTE local_534 [32];
  CHAR local_514 [260];
  CHAR local_410 [260];
  char local_30c [260];
  WCHAR local_208 [260];
  
  local_53d = 0;
  GetModuleFileNameW((HMODULE)0x0,local_208,0x104);
  lpUsedDefaultChar = (LPBOOL)0x0;
  pCVar11 = (LPCSTR)0x0;
  lpMultiByteStr = local_410;
  cbMultiByte = 0x104;
  iVar2 = FUN_0087a007(local_208);
  WideCharToMultiByte(0,0,local_208,iVar2 + 1,lpMultiByteStr,cbMultiByte,pCVar11,lpUsedDefaultChar);
  puVar3 = (undefined1 *)FUN_0087cf51(local_410,0x5c);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  phkResult = &local_53c;
  samDesired = 3;
  DVar10 = 0;
  pCVar11 = (LPCSTR)FUN_00875080(&DAT_0096eca0);
  LVar4 = RegOpenKeyExA((HKEY)0x80000001,pCVar11,DVar10,samDesired,phkResult);
  if (LVar4 != 0) {
    return 0;
  }
  local_538 = 0x104;
  iVar2 = RegEnumValueA(local_53c,0,local_514,&local_538,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                        (LPDWORD)0x0);
  DVar10 = 1;
  do {
    if (iVar2 == 0x103) {
      RegCloseKey(local_53c);
      return local_53d;
    }
    if (iVar2 == 0) {
      uVar6 = 0xffffffff;
      pcVar8 = local_514;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = local_30c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      puVar3 = (undefined1 *)FUN_0087cf51(local_30c,0x5c);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      iVar2 = FUN_0087cd32(local_30c,local_410);
      if ((iVar2 == 0) &&
         (LVar4 = RegQueryValueExA(local_53c,local_514,(LPDWORD)0x0,(LPDWORD)0x0,local_534,
                                   &local_538), LVar4 == 0)) {
        if (DAT_0097fc64 != 0) {
          uVar5 = FUN_00875080(&DAT_0096ec88,local_534);
          FUN_0086cff0(DAT_0097fc64 + 0x24,uVar5);
        }
        LVar4 = RegDeleteValueA(local_53c,local_514);
        if (LVar4 == 0) {
          local_53d = 1;
        }
      }
    }
    local_538 = 0x104;
    iVar2 = RegEnumValueA(local_53c,DVar10,local_514,&local_538,(LPDWORD)0x0,(LPDWORD)0x0,
                          (LPBYTE)0x0,(LPDWORD)0x0);
    DVar10 = DVar10 + 1;
  } while( true );
}



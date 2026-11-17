/* FUN_0086e3a0 - 0x0086e3a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0086e3a0(int param_1)

{
  int *piVar1;
  byte *lpBuffer;
  byte bVar2;
  bool bVar3;
  LPCSTR pCVar4;
  LSTATUS LVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  int iVar13;
  uint uVar14;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined *puVar15;
  DWORD DVar16;
  LPSTR lpClass;
  DWORD DVar17;
  REGSAM samDesired;
  LPDWORD pDVar18;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  LPDWORD pDVar19;
  DWORD dwType;
  int iVar20;
  WORD WVar21;
  HKEY *phkResult;
  BYTE *pBVar22;
  uint *puVar23;
  WORD WVar24;
  DWORD *pDVar25;
  WORD WVar26;
  uint local_2b4;
  DWORD local_2b0;
  HKEY local_2ac [2];
  DWORD local_2a4;
  DWORD local_2a0;
  int local_29c;
  BYTE local_284 [64];
  CHAR local_244 [12];
  CHAR aCStack_238 [128];
  CHAR aCStack_1b8 [128];
  undefined1 auStack_138 [312];
  
  piVar1 = (int *)(param_1 + 0x24);
  local_29c = param_1;
  FUN_00875080();
  FUN_0086cff0();
  pDVar25 = &local_2a0;
  phkResult = local_2ac;
  local_2b4 = 0;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0xf003f;
  DVar17 = 0;
  lpClass = (LPSTR)0x0;
  DVar16 = 0;
  bVar3 = false;
  pCVar4 = (LPCSTR)FUN_00875080(&DAT_0096e5bc);
  LVar5 = RegCreateKeyExA((HKEY)0x80000001,pCVar4,DVar16,lpClass,DVar17,samDesired,
                          lpSecurityAttributes,phkResult,pDVar25);
  if (LVar5 == 0) {
    if (local_2a0 == 2) {
      pDVar25 = &local_2b0;
      pBVar22 = local_284;
      pDVar19 = (LPDWORD)0x0;
      pDVar18 = (LPDWORD)0x0;
      local_2b0 = 0x40;
      pCVar4 = (LPCSTR)FUN_00875080();
      RegQueryValueExA(local_2ac[0],pCVar4,pDVar18,pDVar19,pBVar22,pDVar25);
      wsprintfA(local_244,&DAT_0096e5a4);
      if ((local_2b0 != 0) && (iVar6 = lstrcmpA((LPCSTR)local_284,local_244), iVar6 == 0)) {
        bVar3 = true;
      }
      pDVar25 = &local_2b0;
      puVar23 = &local_2b4;
      pDVar19 = (LPDWORD)0x0;
      pDVar18 = (LPDWORD)0x0;
      local_2b0 = 4;
      pCVar4 = (LPCSTR)FUN_00875080();
      RegQueryValueExA(local_2ac[0],pCVar4,pDVar18,pDVar19,(LPBYTE)puVar23,pDVar25);
    }
    wsprintfA((LPSTR)local_284,&DAT_0096e5a4);
    iVar6 = lstrlenA((LPCSTR)local_284);
    local_2b0 = iVar6 + 1;
    pBVar22 = local_284;
    dwType = 1;
    DVar17 = 0;
    DVar16 = local_2b0;
    pCVar4 = (LPCSTR)FUN_00875080();
    RegSetValueExA(local_2ac[0],pCVar4,DVar17,dwType,pBVar22,DVar16);
    local_2b0 = 4;
    if (bVar3) {
      local_2b4 = local_2b4 + 1;
    }
    else {
      local_2b4 = 0;
    }
    puVar23 = &local_2b4;
    WVar21 = 4;
    WVar24 = 0;
    DVar17 = 4;
    DVar16 = 0;
    pCVar4 = (LPCSTR)FUN_00875080();
    RegSetValueExA(local_2ac[0],pCVar4,DVar16,DVar17,(BYTE *)puVar23,CONCAT22(WVar24,WVar21));
    RegCloseKey(local_2ac[0]);
  }
  if (((local_2b4 != 1) && (local_2b4 < 6)) && ((!bVar3 || (DAT_0097fb24 < 9)))) {
    FUN_00875080();
    FUN_0086cff0();
    if (*piVar1 != -1) {
      GetLocalTime((LPSYSTEMTIME)(param_1 + 0x1040));
      lpBuffer = (byte *)(param_1 + 0x40);
      uVar7 = FUN_00875010(&DAT_0096d738,((LPSYSTEMTIME)(param_1 + 0x1040))->wYear,
                           *(undefined2 *)(param_1 + 0x1042));
      FUN_00879f55(lpBuffer,uVar7);
      uVar14 = 0xffffffff;
      pbVar8 = lpBuffer;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
      DVar16 = ~uVar14 - 1;
      if (*(int *)(param_1 + 0x145c) == 0) {
        FUN_008749c0();
      }
      else if (0 < (int)DVar16) {
        pbVar8 = lpBuffer;
        do {
          iVar6 = *(int *)(param_1 + 0x145c) + 2;
          *(int *)(param_1 + 0x145c) = iVar6;
          *pbVar8 = *pbVar8 ^ (char)iVar6 + 0x43U;
          pbVar8 = pbVar8 + 1;
        } while ((int)(pbVar8 + (-0x1c - (int)piVar1)) < (int)DVar16);
      }
      if (*(int *)(param_1 + 0x1460) != 999) {
        WriteFile((HANDLE)*piVar1,lpBuffer,DVar16,&local_2a4,(LPOVERLAPPED)0x0);
      }
      SetEndOfFile((HANDLE)*piVar1);
      CloseHandle((HANDLE)*piVar1);
      *piVar1 = -1;
    }
    iVar6 = FUN_00872c90();
    if (iVar6 == 0) {
      FUN_00875080();
      iVar6 = FUN_00872a80();
      if (iVar6 == 0) {
        return;
      }
    }
    FUN_00875080();
    FUN_00872c90();
    pcVar9 = (code *)FUN_0086f770();
    FUN_00875080();
    FUN_00872c90();
    pcVar10 = (code *)FUN_0086f770();
    FUN_00875080();
    FUN_00872c90();
    pcVar11 = (code *)FUN_0086f770();
    FUN_00875080();
    FUN_00872c90();
    local_2a4 = FUN_0086f770();
    if ((((pcVar9 != (code *)0x0) && (pcVar10 != (code *)0x0)) && (pcVar11 != (code *)0x0)) &&
       (local_2a4 != 0)) {
      WVar26 = 0;
      WVar21 = 0;
      WVar24 = 0;
      iVar20 = 0;
      pcVar12 = (code *)FUN_00875010();
      iVar6 = (*pcVar9)();
      if (iVar6 != 0) {
        uVar7 = FUN_00875080(&DAT_0096e4cc,1,0x8000000);
        uVar7 = FUN_00875010(&DAT_0096e4c0,uVar7);
        uVar7 = FUN_00875010(&DAT_0096e4b0,0x17ac,uVar7);
        iVar13 = (*pcVar10)(iVar6,uVar7);
        if (iVar13 == 0) {
          (*pcVar11)(iVar6);
          return;
        }
        aCStack_1b8[0] = '\0';
        GetComputerNameA(aCStack_1b8,(LPDWORD)&stack0xfffffd24);
        aCStack_238[0] = '\0';
        GetUserNameA(aCStack_238,(LPDWORD)&stack0xfffffd24);
        GetLocalTime((LPSYSTEMTIME)&stack0xfffffd34);
        if (DAT_0097fb24 == 1) {
          puVar15 = &DAT_0096e4a4;
        }
        else if (DAT_0097fb24 == 2) {
          puVar15 = &DAT_0096e498;
        }
        else if (DAT_0097fb24 == 3) {
          puVar15 = &DAT_0096e490;
        }
        else if (DAT_0097fb24 == 4) {
          puVar15 = &DAT_0096e484;
        }
        else if (DAT_0097fb24 == 5) {
          puVar15 = &DAT_0096e478;
        }
        else if (DAT_0097fb24 == 6) {
          puVar15 = &DAT_0096e468;
        }
        else if (DAT_0097fb24 == 7) {
          puVar15 = &DAT_0096e45c;
        }
        else if (DAT_0097fb24 == 8) {
          puVar15 = &DAT_0096e450;
        }
        else if (DAT_0097fb24 == 9) {
          puVar15 = &DAT_0096e444;
        }
        else {
          puVar15 = &DAT_0096e43c;
        }
        uVar7 = FUN_00875010(puVar15);
        uVar7 = FUN_00875080(&DAT_0096e3e0,iVar20 + 0x2b10,0x34,uVar7,
                             *(undefined4 *)(DAT_0097fc64 + 0x10),aCStack_1b8,aCStack_238,
                             iVar20 + 0x2b38,WVar21,WVar24,WVar26,unaff_EDI & 0xffff,
                             unaff_EDI >> 0x10,unaff_ESI & 0xffff,unaff_ESI >> 0x10);
        FUN_0087d05a(auStack_138,0x104,uVar7);
        (*pcVar12)(iVar13,&DAT_0097f804,auStack_138,0x4000002,0);
        GetLastError();
        (*pcVar11)(iVar6);
        (*pcVar11)(iVar13);
      }
    }
  }
  return;
}



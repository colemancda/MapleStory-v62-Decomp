/* FUN_00872a80 - 0x00872a80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00872a80(int *param_1,LPCSTR param_2)

{
  int *lpBuffer;
  char cVar1;
  HANDLE hFile;
  HMODULE pHVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  char *pcVar9;
  DWORD local_240;
  short local_23c [30];
  LONG local_200;
  int local_1fc [13];
  uint local_1c8;
  CHAR local_104 [260];
  
  if (*param_1 != 0) {
    FUN_00872c40();
  }
  GetSystemDirectoryA(local_104,0x104);
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_009640e8;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = local_104;
  do {
    pcVar8 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar3 = 0xffffffff;
  pCVar7 = param_2;
  do {
    pcVar6 = pCVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pCVar7 + 1;
    cVar1 = *pCVar7;
    pCVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar9 = local_104;
  do {
    pcVar8 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  lpBuffer = param_1 + 1;
  GetTempPathA(0x104,(LPSTR)lpBuffer);
  GetTempFileNameA((LPCSTR)lpBuffer,&DAT_0096ef8c,0,(LPSTR)lpBuffer);
  CopyFileA(local_104,(LPCSTR)lpBuffer,0);
  hFile = CreateFileA((LPCSTR)lpBuffer,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    ReadFile(hFile,local_23c,0x40,&local_240,(LPOVERLAPPED)0x0);
    if (local_23c[0] == 0x5a4d) {
      SetFilePointer(hFile,local_200,(PLONG)0x0,0);
      ReadFile(hFile,local_1fc,0xf8,&local_240,(LPOVERLAPPED)0x0);
      if ((local_1fc[0] == 0x4550) && (0x80000000 < local_1c8)) {
        local_1c8 = 0x10000000;
        SetFilePointer(hFile,local_200,(PLONG)0x0,0);
        WriteFile(hFile,local_1fc,0xf8,&local_240,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(hFile);
  }
  pHVar2 = LoadLibraryExA((LPCSTR)lpBuffer,(HANDLE)0x0,8);
  *param_1 = (int)pHVar2;
  if (pHVar2 != (HMODULE)0x0) {
    return true;
  }
  *(CHAR *)lpBuffer = '\0';
  pHVar2 = LoadLibraryExA(param_2,(HANDLE)0x0,8);
  *param_1 = (int)pHVar2;
  return pHVar2 != (HMODULE)0x0;
}



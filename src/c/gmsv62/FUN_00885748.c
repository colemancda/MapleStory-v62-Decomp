/* FUN_00885748 - 0x00885748 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00885748(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_00972d18;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (pDVar2 < &DAT_00972da8);
  if (param_1 == (&DAT_00972d18)[iVar5 * 2]) {
    if ((DAT_009806f4 == 1) || ((DAT_009806f4 == 0 && (DAT_00970134 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x972d1c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x885891;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x885898;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_0087b200();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x885812;
        _strncpy(acStackY_1e3 + sVar4,&DAT_008f4560,3);
      }
      FUN_0087b200();
      puStackY_1c4 = (undefined *)0x885833;
      FUN_0087b210();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_008f4540;
      uStackY_1cc = 0x885844;
      FUN_0087b210();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x972d1c);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x885856;
      FUN_0087b210();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = s_Microsoft_Visual_C___Runtime_Lib_008f4518;
      acStackY_1e3[3] = 'l';
      acStackY_1e3[4] = 'X';
      acStackY_1e3[5] = -0x78;
      acStackY_1e3[6] = '\0';
      FUN_00889a89();
    }
  }
  return;
}



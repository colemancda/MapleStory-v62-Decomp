/* FUN_00873a60 - 0x00873a60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 __thiscall
FUN_00873a60(HCRYPTPROV *param_1,LPCSTR param_2,undefined4 *param_3,uint param_4,BYTE *param_5)

{
  HCRYPTPROV *pHVar1;
  HCRYPTHASH *phHash;
  HCRYPTPROV *pHVar2;
  HCRYPTPROV HVar3;
  BYTE BVar4;
  char cVar5;
  HANDLE hFile;
  DWORD DVar6;
  void *lpBuffer;
  LPCSTR pCVar7;
  BOOL BVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  BYTE *pBVar12;
  undefined4 *puVar13;
  
  hFile = CreateFileA(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    param_1[0x11] = 1;
    return 0;
  }
  DVar6 = GetFileSize(hFile,(LPDWORD)0x0);
  param_1[9] = DVar6;
  if (DVar6 == 0xffffffff) {
    CloseHandle(hFile);
    param_1[0x11] = 0xb;
    return 0;
  }
  if (param_1[1] != 0) {
    FUN_0087aa78(param_1[1]);
    param_1[1] = 0;
  }
  lpBuffer = _malloc(param_1[9]);
  param_1[1] = (HCRYPTPROV)lpBuffer;
  if (lpBuffer == (void *)0x0) {
    CloseHandle(hFile);
    param_1[0x11] = 2;
    return 0;
  }
  ReadFile(hFile,lpBuffer,param_1[9],(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  pCVar7 = (LPCSTR)param_1[9];
  if (param_2 != pCVar7) {
    CloseHandle(hFile);
    param_1[0x11] = 3;
    return 0;
  }
  pHVar1 = param_1 + 10;
  pHVar2 = (HCRYPTPROV *)(pCVar7 + (param_1[1] - 0x10));
  *pHVar1 = *pHVar2;
  param_1[0xb] = pHVar2[1];
  param_1[0xc] = pHVar2[2];
  param_1[0xd] = pHVar2[3];
  if ((*pHVar1 == 0x32812622) && (param_1[0xd] == 0x32812621)) {
    *(undefined1 *)(param_1 + 7) = 1;
    HVar3 = param_1[0xc] + 0x10 + param_1[0xb];
    param_1[0xe] = param_1[0xb];
    param_1[8] = HVar3;
    param_1[2] = (int)pCVar7 - HVar3;
  }
  else {
    *pHVar1 = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    pCVar7 = (LPCSTR)param_1[9];
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    param_1[2] = (HCRYPTPROV)pCVar7;
    param_1[0xe] = 0;
  }
  if (pCVar7 < (LPCSTR)param_1[8]) {
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[0xe] = 0;
  }
  CloseHandle(hFile);
  if (*param_1 == 0) {
    BVar8 = CryptAcquireContextA
                      (param_1,(LPCSTR)0x0,s_Microsoft_Base_Cryptographic_Pro_0096de70,1,0xf0000000)
    ;
    if (BVar8 == 0) {
      param_1[0x11] = 4;
      return 0;
    }
  }
  phHash = param_1 + 0x10;
  if (param_1[0x10] != 0) {
    CryptDestroyHash(param_1[0x10]);
    *phHash = 0;
  }
  BVar8 = CryptCreateHash(*param_1,0x8003,0,0,phHash);
  if (BVar8 == 0) {
    param_1[0x11] = 5;
    return 0;
  }
  uVar9 = 0xffffffff;
  pBVar12 = param_5;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    BVar4 = *pBVar12;
    pBVar12 = pBVar12 + 1;
  } while (BVar4 != '\0');
  BVar8 = CryptHashData(*phHash,param_5,~uVar9 - 1,0);
  if (BVar8 == 0) {
    param_1[0x11] = 6;
    return 0;
  }
  if (param_1[0xf] != 0) {
    CryptDestroyKey(param_1[0xf]);
    param_1[0xf] = 0;
  }
  BVar8 = CryptDeriveKey(*param_1,0x6801,*phHash,0,param_1 + 0xf);
  if (BVar8 == 0) {
    param_1[0x11] = 7;
    return 0;
  }
  cVar5 = FUN_00873d10(param_1[1],param_1[2]);
  if (cVar5 == '\0') {
    param_1[0x11] = 0x58;
    return 0;
  }
  uVar9 = param_4;
  if (param_1[2] < param_4) {
    uVar9 = param_1[2];
  }
  puVar11 = (undefined4 *)param_1[1];
  puVar13 = param_3;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  *(undefined1 *)((int)param_3 + uVar9) = 0;
  if (param_1[1] != 0) {
    FUN_0087aa78(param_1[1]);
    param_1[1] = 0;
  }
  return 1;
}



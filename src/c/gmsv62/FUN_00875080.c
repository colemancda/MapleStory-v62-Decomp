/* FUN_00875080 - 0x00875080 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char * FUN_00875080(char *param_1)

{
  char cVar1;
  LPCSTR lpString2;
  char cVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  byte local_400 [1024];
  
  if ((DAT_0097fd48 & 1) == 0) {
    DAT_0097fd48 = DAT_0097fd48 | 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0097fca8);
    FUN_008796d0(&LAB_00875250);
  }
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0097fca8);
  if (*param_1 == '\x01') {
    iVar10 = 0;
    cVar2 = param_1[1] * '\t';
    cVar1 = cVar2 + '\x03';
    param_1[2] = param_1[2] ^ param_1[1] * '\x03' + 0x65U;
    bVar8 = param_1[3] ^ cVar2 + 0x68U;
    uVar6 = (uint)CONCAT11(param_1[2],bVar8);
    param_1[3] = bVar8;
    if (uVar6 != 0) {
      do {
        cVar1 = (cVar1 + '\x01') * '\x03';
        param_1[iVar10] = param_1[iVar10 + 4] ^ cVar1 + 0x65U;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar6);
    }
    param_1[uVar6] = '\0';
  }
  DVar4 = GetCurrentThreadId();
  uVar6 = 1;
  pDVar5 = &DAT_0097fccc;
  do {
    if (*pDVar5 == DVar4) {
      uVar3 = uVar6;
      if (uVar6 != 0) goto LAB_00875171;
      break;
    }
    pDVar5 = pDVar5 + 1;
    uVar6 = uVar6 + 1;
    uVar3 = 0;
  } while ((int)pDVar5 < 0x97fcf0);
  uVar6 = uVar3;
  if (DAT_00980150 < 9) {
    uVar6 = DAT_00980150 + 1;
    DAT_00980150 = uVar6;
    *(DWORD *)(&DAT_0097fcc8 + uVar6 * 4) = DVar4;
  }
LAB_00875171:
  lpString2 = (LPCSTR)(&DAT_0097fcf0)[uVar6];
  (&DAT_0097fcf0)[uVar6] = param_1;
  if ((((lpString2 != (LPCSTR)0x0) && (lpString2 != param_1)) && (*param_1 != '\x01')) &&
     (*lpString2 != '\x01')) {
    lstrcpyA((LPSTR)local_400,lpString2);
    iVar10 = lstrlenA((LPCSTR)local_400);
    if (iVar10 != 0) {
      *lpString2 = '\x01';
      iVar9 = 4;
      lpString2[1] = '\0';
      iVar7 = 0;
      cVar1 = '\x03';
      if (0 < iVar10) {
        do {
          cVar1 = (cVar1 + '\x01') * '\x03';
          lpString2[iVar9] = local_400[iVar7] ^ cVar1 + 0x65U;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar10);
      }
      lpString2[iVar9] = '\0';
      lpString2[2] = (byte)((uint)(iVar9 + -4) >> 8) ^ 0x65;
      lpString2[3] = (byte)(iVar9 + -4) ^ 0x68;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0097fca8);
  return param_1;
}



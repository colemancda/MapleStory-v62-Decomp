/* FUN_00870890 - 0x00870890 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00870890(int *param_1,uint param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  HANDLE hFileMappingObject;
  int *lpBaseAddress;
  HANDLE hHandle;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ed74);
  hFileMappingObject = OpenFileMappingA(0xf001f,0,pCVar2);
  if (hFileMappingObject == (HANDLE)0x0) {
    pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ed68);
    hFileMappingObject = OpenFileMappingA(0xf001f,0,pCVar2);
    if (hFileMappingObject == (HANDLE)0x0) {
      return 0;
    }
  }
  lpBaseAddress = MapViewOfFile(hFileMappingObject,0xf001f,0,0,0x1000);
  if (lpBaseAddress != (int *)0x0) {
    pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ed54);
    hHandle = OpenMutexA(0x100000,0,pCVar2);
    if (hHandle == (HANDLE)0x0) {
      pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096ed48);
      hHandle = OpenMutexA(0x100000,0,pCVar2);
      if (hHandle == (HANDLE)0x0) {
        UnmapViewOfFile(lpBaseAddress);
        CloseHandle(hFileMappingObject);
        return 0;
      }
    }
    WaitForSingleObject(hHandle,0xffffffff);
    iVar1 = *lpBaseAddress;
    piVar3 = lpBaseAddress;
    while ((piVar4 = piVar3, iVar1 != 0 &&
           (piVar3 = (int *)((int)piVar3 + iVar1), piVar4 = lpBaseAddress,
           (uint)((int)piVar3 - (int)lpBaseAddress) < 0xffc))) {
      iVar1 = *piVar3;
    }
    piVar3 = lpBaseAddress;
    if ((uint)((int)piVar4 - (int)lpBaseAddress) < 0xffc - param_2) {
      piVar3 = piVar4;
      for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar3 = *param_1;
        param_1 = param_1 + 1;
        piVar3 = piVar3 + 1;
      }
      for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar3 = (char)*param_1;
        param_1 = (int *)((int)param_1 + 1);
        piVar3 = (int *)((int)piVar3 + 1);
      }
      piVar3 = (int *)((int)piVar4 + param_2);
    }
    *piVar3 = 0;
    UnmapViewOfFile(lpBaseAddress);
    CloseHandle(hFileMappingObject);
    ReleaseMutex(hHandle);
    CloseHandle(hHandle);
    return 1;
  }
  CloseHandle(hFileMappingObject);
  return 0;
}



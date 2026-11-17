/* FUN_0086dea0 - 0x0086dea0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0086dea0(int param_1,DWORD param_2)

{
  BOOL BVar1;
  LPCSTR pCVar2;
  HANDLE hHandle;
  DWORD DVar3;
  undefined4 uVar4;
  _SECURITY_ATTRIBUTES *lpMutexAttributes;
  _SECURITY_ATTRIBUTES local_20;
  undefined1 local_14 [20];
  
  local_20.lpSecurityDescriptor = local_14;
  local_20.nLength = 0xc;
  local_20.bInheritHandle = 0;
  lpMutexAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  BVar1 = InitializeSecurityDescriptor(local_14,1);
  if (BVar1 != 0) {
    BVar1 = SetSecurityDescriptorDacl(local_14,1,(PACL)0x0,0);
    if (BVar1 != 0) {
      lpMutexAttributes = &local_20;
    }
  }
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096e054);
  hHandle = CreateMutexA(lpMutexAttributes,0,pCVar2);
  if (hHandle == (HANDLE)0x0) {
    pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096e048);
    hHandle = CreateMutexA(lpMutexAttributes,0,pCVar2);
    if (hHandle == (HANDLE)0x0) {
      GetLastError();
      DVar3 = GetLastError();
      uVar4 = FUN_00875080(&DAT_0096e314,DVar3);
      FUN_0086cff0(param_1 + 0x24,uVar4);
      return 0;
    }
  }
  DVar3 = GetLastError();
  if (DVar3 == 0xb7) {
    DVar3 = WaitForSingleObject(hHandle,param_2);
    if (DVar3 == 0x102) {
      uVar4 = FUN_00875080(&DAT_0096e2f8);
      FUN_0086cff0(param_1 + 0x24,uVar4);
      CloseHandle(hHandle);
      return 0;
    }
  }
  ReleaseMutex(hHandle);
  CloseHandle(hHandle);
  return 1;
}



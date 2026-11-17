/* FUN_0043cb7b - 0x0043cb7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043cb7b(void)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  _TOKEN_PRIVILEGES local_18;
  HANDLE local_8;
  
  TokenHandle = &local_8;
  DesiredAccess = 0x20;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  if (BVar1 != 0) {
    local_18.PrivilegeCount = 1;
    local_18.Privileges[0].Luid.LowPart = 0;
    local_18.Privileges[0].Luid.HighPart = 0;
    local_18.Privileges[0].Attributes = 0;
    BVar1 = LookupPrivilegeValueA
                      ((LPCSTR)0x0,s_SeDebugPrivilege_009640d0,&local_18.Privileges[0].Luid);
    if (BVar1 != 0) {
      local_18.Privileges[0].Attributes = 2;
      AdjustTokenPrivileges(local_8,0,&local_18,0x10,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    }
    CloseHandle(local_8);
  }
  return;
}



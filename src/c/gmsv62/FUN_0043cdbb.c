/* FUN_0043cdbb - 0x0043cdbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043cdbb(void)

{
  HANDLE hFile;
  int local_450 [13];
  uint local_41c;
  undefined1 local_358 [260];
  CHAR local_254 [260];
  CHAR local_150 [260];
  short local_4c [30];
  LONG local_10;
  DWORD local_c;
  HANDLE local_8;
  
  GetSystemDirectoryA(local_254,0x104);
  FUN_0087b200(local_358,s_ws2_32_dll_009640ec);
  FUN_0087b210(local_254,&DAT_009640e8);
  FUN_0087b210(local_254,local_358);
  GetTempPathA(0x104,local_150);
  GetTempFileNameA(local_150,&DAT_009640e4,0,local_150);
  CopyFileA(local_254,local_150,0);
  hFile = CreateFileA(local_150,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_8 = hFile;
  if (hFile != (HANDLE)0xffffffff) {
    ReadFile(hFile,local_4c,0x40,&local_c,(LPOVERLAPPED)0x0);
    if (local_4c[0] == 0x5a4d) {
      SetFilePointer(hFile,local_10,(PLONG)0x0,0);
      ReadFile(local_8,local_450,0xf8,&local_c,(LPOVERLAPPED)0x0);
      if ((local_450[0] == 0x4550) && (0x80000000 < local_41c)) {
        local_41c = 0x10000000;
        SetFilePointer(local_8,local_10,(PLONG)0x0,0);
        WriteFile(local_8,local_450,0xf8,&local_c,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(local_8);
  }
  LoadLibraryExA(local_150,(HANDLE)0x0,8);
  return;
}



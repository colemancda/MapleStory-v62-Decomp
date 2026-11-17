/* FUN_0043cf43 - 0x0043cf43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043cf43(void)

{
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA local_34c;
  CHAR local_20c [260];
  CHAR local_108 [260];
  
  GetTempPathA(0x104,local_20c);
  FUN_0087b200(local_108,local_20c);
  FUN_0087b210(local_108,s_nst__tmp_009640f8);
  hFindFile = FindFirstFileA(local_108,&local_34c);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      FUN_0087b200(local_108,local_20c);
      FUN_0087b210(local_108,local_34c.cFileName);
      DeleteFileA(local_108);
      BVar1 = FindNextFileA(hFindFile,&local_34c);
    } while (BVar1 != 0);
    FindClose(hFindFile);
  }
  return;
}



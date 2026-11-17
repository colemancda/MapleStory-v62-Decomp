/* FUN_00872c40 - 0x00872c40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00872c40(undefined4 *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  HMODULE hLibModule;
  
  hLibModule = (HMODULE)*param_1;
  if (hLibModule != (HMODULE)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      FreeLibrary(hLibModule);
      DeleteFileA((LPCSTR)(param_1 + 1));
      *param_1 = 0;
      return;
    }
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,hLibModule);
    *param_1 = 0;
  }
  return;
}



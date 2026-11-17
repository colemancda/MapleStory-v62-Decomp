/* FUN_007d2937 - 0x007d2937 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d2937(LPCSTR param_1)

{
  HWND hWnd;
  BOOL BVar1;
  DWORD idAttach;
  DWORD DVar2;
  
  hWnd = FindWindowA((LPCSTR)0x0,param_1);
  if (hWnd != (HWND)0x0) {
    BVar1 = IsWindowEnabled(hWnd);
    if (BVar1 != 0) {
      idAttach = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
      BVar1 = 1;
      DVar2 = GetCurrentThreadId();
      AttachThreadInput(idAttach,DVar2,BVar1);
      BringWindowToTop(hWnd);
      BVar1 = 0;
      DVar2 = GetCurrentThreadId();
      AttachThreadInput(idAttach,DVar2,BVar1);
      (*DAT_0097b534)(hWnd,9);
      return 1;
    }
  }
  return 0;
}



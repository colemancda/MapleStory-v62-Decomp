/* FUN_007d264c - 0x007d264c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007d264c(int param_1)

{
  int *lpBuffer;
  int iVar1;
  LPSTR pCVar2;
  ushort uVar3;
  uint uVar4;
  char *pcVar5;
  
  lpBuffer = (int *)(param_1 + 0xc);
  if (*lpBuffer == 0) {
    FormatMessageA(0x1100,(LPCVOID)0x0,*(DWORD *)(param_1 + 4),0x400,(LPSTR)lpBuffer,0,
                   (va_list *)0x0);
    if ((LPCSTR)*lpBuffer == (LPCSTR)0x0) {
      pCVar2 = LocalAlloc(0,0x20);
      *lpBuffer = (int)pCVar2;
      if (pCVar2 != (LPSTR)0x0) {
        uVar4 = *(uint *)(param_1 + 4);
        if (((int)uVar4 < -0x7ffbfe00) || (-0x7ffb0001 < (int)uVar4)) {
          uVar3 = 0;
        }
        else {
          uVar3 = (short)uVar4 - 0x200;
        }
        if (uVar3 == 0) {
          pcVar5 = s_Unknown_error_0x_0lX_0096c37c;
        }
        else {
          uVar4 = (uint)uVar3;
          pcVar5 = s_IDispatch_error___d_0096c394;
        }
        wsprintfA(pCVar2,pcVar5,uVar4);
      }
    }
    else {
      iVar1 = lstrlenA((LPCSTR)*lpBuffer);
      if ((1 < iVar1) && (*(char *)(iVar1 + -1 + *lpBuffer) == '\n')) {
        *(undefined1 *)(iVar1 + -1 + *lpBuffer) = 0;
        if (*(char *)(iVar1 + -2 + *lpBuffer) == '\r') {
          *(undefined1 *)(iVar1 + -2 + *lpBuffer) = 0;
        }
      }
    }
  }
  return *lpBuffer;
}



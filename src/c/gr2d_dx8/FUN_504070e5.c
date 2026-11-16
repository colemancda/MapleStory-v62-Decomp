/* FUN_504070e5 - 0x504070e5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_504070e5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_50439058 & 1) == 0) {
    DAT_50439058 = DAT_50439058 | 1;
    if (DAT_50438fb8 == (HMODULE)0x0) {
      DAT_5043905c = (FARPROC)0x0;
      return -0x7fffbfff;
    }
    DAT_5043905c = GetProcAddress(DAT_50438fb8,s_NotifyAlloc_504354bc);
  }
  if (DAT_5043905c == (FARPROC)0x0) {
    return -0x7fffbfff;
  }
  iVar1 = (*DAT_5043905c)(param_1,param_2,param_3);
  return iVar1;
}



/* FUN_5140177e - 0x5140177e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __cdecl FUN_5140177e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_51411b70 & 1) == 0) {
    DAT_51411b70 = DAT_51411b70 | 1;
    if (DAT_514115b4 == (HMODULE)0x0) {
      DAT_51411b74 = (FARPROC)0x0;
      return -0x7fffbfff;
    }
    DAT_51411b74 = GetProcAddress(DAT_514115b4,s_FNotifyAlloc_5141016f + 1);
  }
  if (DAT_51411b74 == (FARPROC)0x0) {
    return -0x7fffbfff;
  }
  iVar1 = (*DAT_51411b74)(param_1,param_2,param_3);
  return iVar1;
}



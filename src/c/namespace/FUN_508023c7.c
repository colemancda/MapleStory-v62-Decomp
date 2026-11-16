/* FUN_508023c7 - 0x508023c7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __cdecl FUN_508023c7(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_5081ebb8 & 1) == 0) {
    DAT_5081ebb8 = DAT_5081ebb8 | 1;
    if (DAT_5081e5d4 == (HMODULE)0x0) {
      DAT_5081ebbc = (FARPROC)0x0;
      return -0x7fffbfff;
    }
    DAT_5081ebbc = GetProcAddress(DAT_5081e5d4,s_NotifyAlloc_5081d244);
  }
  if (DAT_5081ebbc == (FARPROC)0x0) {
    return -0x7fffbfff;
  }
  iVar1 = (*DAT_5081ebbc)(param_1,param_2,param_3);
  return iVar1;
}



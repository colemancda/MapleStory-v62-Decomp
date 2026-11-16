/* FUN_51812e4d - 0x51812e4d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_51812e4d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_5181feb8 & 1) == 0) {
    DAT_5181feb8 = DAT_5181feb8 | 1;
    if (DAT_5181fe14 == (HMODULE)0x0) {
      DAT_5181febc = (FARPROC)0x0;
      return -0x7fffbfff;
    }
    DAT_5181febc = GetProcAddress(DAT_5181fe14,s_NotifyAlloc_5181f448);
  }
  if (DAT_5181febc == (FARPROC)0x0) {
    return -0x7fffbfff;
  }
  iVar1 = (*DAT_5181febc)(param_1,param_2,param_3);
  return iVar1;
}



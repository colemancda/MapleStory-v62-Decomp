/* FUN_5000a86c - 0x5000a86c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5000a86c(HMODULE param_1)

{
  int *piVar1;
  
  DAT_50081fe0 = GetProcAddress(param_1,s_PcCreateObject_500194dc);
  DAT_50081fe4 = GetProcAddress(param_1,s_PcFreeUnusedLibraries_500194c4);
  _DAT_50081fe8 = GetProcAddress(param_1,s_PcSerializeObject_500194b0);
  _DAT_50081fec = GetProcAddress(param_1,s_PcSerializeString_5001949c);
  _DAT_50081ff0 = GetProcAddress(param_1,s_PcRootNameSpace_5001948c);
  piVar1 = (int *)&DAT_50081fe0;
  do {
    if (*piVar1 == 0) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_50081ff4);
  return 1;
}



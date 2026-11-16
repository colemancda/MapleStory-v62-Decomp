/* FUN_51405dde - 0x51405dde in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_51405dde(HMODULE param_1)

{
  int *piVar1;
  
  DAT_51411ad8 = GetProcAddress(param_1,s_PcCreateObject_514114c4);
  DAT_51411adc = GetProcAddress(param_1,s_PcFreeUnusedLibraries_514114ac);
  DAT_51411ae0 = GetProcAddress(param_1,s_PcSerializeObject_51411498);
  _DAT_51411ae4 = GetProcAddress(param_1,s_PcSerializeString_51411484);
  _DAT_51411ae8 = GetProcAddress(param_1,s_PcRootNameSpace_51411474);
  piVar1 = (int *)&DAT_51411ad8;
  do {
    if (*piVar1 == 0) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_51411aec);
  return 1;
}



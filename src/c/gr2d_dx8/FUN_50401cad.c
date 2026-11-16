/* FUN_50401cad - 0x50401cad in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_50401cad(HMODULE param_1)

{
  int *piVar1;
  
  DAT_50438f98 = GetProcAddress(param_1,s_PcCreateObject_50435204);
  DAT_50438f9c = GetProcAddress(param_1,s_PcFreeUnusedLibraries_504351ec);
  _DAT_50438fa0 = GetProcAddress(param_1,s_PcSerializeObject_504351d8);
  _DAT_50438fa4 = GetProcAddress(param_1,s_PcSerializeString_504351c4);
  _DAT_50438fa8 = GetProcAddress(param_1,s_PcRootNameSpace_504351b4);
  piVar1 = (int *)&DAT_50438f98;
  do {
    if (*piVar1 == 0) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_50438fac);
  return 1;
}



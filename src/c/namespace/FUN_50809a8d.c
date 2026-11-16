/* FUN_50809a8d - 0x50809a8d in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_50809a8d(HMODULE param_1)

{
  int *piVar1;
  
  DAT_5081eaf0 = GetProcAddress(param_1,s_PcCreateObject_5081e44c);
  DAT_5081eaf4 = GetProcAddress(param_1,s_PcFreeUnusedLibraries_5081e434);
  _DAT_5081eaf8 = GetProcAddress(param_1,s_PcSerializeObject_5081e420);
  DAT_5081eafc = GetProcAddress(param_1,s_PcSerializeString_5081e40c);
  _DAT_5081eb00 = GetProcAddress(param_1,s_PcRootNameSpace_5081e3fc);
  piVar1 = (int *)&DAT_5081eaf0;
  do {
    if (*piVar1 == 0) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_5081eb04);
  return 1;
}



/* FUN_00672bdb - 0x00672bdb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00672bdb(HMODULE param_1)

{
  int *piVar1;
  
  DAT_0097bc30 = GetProcAddress(param_1,s_PcCreateObject_00969f80);
  DAT_0097bc34 = GetProcAddress(param_1,s_PcFreeUnusedLibraries_00969f68);
  _DAT_0097bc38 = GetProcAddress(param_1,s_PcSerializeObject_00969f54);
  _DAT_0097bc3c = GetProcAddress(param_1,s_PcSerializeString_00969f40);
  DAT_0097bc40 = GetProcAddress(param_1,s_PcRootNameSpace_00969f30);
  piVar1 = (int *)&DAT_0097bc30;
  do {
    if (*piVar1 == 0) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_0097bc44);
  return 1;
}



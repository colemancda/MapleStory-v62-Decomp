/* FUN_510022d4 - 0x510022d4 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_510022d4(HMODULE param_1)

{
  int *piVar1;
  
  DAT_51009838 = GetProcAddress(param_1,s_PcCreateObject_510091bc);
  DAT_5100983c = GetProcAddress(param_1,s_PcFreeUnusedLibraries_510091a4);
  DAT_51009840 = GetProcAddress(param_1,s_PcSerializeObject_51009190);
  _DAT_51009844 = GetProcAddress(param_1,s_PcSerializeString_5100917c);
  DAT_51009848 = GetProcAddress(param_1,s_PcRootNameSpace_5100916c);
  piVar1 = (int *)&DAT_51009838;
  do {
    if (*piVar1 == 0) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_5100984c);
  return 1;
}



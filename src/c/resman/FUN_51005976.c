/* FUN_51005976 - 0x51005976 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __cdecl FUN_51005976(_onexit_t param_1)

{
  if (DAT_5100989c == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_5100989c,&DAT_51009898);
  return;
}



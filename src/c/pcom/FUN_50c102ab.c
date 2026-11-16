/* FUN_50c102ab - 0x50c102ab in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c102ab(_onexit_t param_1)

{
  if (DAT_50c21500 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_50c21500,&DAT_50c214fc);
  return;
}



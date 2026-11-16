/* FUN_50c0c914 - 0x50c0c914 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c0c914(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
  }
  return 0;
}



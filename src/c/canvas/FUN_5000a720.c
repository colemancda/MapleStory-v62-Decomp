/* FUN_5000a720 - 0x5000a720 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_5000a720(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2000) = 0;
    *(undefined4 *)(param_1 + 0x2004) = 0;
    *(undefined4 *)(param_1 + 0x2008) = 0;
    *(undefined4 *)(param_1 + 0x200c) = 0;
    *(undefined4 *)(param_1 + 0x2010) = 0;
    *(undefined4 *)(param_1 + 0x2014) = 0;
    *(undefined4 *)(param_1 + 0x2018) = 0;
    return param_1;
  }
  return 0;
}



/* FUN_5000630c - 0x5000630c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __cdecl FUN_5000630c(short *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 8) {
    *param_1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      (*DAT_50081da8)(*(int *)(param_1 + 4) + -4);
    }
    return 0;
  }
  uVar1 = Ordinal_9(param_1);
  return uVar1;
}



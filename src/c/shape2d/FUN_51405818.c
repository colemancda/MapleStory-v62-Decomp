/* FUN_51405818 - 0x51405818 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __cdecl FUN_51405818(short *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 8) {
    *param_1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      (*DAT_51411898)(*(int *)(param_1 + 4) + -4);
    }
    return 0;
  }
  uVar1 = Ordinal_9(param_1);
  return uVar1;
}



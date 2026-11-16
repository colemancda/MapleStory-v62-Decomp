/* FUN_5040278b - 0x5040278b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __cdecl FUN_5040278b(short *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 8) {
    *param_1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      (*DAT_50438d58)(*(int *)(param_1 + 4) + -4);
    }
    return 0;
  }
  uVar1 = Ordinal_9(param_1);
  return uVar1;
}



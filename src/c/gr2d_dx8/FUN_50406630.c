/* FUN_50406630 - 0x50406630 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint __fastcall FUN_50406630(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + -8);
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
  }
  return (uVar1 - 4) / 0x5c;
}



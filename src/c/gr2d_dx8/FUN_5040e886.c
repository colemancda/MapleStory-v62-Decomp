/* FUN_5040e886 - 0x5040e886 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5040e886(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    piVar2 = FUN_50405558(u_Gr2D_DX8_Gr2DLayer_504355b8);
    *param_2 = piVar2;
    iVar1 = (-(uint)(piVar2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}



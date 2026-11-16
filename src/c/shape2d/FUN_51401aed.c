/* FUN_51401aed - 0x51401aed in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51401aed(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    piVar2 = FUN_51402c90(u_Shape2D_Convex2D_514101d0);
    *param_2 = piVar2;
    uVar1 = 0;
  }
  return uVar1;
}



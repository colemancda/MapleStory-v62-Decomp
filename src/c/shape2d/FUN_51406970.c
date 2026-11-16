/* FUN_51406970 - 0x51406970 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51406970(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    piVar2 = FUN_51402c90(u_Shape2D_Vector2D_514114d4);
    *param_2 = piVar2;
    iVar1 = (-(uint)(piVar2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}



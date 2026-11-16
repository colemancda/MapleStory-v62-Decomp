/* FUN_51404ab9 - 0x51404ab9 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51404ab9(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_51404ca9();
    if (-1 < iVar1) {
      (**(code **)(iRam00000000 + 4))(0);
      FUN_51409cf6(0x10);
      FUN_514043ce((void *)0x10,param_1 + 0x10);
      uRam00000024 = *(undefined4 *)(param_1 + 0x24);
      *param_2 = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}



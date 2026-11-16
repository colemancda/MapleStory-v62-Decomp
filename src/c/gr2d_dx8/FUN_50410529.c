/* FUN_50410529 - 0x50410529 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_50410529(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_5041068c();
    if (-1 < iVar1) {
      (**(code **)(iRam00000000 + 4))(0);
      FUN_504068bd(0x10);
      FUN_50410645((void *)0x10,param_1 + 0x10);
      uRam00000024 = *(undefined4 *)(param_1 + 0x24);
      *param_2 = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* FUN_514071fe - 0x514071fe in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_514071fe(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_51404938();
    if (-1 < iVar1) {
      *param_2 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      iVar1 = 0;
    }
  }
  return iVar1;
}



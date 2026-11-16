/* FUN_50408beb - 0x50408beb in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


uint * FUN_50408beb(int param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    (*DAT_50438bd4)(0,0,param_1,0xffffffff,0,0,0,0);
    puVar1 = FUN_504015ff();
    (*DAT_50438bd4)(0,0,param_1,0xffffffff,puVar1,0x3fffffff,0,0);
  }
  return puVar1;
}



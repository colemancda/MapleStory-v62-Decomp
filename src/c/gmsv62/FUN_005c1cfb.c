/* FUN_005c1cfb - 0x005c1cfb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005c1cfb(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*param_1 + -4) >> 1;
  }
  FUN_0046fd34(param_2,uVar1 - param_3,0xffffffff);
  return param_2;
}



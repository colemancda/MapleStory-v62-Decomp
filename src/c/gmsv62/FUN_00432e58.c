/* FUN_00432e58 - 0x00432e58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00432e58(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (*DAT_0097b4c8)(0,0,param_1,0xffffffff,0,0);
    uVar1 = FUN_00402df5(0,(uVar2 & 0x7fffffff) - 1);
    (*DAT_0097b4c8)(0,0,param_1,0xffffffff,uVar1,0x3fffffff);
  }
  return uVar1;
}



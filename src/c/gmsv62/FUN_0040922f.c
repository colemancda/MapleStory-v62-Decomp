/* FUN_0040922f - 0x0040922f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0040922f(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_0097b4cc)(0,0,param_1,0xffffffff,0,0,0,0);
    uVar1 = FUN_004029b9(uVar1);
    (*DAT_0097b4cc)(0,0,param_1,0xffffffff,uVar1,0x3fffffff,0,0);
  }
  return uVar1;
}



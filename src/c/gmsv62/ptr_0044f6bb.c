/* ptr_0044f6bb - 0x0044f6bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_0044f6bb(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 == 0x201) {
    FUN_00450197(param_4,param_5);
    if ((int)*(uint *)(param_1 + 0x6c) < 0) {
      FUN_0074d6fb();
    }
    else {
      FUN_0044fcf6(*(uint *)(param_1 + 0x6c) & 0xfffffffe);
    }
  }
  return;
}



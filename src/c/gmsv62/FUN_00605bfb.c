/* FUN_00605bfb - 0x00605bfb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00605bfb(int param_1,int param_2,int param_3)

{
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0x20) == 0) && (0x15e < param_3)) {
    uStack_4 = 0;
  }
  else if (((param_2 < 0x79) || (((0x9b < param_2 || (param_3 < 0xfc)) || (0x11e < param_3)))) &&
          (((((param_2 < 0x5f || (0x108 < param_2)) || (param_3 < 0x73)) || (0xb7 < param_3)) &&
           (((param_2 < 0x89 || (0x119 < param_2)) || ((param_3 < 0xe8 || (0xf7 < param_3)))))))) {
    uStack_4 = 1;
  }
  else {
    uStack_4 = 2;
  }
  return uStack_4;
}



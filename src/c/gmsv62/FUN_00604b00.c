/* FUN_00604b00 - 0x00604b00 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00604b00(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_4;
  
  if (((*(int *)(param_1 + 4) < 0) && (0x14e < param_3)) || (0x1ba < param_3)) {
    uStack_4 = 0;
  }
  else if ((param_3 < 0xd2) || (0x122 < param_3)) {
    uStack_4 = 1;
  }
  else {
    uStack_4 = 2;
  }
  return uStack_4;
}



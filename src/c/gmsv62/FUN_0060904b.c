/* FUN_0060904b - 0x0060904b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0060904b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x84) == 1) {
    FUN_00607b46(param_2,param_3,param_4);
  }
  else {
    if (*(int *)(param_1 + 0x84) != 2) {
      return 0;
    }
    FUN_0060634d(param_2,param_3,param_4);
  }
  return 1;
}



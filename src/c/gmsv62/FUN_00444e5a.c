/* FUN_00444e5a - 0x00444e5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00444e5a(int *param_1,int param_2)

{
  param_1[0x11f] = param_2;
  FUN_00441501(0);
  (**(code **)(*param_1 + 0x10))(6,100,0);
  return 1;
}



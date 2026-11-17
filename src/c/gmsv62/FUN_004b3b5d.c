/* FUN_004b3b5d - 0x004b3b5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b3b5d(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = *(undefined4 *)(param_1 + 0x1c);
  local_8 = *(undefined4 *)(param_1 + 0x20);
  (*DAT_0097b57c)(&local_14,param_2,param_3);
  return;
}



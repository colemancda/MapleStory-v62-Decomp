/* FUN_007fe8af - 0x007fe8af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007fe8af(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
  *param_2 = uVar1;
  uVar1 = FUN_00413367(param_1 + 0x150,*(undefined4 *)(param_1 + 0x158));
  *param_3 = uVar1;
  return;
}



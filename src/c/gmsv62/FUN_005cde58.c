/* FUN_005cde58 - 0x005cde58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005cde58(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00413367(param_1 + 0x150,*(undefined4 *)(param_1 + 0x158));
  uVar2 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 4))
                    (uVar2,uVar1,*(undefined4 *)(param_1 + 0x140),param_1);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  return;
}



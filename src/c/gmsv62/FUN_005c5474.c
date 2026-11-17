/* FUN_005c5474 - 0x005c5474 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_005c5474(int param_1)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x15c) + 0x194) != 0) {
    return 1;
  }
  uVar1 = FUN_00413367(param_1 + 0x334,*(undefined4 *)(param_1 + 0x33c));
  return uVar1 & 1;
}



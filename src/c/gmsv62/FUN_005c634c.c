/* FUN_005c634c - 0x005c634c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005c634c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00413367(param_1 + 0x334,*(undefined4 *)(param_1 + 0x33c));
  uVar1 = FUN_005c63a6(uVar1,param_2);
  iVar2 = FUN_00413367(param_1 + 0x340,*(undefined4 *)(param_1 + 0x348));
  if (-1 < iVar2) {
    uVar1 = FUN_00413367(param_1 + 0x340,*(undefined4 *)(param_1 + 0x348));
  }
  return uVar1;
}



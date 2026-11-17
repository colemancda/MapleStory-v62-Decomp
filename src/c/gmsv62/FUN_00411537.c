/* FUN_00411537 - 0x00411537 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00411537(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00413367(param_2,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xc,*(undefined4 *)(param_2 + 0x14));
  param_1[1] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0x18,*(undefined4 *)(param_2 + 0x20));
  param_1[2] = uVar1;
  uVar1 = FUN_00413367(param_2 + 0x24,*(undefined4 *)(param_2 + 0x2c));
  param_1[3] = uVar1;
  return param_1;
}



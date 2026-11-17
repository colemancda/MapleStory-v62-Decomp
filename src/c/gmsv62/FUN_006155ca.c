/* FUN_006155ca - 0x006155ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006155ca(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00413367(param_1,*(undefined4 *)(param_1 + 8));
  iVar2 = FUN_00413367(param_1 + 0x18,*(undefined4 *)(param_1 + 0x20));
  if (iVar1 < iVar2) {
    iVar1 = FUN_00413367(param_1 + 0xc,*(undefined4 *)(param_1 + 0x14));
    iVar2 = FUN_00413367(param_1 + 0x24,*(undefined4 *)(param_1 + 0x2c));
    if (iVar1 < iVar2) {
      return 0;
    }
  }
  return 1;
}



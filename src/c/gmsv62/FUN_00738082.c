/* FUN_00738082 - 0x00738082 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00738082(int param_1)

{
  int iVar1;
  
  param_1 = param_1 / 100;
  if (param_1 == 0) {
    return 8;
  }
  if (param_1 == 1) {
    return 4;
  }
  if (param_1 == 2) {
    iVar1 = FUN_00413367(DAT_00978368 + 0x20d8,*(undefined4 *)(DAT_00978368 + 0x20e0));
    return (iVar1 * 3) / 0x28 + 0x1e;
  }
  if (2 < param_1) {
    if (param_1 < 5) {
      return 0xc;
    }
    if (param_1 == 5) {
      return 0x10;
    }
  }
  return 0;
}



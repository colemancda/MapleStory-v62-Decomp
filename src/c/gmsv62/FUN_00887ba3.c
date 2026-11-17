/* FUN_00887ba3 - 0x00887ba3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00887ba3(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_00980a1c)) {
    FUN_0087aa78(*(undefined **)(param_1 + 0xc));
    FUN_0087aa78(*(undefined4 *)(param_1 + 0x10));
    FUN_0087aa78(*(undefined4 *)(param_1 + 0x14));
    FUN_0087aa78(*(undefined4 *)(param_1 + 0x18));
    FUN_0087aa78(*(undefined4 *)(param_1 + 0x1c));
    FUN_0087aa78(*(undefined4 *)(param_1 + 0x20));
    FUN_0087aa78(*(undefined4 *)(param_1 + 0x24));
  }
  return;
}



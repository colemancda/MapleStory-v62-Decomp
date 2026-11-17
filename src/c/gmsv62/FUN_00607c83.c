/* FUN_00607c83 - 0x00607c83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00607c83(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00449913(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00414f29();
  FUN_004a2fef(0);
  return;
}



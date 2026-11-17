/* FUN_005b20ef - 0x005b20ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005b20ef(int param_1)

{
  if (*(int *)(param_1 + 0xc0) == 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x194) + 4) + 0x1c))(0);
  }
  *(undefined4 *)(param_1 + 0x710) = 0;
  FUN_005b6d0e();
  return;
}



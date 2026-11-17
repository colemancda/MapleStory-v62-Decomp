/* FUN_004a598a - 0x004a598a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004a598a(int param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    *(int *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x48);
    FUN_004b3daf();
    return;
  }
  return;
}



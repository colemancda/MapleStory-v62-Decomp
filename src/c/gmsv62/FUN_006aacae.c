/* FUN_006aacae - 0x006aacae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006aacae(int param_1)

{
  *(undefined4 *)(param_1 + 0x578) = 1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x58c) + 4) + 0x1c))(0);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x594) + 4) + 0x1c))(0);
  return;
}



/* FUN_006b702b - 0x006b702b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006b702b(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0x1e;
  *(undefined4 *)(param_1 + 0x80) = 0x16;
  *(undefined4 *)(param_1 + 0x88) = 0x10a;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x84) + 0x2c;
  return;
}



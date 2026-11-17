/* ptr_007f91d9 - 0x007f91d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_007f91d9(int param_1)

{
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x468) == 0) {
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  return;
}



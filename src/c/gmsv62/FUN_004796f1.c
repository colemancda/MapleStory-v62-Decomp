/* FUN_004796f1 - 0x004796f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004796f1(int param_1)

{
  if ((((-1 < *(int *)(param_1 + 4)) && (*(int *)(param_1 + 4) < 0x19)) &&
      (-1 < *(int *)(param_1 + 8))) &&
     (((*(int *)(param_1 + 8) < 0x3d && (-1 < *(int *)(param_1 + 0xc))) &&
      (*(int *)(param_1 + 0xc) < 0x3d)))) {
    return 1;
  }
  return 0;
}



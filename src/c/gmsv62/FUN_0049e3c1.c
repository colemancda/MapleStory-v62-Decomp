/* FUN_0049e3c1 - 0x0049e3c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0049e3c1(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(DAT_00973cd8 + 0x18);
  *(undefined4 *)(param_1 + 0x5c) = 1;
  FUN_004b3daf();
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_0049e3fa();
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = 4;
  FUN_0049e52b();
  return;
}



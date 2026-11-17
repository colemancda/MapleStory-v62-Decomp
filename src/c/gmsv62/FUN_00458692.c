/* FUN_00458692 - 0x00458692 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00458692(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x500) = param_2;
  FUN_0048faa2();
  FUN_0049514b();
  FUN_004586c2(0);
  return;
}



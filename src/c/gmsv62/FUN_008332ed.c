/* FUN_008332ed - 0x008332ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_008332ed(int param_1)

{
  FUN_004b2699((*(int *)(*(int *)(param_1 + 0x580) + 0x3c) + 1) %
               *(int *)(*(int *)(param_1 + 0x580) + 0x48));
  return;
}



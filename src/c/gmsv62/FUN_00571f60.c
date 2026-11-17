/* FUN_00571f60 - 0x00571f60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00571f60(int param_1,int param_2)

{
  return param_2 + *(int *)(param_1 + 0xf8) * 3;
}



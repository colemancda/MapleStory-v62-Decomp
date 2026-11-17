/* FUN_00839ae2 - 0x00839ae2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_00839ae2(int param_1)

{
  return *(uint *)(param_1 + 0x108) >> 0x12 & 1;
}



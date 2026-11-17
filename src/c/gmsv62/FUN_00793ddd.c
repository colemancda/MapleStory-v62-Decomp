/* FUN_00793ddd - 0x00793ddd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_00793ddd(int param_1)

{
  return (*(uint *)(param_1 + 0x4b4) & 0xfffffffe) == 0x12;
}



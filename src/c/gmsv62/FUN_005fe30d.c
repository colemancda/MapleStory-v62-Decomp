/* FUN_005fe30d - 0x005fe30d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_005fe30d(int param_1)

{
  return *(int *)(param_1 + 0xac0) == *(int *)(param_1 + 0xc0);
}



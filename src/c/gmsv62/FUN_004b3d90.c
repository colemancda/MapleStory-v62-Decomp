/* FUN_004b3d90 - 0x004b3d90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_004b3d90(int param_1)

{
  return *(uint *)(DAT_00978364 + 0x80) == (-(uint)(param_1 != 0) & param_1 + 4U);
}



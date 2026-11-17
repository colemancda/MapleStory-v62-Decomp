/* FUN_00883b94 - 0x00883b94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00883b94(uint param_1)

{
  if ((0x972a5f < param_1) && (param_1 < 0x972cc1)) {
    FUN_0087d9ec(((int)(param_1 - 0x972a60) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



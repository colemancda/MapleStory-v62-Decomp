/* FUN_00883bc3 - 0x00883bc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00883bc3(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_0087d9ec(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



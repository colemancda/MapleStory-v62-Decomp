/* FUN_00746819 - 0x00746819 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00746819(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 8) {
    *param_2 = (&DAT_0096b648)[param_1 * 2];
    *param_3 = (&DAT_0096b64c)[param_1 * 2];
  }
  return;
}



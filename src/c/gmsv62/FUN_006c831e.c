/* FUN_006c831e - 0x006c831e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c831e(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 0x7f) {
    *param_2 = (&DAT_0096aa50)[param_1 * 2];
    *param_3 = (&DAT_0096aa54)[param_1 * 2];
  }
  return;
}



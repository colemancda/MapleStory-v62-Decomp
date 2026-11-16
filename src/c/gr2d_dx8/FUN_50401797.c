/* FUN_50401797 - 0x50401797 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50401797(void)

{
  _DAT_504390a4 = FUN_504015ff();
  if (_DAT_504390a4 == (uint *)0x0) {
    _DAT_504390a4 = (uint *)0x0;
  }
  else {
    *_DAT_504390a4 = (uint)&PTR_LAB_5042c2b0;
    _DAT_504390a4[1] = (uint)DAT_50438f48;
    DAT_50438f48 = _DAT_504390a4;
    _DAT_504390a4[2] = 0;
    _DAT_504390a4[3] = 0;
    _DAT_504390a4[5] = 0;
    *_DAT_504390a4 = (uint)&PTR_FUN_5042c2ac;
  }
  return;
}



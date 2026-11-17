/* FUN_006c97ae - 0x006c97ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006c97ae(int param_1)

{
  if (0x18 < param_1) {
    if (param_1 < 0x1e) {
      param_1 = param_1 + 0x19;
    }
    else {
      param_1 = param_1 + 0x46;
    }
  }
  return param_1;
}



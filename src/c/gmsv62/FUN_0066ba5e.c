/* FUN_0066ba5e - 0x0066ba5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0066ba5e(int param_1)

{
  if (param_1 < 0xc9) {
    if (param_1 < 1) {
      param_1 = 1;
    }
    return *(undefined4 *)(&DAT_0097aa18 + param_1 * 4);
  }
  return 0x7fffffff;
}



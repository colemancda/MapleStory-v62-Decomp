/* ptr_514023f4 - 0x514023f4 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 ptr_514023f4(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}



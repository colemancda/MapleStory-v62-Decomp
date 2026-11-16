/* ptr_514088a9 - 0x514088a9 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int ptr_514088a9(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 - param_2;
    if (0 < param_1) {
      param_1 = param_1 % param_3;
      goto LAB_514088d6;
    }
    if (-param_1 % param_3 != 0) {
      param_1 = param_3 - -param_1 % param_3;
      goto LAB_514088d6;
    }
  }
  param_1 = 0;
LAB_514088d6:
  return param_1 + param_2;
}



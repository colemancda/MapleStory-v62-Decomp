/* ptr_5041334c - 0x5041334c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ptr_5041334c(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = -(*param_2 * *param_3 + param_2[2] * param_3[2] + param_2[1] * param_3[1]);
  return;
}



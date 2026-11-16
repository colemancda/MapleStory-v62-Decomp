/* FUN_5040cf8d - 0x5040cf8d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_5040cf8d(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5042d3a4;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_5042da08;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_5042da04;
  param_1[3] = &PTR_LAB_5042da00;
  return param_1;
}



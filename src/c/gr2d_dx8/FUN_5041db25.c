/* FUN_5041db25 - 0x5041db25 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5041db25(uint param_1)

{
  float fVar1;
  float *in_EAX;
  
  fVar1 = _DAT_5042e204;
  *in_EAX = (float)(param_1 >> 0xb & 0x1f) * _DAT_5042e204;
  in_EAX[1] = (float)(param_1 >> 5 & 0x3f) * _DAT_5042e200;
  in_EAX[2] = (float)(param_1 & 0x1f) * fVar1;
  in_EAX[3] = 1.0;
  return;
}



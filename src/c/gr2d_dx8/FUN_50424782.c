/* FUN_50424782 - 0x50424782 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50424782(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_5042fa90;
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[2] = uVar1 << 0x20;
  param_1[7] = uVar1 << 0x20;
  FastExitMediaState();
  return;
}



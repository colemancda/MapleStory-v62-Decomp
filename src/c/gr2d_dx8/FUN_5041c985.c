/* FUN_5041c985 - 0x5041c985 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5041c985(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_5042e1d8;
  if ((*(int *)(param_1 + 4) != 0x32545844) && (*(int *)(param_1 + 4) != 0x33545844)) {
    uVar1 = _DAT_5042e1cc;
  }
  *(undefined4 *)(param_1 + 0x106c) = uVar1;
  *(float *)(param_1 + 0x1070) = 1.0 / *(float *)(param_1 + 0x106c);
  *(float *)(param_1 + 0x1c) =
       (float)(int)ROUND(*(float *)(param_1 + 0x1c) * _DAT_5042e1d4 + _DAT_5042e12c) * _DAT_5042e204
  ;
  *(float *)(param_1 + 0x20) =
       (float)(int)ROUND(*(float *)(param_1 + 0x20) * _DAT_5042e1d0 + _DAT_5042e12c) * _DAT_5042e200
  ;
  *(float *)(param_1 + 0x24) =
       (float)(int)ROUND(*(float *)(param_1 + 0x24) * _DAT_5042e1d4 + _DAT_5042e12c) * _DAT_5042e204
  ;
  *(float *)(param_1 + 0x28) =
       (float)(int)ROUND(*(float *)(param_1 + 0x106c) * *(float *)(param_1 + 0x28) + _DAT_5042e12c)
       * *(float *)(param_1 + 0x1070);
  return;
}



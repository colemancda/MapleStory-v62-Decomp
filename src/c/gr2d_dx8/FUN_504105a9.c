/* FUN_504105a9 - 0x504105a9 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_504105a9(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5042da3c;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_50438a3c);
  FUN_504105cd();
  return;
}



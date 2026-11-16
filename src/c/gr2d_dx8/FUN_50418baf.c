/* FUN_50418baf - 0x50418baf in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50418baf(undefined4 param_1)

{
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)param_1 >> 0x10),in_FPUControlWord);
  DAT_50438fdc = local_8;
  return;
}



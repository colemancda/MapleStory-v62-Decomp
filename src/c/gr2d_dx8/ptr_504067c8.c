/* ptr_504067c8 - 0x504067c8 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall ptr_504067c8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xe0 + param_2 * 4) = param_3;
  return;
}



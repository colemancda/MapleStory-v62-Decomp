/* FUN_50405008 - 0x50405008 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


bool __thiscall FUN_50405008(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_5042a358(0x80004003);
  }
  return *(int *)this == 0;
}



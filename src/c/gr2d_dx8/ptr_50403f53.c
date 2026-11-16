/* ptr_50403f53 - 0x50403f53 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50403f53(int param_1)

{
  *(uint *)(param_1 + 0x388) = (uint)((int)*(uint *)(param_1 + 0x388) < 1);
  return 0;
}



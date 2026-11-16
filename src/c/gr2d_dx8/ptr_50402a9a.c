/* ptr_50402a9a - 0x50402a9a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall ptr_50402a9a(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(param_1 + 4) * 0x1f400) / *(int *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 0xc) = iVar1;
  return;
}



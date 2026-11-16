/* FUN_50415110 - 0x50415110 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50415110(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (*DAT_50435d30)(*(undefined4 *)(param_1[1] + 0x18),*(undefined4 *)(iVar1 + 0x18),
                  *(undefined4 *)(iVar1 + 0x1058),*(undefined4 *)(iVar1 + 0x105c),
                  *(undefined4 *)(iVar1 + 0x1050),*(undefined4 *)(param_1[1] + 0x1050));
  return;
}



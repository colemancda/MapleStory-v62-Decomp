/* FUN_50405ec4 - 0x50405ec4 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __cdecl FUN_50405ec4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_50405ee9(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_50405ee9(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}



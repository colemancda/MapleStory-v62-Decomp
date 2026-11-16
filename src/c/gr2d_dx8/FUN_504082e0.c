/* FUN_504082e0 - 0x504082e0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_504082e0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 10) {
    return 1;
  }
  if (param_1 < 100) {
    return 2;
  }
  if (param_1 < 1000) {
    return 3;
  }
  if (param_1 < 10000) {
    return 4;
  }
  if (param_1 < 100000) {
    return 5;
  }
  iVar2 = 6;
  uVar1 = param_1 / 100000;
  while( true ) {
    uVar1 = uVar1 / 10;
    if (uVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* FUN_5000f104 - 0x5000f104 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5000f104(int *param_1)

{
  int iVar1;
  div_t dVar2;
  
  param_1[4] = param_1[4] + param_1[2];
  dVar2 = div(param_1[4],param_1[3]);
  iVar1 = dVar2.quot;
  if (param_1[5] < 1) {
    iVar1 = -iVar1;
  }
  *param_1 = *param_1 + iVar1;
  param_1[4] = dVar2.rem;
  return;
}



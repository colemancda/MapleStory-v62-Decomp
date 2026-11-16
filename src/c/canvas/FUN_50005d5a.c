/* FUN_50005d5a - 0x50005d5a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_50005d5a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5000711d(param_1);
  _lrotr(iVar1 + param_1[3] + param_1[2] + param_1[1],5);
  return;
}



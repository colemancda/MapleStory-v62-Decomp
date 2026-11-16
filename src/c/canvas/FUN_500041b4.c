/* FUN_500041b4 - 0x500041b4 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __cdecl FUN_500041b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_500041d9(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_500041d9(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}



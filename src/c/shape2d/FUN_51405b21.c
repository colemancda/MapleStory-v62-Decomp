/* FUN_51405b21 - 0x51405b21 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __cdecl FUN_51405b21(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_51405b46(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_51405b46(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}



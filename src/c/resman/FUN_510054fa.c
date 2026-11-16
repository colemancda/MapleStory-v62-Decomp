/* FUN_510054fa - 0x510054fa in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 __cdecl FUN_510054fa(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_5100551f(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_5100551f(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}



/* FUN_510041da - 0x510041da in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


uint __cdecl FUN_510041da(int *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = _lrotr(param_1[1],5);
  uVar2 = FUN_51005629(param_1);
  return uVar2 ^ uVar1;
}



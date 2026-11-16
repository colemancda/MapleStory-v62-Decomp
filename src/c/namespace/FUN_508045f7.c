/* FUN_508045f7 - 0x508045f7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 __cdecl FUN_508045f7(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_5080461c(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_5080461c(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}



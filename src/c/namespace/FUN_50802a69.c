/* FUN_50802a69 - 0x50802a69 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_50802a69(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_5080e45c();
  if ((iVar1 == 0) && (param_1 != 0)) {
    (*(code *)**(undefined4 **)(param_1 + 0x44))(1);
  }
  return iVar1;
}



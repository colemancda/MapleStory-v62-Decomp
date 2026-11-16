/* FUN_5080255e - 0x5080255e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080255e(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x18))();
  if ((iVar1 == 0) && (param_1 != 0)) {
    (*(code *)**(undefined4 **)(param_1 + 0x44))(1);
  }
  return iVar1;
}



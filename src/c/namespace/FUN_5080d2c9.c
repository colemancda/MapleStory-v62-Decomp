/* FUN_5080d2c9 - 0x5080d2c9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint * FUN_5080d2c9(int param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    (*DAT_5081e734)(0,0,param_1,0xffffffff,0,0,0,0);
    puVar1 = FUN_50803b07();
    (*DAT_5081e734)(0,0,param_1,0xffffffff,puVar1,0x3fffffff,0,0);
  }
  return puVar1;
}



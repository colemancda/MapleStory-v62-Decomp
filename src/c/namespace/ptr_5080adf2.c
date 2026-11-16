/* ptr_5080adf2 - 0x5080adf2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 ptr_5080adf2(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == (undefined2 *)0x0) || ((*(byte *)(*(int *)(param_1 + 0x1c) + 8) & 0x40) == 0)) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = 0x4011;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x40);
    uVar1 = 0;
  }
  return uVar1;
}



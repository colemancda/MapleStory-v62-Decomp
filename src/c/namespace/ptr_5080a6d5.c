/* ptr_5080a6d5 - 0x5080a6d5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


bool ptr_5080a6d5(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1[7] + 8) & 0x20) == 0;
  if (bVar1) {
    *param_3 = 0;
  }
  else {
    (**(code **)(*param_1 + 4))(param_1);
    *param_2 = param_1;
  }
  return bVar1;
}



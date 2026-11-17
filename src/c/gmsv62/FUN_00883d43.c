/* FUN_00883d43 - 0x00883d43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00883d43(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_00883e05(0);
    return uVar1;
  }
  FUN_00883b94(param_1);
  uVar1 = FUN_00883d72(param_1);
  FUN_00883be6(param_1);
  return uVar1;
}



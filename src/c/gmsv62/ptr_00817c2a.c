/* ptr_00817c2a - 0x00817c2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00817c2a(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_009796d4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 4))(param_1);
  }
  return uVar1;
}



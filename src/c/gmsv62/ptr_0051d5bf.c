/* ptr_0051d5bf - 0x0051d5bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte ptr_0051d5bf(int param_1,undefined4 param_2,byte param_3)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = (bool)(param_3 & 1);
  }
  else {
    bVar1 = param_1 < 0;
  }
  return bVar1 | 6;
}



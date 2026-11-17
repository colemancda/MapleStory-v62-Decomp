/* ptr_00452719 - 0x00452719 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool ptr_00452719(int param_1)

{
  if (param_1 == 0x42436470) {
    FUN_0045246d();
  }
  else if (param_1 != 0x4243666c) {
    return param_1 == 0x4243746f;
  }
  return true;
}



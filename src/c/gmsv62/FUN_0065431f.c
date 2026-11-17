/* FUN_0065431f - 0x0065431f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4
FUN_0065431f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00654103(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_0065421a(param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



/* FUN_0056a71f - 0x0056a71f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0056a71f(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0056aca2(param_2);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  FUN_00414f8b(param_1 + 2);
  return puVar1;
}



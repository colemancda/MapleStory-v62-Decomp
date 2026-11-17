/* FUN_004171ec - 0x004171ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004171ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041a425(param_2);
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb(iVar1);
  }
  return param_1;
}



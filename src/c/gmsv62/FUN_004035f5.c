/* FUN_004035f5 - 0x004035f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_004035f5(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  if (*param_2 != 0) {
    iVar1 = FUN_00404c0e(param_2);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb(iVar1);
    }
  }
  return param_1;
}



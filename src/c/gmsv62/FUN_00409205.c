/* FUN_00409205 - 0x00409205 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00409205(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = FUN_0040922f(*param_1);
    param_1[1] = iVar1;
    if ((iVar1 == 0) && (*param_1 != 0)) {
      FUN_00878dfb(0x8007000e);
    }
  }
  return param_1[1];
}



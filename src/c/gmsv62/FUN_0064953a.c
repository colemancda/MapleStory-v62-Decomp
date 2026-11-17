/* FUN_0064953a - 0x0064953a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064953a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(DAT_00978368 + 0x3150) == 0) ||
     (((param_2 = param_2 / 10000, param_2 != 200 && (param_2 != 0xc9)) && (param_2 != 0xca)))) {
    uVar1 = 0;
  }
  else {
    __ftol();
    uVar1 = __ftol();
  }
  return uVar1;
}



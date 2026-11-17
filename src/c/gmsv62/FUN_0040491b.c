/* FUN_0040491b - 0x0040491b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


VARIANTARG * __thiscall FUN_0040491b(VARIANTARG *param_1,undefined2 *param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    FUN_00879c20(param_1,param_2,0x10);
    *param_2 = 0;
  }
  else {
    VariantInit(param_1);
    iVar1 = FUN_00402e32(param_1,param_2);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
  }
  return param_1;
}



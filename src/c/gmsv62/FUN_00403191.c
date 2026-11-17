/* FUN_00403191 - 0x00403191 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


VARIANTARG * __thiscall FUN_00403191(VARIANTARG *param_1,undefined4 param_2)

{
  int iVar1;
  
  VariantInit(param_1);
  iVar1 = FUN_00402e32(param_1,param_2);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  return param_1;
}



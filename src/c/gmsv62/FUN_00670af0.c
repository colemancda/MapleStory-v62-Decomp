/* FUN_00670af0 - 0x00670af0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00670af0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80;
  param_2 = param_2 + 0x3b;
  FUN_006f5500(1);
  uVar1 = FUN_006f565d(param_2);
  FUN_006f5512(uVar1,uVar2);
  return param_1;
}



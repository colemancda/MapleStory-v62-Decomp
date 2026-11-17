/* FUN_006f5d2c - 0x006f5d2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_006f5d2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_006f5512(param_2,0x80);
  FUN_006f5500(param_1);
  iVar2 = FUN_006f5609(uVar1);
  return iVar2 < 0;
}



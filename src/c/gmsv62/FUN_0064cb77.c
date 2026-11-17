/* FUN_0064cb77 - 0x0064cb77 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0064cb77(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044dddc(param_1);
  if ((iVar1 == 0x2d) || (iVar1 == 0x2e)) {
    iVar1 = param_2 / 1000 + -0x139c;
  }
  else if (iVar1 == 0x2f) {
    iVar1 = param_2 / 1000 + -0x139d;
  }
  else {
    if (iVar1 != 0x31) {
      return false;
    }
    iVar1 = param_2 / 1000 + -0x139e;
  }
  return iVar1 == 0;
}



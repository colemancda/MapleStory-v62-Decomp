/* FUN_0073302a - 0x0073302a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0073302a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044dddc(param_1);
  if ((iVar1 == 0x2d) || (param_1 == 0x16763f)) {
    iVar1 = param_2 / 1000 + -0x80c;
  }
  else if (iVar1 == 0x2e) {
    iVar1 = param_2 / 1000 + -0x80d;
  }
  else if (iVar1 == 0x2f) {
    iVar1 = param_2 / 10000 + -0xcf;
  }
  else {
    if (iVar1 != 0x31) {
      return false;
    }
    iVar1 = param_2 / 10000 + -0xe9;
  }
  return iVar1 == 0;
}



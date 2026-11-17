/* FUN_0062d64e - 0x0062d64e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0062d64e(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_0045e2eb();
  return iVar1 == param_2;
}



/* FUN_00653336 - 0x00653336 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00653336(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 0x3d0e36) {
    param_1 = param_1 + -2;
  }
  param_1 = param_1 + param_3 + param_4;
  iVar1 = 2;
  if (2 < param_1) {
    iVar1 = param_1;
  }
  if (9 < iVar1) {
    iVar1 = 10;
  }
  return iVar1;
}



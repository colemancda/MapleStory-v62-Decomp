/* FUN_00545b91 - 0x00545b91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00545b91(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 % 0x10) * 0x14;
  *param_1 = 2;
  param_1[1] = iVar1 + 1;
  param_1[2] = 0x1f6;
  param_1[3] = iVar1 + 0x15;
  return;
}



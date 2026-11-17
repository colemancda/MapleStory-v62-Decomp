/* FUN_007ded43 - 0x007ded43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ded43(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 % 6) * 0x46;
  iVar1 = (param_2 / 6) * 0x15;
  *param_1 = iVar2 + 9;
  param_1[1] = iVar1 + 0x43;
  param_1[2] = iVar2 + 0x4d;
  param_1[3] = iVar1 + 0x57;
  return;
}



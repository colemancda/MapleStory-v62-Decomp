/* FUN_00592cf6 - 0x00592cf6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00592cf6(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 % 4) * 0x5e;
  iVar1 = (param_2 / 4) * 0x20;
  *param_1 = iVar2 + 0x23;
  param_1[1] = iVar1 + 0x39;
  param_1[2] = iVar2 + 0x7f;
  param_1[3] = iVar1 + 0x57;
  return;
}



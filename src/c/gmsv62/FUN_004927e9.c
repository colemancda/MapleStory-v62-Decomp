/* FUN_004927e9 - 0x004927e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004927e9(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((param_2 % 10) % 2) * 0xce;
  iVar1 = ((param_2 % 10) / 2) * 0x51;
  *param_1 = iVar2 + 2;
  param_1[1] = iVar1 + 2;
  param_1[2] = iVar2 + 0xca;
  param_1[3] = iVar1 + 0x52;
  return;
}



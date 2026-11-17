/* FUN_00885d0b - 0x00885d0b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00885d0b(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (psVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *psVar1 != 0)); psVar1 = psVar1 + 1) {
  }
  if (*psVar1 != 0) {
    return param_2;
  }
  return (int)psVar1 - (int)param_1 >> 1;
}



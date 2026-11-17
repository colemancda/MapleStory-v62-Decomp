/* FUN_0064c109 - 0x0064c109 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0064c109(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      FUN_00402f41(*(int *)(param_1 + 0x60) + (uint)(iVar1 != 0) * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}



/* FUN_004b8ab5 - 0x004b8ab5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004b8ab5(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b99cc(param_2);
  FUN_004653ef(param_1);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  return iVar1;
}



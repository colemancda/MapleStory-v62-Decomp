/* FUN_00872990 - 0x00872990 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00872990(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00402605(0x18);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}



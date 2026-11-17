/* FUN_004c2450 - 0x004c2450 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte FUN_004c2450(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
      iVar1 = FUN_0045e2eb();
      return -(iVar1 / 10000 == 0x69) & 5;
    }
  }
  else {
    if ((param_2 / 10000 == 0x69) && (*(int *)(param_1 + 0x34) != 0)) {
      return 6;
    }
    if (((param_2 / 10000 == 0x6a) && (*(int *)(param_1 + 0x2c) != 0)) &&
       (iVar1 = FUN_0045e2eb(), iVar1 / 10000 == 0x69)) {
      return 5;
    }
  }
  return 0;
}



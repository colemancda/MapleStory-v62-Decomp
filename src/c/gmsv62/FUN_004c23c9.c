/* FUN_004c23c9 - 0x004c23c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte FUN_004c23c9(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      iVar1 = FUN_0045e2eb();
      return -(iVar1 / 100000 == 0xe) & 0xb;
    }
  }
  else {
    if ((param_2 / 100000 == 0xe) && (*(int *)(param_1 + 0x54) != 0)) {
      return 10;
    }
    if (((param_2 / 10000 == 0x6d) && (*(int *)(param_1 + 0x5c) != 0)) &&
       (iVar1 = FUN_0045e2eb(), iVar1 / 100000 == 0xe)) {
      return 0xb;
    }
  }
  return 0;
}



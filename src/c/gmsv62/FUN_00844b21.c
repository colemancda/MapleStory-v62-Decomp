/* FUN_00844b21 - 0x00844b21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00844b21(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0048b8d9(param_2);
  if (iVar1 != 0) {
    if (iVar1 == 4) {
      FUN_00844bd8(param_1,param_2,0);
    }
    else if (iVar1 == 6) {
      FUN_0084942e(param_2 % 100 + 8);
    }
  }
  return;
}



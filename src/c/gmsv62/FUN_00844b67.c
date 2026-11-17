/* FUN_00844b67 - 0x00844b67 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00844b67(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0048b5b3(param_2);
  if ((iVar1 < 8) || ((0xb < iVar1 && (iVar1 != 0x25)))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    if (iVar1 == 8) {
      FUN_008491d4(param_1);
    }
    else if (iVar1 == 9) {
      FUN_0084951d(param_2);
    }
    else if (iVar1 == 0xb) {
      FUN_0084bfb1(param_1,param_2,param_3,param_4);
    }
    else if (iVar1 == 0x25) {
      FUN_00849628(param_1);
    }
  }
  return;
}



/* FUN_007c09a6 - 0x007c09a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c09a6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0042459a();
  iVar2 = FUN_007c00e8(uVar1);
  if (iVar2 != 0) {
    if (param_1 == 0x7a) {
      FUN_00793ab7(param_2);
    }
    else if (param_1 == 0x7b) {
      FUN_00793e04(param_2);
    }
    else if (param_1 == 0x7c) {
      FUN_00794c02(param_2);
    }
    else if (param_1 == 0x7d) {
      FUN_00796bdd(param_2);
    }
    else if (param_1 == 0x7e) {
      FUN_00790772(param_2);
    }
    else {
      if ((0x7e < param_1) && (param_1 < 0x86)) {
        FUN_00794da8(param_1,param_2);
      }
      if ((0x85 < param_1) && (param_1 < 0x8c)) {
        FUN_00794e31(param_1,param_2);
      }
    }
  }
  return;
}



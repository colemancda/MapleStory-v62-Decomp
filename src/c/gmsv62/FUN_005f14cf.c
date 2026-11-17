/* FUN_005f14cf - 0x005f14cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f14cf(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0042459a();
  iVar2 = FUN_005f1518(uVar1);
  if (iVar2 != 0) {
    if (param_1 == 0xc5) {
      FUN_005eb42c(param_2);
    }
    else if (param_1 == 0xc6) {
      FUN_005ee18c(param_2);
    }
    else if (param_1 == 199) {
      FUN_005ee0e9(param_2);
    }
  }
  return;
}



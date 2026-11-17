/* FUN_0046f7d9 - 0x0046f7d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0046f7d9(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0x3c) == 0)) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar1 = FUN_0046f7fc(param_2,param_3);
  }
  return uVar1;
}



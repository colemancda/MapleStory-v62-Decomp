/* FUN_00608ee3 - 0x00608ee3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00608ee3(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    FUN_00604a69(param_2,param_3);
  }
  else if (iVar1 == 1) {
    FUN_00607432(param_2,param_3);
  }
  else if (iVar1 == 2) {
    FUN_00605b69(param_2,param_3);
  }
  return 0;
}



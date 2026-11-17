/* FUN_0057e0fe - 0x0057e0fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0057e0fe(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[0x52] == 0) {
    if (param_2 == 0x1f42) {
      FUN_0057e791();
      FUN_008161f1(0);
    }
    else if (param_2 == 0x1f43) {
      (**(code **)(*param_1 + 0x38))();
      return;
    }
    if (param_2 == 1) {
      iVar1 = *param_1;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      iVar1 = *param_1;
    }
    (**(code **)(iVar1 + 0x34))(param_2);
  }
  return;
}



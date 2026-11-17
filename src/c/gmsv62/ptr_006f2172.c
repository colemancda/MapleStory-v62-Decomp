/* ptr_006f2172 - 0x006f2172 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006f2172(int *param_1,int param_2)

{
  if (param_2 == 2) {
    param_1[0x16f] = 1;
    param_1[0x2c0] = 8000;
    (**(code **)(*(int *)(param_1[0x16c] + 4) + 0x1c))(0);
    (**(code **)(*(int *)(param_1[0x16e] + 4) + 0x1c))(param_1[0x16f]);
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 4) {
        (**(code **)(*param_1 + 0x38))(param_1[0x172]);
      }
      else if (param_2 == 5) {
        param_1[0x2c0] = 8000;
        FUN_006f2a7a();
      }
      goto LAB_006f2224;
    }
    param_1[0x16f] = 0;
    (**(code **)(*(int *)(param_1[0x16c] + 4) + 0x1c))(1);
    (**(code **)(*(int *)(param_1[0x16e] + 4) + 0x1c))(param_1[0x16f]);
    FUN_0074d6fb();
  }
  FUN_006f2b4e();
LAB_006f2224:
  FUN_0078a282(param_2);
  return;
}



/* FUN_0060e50d - 0x0060e50d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0060e50d(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0x16) {
    FUN_0060ec3d(param_3);
  }
  else if (param_2 == 0x17) {
    (**(code **)(*param_1 + 0x6c))(param_3);
  }
  else if (param_2 == 0x18) {
    FUN_0060ee1e(param_3);
  }
  else if (param_2 == 0x19) {
    FUN_0060ef54(param_3);
  }
  return;
}



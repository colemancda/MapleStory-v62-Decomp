/* FUN_006cf04b - 0x006cf04b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006cf04b(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 0x65) {
    if (param_4 == 0) {
      param_1[0x3b] = 0;
    }
    else {
      param_1[0x3b] = 1;
      param_1[0x3c] = param_2 + -1000;
    }
    FUN_006cf108();
  }
  else if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}



/* FUN_00704c2c - 0x00704c2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00704c2c(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 < 0x21) {
    piVar1 = *(int **)(param_1 + 0x58c);
  }
  else if (param_3 < 0x42) {
    piVar1 = *(int **)(param_1 + 0x590);
  }
  else if (param_3 < 100) {
    piVar1 = *(int **)(param_1 + 0x594);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x598);
  }
  *param_2 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_2;
}



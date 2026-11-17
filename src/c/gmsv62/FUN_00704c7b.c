/* FUN_00704c7b - 0x00704c7b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00704c7b(int param_1,undefined4 *param_2,double param_3)

{
  int *piVar1;
  
  if (_DAT_008e8a78 <= param_3) {
    piVar1 = *(int **)(param_1 + 0x598);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x58c);
  }
  *param_2 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_2;
}



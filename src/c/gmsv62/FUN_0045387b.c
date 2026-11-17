/* FUN_0045387b - 0x0045387b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0045387b(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,&DAT_008f39c4,param_1);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return *param_1;
}



/* FUN_0041bc53 - 0x0041bc53 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0041bc53(int *param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_2 & 1) != 0) {
    FUN_00402b41(param_1);
  }
  return param_1;
}



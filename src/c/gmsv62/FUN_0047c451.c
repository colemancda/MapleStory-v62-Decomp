/* FUN_0047c451 - 0x0047c451 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0047c451(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  param_2 = (int *)*param_2;
  piVar2 = param_2;
  for (uVar1 = 0; (param_2 != (int *)0x0 && (uVar1 < (uint)param_2[-1])); uVar1 = uVar1 + 1) {
    if (*piVar2 == param_1) {
      return uVar1;
    }
    piVar2 = piVar2 + 1;
  }
  return 0xffffffff;
}



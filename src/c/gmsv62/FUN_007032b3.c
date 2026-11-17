/* FUN_007032b3 - 0x007032b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007032b3(int param_1,int param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x578) != 0) && (*(int *)(*(int *)(param_1 + 0x578) + -4) != 0)) {
    FUN_007062dd(param_2 * 4 + *(int *)(param_1 + 0x578));
    FUN_0047c65c(param_2);
    FUN_00475dc9(*(int *)(param_1 + 0x578) + param_2 * 4);
    piVar1 = *(int **)(param_1 + 0x5b0 + param_2 * 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
      FUN_00450463();
    }
  }
  return;
}



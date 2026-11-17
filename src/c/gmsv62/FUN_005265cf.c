/* FUN_005265cf - 0x005265cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005265cf(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (param_2 != *(int *)(param_1 + 0x20))) {
    *(int *)(param_1 + 0x20) = param_2;
    if (param_2 == 0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
    }
    else {
      FUN_00526cad(0);
    }
  }
  return;
}



/* FUN_00701f6d - 0x00701f6d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00701f6d(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x5e0 + param_2 * 4) + 4 + param_3 * 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    FUN_00450463();
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x5ec + param_2 * 4) + 4 + param_3 * 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    FUN_00450463();
  }
  return;
}



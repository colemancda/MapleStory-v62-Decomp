/* FUN_0077efbd - 0x0077efbd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0077efbd(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    piVar1 = (int *)(param_1 + 0x668);
    iVar2 = 6;
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
        FUN_00450463();
      }
      piVar1 = piVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x668 + param_2 * 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
      FUN_00450463();
    }
  }
  return;
}



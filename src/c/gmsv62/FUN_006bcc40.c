/* FUN_006bcc40 - 0x006bcc40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006bcc40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 0x618) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x618) + 0xc))();
  }
  if (*(int **)(param_1 + 0x620) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x620) + 0xc))();
  }
  if (*(int **)(param_1 + 0x628) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x628) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5a8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5a8) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5b0) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5c8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c8) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5b8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5b8) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c0) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5d0) + 0xc))();
  }
  if (*(int **)(param_1 + 0x5d8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5d8) + 0xc))();
  }
  if (*(int **)(param_1 + 0x608) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x608) + 0xc))();
  }
  if (*(int **)(param_1 + 0x610) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x610) + 0xc))();
  }
  piVar2 = (int *)(param_1 + 0x5e0);
  iVar1 = 4;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))();
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int **)(param_1 + 0x638) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0xc))();
  }
  *(undefined4 *)(param_1 + 0x578) = 0;
  return;
}



/* FUN_50408c81 - 0x50408c81 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_50408c81(int param_1)

{
  int *piVar1;
  float local_8c [16];
  undefined4 local_4c [16];
  uint local_c;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 200))(piVar1,0x16,1);
    (**(code **)(**(int **)(param_1 + 0x90) + 200))(*(int **)(param_1 + 0x90),0x89,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 200))(*(int **)(param_1 + 0x90),7,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 200))(*(int **)(param_1 + 0x90),0x1a,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 200))(*(int **)(param_1 + 0x90),0xf,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 200))(*(int **)(param_1 + 0x90),0x1b,1);
    (**(code **)(**(int **)(param_1 + 0x90) + 200))(*(int **)(param_1 + 0x90),0x1d,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,1,4);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,2,2);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,3,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,4,4);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,5,2);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,6,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,0xd,3);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,0xe,3);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xfc))(*(int **)(param_1 + 0x90),0,0x19,3);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x130))(*(int **)(param_1 + 0x90),0x142);
    FUN_50408080(local_4c);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x94))(*(int **)(param_1 + 0x90),0x100,local_4c);
    local_c = *(uint *)(param_1 + 0x20);
    uStack_8 = 0;
    FUN_50412823(local_8c,(float)local_c,(float)*(uint *)(param_1 + 0x24),_DAT_5042d644,1.0);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x94))(*(int **)(param_1 + 0x90),3,local_8c);
  }
  return;
}



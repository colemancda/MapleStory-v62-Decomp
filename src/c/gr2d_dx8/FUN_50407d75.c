/* FUN_50407d75 - 0x50407d75 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_50407d75(int param_1)

{
  float local_f0 [16];
  float local_b0 [16];
  undefined4 local_70 [16];
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  uint local_c;
  float fStack_8;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),0x16,1);
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),0x89,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),7,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),0x1a,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),0xf,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),0x1b,1);
  (**(code **)(**(int **)(param_1 + 0x18) + 200))(*(int **)(param_1 + 0x18),0x1d,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,1,4);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,2,2);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,3,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,4,4);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,5,2);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,6,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,0xd,3);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,0xe,3);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xfc))(*(int **)(param_1 + 0x18),0,0x19,3);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x130))(*(int **)(param_1 + 0x18),0x142);
  FUN_50408080(local_70);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x94))(*(int **)(param_1 + 0x18),0x100,local_70);
  local_24 = (float)*(int *)(param_1 + 0x20) + _DAT_5042d648;
  local_20 = (float)*(int *)(param_1 + 0x24) + _DAT_5042d648;
  local_10 = 0x3f800000;
  local_1c = _DAT_5042d644;
  local_30 = 0.0;
  local_2c = _DAT_5042d644;
  local_28 = 0;
  local_18 = local_24;
  local_14 = local_20;
  fStack_8 = local_20;
  FUN_50413f56(local_b0,&local_18,&local_24,&local_30);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x94))(*(int **)(param_1 + 0x18),2,local_b0);
  local_c = *(uint *)(param_1 + 0x30);
  fStack_8 = 0.0;
  FUN_50412823(local_f0,(float)local_c,(float)*(uint *)(param_1 + 0x34),_DAT_5042d644,1.0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x94))(*(int **)(param_1 + 0x18),3,local_f0);
  return;
}



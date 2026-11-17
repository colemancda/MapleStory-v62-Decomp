/* FUN_0068d1a1 - 0x0068d1a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0068d1a1(int param_1)

{
  int aiStack_20 [5];
  
  aiStack_20[4] = 0;
  aiStack_20[3] = 0;
  aiStack_20[2] = 0;
  aiStack_20[1] = 0;
  aiStack_20[0] = param_1;
  FUN_00679d22(aiStack_20,0xf43);
  FUN_007db3ad();
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  aiStack_20[4] = 1;
  aiStack_20[3] = 0x68d1e1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x184) + 4) + 0x1c))();
  aiStack_20[3] = 1;
  aiStack_20[2] = 0x68d1f1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x18c) + 4) + 0x1c))();
  aiStack_20[2] = 0;
  aiStack_20[1] = 0x68d1f9;
  FUN_008161f1();
  return;
}



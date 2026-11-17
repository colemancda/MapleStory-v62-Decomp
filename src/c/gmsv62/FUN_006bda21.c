/* FUN_006bda21 - 0x006bda21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006bda21(int param_1)

{
  int aiStack_24 [5];
  
  aiStack_24[4] = 0;
  aiStack_24[3] = 0;
  aiStack_24[2] = 0;
  aiStack_24[1] = 0;
  aiStack_24[0] = param_1;
  FUN_00679d22(aiStack_24,0xe56);
  FUN_007db3ad();
  if (*(int *)(param_1 + 0x584) != 0) {
    aiStack_24[4] = 0;
    aiStack_24[3] = 0x6bda5f;
    FUN_006bdcf7();
    *(undefined4 *)(param_1 + 0x584) = 0;
  }
  aiStack_24[4] = 0x6bda69;
  FUN_006ba244();
  return;
}



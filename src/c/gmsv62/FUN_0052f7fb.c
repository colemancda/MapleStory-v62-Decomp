/* FUN_0052f7fb - 0x0052f7fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052f7fb(int param_1)

{
  int aiStack_20 [5];
  
  aiStack_20[4] = 0;
  aiStack_20[3] = 0;
  aiStack_20[2] = 0;
  aiStack_20[1] = 0;
  aiStack_20[0] = param_1;
  FUN_00679d22(aiStack_20,0x119e);
  FUN_007db3ad();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



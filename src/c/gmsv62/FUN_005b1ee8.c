/* FUN_005b1ee8 - 0x005b1ee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005b1ee8(int param_1)

{
  int aiStack_10 [2];
  
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  aiStack_10[1] = 6;
  aiStack_10[0] = param_1;
  FUN_00679d86(aiStack_10,0x1da);
  FUN_005c152d();
  return;
}



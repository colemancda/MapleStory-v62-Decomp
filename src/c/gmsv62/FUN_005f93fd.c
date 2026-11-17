/* FUN_005f93fd - 0x005f93fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005f93fd(int param_1)

{
  int aiStack_10 [2];
  
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  aiStack_10[1] = 6;
  aiStack_10[0] = param_1;
  FUN_00679d86(aiStack_10,0x1da);
  FUN_005c152d();
  return;
}



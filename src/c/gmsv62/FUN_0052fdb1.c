/* FUN_0052fdb1 - 0x0052fdb1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052fdb1(int param_1)

{
  int aiStack_18 [5];
  undefined1 *local_4;
  
  aiStack_18[4] = 0;
  aiStack_18[3] = 0;
  aiStack_18[2] = 0;
  aiStack_18[1] = 0;
  local_4 = (undefined1 *)aiStack_18;
  *(undefined4 *)(param_1 + 0x18) = 0;
  aiStack_18[0] = param_1;
  FUN_00679d22(aiStack_18,0x117e);
  FUN_007db3ad();
  return;
}



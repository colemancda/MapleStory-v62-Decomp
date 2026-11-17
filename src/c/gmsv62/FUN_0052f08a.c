/* FUN_0052f08a - 0x0052f08a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052f08a(int param_1)

{
  int aiStack_1c [5];
  
  aiStack_1c[4] = 0;
  aiStack_1c[3] = 0;
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  aiStack_1c[0] = param_1;
  FUN_00679d22(aiStack_1c,0x1194);
  FUN_007db3ad();
  aiStack_1c[4] = 0x52f0c1;
  FUN_0053c963();
  return;
}



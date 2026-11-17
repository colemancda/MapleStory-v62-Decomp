/* FUN_0045b66b - 0x0045b66b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0045b66b(int param_1)

{
  int aiStack_18 [5];
  undefined1 *local_4;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    aiStack_18[4] = 0;
    aiStack_18[3] = 1;
    aiStack_18[2] = 0;
    aiStack_18[1] = 0;
    local_4 = (undefined1 *)aiStack_18;
    aiStack_18[0] = param_1;
    FUN_0045f0f3(s_Please_visit_the_website_to_char_00964558,0xffffffff);
    FUN_007db3ad();
  }
  return;
}



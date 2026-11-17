/* FUN_00801d3a - 0x00801d3a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00801d3a(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  else if (*(int *)(param_1 + 0x244) != param_3) {
    *(int *)(param_1 + 0x244) = param_3;
    _memset((void *)(param_1 + 0x254),0,0x14);
  }
  return;
}



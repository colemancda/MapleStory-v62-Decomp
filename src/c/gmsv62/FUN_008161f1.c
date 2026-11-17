/* FUN_008161f1 - 0x008161f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_008161f1(int param_1,int param_2)

{
  if (param_2 == 0) {
    (*DAT_0097b504)(param_1 + 0x24,0,0,*(undefined4 *)(param_1 + 0x1c),
                    *(undefined4 *)(param_1 + 0x20));
  }
  else {
    (*DAT_0097b500)(param_1 + 0x24,param_1 + 0x24,param_2);
  }
  FUN_00819128(param_1);
  return;
}



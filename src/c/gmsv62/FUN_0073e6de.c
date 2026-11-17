/* FUN_0073e6de - 0x0073e6de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0073e6de(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_0051b4cb();
    *(undefined4 *)(param_1 + 0xc1c) = 0;
  }
  else {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0xc1c) = 0;
    }
    else {
      iVar1 = (*DAT_0097b704)();
      *(int *)(param_1 + 0xc1c) = iVar1 + param_4;
    }
    FUN_0051ad37(param_2,param_3,0xa0,0xc00616fc);
  }
  return;
}



/* FUN_007f73d8 - 0x007f73d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f73d8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  else {
    uVar1 = FUN_004133f0();
    *(uint *)(param_1 + 0x248) = uVar1 % 60000 + 180000;
    if ((*(int *)(param_1 + 0x240) != param_3) && (*(int *)(param_1 + 0x244) == 0)) {
      *(int *)(param_1 + 0x240) = param_3;
      *(undefined4 *)(param_1 + 0x244) = param_4;
      _memset((void *)(param_1 + 0x474),0,0x14);
    }
  }
  return;
}



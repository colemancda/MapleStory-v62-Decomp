/* FUN_00479784 - 0x00479784 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00479784(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)(param_2 / 0xc != 0);
  param_2 = param_2 % 0xc;
  if ((uVar1 != 0) && (param_2 == 0)) {
    param_2 = 0xc;
  }
  *(undefined4 *)(param_1 + 0x88) = param_3;
  *(uint *)(param_1 + 0x80) = uVar1;
  *(int *)(param_1 + 0x84) = param_2;
  *(undefined4 *)(param_1 + 0x8c) = param_4;
  uVar2 = (*DAT_0097b704)();
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  FUN_008161f1(0);
  return;
}



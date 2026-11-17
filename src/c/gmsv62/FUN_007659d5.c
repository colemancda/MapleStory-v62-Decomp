/* FUN_007659d5 - 0x007659d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_007659d5(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined2 param_5
            ,undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  *(undefined4 *)(param_1 + 0x61c) = param_2;
  FUN_00414edd(param_3,0xffffffff);
  *(undefined1 *)(param_1 + 0x624) = param_4;
  *(undefined2 *)(param_1 + 0x626) = param_5;
  *(undefined2 *)(param_1 + 0x628) = param_6;
  FUN_00414edd(param_7,0xffffffff);
  FUN_00414edd(param_8,0xffffffff);
  *(undefined4 *)(param_1 + 0x634) = param_9;
  *(undefined4 *)(param_1 + 0x638) = param_10;
  if (*(int *)(param_1 + 0x61c) == *(int *)(DAT_00978358 + 0xd78)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x58c) + 4) + 0x1c))(0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x594) + 4) + 0x1c))(0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x59c) + 4) + 0x1c))(0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x5a4) + 4) + 0x1c))(0);
  }
  return;
}



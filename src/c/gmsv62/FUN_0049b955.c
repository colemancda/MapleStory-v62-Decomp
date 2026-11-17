/* FUN_0049b955 - 0x0049b955 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0049b955(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(undefined4 *)(param_1 + 0x6c) = *param_9;
  *(undefined4 *)(param_1 + 0x70) = param_9[1];
  *(undefined4 *)(param_1 + 0x74) = param_9[2];
  *(undefined4 *)(param_1 + 0x78) = param_9[7];
  *(undefined4 *)(param_1 + 0x7c) = param_9[8];
  *(undefined4 *)(param_1 + 0x80) = param_9[9];
  *(undefined4 *)(param_1 + 0x84) = param_9[10];
  *(undefined4 *)(param_1 + 0x88) = param_9[3];
  *(undefined4 *)(param_1 + 0x8c) = param_9[4];
  *(undefined4 *)(param_1 + 0x90) = param_9[5];
  *(undefined4 *)(param_1 + 0x9c) = param_9[6];
  *(undefined4 *)(param_1 + 0xa0) = param_9[0xb];
  *(undefined4 *)(param_1 + 0xa4) = param_9[0xc];
  *(undefined4 *)(param_1 + 0xa8) = param_9[0xd];
  FUN_00402f41(param_9 + 0xe);
  *(undefined4 *)(param_1 + 0x98) = param_9[0xf];
  FUN_004b388f(param_2,param_3,param_5,param_6,param_7,param_8,param_9);
  return;
}



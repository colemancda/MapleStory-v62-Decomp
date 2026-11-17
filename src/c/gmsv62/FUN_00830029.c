/* FUN_00830029 - 0x00830029 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00830029(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  *(undefined4 *)(param_1 + 0x2048) = param_2;
  *(undefined4 *)(DAT_0097926c + 0x4c) = param_2;
  *(undefined4 *)(param_1 + 0x204c) = param_3;
  FUN_0045f10c();
  *(undefined4 *)(param_1 + 0x326c) = *param_4;
  *param_4 = 0;
  FUN_00524ec7();
  *(undefined4 *)(param_1 + 0x3270) = *param_5;
  *param_5 = 0;
  return;
}



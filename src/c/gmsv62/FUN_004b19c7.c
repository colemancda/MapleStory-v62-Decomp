/* FUN_004b19c7 - 0x004b19c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_004b19c7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_004b2689();
  *(undefined4 *)(param_1 + 0x60) = param_4;
  switch(param_4) {
  case 0:
    *(undefined4 *)(param_1 + 100) = 0x18;
    break;
  case 1:
    *(undefined4 *)(param_1 + 100) = 0x13;
    break;
  case 2:
  case 4:
  case 5:
  case 7:
    *(undefined4 *)(param_1 + 100) = 0x15;
    break;
  case 3:
    *(undefined4 *)(param_1 + 100) = 0x1c;
    break;
  case 6:
    *(undefined4 *)(param_1 + 100) = 0x14;
  }
  FUN_004b388f(param_2,param_3,param_5,param_6,param_7,*(undefined4 *)(param_1 + 100),param_8);
  return;
}



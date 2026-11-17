/* FUN_0078a2f0 - 0x0078a2f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0078a2f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x554)) {
  case 0:
    uVar1 = 0x48a;
    break;
  case 1:
    uVar1 = 0x859;
    break;
  case 2:
    uVar1 = 0x85a;
    break;
  case 3:
    uVar1 = 0x85b;
    break;
  case 4:
    uVar1 = 0x85f;
    break;
  case 5:
    uVar1 = 0x944;
    break;
  case 6:
    uVar1 = 0x863;
    break;
  default:
    *param_2 = 0;
    return param_2;
  case 9:
    uVar1 = 0x9f1;
    break;
  case 10:
    uVar1 = 0x860;
  }
  FUN_00679d86(param_2,uVar1);
  return param_2;
}



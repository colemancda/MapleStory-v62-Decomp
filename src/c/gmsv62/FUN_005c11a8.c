/* FUN_005c11a8 - 0x005c11a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005c11a8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (-1 < param_1[0x30]) {
    if ((param_1[0x30] == 0) && (iVar1 = (**(code **)(*param_1 + 0x5c))(), iVar1 != 0)) {
      return;
    }
    FUN_0043f184(param_2);
  }
  return;
}



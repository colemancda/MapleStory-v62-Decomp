/* FUN_00705af6 - 0x00705af6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00705af6(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = -(uint)(param_2 != 0) & param_2 + 8U;
  *(uint *)(param_1 + 4) = -(uint)(uVar1 != 0) & uVar1 - 8;
  if (param_3 != 0) {
    FUN_00705d46();
  }
  return param_1;
}



/* FUN_0065d0c6 - 0x0065d0c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0065d0c6(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = -(uint)(param_2 != 0) & param_2 + 0xcU;
  FUN_00475ac6();
  *(uint *)(param_1 + 4) = -(uint)(uVar1 != 0) & uVar1 - 0xc;
  FUN_00475ae3();
  return param_1;
}



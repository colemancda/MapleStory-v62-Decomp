/* FUN_00765c06 - 0x00765c06 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00765c06(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0054e7b3(*(undefined4 *)(param_1 + 0x684));
  FUN_00414f8b(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x690) = param_2;
  *(undefined4 *)(param_1 + 0x694) = param_3;
  *(undefined4 *)(param_1 + 0x698) = param_4;
  *(undefined4 *)(param_1 + 0x680) = 1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5b4) + 4) + 0x1c))(1);
  FUN_007621bc(2);
  FUN_00766919();
  return;
}



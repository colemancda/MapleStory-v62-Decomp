/* FUN_007621bc - 0x007621bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007621bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x618) = param_2;
  FUN_00762225();
  FUN_00762773();
  if (*(int *)(param_1 + 0x5f4) != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
    iVar1 = iVar1 + (-(uint)(*(int *)(param_1 + 0x618) != 0) & 0xa2) + 0x22;
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(iVar1);
    FUN_004deee3(iVar2 + 0x10e,iVar1);
  }
  FUN_008161f1(0);
  return;
}



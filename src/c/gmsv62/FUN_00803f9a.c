/* FUN_00803f9a - 0x00803f9a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00803f9a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x40))(param_1 + 0xc,param_2,param_3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1 + 0xc,&DAT_00963d08);
  }
  return;
}



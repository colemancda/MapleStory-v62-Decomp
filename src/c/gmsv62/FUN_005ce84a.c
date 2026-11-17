/* FUN_005ce84a - 0x005ce84a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ce84a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c4e46();
  if (iVar1 != 0) {
    iVar1 = FUN_004cd670(*(int *)(param_1 + 0x15c) + 0x170,
                         *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x178));
    if (iVar1 != 0) {
      iVar1 = FUN_00413367(param_1 + 0x138,*(undefined4 *)(param_1 + 0x140));
      if (0x95 < param_2 - iVar1) {
        uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x10))();
        FUN_004c9698(param_1,uVar2);
        uVar2 = FUN_004133b5();
        *(undefined4 *)(param_1 + 0x140) = uVar2;
      }
    }
  }
  return;
}



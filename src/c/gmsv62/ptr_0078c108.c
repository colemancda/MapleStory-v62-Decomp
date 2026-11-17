/* ptr_0078c108 - 0x0078c108 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0078c108(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 != 0) || (param_2 != *(int *)(param_1 + 0x4b4))) {
    FUN_0043fbaf(param_2,param_3);
    if ((*(uint *)(param_1 + 0x4b4) & 0xfffffffe) == 0x12) {
      (**(code **)(*(int *)(param_1 + -0x78) + 0x28))(param_3 == 0);
    }
    if ((*(int *)(param_1 + 0x177c) != 0) && ((*(uint *)(param_1 + 0x4b4) & 0xfffffffe) != 0x12)) {
      (**(code **)(*(int *)(param_1 + -0x78) + 0x2c))();
    }
    if (*(int *)(param_1 + 0x1714) != 0) {
      iVar1 = FUN_0043f90a(0);
      if ((iVar1 < 2) || (((4 < iVar1 && (iVar1 != 0x21)) && ((iVar1 < 0x26 || (0x28 < iVar1)))))) {
        iVar1 = *(int *)(param_1 + 0x1714);
        uVar2 = FUN_005a9936();
        *(undefined4 *)(iVar1 + 4) = uVar2;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x1714) + 4) = 1;
      }
    }
  }
  return;
}



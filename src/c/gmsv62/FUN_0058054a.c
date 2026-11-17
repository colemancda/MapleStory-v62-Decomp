/* FUN_0058054a - 0x0058054a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0058054a(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = FUN_00580a6f();
  if ((((iVar1 != 0) && (iVar1 = 0, -1 < param_4)) && (param_4 < 0xc9)) &&
     ((-1 < param_5 && (param_5 < 0xa3)))) {
    piVar3 = (int *)(param_1 + 0x124);
    *(int *)(param_1 + 0xcc) = param_5 / 0x12;
    do {
      bVar4 = *(int *)(param_1 + 0xcc) != iVar1;
      if (bVar4) {
        (**(code **)(*(int *)(piVar3[-0x12] + 4) + 0x24))(0);
        iVar2 = *(int *)(*piVar3 + 4);
      }
      else {
        (**(code **)(*(int *)(piVar3[-0x12] + 4) + 0x24))(1);
        iVar2 = *(int *)(*piVar3 + 4);
      }
      (**(code **)(iVar2 + 0x24))(!bVar4);
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar1 < 9);
    FUN_008161f1(0);
  }
  return;
}



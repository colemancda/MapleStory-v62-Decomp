/* FUN_005753a5 - 0x005753a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005753a5(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_2;
  if (((param_2 < 0) || (*(int *)(*(int *)(param_1 + 100) + 0x104) <= param_2)) ||
     (*(int *)(param_2 * 0xd3 + 0x170 + param_1) == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 100) + 0x160) = 0xffffffff;
    param_2 = -1;
  }
  else {
    *(int *)(*(int *)(param_1 + 100) + 0x160) = param_2;
    iVar2 = FUN_00576edb();
    param_2 = param_2 + iVar2 * -3;
  }
  FUN_005654ff(param_2);
  param_2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 100) + 0x104)) {
    piVar3 = (int *)(param_1 + 0x32e8);
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0xc))(((param_2 != iVar1) + '\x01') * '\x02',0);
      }
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 2;
    } while (param_2 < *(int *)(*(int *)(param_1 + 100) + 0x104));
  }
  FUN_00575efb();
  FUN_00575895();
  FUN_008161f1(0);
  return;
}



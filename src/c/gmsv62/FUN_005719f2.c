/* FUN_005719f2 - 0x005719f2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005719f2(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((param_2 < 0) || (5 < param_2)) || (**(int **)(param_1 + 0x68 + param_2 * 4) == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 100) + 0x160) = 0xffffffff;
    iVar1 = -1;
  }
  else {
    *(int *)(*(int *)(param_1 + 100) + 0x160) = param_2;
    iVar1 = param_2;
  }
  FUN_005654ff(iVar1);
  if (*(int *)(param_1 + 0xf8) != param_2 / 3) {
    *(int *)(param_1 + 0xf8) = param_2 / 3;
    FUN_005719cc();
  }
  iVar1 = param_2;
  if (-1 < param_2) {
    iVar1 = param_2 % 3;
  }
  param_2 = 0;
  piVar2 = (int *)(param_1 + 0x84);
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))(((param_2 != iVar1) + '\x01') * '\x02',0);
      FUN_00571ba9(param_2,param_2 == iVar1);
    }
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 2;
  } while (param_2 < 3);
  FUN_008161f1(0);
  return;
}



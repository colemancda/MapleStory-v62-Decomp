/* FUN_006d2ddf - 0x006d2ddf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006d2ddf(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0042503d();
    if (iVar1 == 0xffffff) {
      return;
    }
    if (*(int *)(param_1 + 0x84) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(param_1 + 0x84);
    iVar1 = *piVar2;
    uVar3 = 0xffffff;
  }
  else {
    if (*(int *)(param_1 + 0x84) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0042503d();
    if (iVar1 == -1) {
      return;
    }
    if (*(int *)(param_1 + 0x84) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(param_1 + 0x84);
    iVar1 = *piVar2;
    uVar3 = 0xffffffff;
  }
  iVar1 = (**(code **)(iVar1 + 0xe0))(piVar2,uVar3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963df8);
  }
  return;
}



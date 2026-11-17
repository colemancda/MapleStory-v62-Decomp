/* FUN_0043fcc8 - 0x0043fcc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043fcc8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xcbc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0xcbc);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,param_2);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  if (*(int *)(param_1 + 0xcc0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0xcc0);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,param_2);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  if (*(int *)(param_1 + 0xcc4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0xcc4);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,param_2);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  return;
}



/* FUN_0078c247 - 0x0078c247 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0078c247(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + -0x78) + 4))();
  param_3 = FUN_0072f360();
  iVar2 = FUN_00413367(iVar1 + 0x504,*(undefined4 *)(iVar1 + 0x50c));
  if (iVar2 != 0) {
    param_3 = FUN_00413367(iVar1 + 0x504,*(undefined4 *)(iVar1 + 0x50c));
  }
  if (*(int *)(param_1 + 0x4ac) == 0) {
    FUN_004423ce(param_2,param_3,param_4);
    FUN_0078c304();
    uVar3 = FUN_0043f545();
    FUN_0046f8b1(uVar3);
    FUN_0079bb45();
  }
  return;
}



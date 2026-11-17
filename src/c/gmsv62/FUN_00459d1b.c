/* FUN_00459d1b - 0x00459d1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00459d1b(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined2)*(undefined4 *)(param_1 + -4);
  }
  *param_2 = uVar1;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + -4);
  }
  FUN_00879c20(param_2 + 1,param_1,uVar2);
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + -4);
  }
  FUN_00414ebb();
  return iVar3 + 2;
}



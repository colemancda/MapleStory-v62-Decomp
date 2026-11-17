/* FUN_0044f5f6 - 0x0044f5f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_0044f5f6(undefined2 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 8;
  if ((int *)*param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)*param_2;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + -4);
  }
  iVar1 = FUN_00403075(iVar1,uVar2);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_00878dfb(0x8007000e);
  }
  return param_1;
}



/* FUN_0049e2c4 - 0x0049e2c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0049e2c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 2;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != 0) && ((iVar1 < 2 || (4 < iVar1)))) {
    *param_2 = 0;
    return param_2;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      piVar2 = *(int **)(param_1 + 0xdc);
      goto LAB_0049e32b;
    }
    if (iVar1 == 2) {
      piVar2 = *(int **)(param_1 + 0xe0);
      goto LAB_0049e32b;
    }
    if (iVar1 == 3) {
      piVar2 = *(int **)(param_1 + 0xe4);
      goto LAB_0049e32b;
    }
    if (iVar1 == 4) {
      piVar2 = *(int **)(param_1 + 0xe8);
      goto LAB_0049e32b;
    }
  }
  piVar2 = *(int **)(param_1 + 0xd8);
LAB_0049e32b:
  *param_2 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_2;
}



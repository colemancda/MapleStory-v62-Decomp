/* FUN_0049e247 - 0x0049e247 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0049e247(int param_1,undefined4 *param_2)

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
      piVar2 = *(int **)(param_1 + 200);
      goto LAB_0049e2ae;
    }
    if (iVar1 == 2) {
      piVar2 = *(int **)(param_1 + 0xcc);
      goto LAB_0049e2ae;
    }
    if (iVar1 == 3) {
      piVar2 = *(int **)(param_1 + 0xd0);
      goto LAB_0049e2ae;
    }
    if (iVar1 == 4) {
      piVar2 = *(int **)(param_1 + 0xd4);
      goto LAB_0049e2ae;
    }
  }
  piVar2 = *(int **)(param_1 + 0xc4);
LAB_0049e2ae:
  *param_2 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_2;
}



/* FUN_00756efd - 0x00756efd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00756efd(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  switch(param_3) {
  case 1:
    piVar2 = *(int **)(param_1 + 0x424);
    break;
  case 2:
    piVar2 = *(int **)(param_1 + 0x428);
    break;
  case 3:
    piVar2 = *(int **)(param_1 + 0x42c);
    break;
  case 4:
    piVar2 = *(int **)(param_1 + 0x430);
    break;
  case 5:
    piVar2 = *(int **)(param_1 + 0x438);
    break;
  case 6:
    piVar2 = *(int **)(param_1 + 0x43c);
    break;
  case 7:
    piVar2 = *(int **)(param_1 + 0x440);
    break;
  case 8:
    piVar2 = *(int **)(param_1 + 0x444);
    break;
  case 9:
    piVar2 = *(int **)(param_1 + 0x448);
    break;
  case 10:
    uVar1 = *(undefined4 *)(param_1 + 0x44c);
    goto LAB_00756fb6;
  case 0xb:
    uVar1 = *(undefined4 *)(param_1 + 0x450);
    goto LAB_00756fb6;
  case 0xc:
    uVar1 = *(undefined4 *)(param_1 + 0x458);
    goto LAB_00756fb6;
  case 0xd:
    uVar1 = *(undefined4 *)(param_1 + 0x45c);
    goto LAB_00756fb6;
  case 0xe:
    uVar1 = *(undefined4 *)(param_1 + 0x460);
    goto LAB_00756fb6;
  case 0xf:
    uVar1 = *(undefined4 *)(param_1 + 0x464);
    goto LAB_00756fb6;
  case 0x10:
    uVar1 = *(undefined4 *)(param_1 + 0x468);
    goto LAB_00756fb6;
  case 0x11:
    uVar1 = *(undefined4 *)(param_1 + 0x46c);
LAB_00756fb6:
    *param_2 = uVar1;
    FUN_0045e787();
    return param_2;
  default:
    *param_2 = 0;
    return param_2;
  }
  *param_2 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_2;
}



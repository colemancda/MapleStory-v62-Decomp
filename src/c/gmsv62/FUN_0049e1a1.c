/* FUN_0049e1a1 - 0x0049e1a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0049e1a1(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 2;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
LAB_0049e1f8:
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 != 0) {
      if (iVar1 == 1) goto LAB_0049e223;
      if (iVar1 == 2) goto LAB_0049e21b;
      if (iVar1 == 3) goto LAB_0049e213;
      if (iVar1 == 4) {
        piVar2 = *(int **)(param_1 + 0xc0);
        goto LAB_0049e231;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if ((iVar1 < 2) || (4 < iVar1)) {
        *param_2 = 0;
        return param_2;
      }
      goto LAB_0049e1f8;
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          if (iVar1 != 3) {
            if (iVar1 == 4) {
              *param_2 = *(undefined4 *)(param_1 + 0xb4);
              FUN_004125f3();
              return param_2;
            }
            goto LAB_0049e22b;
          }
LAB_0049e213:
          piVar2 = *(int **)(param_1 + 0xbc);
          goto LAB_0049e231;
        }
LAB_0049e21b:
        piVar2 = *(int **)(param_1 + 0xb8);
        goto LAB_0049e231;
      }
LAB_0049e223:
      piVar2 = *(int **)(param_1 + 0xb4);
      goto LAB_0049e231;
    }
  }
LAB_0049e22b:
  piVar2 = *(int **)(param_1 + 0xb0);
LAB_0049e231:
  *param_2 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_2;
}



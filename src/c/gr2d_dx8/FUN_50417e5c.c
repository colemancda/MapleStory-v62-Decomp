/* FUN_50417e5c - 0x50417e5c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __thiscall FUN_50417e5c(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = param_4;
  if ((((param_4 & 0xffff) != 0) && ((param_4 & 0xffff) < 6)) && ((param_4 & 0xfff00000) == 0)) {
    *(uint *)(param_2 + 0x40) = param_4 & 0x80000;
    piVar1 = FUN_5041cfe5();
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      piVar1 = FUN_5041cfe5();
      *param_1 = (int)piVar1;
      if (((((piVar1 != (int *)0x0) && (iVar2 = FUN_50418e3a(), -1 < iVar2)) &&
           ((iVar2 = FUN_50415fbf(param_1), iVar2 < 0 &&
            ((iVar2 = FUN_504160f7(), iVar2 < 0 && (iVar2 = FUN_504161e8(), iVar2 < 0)))))) &&
          (iVar2 = FUN_504163ea(), iVar2 < 0)) &&
         ((((iVar2 = FUN_504165ee(), iVar2 < 0 && (iVar2 = FUN_50416a11(), iVar2 < 0)) &&
           (iVar2 = FUN_50416fa3(), iVar2 < 0)) &&
          ((iVar2 = FUN_50417389(), iVar2 < 0 && (iVar2 = FUN_50417aba(), iVar2 < 0)))))) {
        FUN_504149e8();
      }
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
      param_1[1] = 0;
    }
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
  }
  return unaff_EBX;
}



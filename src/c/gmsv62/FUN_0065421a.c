/* FUN_0065421a - 0x0065421a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065421a(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 < 1) {
    return 0;
  }
  if (9 < param_1) {
    return 0;
  }
  if (param_4 != 0) {
    iVar1 = FUN_00653f88(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00653f4d(param_5);
    if (iVar1 != 0) {
      uVar2 = FUN_00654196(param_5,param_3);
      return uVar2;
    }
    iVar1 = param_1 * 2 + -1;
    if (*(int *)(param_4 + 0xc) == 3) goto LAB_0065426c;
  }
  iVar1 = param_1 * 2 + -2;
LAB_0065426c:
  iVar4 = 0;
  if (0 < *(int *)(&DAT_00968570 + iVar1 * 0x10)) {
    piVar3 = (int *)(&DAT_00968574 + iVar1 * 0x10);
    do {
      if (*piVar3 == param_3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(&DAT_00968570 + iVar1 * 0x10));
  }
  return 0;
}



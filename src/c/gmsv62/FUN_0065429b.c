/* FUN_0065429b - 0x0065429b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065429b(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

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
    if (*(int *)(param_4 + 0xc) == 3) goto LAB_006542ed;
  }
  iVar1 = param_1 * 2 + -2;
LAB_006542ed:
  iVar4 = 0;
  if (0 < *(int *)(&DAT_00968690 + iVar1 * 0xc)) {
    piVar3 = (int *)(&DAT_00968694 + iVar1 * 0xc);
    do {
      if (*piVar3 == param_3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(&DAT_00968690 + iVar1 * 0xc));
  }
  return 0;
}



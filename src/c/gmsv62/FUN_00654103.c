/* FUN_00654103 - 0x00654103 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00654103(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 < 1) {
    return 0;
  }
  if (9 < param_1) {
    return 0;
  }
  if (param_3 == 0x20) {
    return (uint)(param_4 == 0);
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
    if (*(int *)(param_4 + 0xc) == 3) goto LAB_00654166;
  }
  iVar1 = param_1 * 2 + -2;
LAB_00654166:
  iVar4 = 0;
  if (0 < *(int *)(&DAT_009683c0 + iVar1 * 0x18)) {
    piVar3 = (int *)(&DAT_009683c4 + iVar1 * 0x18);
    do {
      if (*piVar3 == param_3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(&DAT_009683c0 + iVar1 * 0x18));
  }
  return 0;
}



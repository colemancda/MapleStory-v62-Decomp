/* FUN_007466c8 - 0x007466c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_007466c8(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(DAT_00978364 + 0x6c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(uint **)(DAT_00978364 + 0x74);
  }
  iVar2 = FUN_00815f0f(param_2,param_3,
                       -(uint)(uVar1 != (-(uint)(param_1 != 0) & param_1 + 4U)) & param_4);
  if (iVar2 != 2) {
    return iVar2;
  }
  iVar3 = 0x1fb - *(int *)(param_1 + 0xc64);
  iVar2 = 0x1ab;
  if (iVar3 < 0x1ac) {
    iVar2 = iVar3;
  }
  if (((param_2 < 0x244) && (*(int *)(param_1 + 0xc68) == 1)) && (param_3 < 0x1fb)) {
    return 0;
  }
  if (((param_2 < 0x50) && (param_3 < iVar2)) && (*(int *)(param_1 + 0xb34) == 0)) {
    return 0;
  }
  if (((0x50 < param_2) && (param_2 < 0x244)) &&
     ((param_3 < iVar3 && (*(int *)(param_1 + 0xb34) == 0)))) {
    return 0;
  }
  if (0x287 < param_2) {
    if (*(int *)(param_1 + 0xc78) != 0) {
      if (param_3 < 0x1ab) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc78) != 0) goto LAB_00746792;
    }
    if (param_3 < 0x1fb) {
      return 0;
    }
  }
LAB_00746792:
  if (param_2 < 0x245) {
    return 2;
  }
  if (param_2 < 0x287) {
    if (param_3 < 0x1fb) {
      return 0;
    }
    return 2;
  }
  return 2;
}



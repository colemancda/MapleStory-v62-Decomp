/* FUN_0041094e - 0x0041094e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0041094e(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 4) {
    param_2 = 2;
  }
  bVar1 = true;
  if (((((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) &&
      ((param_2 != 3 && (param_2 != 0x28)))) &&
     ((param_2 != 0x23 && ((param_2 != 0x21 && (param_2 != 0x22)))))) {
    bVar1 = false;
  }
  iVar3 = param_1 / 10000;
  if (iVar3 == 0xbe) {
    if (((bVar1) || (param_2 == 0x24)) || (param_2 == 0x25)) goto LAB_004109e3;
  }
  else {
    if (iVar3 == 0xc1) {
      if (bVar1) goto LAB_004109e3;
      if ((param_2 < 0x29) ||
         ((0x2a < param_2 &&
          ((param_2 < 0x5d || ((0x5e < param_2 && ((param_2 < 0x6b || (0x6c < param_2))))))))))
      goto LAB_004109e0;
      bVar1 = true;
    }
    if (bVar1) goto LAB_004109e3;
  }
LAB_004109e0:
  param_2 = 2;
LAB_004109e3:
  if ((param_5 != 0) && ((param_2 == 2 || (param_2 == 3)))) {
    param_2 = 0x28;
  }
  iVar2 = param_1;
  if (iVar3 == 0xbe) {
    iVar3 = *(int *)(param_3 + 0x48);
    if (iVar3 != 0) {
      FUN_00410a5f(param_2,iVar3,iVar3,param_4);
    }
    if ((*(int *)(param_3 + 0x48) != 0) && (*(int *)(param_3 + 0x4c) != 0)) {
      FUN_00410a5f(param_2,*(int *)(param_3 + 0x48),*(int *)(param_3 + 0x4c),param_4);
    }
    param_1 = *(int *)(param_3 + 0x48);
    if (param_1 == 0) {
      return 1;
    }
    iVar2 = *(int *)(param_3 + 0x50);
  }
  if (iVar2 != 0) {
    FUN_00410a5f(param_2,param_1,iVar2,param_4);
  }
  return 1;
}



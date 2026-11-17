/* FUN_007de0eb - 0x007de0eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007de0eb(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_3 & 0x80000000) != 0) {
    return;
  }
  if (((param_2 == 0x25) || (param_2 == 0x27)) && ((int)param_1[0x1e] < 2)) {
    return;
  }
  if (((param_2 == 0x28) || (param_2 == 0x26)) && ((int)param_1[0x1e] < 7)) {
    return;
  }
  iVar1 = param_1[0x1c];
  if (param_2 == 0xd) {
    iVar1 = param_1[-1];
    uVar3 = 1;
LAB_007de224:
    (**(code **)(iVar1 + 0x34))(uVar3);
    return;
  }
  if (param_2 == 0x1b) {
    iVar1 = param_1[-1];
    uVar3 = 2;
    goto LAB_007de224;
  }
  if (param_2 == 0x25) {
    if (iVar1 < 1) {
LAB_007de1d2:
      iVar2 = param_1[0x1e] + -1;
    }
    else {
      iVar2 = iVar1 + -1;
    }
LAB_007de1e0:
    param_1[0x1c] = iVar2;
  }
  else {
    if (param_2 == 0x26) {
      iVar2 = 6;
      if (iVar1 / 6 == -1) goto LAB_007de1d2;
      if (iVar1 / 6 == 0) {
        if (iVar1 % 6 <= (int)param_1[0x1e] % 6 + -1) {
          iVar2 = 0;
        }
        iVar2 = (((int)param_1[0x1e] / 6) * 6 - iVar2) + iVar1 % 6;
        goto LAB_007de1e0;
      }
      iVar2 = iVar1 + -6;
    }
    else {
      if (param_2 != 0x27) {
        if (param_2 != 0x28) {
          return;
        }
        if (iVar1 < param_1[0x1e] + -6) {
          if (iVar1 / 6 < 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar1 + 6;
          }
        }
        else {
          iVar2 = iVar1 % 6;
        }
        param_1[0x1c] = iVar2;
        goto LAB_007de1e3;
      }
      if (iVar1 < param_1[0x1e] + -1) {
        iVar2 = iVar1 + 1;
      }
      else {
        iVar2 = 0;
      }
    }
    param_1[0x1c] = iVar2;
  }
LAB_007de1e3:
  if (((1 < (int)param_1[0x1e]) && (iVar2 = param_1[0x1c], -1 < iVar2)) &&
     ((iVar2 == param_1[0x1d] && (iVar2 != iVar1)))) {
    (**(code **)*param_1)(param_2,param_3);
    return;
  }
  FUN_008161f1(0);
  return;
}



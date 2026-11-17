/* FUN_0079373d - 0x0079373d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte __thiscall FUN_0079373d(int param_1,int param_2,int param_3,byte param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0x1788) != 0) && (iVar1 = FUN_0043f90a(0), 0x23 < iVar1)) &&
     ((iVar1 < 0x26 || ((0x2c < iVar1 && (iVar1 < 0x2f)))))) {
    uVar2 = FUN_0043f6fe();
    if ((uVar2 < 0x80000000) || ((iVar1 = FUN_00793854(), iVar1 == 0 || (param_3 != 0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1788) + 4) = uVar3;
  }
  if (param_2 == 0) {
    if (*(int *)(param_5 + 0x110) != 0) {
      if (0 < param_3) {
        return param_4 & 1 | 10;
      }
      return (((*(int *)(param_1 + 0x524) < 1) - 1U & 2) + 2) * '\x02' | param_4 & 1;
    }
  }
  else if (*(int *)(param_5 + 0x110) != 0) {
    return param_2 < 0 | 2;
  }
  iVar1 = FUN_006158e9();
  if (iVar1 == 0) {
    iVar1 = FUN_00615923();
    if (iVar1 == 0) {
      if (param_2 < 0) {
        param_4 = 1;
      }
      else if (param_2 < 1) {
        param_4 = param_4 & 1;
      }
      else {
        param_4 = 0;
      }
      iVar1 = FUN_00614c6f();
      param_4 = ((-(iVar1 != 0) & 3U) + 3) * '\x02' | param_4;
    }
    else {
      param_4 = param_4 & 1 | 0x10;
    }
  }
  else {
    param_4 = param_4 & 1 | 0xe;
  }
  return param_4;
}



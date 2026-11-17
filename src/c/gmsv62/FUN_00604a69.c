/* FUN_00604a69 - 0x00604a69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00604a69(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (((((0x29 < param_2) && (param_2 < 0x4d)) && (0x187 < param_3)) &&
      ((param_3 < 0x1ab && (uVar1 = param_1[1], -1 < (int)uVar1)))) && ((int)uVar1 < 10)) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar5 + -4);
    }
    if ((uVar1 < uVar4) && (iVar5 = *(int *)(*(int *)(iVar5 + 4 + uVar1 * 8) + 0xee), iVar5 != 0)) {
      uVar8 = 0;
      iVar3 = param_1[3];
      uVar7 = 0;
      uVar6 = 0;
      iVar2 = (**(code **)(*(int *)(iVar3 + 4) + 0x30))(iVar5,0,0,0);
      param_3 = iVar2 + 0x14 + param_3;
      iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x2c))(param_3);
      FUN_00759767(iVar3 + param_2,param_3,iVar5,uVar6,uVar7,uVar8);
      return;
    }
  }
  FUN_0074d6fb();
  return;
}



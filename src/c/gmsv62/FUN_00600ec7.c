/* FUN_00600ec7 - 0x00600ec7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00600ec7(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = param_2;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 4);
  }
  iVar7 = *(int *)(*(int *)(param_2 + 4) + 0x10);
  uVar6 = *(uint *)(*(int *)(param_2 + 4) + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = 4 - *(ushort *)(param_1 + 0xc);
    param_3 = (undefined4 *)uVar6;
    if (uVar4 <= uVar6) {
      param_3 = (undefined4 *)uVar4;
    }
    FUN_00600fd1(iVar7,param_3);
    if (3 < *(ushort *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 4) = 1;
      uVar2 = FUN_00424561();
      *(undefined2 *)(param_1 + 0xe) = uVar2;
      if (param_4 == 0) {
        uVar3 = FUN_00424561();
      }
      else {
        uVar3 = FUN_00424561();
        uVar3 = uVar3 ^ *(ushort *)(param_1 + 0xe);
      }
      *(ushort *)(param_1 + 0x10) = uVar3;
    }
    uVar6 = uVar6 - (int)param_3;
    if (uVar6 == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        FUN_00475b89(0);
        *(undefined4 *)(param_2 + 4) = 0;
      }
      goto LAB_00600fc7;
    }
    iVar7 = iVar7 + (int)param_3;
  }
  param_2 = iVar7;
  uVar4 = ((uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(param_1 + 0xc)) + 4;
  param_3 = (undefined4 *)uVar6;
  if (uVar4 <= uVar6) {
    param_3 = (undefined4 *)uVar4;
  }
  FUN_00600fd1(param_2,param_3);
  if (*(ushort *)(param_1 + 0x10) + 4 <= (uint)*(ushort *)(param_1 + 0xc)) {
    *(undefined4 *)(param_1 + 4) = 2;
  }
  iVar7 = uVar6 - (int)param_3;
  if (iVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00475053(*(int *)(*(int *)(iVar1 + 4) + 0xc) - iVar7,iVar7,(int)&param_3 + 3);
  }
  FUN_0047598f(uVar5);
LAB_00600fc7:
  return *(undefined4 *)(param_1 + 4);
}



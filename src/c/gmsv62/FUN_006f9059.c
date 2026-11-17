/* FUN_006f9059 - 0x006f9059 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f9059(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar2 = FUN_00455c59(&local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  bVar1 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
  uVar5 = (uint)bVar1;
  if (param_2 == 0) {
    FUN_0087a1b0();
    iVar2 = uVar5 - 0xf;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    uVar3 = FUN_0087b818(iVar2,&stack0xffffffe8,10);
    FUN_004a2fef(uVar3);
    FUN_0087a1b0();
    uVar4 = 200;
    if (uVar5 + 0xf < 200) {
      uVar4 = uVar5 + 0xf;
    }
  }
  else {
    if (param_2 != 1) {
      return;
    }
    piVar6 = (int *)(param_1 + 0x5ac);
    param_2 = 0x13;
    do {
      (**(code **)(*(int *)(*piVar6 + 4) + 0x1c))(1);
      FUN_00499fb8(1);
      (**(code **)(*(int *)(*piVar6 + 4) + 0x1c))(0);
      piVar6 = piVar6 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    FUN_0087a1b0();
    iVar2 = uVar5 - 0xf;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    uVar3 = FUN_0087b818(iVar2,&stack0xffffffe8,10);
    FUN_004a2fef(uVar3);
    FUN_0087a1b0();
    uVar4 = 200;
    if (uVar5 + 0xf < 200) {
      uVar4 = uVar5 + 0xf;
    }
    uVar3 = FUN_0087b818(uVar4,&stack0xffffffe8,10);
    FUN_004a2fef(uVar3);
    FUN_0087a1b0();
    uVar4 = 6;
  }
  uVar3 = FUN_0087b818(uVar4,&stack0xffffffe8,10);
  FUN_004a2fef(uVar3);
  return;
}



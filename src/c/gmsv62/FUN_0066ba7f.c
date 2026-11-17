/* FUN_0066ba7f - 0x0066ba7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0066ba7f(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = FUN_00413367(param_1 + 0x91,*(undefined4 *)(param_1 + 0x99));
  iVar8 = ((int)uVar5 >> 0x1f) + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar5,param_3);
  iVar1 = param_1 + 0x33;
  bVar2 = FUN_0045f03e(iVar1,*(undefined4 *)(param_1 + 0x35));
  if (bVar2 < 200) {
    uVar7 = FUN_0045f03e(iVar1,*(undefined4 *)(param_1 + 0x35));
    uVar7 = uVar7 & 0xff;
    if (uVar7 < 0xc9) {
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      uVar7 = *(uint *)(&DAT_0097aa18 + uVar7 * 4);
    }
    else {
      uVar7 = 0x7fffffff;
    }
    if (((int)uVar7 >> 0x1f <= iVar8) &&
       (((int)uVar7 >> 0x1f < iVar8 || (uVar7 <= uVar5 + param_3)))) {
      FUN_0045f03e(iVar1,*(undefined4 *)(param_1 + 0x35));
      FUN_0045f03e(iVar1,*(undefined4 *)(param_1 + 0x35));
      uVar6 = FUN_004b8c01();
      *(undefined4 *)(param_1 + 0x35) = uVar6;
      cVar3 = FUN_0045f03e(iVar1,uVar6);
      if (cVar3 == -0x38) {
        *param_4 = 1;
      }
      FUN_0045f03e(iVar1,*(undefined4 *)(param_1 + 0x35));
      uVar6 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x99) = uVar6;
      FUN_0066bc4c(param_1,param_2,0x2800,1);
      sVar4 = FUN_0045f084(param_1 + 0x61,*(undefined4 *)(param_1 + 0x65));
      if (0 < sVar4) {
        FUN_0045f084(param_1 + 0x69,*(undefined4 *)(param_1 + 0x6d));
        uVar6 = FUN_004b8c34();
        *(undefined4 *)(param_1 + 0x65) = uVar6;
        FUN_0045f084(param_1 + 0x79,*(undefined4 *)(param_1 + 0x7d));
        uVar6 = FUN_004b8c34();
        *(undefined4 *)(param_1 + 0x75) = uVar6;
      }
      return 1;
    }
  }
  else {
    uVar6 = FUN_004b8c01();
    *(undefined4 *)(param_1 + 0x35) = uVar6;
  }
  uVar6 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x99) = uVar6;
  return 0;
}



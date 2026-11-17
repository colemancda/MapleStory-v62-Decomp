/* FUN_0050666a - 0x0050666a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050666a(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  FUN_00879bb8();
  uVar3 = 0;
  bVar4 = DAT_00979274 == 0;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (bVar4) {
    local_1c = 0x50668e;
    FUN_005072e1();
  }
  while ((*(int *)(extraout_ECX + 0x728) != 0 &&
         (uVar3 < *(uint *)(*(int *)(extraout_ECX + 0x728) + -4)))) {
    uStack_20 = 0x5066aa;
    local_1c = uVar3;
    iVar1 = FUN_005073f7();
    uStack_20 = iVar1 + 0xc;
    local_1c = 0;
    *(uint **)(unaff_EBP + -0x14) = &local_1c;
    uStack_24 = 0x5066bc;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_24 = 0x5066c8;
    uStack_20 = uVar3;
    iVar1 = FUN_005073f7();
    uStack_20 = *(undefined4 *)(iVar1 + 8);
    uStack_24 = uVar3;
    iVar1 = FUN_005073f7();
    *(uint **)(unaff_EBP + -0x18) = &uStack_24;
    FUN_00450368(iVar1 + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = uVar3 + 1;
    uVar5 = 0;
    uVar6 = uVar3;
    FUN_00507326(0,uVar3);
    FUN_006f2b6f(uVar5,uVar6);
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uVar3 = 0;
  while ((iVar2 = *(int *)(iVar1 + 0x72c), iVar2 != 0 && (uVar3 < *(uint *)(iVar2 + -4)))) {
    uStack_20 = 0x506715;
    local_1c = uVar3;
    iVar2 = FUN_005073f7();
    uStack_20 = iVar2 + 0xc;
    local_1c = 0;
    *(uint **)(unaff_EBP + -0x18) = &local_1c;
    uStack_24 = 0x506727;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uStack_24 = 0x506736;
    uStack_20 = uVar3;
    iVar2 = FUN_005073f7();
    uStack_20 = *(undefined4 *)(iVar2 + 8);
    uStack_24 = uVar3;
    iVar2 = FUN_005073f7();
    *(uint **)(unaff_EBP + -0x14) = &uStack_24;
    FUN_00450368(iVar2 + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = uVar3 + 1;
    uVar5 = 1;
    uVar6 = uVar3;
    FUN_00507326(1,uVar3);
    FUN_006f2b6f(uVar5,uVar6);
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uVar3 = 0;
  while ((iVar2 = *(int *)(iVar1 + 0x730), iVar2 != 0 && (uVar3 < *(uint *)(iVar2 + -4)))) {
    uStack_20 = 0x506783;
    local_1c = uVar3;
    iVar2 = FUN_005073f7();
    uStack_20 = iVar2 + 0xc;
    local_1c = 0;
    *(uint **)(unaff_EBP + -0x18) = &local_1c;
    uStack_24 = 0x506795;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 4;
    uStack_24 = 0x5067a0;
    uStack_20 = uVar3;
    iVar2 = FUN_005073f7();
    uStack_20 = *(undefined4 *)(iVar2 + 8);
    uStack_24 = uVar3;
    iVar2 = FUN_005073f7();
    *(uint **)(unaff_EBP + -0x14) = &uStack_24;
    FUN_00450368(iVar2 + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = uVar3 + 1;
    uVar5 = 2;
    uVar6 = uVar3;
    FUN_00507326(2,uVar3);
    FUN_006f2b6f(uVar5,uVar6);
  }
  local_1c = 0x5067da;
  FUN_006f2b4e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



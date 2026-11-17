/* FUN_0067d844 - 0x0067d844 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067d844(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar6;
  int unaff_EBP;
  bool bVar7;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  
  FUN_00879bb8();
  local_44 = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0xf4),extraout_ECX + 0xec);
  local_4c = (double)CONCAT44(0x67d868,(undefined4)local_4c);
  iVar2 = FUN_00413367();
  if ((iVar2 == 0) && (*(int *)(extraout_ECX + 0xbc) == 0)) {
    iVar2 = *(int *)(unaff_EBP + 0x14);
    if (iVar2 != 0) {
      local_44 = (double)CONCAT44(0x67d890,(undefined4)local_44);
      iVar3 = FUN_005d04ff();
      if ((iVar3 != 0) || (*(int *)(iVar2 + 0x2f8) != 0)) goto LAB_0067db4a;
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 0x15c);
      local_44 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x18),0x67d8bb);
      iVar3 = FUN_004e67c9();
      *(int *)(unaff_EBP + -0x14) = iVar3;
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) == 0)) {
        local_44 = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0xa4),iVar2 + 0x170);
        local_4c = (double)CONCAT44(0x67d8fa,(undefined4)local_4c);
        uVar4 = FUN_00670308();
      }
      else {
        local_44 = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0xa4),iVar2 + 0x170);
        local_4c = (double)CONCAT44(0x67d8e0,(undefined4)local_4c);
        uVar4 = FUN_006703b6();
      }
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        local_44 = (double)CONCAT44(1,unaff_EBP + -0x3c);
        local_4c = (double)CONCAT44(0x67d91b,(undefined4)local_4c);
        FUN_0067b267();
        uVar6 = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x3c);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x3c);
        if (uVar6 == 0) {
          local_44 = (double)CONCAT44(0x67d945,(undefined4)local_44);
          uVar4 = FUN_004133f0();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        }
        else {
          local_44 = (double)CONCAT44(0x67d934,(undefined4)local_44);
          uVar5 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x10) = uVar5 % uVar6 + *(int *)(unaff_EBP + -0x10);
        }
        uVar6 = *(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x38);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x38);
        if (uVar6 == 0) {
          local_44 = (double)CONCAT44(0x67d96c,(undefined4)local_44);
          iVar2 = FUN_004133f0();
          uVar4 = extraout_ECX_01;
        }
        else {
          local_44 = (double)CONCAT44(0x67d95c,(undefined4)local_44);
          uVar5 = FUN_004133f0();
          iVar2 = uVar5 % uVar6 + *(int *)(unaff_EBP + -0x18);
          uVar4 = extraout_ECX_00;
        }
        local_44 = (double)CONCAT44(0xc00614a4,uVar4);
        if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x84) == 0) {
          *(undefined8 **)(unaff_EBP + -0x18) = &local_44;
          local_4c = 3.36258509418194e-317;
          FUN_00424e0a();
          local_4c = (double)CONCAT44(iVar2,*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 2;
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_50;
          FUN_00424dd7(0);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          bVar7 = 0 < *(int *)(unaff_EBP + 0x1c);
        }
        else {
          *(undefined8 **)(unaff_EBP + -0x18) = &local_44;
          local_4c = 3.36256137903094e-317;
          FUN_00424e0a();
          local_4c = 0.0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_50;
          FUN_005c894f(&uStack_50);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar3 = FUN_0067b311();
          bVar7 = iVar3 == 0;
        }
        uVar6 = (uint)bVar7;
        uVar4 = FUN_004091f9(uVar6);
        FUN_00424e82(uVar4);
        FUN_0042b613(uVar4,uVar6);
        local_44 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14),
                                    *(int *)(unaff_EBP + -0x1c) + 0xc);
        local_4c = (double)CONCAT44(0x67da05,(undefined4)local_4c);
        uVar4 = FUN_004b8c9b();
        local_4c = (double)CONCAT44(iVar2,*(undefined4 *)(unaff_EBP + -0x10));
        uStack_50 = 0x67da10;
        uStack_50 = FUN_007d3c48();
        FUN_007d4267(uVar4,*(int *)(unaff_EBP + 0x18) + 0xb);
        iVar2 = *(int *)(unaff_EBP + 0x14);
      }
    }
    iVar3 = *(int *)(unaff_EBP + 8);
    local_44 = (double)CONCAT44(0x67da40,(undefined4)local_44);
    uVar4 = FUN_004133b5();
    iVar1 = *(int *)(unaff_EBP + 0xc);
    *(undefined4 *)(extraout_ECX + 0xf4) = uVar4;
    if ((iVar1 != 0) || (*(int *)(unaff_EBP + 0x10) != 0)) {
      local_44 = (double)*(int *)(unaff_EBP + 0x10);
      local_4c = (double)*(int *)(unaff_EBP + 0xc);
      uStack_50 = 0x67da76;
      FUN_0067db5b();
    }
    local_44 = (double)CONCAT44(iVar3,0x67da7e);
    FUN_0067e864();
    local_44 = 0.0;
    local_4c = 3.18302731334133e-312;
    FUN_0060142b();
    uVar4 = *(undefined4 *)(extraout_ECX + 0x98);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    local_44 = (double)CONCAT44(uVar4,0x67daa4);
    FUN_00457d37();
    if (iVar2 == 0) {
      local_44 = 5.38990293613296e-312;
      FUN_00457cda();
      local_44 = (double)CONCAT44(iVar3,0x67dabe);
      FUN_00457d37();
    }
    else {
      local_44 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x18),0x67dacb);
      FUN_00457cda();
      local_44 = (double)CONCAT44(iVar3,0x67dad4);
      FUN_00457d37();
      local_44 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar2 + 0x15c) + 0x14),
                                  *(int *)(iVar2 + 0x15c) + 0xc);
      local_4c = (double)CONCAT44(0x67dae6,(undefined4)local_4c);
      uVar4 = FUN_004b8c9b();
      local_44 = (double)CONCAT44(uVar4,0x67daf1);
      uVar4 = FUN_00457d37();
      local_44 = (double)CONCAT44(CONCAT31((int3)((uint)uVar4 >> 8),*(int *)(unaff_EBP + 0x1c) < 0),
                                  0x67db01);
      FUN_00457cda();
    }
    local_44 = (double)CONCAT44(unaff_EBP + -0x2c,0x67db10);
    FUN_004751b2();
    if (iVar3 != 0) {
      local_44 = (double)CONCAT44(0x67db22,SUB84(local_44,0));
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0xd8) = uVar4;
      local_44 = (double)CONCAT44(0x67db2f,(undefined4)local_44);
      FUN_0067b45c();
      local_44 = (double)CONCAT44(0x24,*(undefined4 *)(extraout_ECX + 0xa0));
      local_4c = (double)CONCAT44(0x67db3c,(undefined4)local_4c);
      FUN_007d3e08();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_44 = (double)CONCAT44(0x67db4a,(undefined4)local_44);
    FUN_0045ebca();
  }
LAB_0067db4a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



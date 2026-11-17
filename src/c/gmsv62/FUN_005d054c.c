/* FUN_005d054c - 0x005d054c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d054c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  bool bVar7;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0x14);
  if ((iVar1 != 0) && (*(int *)(extraout_ECX + 0x2f8) != *(int *)(iVar1 + 0x2f8))) {
    iStack_54 = 0x5d0582;
    iVar2 = FUN_007d1e08();
    if (1999 < iVar2 - *(int *)(extraout_ECX + 0x3ec)) {
      iStack_54 = *(undefined4 *)(unaff_EBP + 0x18);
      *(int *)(extraout_ECX + 0x3ec) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 0x15c);
      iStack_58 = 0x5d05b1;
      iVar2 = FUN_004e67c9();
      *(int *)(unaff_EBP + 0x14) = iVar2;
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) == 0)) {
        iStack_54 = extraout_ECX + 0x170;
        iStack_58 = iVar1 + 0x170;
        iStack_5c = 0x5d05f2;
        uVar3 = FUN_0066f71e();
      }
      else {
        iStack_54 = extraout_ECX + 0x170;
        iStack_58 = iVar1 + 0x170;
        iStack_5c = 0x5d05d7;
        uVar3 = FUN_0066f83e();
      }
      *(undefined4 *)(unaff_EBP + 8) = uVar3;
      if (*(int *)(unaff_EBP + 0x14) != 0) {
        iStack_54 = 1;
        iStack_58 = unaff_EBP + -0x40;
        iStack_5c = 0x5d060d;
        FUN_005c5b12();
        uVar6 = *(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x40);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x40);
        if (uVar6 == 0) {
          iStack_54 = 0x5d0635;
          uVar3 = FUN_004133f0();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
        }
        else {
          iStack_54 = 0x5d0624;
          uVar4 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x10) = uVar4 % uVar6 + *(int *)(unaff_EBP + -0x10);
        }
        uVar6 = *(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x3c);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x3c);
        if (uVar6 == 0) {
          iStack_54 = 0x5d065f;
          iVar2 = FUN_004133f0();
        }
        else {
          iStack_54 = 0x5d064f;
          uVar4 = FUN_004133f0();
          iVar2 = uVar4 % uVar6 + *(int *)(unaff_EBP + -0x14);
        }
        iStack_58 = *(int *)(unaff_EBP + 0x14);
        iStack_54 = 0xc00614a4;
        if (*(int *)(iStack_58 + 0x84) == 0) {
          *(int **)(unaff_EBP + -0x1c) = &iStack_58;
          iStack_5c = 0;
          uStack_60 = 0x5d06af;
          FUN_00424e0a();
          uStack_60 = *(undefined4 *)(unaff_EBP + -0x10);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_64;
          iStack_5c = iVar2;
          FUN_00424dd7(0);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          bVar7 = 0 < *(int *)(unaff_EBP + 0x1c);
        }
        else {
          *(int **)(unaff_EBP + -0x14) = &iStack_58;
          iStack_5c = 0;
          uStack_60 = 0x5d067f;
          FUN_00424e0a();
          iStack_5c = 0;
          uStack_60 = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_64;
          FUN_005cb50c(&uStack_64);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar5 = FUN_005c5474();
          bVar7 = iVar5 == 0;
        }
        uVar6 = (uint)bVar7;
        uVar3 = FUN_004091f9(uVar6);
        FUN_00424e82(uVar3);
        FUN_0042b613(uVar3,uVar6);
        iStack_54 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
        iStack_58 = *(int *)(unaff_EBP + -0x18) + 0xc;
        iStack_5c = 0x5d06fb;
        uVar3 = FUN_004b8c9b();
        uStack_60 = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
        uStack_64 = 0x5d0707;
        iStack_5c = iVar2;
        uStack_64 = FUN_007d3c48();
        FUN_007d4267(*(undefined4 *)(unaff_EBP + 0x14),*(int *)(unaff_EBP + 0x18) + 0xb);
      }
      iStack_54 = 0;
      iStack_58 = 0;
      iStack_5c = 0;
      uStack_60 = *(undefined4 *)(unaff_EBP + 8);
      uStack_64 = 0x5d0729;
      FUN_005ca219();
      iStack_54 = 0;
      iStack_58 = unaff_EBP + -0x50;
      iStack_5c = 0x5d0735;
      FUN_005c5b12();
      iVar2 = *(int *)(unaff_EBP + -0x48);
      iVar5 = *(int *)(unaff_EBP + -0x50);
      *(int *)(unaff_EBP + -0x1c) = (*(int *)(unaff_EBP + -0x4c) + *(int *)(unaff_EBP + -0x44)) / 2;
      iStack_54 = 0;
      iStack_58 = iVar1 + 4;
      iStack_5c = 1;
      uStack_60 = 0x5d0763;
      FUN_005cc3d9();
      iStack_54 = 0;
      iStack_58 = 0;
      iStack_5c = 0xa3;
      uStack_60 = 0x5d0774;
      FUN_0060142b();
      iStack_54 = *(undefined4 *)(iVar1 + 0x158);
      iStack_58 = iVar1 + 0x150;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      iStack_5c = 0x5d078d;
      iStack_54 = FUN_004b8c9b();
      iStack_58 = 0x5d0798;
      FUN_00457d37();
      iStack_54 = *(undefined4 *)(DAT_00978368 + 0x2088);
      iStack_58 = 0x5d07ab;
      FUN_00457d37();
      iStack_54 = *(undefined4 *)(extraout_ECX + 0x158);
      iStack_58 = extraout_ECX + 0x150;
      iStack_5c = 0x5d07bd;
      iStack_54 = FUN_004b8c9b();
      iStack_58 = 0x5d07c8;
      FUN_00457d37();
      iStack_54 = *(undefined4 *)(unaff_EBP + 0x18);
      iStack_58 = 0x5d07d3;
      FUN_00457cda();
      iStack_54 = *(undefined4 *)(unaff_EBP + 8);
      iStack_58 = 0x5d07de;
      uVar3 = FUN_00457d37();
      iStack_54 = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)(unaff_EBP + 0x1c) < 0);
      iStack_58 = 0x5d07ee;
      FUN_00457cda();
      iStack_58 = 0x5d07f7;
      iStack_54 = (iVar5 + iVar2) / 2;
      FUN_0045d247();
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_58 = 0x5d0802;
      FUN_0045d247();
      iStack_54 = unaff_EBP + -0x30;
      iStack_58 = 0x5d0811;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_54 = 0x5d081d;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



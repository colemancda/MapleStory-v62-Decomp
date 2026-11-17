/* FUN_0067e63c - 0x0067e63c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067e63c(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  iVar7 = *(int *)(extraout_ECX + 0x9c);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if ((iVar7 == 0) || (*(int *)(iVar7 + 0x524) == 0)) {
    iStack_3c = 0x67e672;
    cVar2 = FUN_0042452b();
    iVar8 = (int)cVar2;
    *(int *)(unaff_EBP + -0x28) = iVar8;
    iStack_3c = 0x67e67f;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    iVar7 = extraout_ECX;
    if (-2 < iVar8) {
      iStack_3c = 0x67e692;
      uVar3 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
      iStack_3c = 0x67e69c;
      uVar4 = FUN_0042452b();
      iStack_3c = *(undefined4 *)(unaff_EBP + -0x14);
      *(uint *)(unaff_EBP + -0x24) = uVar4 & 0xff;
      iStack_40 = 0x67e6aa;
      iVar5 = FUN_005d90ec();
      if ((iVar5 != 0) && (-1 < iVar8)) {
        iStack_40 = 0x67e6c3;
        iStack_3c = iVar8;
        iVar8 = FUN_004e67c9();
        *(int *)(unaff_EBP + -0x20) = iVar8;
        if (iVar8 != 0) {
          *(int **)(unaff_EBP + 8) = (int *)(iVar8 + 0x78);
          piVar1 = *(int **)(iVar8 + 0x78);
          if ((piVar1 == (int *)0x0) || (iVar8 = *piVar1, iVar8 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(iVar8 + -4) >> 1;
          }
          if (uVar4 != 0) {
            iStack_3c = 1;
            iStack_40 = unaff_EBP + -0x38;
            iStack_44 = 0x67e6fe;
            FUN_0067b267();
            uVar4 = *(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x38);
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x38);
            if (uVar4 == 0) {
              iStack_3c = 0x67e727;
              iVar7 = FUN_004133f0();
            }
            else {
              iStack_3c = 0x67e717;
              uVar6 = FUN_004133f0();
              iVar7 = uVar6 % uVar4 + *(int *)(unaff_EBP + -0x1c);
            }
            uVar4 = *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34);
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x34);
            if (uVar4 == 0) {
              iStack_3c = 0x67e74d;
              iVar8 = FUN_004133f0();
            }
            else {
              iStack_3c = 0x67e73d;
              uVar6 = FUN_004133f0();
              iVar8 = uVar6 % uVar4 + *(int *)(unaff_EBP + -0x1c);
            }
            iStack_3c = 0xc00614a4;
            if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x84) == 0) {
              *(int **)(unaff_EBP + -0x20) = &iStack_40;
              iStack_44 = 0;
              iStack_48 = 0x67e79d;
              FUN_00424e0a();
              *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
              *(undefined4 *)(unaff_EBP + -4) = 2;
              iStack_48 = iVar7;
              iStack_44 = iVar8;
              FUN_00424dd7(0);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar5 = *(int *)(unaff_EBP + -0x24);
            }
            else {
              *(int **)(unaff_EBP + -0x24) = &iStack_40;
              iStack_44 = 0;
              iStack_48 = 0x67e76d;
              FUN_00424e0a();
              iStack_44 = 0;
              iStack_48 = 0;
              *(undefined4 **)(unaff_EBP + -0x20) = &uStack_4c;
              *(undefined4 *)(unaff_EBP + -4) = 0;
              FUN_005c894f(&uStack_4c);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar5 = FUN_0067b311();
            }
            uVar4 = (uint)(iVar5 == 0);
            uVar3 = FUN_004091f9(uVar4);
            FUN_00424e82(uVar3);
            FUN_0042b613(uVar3,uVar4);
            iStack_44 = 0x67e7db;
            iStack_40 = iVar7;
            iStack_3c = iVar8;
            iStack_44 = FUN_007d3c48();
            iStack_48 = *(int *)(unaff_EBP + -0x28) + 0xb;
            uStack_4c = *(undefined4 *)(unaff_EBP + -0x14);
            FUN_007d4267();
            iVar7 = *(int *)(unaff_EBP + -0x10);
          }
        }
      }
    }
    if (*(int *)(unaff_EBP + -0x18) < 1) {
      iStack_3c = 0x67e807;
      uVar3 = FUN_004133b5();
      *(undefined4 *)(iVar7 + 0xf4) = uVar3;
    }
    else {
      iStack_3c = 0x67e819;
      uVar3 = FUN_004133b5();
      *(undefined4 *)(iVar7 + 0xf4) = uVar3;
      iStack_3c = 0x67e82d;
      uVar3 = FUN_004133b5();
      *(undefined4 *)(iVar7 + 0xd8) = uVar3;
      iStack_3c = 0x67e83a;
      FUN_0067b45c();
      iStack_3c = 0x24;
      iStack_40 = *(int *)(iVar7 + 0xa0);
      iStack_44 = 0x67e847;
      FUN_007d3e08();
    }
    iStack_3c = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_40 = 0x67e853;
    FUN_0067e864();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



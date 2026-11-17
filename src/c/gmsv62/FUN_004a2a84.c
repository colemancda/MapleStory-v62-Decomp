/* FUN_004a2a84 - 0x004a2a84 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a2a84(void)

{
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  int unaff_EBP;
  int iStack_7c;
  
  FUN_00879bb8();
  if (*(int *)(*(int *)(unaff_EBP + 8) + 8) == 0) goto LAB_004a2e60;
  iVar3 = *(int *)(extraout_ECX + 0x7c);
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    *(int *)(unaff_EBP + -0x14) = iVar3 + 10;
    *(int *)(unaff_EBP + -0x10) = (iVar3 + 4) * *(int *)(unaff_EBP + 0x10) * 2 + 4;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = (iVar3 + 1) * *(int *)(unaff_EBP + 0x10) + 3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar8 = *(uint *)(*(int *)(unaff_EBP + 8) + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (uVar8 != 0) {
      do {
        *(uint *)(unaff_EBP + -0x24) = uVar8;
        iVar3 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
        uVar8 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        iStack_7c = unaff_EBP + -0x20;
        piVar2 = (int *)FUN_00679d22();
        iStack_7c = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00434e21(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        iStack_7c = 0x4a2b34;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
        iStack_7c = unaff_EBP + -0x48;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_7c = 0x4a2b4e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_7c = 0x4a2b58;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        iStack_7c = unaff_EBP + -0x38;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_7c = 0x4a2b72;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_7c = 0x4a2b82;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x28) = &iStack_7c;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_0044974c();
        iVar3 = FUN_00448ebb();
        iStack_7c = 0x4a2baf;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x28) = &iStack_7c;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_0044974c();
        iVar5 = FUN_00448ebb();
        iVar3 = iVar5 + 2 + iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_7c = 0x4a2bdf;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_7c = 0x4a2bea;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_7c = 0x4a2bf7;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_7c = 0x4a2c02;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) < iVar3) {
          *(int *)(unaff_EBP + -0x10) = iVar3;
        }
      } while (uVar8 != 0);
      if (0x10a < *(int *)(unaff_EBP + -0x10)) {
        *(undefined4 *)(unaff_EBP + -0x10) = 800;
      }
    }
    iVar3 = *(int *)(extraout_ECX + 0x7c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 7 + iVar3;
    FUN_00414ebb();
  }
  iVar3 = *(int *)(extraout_ECX + 0x50);
  if (((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) || ((int)*(uint *)(extraout_ECX + 0x54) < 0)) {
LAB_004a2d39:
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
    iVar3 = iVar3 + (*(int *)(extraout_ECX + 0x58) - *(int *)(extraout_ECX + 0x60));
  }
  else {
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(iVar3 + -4);
    }
    if (uVar8 <= *(uint *)(extraout_ECX + 0x54)) goto LAB_004a2d39;
    iStack_7c = 0x4a2c92;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_7c = unaff_EBP + -0x48;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_7c = 0x4a2cac;
      FUN_00878dfb();
    }
    iStack_7c = *(int *)(extraout_ECX + 0x54);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    piVar2 = (int *)FUN_004a312f();
    iStack_7c = *piVar2 + *(int *)(extraout_ECX + 0x48);
    FUN_0045e070(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_7c = 0x4a2cde;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_7c;
    FUN_00448a17(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0044974c();
    iVar6 = FUN_00448ebb();
    iVar7 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
    iVar3 = *(int *)(extraout_ECX + 0x60);
    iVar5 = *(int *)(extraout_ECX + 0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar3 = iVar7 + -4 + ((iVar6 - iVar3) - iVar5);
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_7c = 0x4a2d2c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_7c = 0x4a2d37;
      FUN_00878dfb();
    }
  }
  iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
  *(int *)(unaff_EBP + -0x18) = iVar5 + 1 + *(int *)(extraout_ECX + 0x7c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (800 < iVar3 + *(int *)(unaff_EBP + -0x10)) {
    iVar3 = 800 - *(int *)(unaff_EBP + -0x10);
  }
  if (600 < *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x14)) {
    iVar5 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
    *(int *)(unaff_EBP + -0x18) = (iVar5 - *(int *)(unaff_EBP + -0x14)) + -1;
  }
  FUN_004a2fd0();
  iStack_7c = 0x4a2dac;
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x28) = iVar5;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  if (iVar5 != 0) {
    FUN_004a2e71();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_7c = 0x4a2dd7;
  FUN_004a3041();
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined ***)(unaff_EBP + -0x70) = &PTR_FUN_008e96b8;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  iStack_7c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0x18);
  FUN_004a3147(*(undefined4 *)(unaff_EBP + 8),0);
  pIVar1 = *(IBinding **)(extraout_ECX + 0x74);
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0x14);
  iStack_7c = 0x4a2e25;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x50),pIVar1);
  iStack_7c = 0x4a2e30;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x4c),
             *(IBinding **)(extraout_ECX + 0x78));
  iStack_7c = unaff_EBP + -0x74;
  FUN_0081420c(iVar3,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x10),
               *(undefined4 *)(unaff_EBP + -0x14),0x7ffffffe,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a2f7b();
LAB_004a2e60:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



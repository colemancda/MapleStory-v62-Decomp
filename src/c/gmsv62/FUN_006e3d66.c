/* FUN_006e3d66 - 0x006e3d66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e3d66(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 < 0) {
    if (*(int *)(extraout_ECX + 0x44) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x44) + -4);
    }
    if (iVar2 <= iVar3) goto LAB_006e3f55;
  }
  *(undefined4 *)(unaff_EBP + -0x14) =
       *(undefined4 *)(*(int *)(extraout_ECX + 0x44) + iVar3 * 8 + 4);
  FUN_006eab04();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    piStack_40 = (int *)0x6e3f72;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x14) + 100),(IBinding *)0x0);
  }
  else {
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 100) != 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_006eab16();
      goto LAB_006e3f55;
    }
    piStack_40 = (int *)0x6e3dd8;
    iVar3 = FUN_006e3164();
    piStack_40 = (int *)0xff;
    iStack_44 = 0x6e3df0;
    FUN_00424e27();
    iStack_44 = 0x6e3df7;
    iStack_44 = FUN_004320e3();
    iStack_44 = iStack_44 + 2;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_48;
    uStack_50 = 0x6e3e06;
    iStack_4c = extraout_ECX + 0x3c;
    FUN_0041160e();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = (uint)(iVar3 == 1) * 0x10;
    iStack_4c = 0x6e3e17;
    iVar2 = FUN_006ea9ad();
    iStack_4c = *(undefined4 *)(iVar2 + 0x18 + iVar5);
    uStack_50 = 0x6e3e23;
    iVar2 = FUN_006ea9ad();
    uStack_50 = *(undefined4 *)(iVar2 + 0x14 + iVar5);
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_54;
    uStack_5c = 0x6e3e33;
    iStack_58 = extraout_ECX + 0x3c;
    FUN_0048bccf();
    iStack_58 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_5c = 0x6e3e41;
    iVar2 = FUN_006ea9ad();
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_5c;
    FUN_00424dbc(iVar2 + 0x68 + (uint)(iVar3 == 1) * 4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puVar4 = (undefined4 *)FUN_0042e5bf(unaff_EBP + 8);
    piStack_40 = (int *)0x6e3e6e;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x14) + 100),(IBinding *)*puVar4);
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      piStack_40 = (int *)0x6e3e7b;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    piStack_40 = (int *)0x6e3e87;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_40 = (int *)(unaff_EBP + -0x38);
    iStack_44 = 0x6e3e96;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_40 = (int *)0x6e3ea2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_40 = (int *)0x6e3eac;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    piStack_40 = (int *)(unaff_EBP + -0x28);
    iStack_44 = 0x6e3eb6;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_40 = (int *)0x6e3ec2;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    iVar2 = *(int *)(iVar3 + 100);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      piStack_40 = (int *)0x6e3edc;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(iVar3 + 100);
    uStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_44 = *(int *)(unaff_EBP + -0x34);
    piStack_40 = *(int **)(unaff_EBP + -0x30);
    iStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_5c = 0x20;
    iStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
    iVar3 = (**(code **)(*piVar1 + 0x110))(piVar1);
    if (iVar3 < 0) {
      uStack_48 = 0x6e3f11;
      iStack_44 = iVar3;
      piStack_40 = piVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_40 = (int *)0x6e3f1e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_40 = (int *)0x6e3f29;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_40 = (int *)0x6e3f36;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_40 = (int *)0x6e3f41;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_40 = (int *)0x6e3f55;
    FUN_006eadbe();
  }
LAB_006e3f55:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



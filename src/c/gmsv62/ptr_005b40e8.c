/* ptr_005b40e8 - 0x005b40e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005b40e8(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int unaff_EBP;
  int unaff_ESI;
  bool bVar9;
  VARIANTARG *in_stack_00000014;
  undefined4 uVar10;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  FUN_00448e3a();
  in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  in_stack_00000014 = (VARIANTARG *)FUN_00402bc3();
  if ((int)in_stack_00000014 < unaff_ESI) {
    FUN_00878dfb();
  }
  in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  in_stack_00000014 = (VARIANTARG *)FUN_00402bc3();
  if ((int)in_stack_00000014 < unaff_ESI) {
    FUN_00878dfb();
  }
  in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  in_stack_00000014 = (VARIANTARG *)FUN_00402bc3();
  if ((int)in_stack_00000014 < unaff_ESI) {
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x708) == 1) {
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    in_stack_00000014 = (VARIANTARG *)0x1e2;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_00679d22();
    in_stack_00000014 = *(VARIANTARG **)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    in_stack_00000014 = (VARIANTARG *)0x5b418a;
    FUN_00414ebb();
    in_stack_00000014 = (VARIANTARG *)0x1e2;
    FUN_00679d22();
    in_stack_00000014 = *(VARIANTARG **)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    in_stack_00000014 = (VARIANTARG *)0x5b41bb;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    VariantInit(in_stack_00000014);
    in_stack_00000014 = (VARIANTARG *)FUN_00402e32();
    if ((int)in_stack_00000014 < 0) {
      FUN_00878dfb();
    }
    in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    VariantInit(in_stack_00000014);
    in_stack_00000014 = (VARIANTARG *)FUN_00402e32();
    if ((int)in_stack_00000014 < 0) {
      FUN_00878dfb();
    }
    iVar7 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    in_stack_00000014 = (VARIANTARG *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iVar4 = *(int *)(iVar7 + 0x700);
    *(BADSPACEBASE **)(unaff_EBP + -0x18) = register0x00000010;
    if (iVar4 == 0) {
      iVar4 = unaff_EBP + -0x30;
      if (*(int *)(iVar7 + 0xc0) != 0) {
        iVar4 = unaff_EBP + -0x6c;
      }
    }
    else {
      iVar4 = unaff_EBP + -0x6c;
      if (*(int *)(iVar7 + 0xc0) != 0) {
        iVar4 = unaff_EBP + -0x30;
      }
    }
    *(int *)(unaff_EBP + -0x10) = iVar4;
    iStack_8 = unaff_EBP + -0x40;
    iStack_c = 0x5b428e;
    iStack_c = FUN_00449749();
    uStack_10 = 0xffffffff;
    uStack_14 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_18 = 0x5b429c;
    uStack_18 = FUN_00449713();
    uStack_14 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_10;
    uStack_18 = 0x5b42af;
    FUN_004033a1();
    uStack_14 = 0x194;
    uStack_18 = 0xd;
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    iStack_8 = 0x5b42d6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_8 = 0x5b42e1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iStack_8 = 0x5b42ee;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_8 = 0x5b42f9;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x18;
    iStack_c = 0x5b430c;
    puVar5 = (undefined4 *)FUN_00679d22();
    iStack_8 = *puVar5;
    iStack_c = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    uStack_10 = 0x5b4322;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    FUN_00414ebb();
    iStack_8 = 0x5b433b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    iStack_8 = unaff_EBP + -0x7c;
    iStack_c = 0x5b4345;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_8 = 0x5b4351;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    iStack_8 = 0x5b435f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_8 = unaff_EBP + -0x40;
    iStack_c = 0x5b4369;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_8 = 0x5b4375;
      FUN_00878dfb();
    }
    iStack_8 = 0;
    iStack_c = 0xffffffff;
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    uStack_14 = 0;
    uStack_18 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_18;
    piStack_20 = (int *)(unaff_EBP + -0x40);
    iStack_24 = 0x5b43ab;
    iStack_24 = FUN_00449749();
    iStack_28 = -1;
    uVar6 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x18));
    uVar6 = FUN_00456ad5(uVar6);
    *(int **)(unaff_EBP + -0x18) = &iStack_28;
    FUN_004033a1(uVar6);
    uVar10 = 0x194;
    uVar6 = 0x127;
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    FUN_004115d9(0x127,0x194);
    FUN_00448e3a(uVar6,uVar10);
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    piStack_20 = (int *)0x5b43f6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_20 = (int *)0x5b4401;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    piStack_20 = (int *)0x5b440e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_20 = (int *)0x5b4419;
      FUN_00878dfb();
    }
    if (*(int *)(iVar7 + 0x1f8) == 0) {
      piStack_20 = (int *)0x5b4435;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_20 = (int *)(unaff_EBP + -0x40);
      iStack_24 = 0x5b443f;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b444b;
        FUN_00878dfb();
      }
      piStack_20 = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      iStack_24 = 0x5b445b;
      FUN_004031b7();
      bVar9 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      if (bVar9) {
        piStack_20 = (int *)0x5b4472;
        FUN_00878dfb();
      }
      piStack_20 = (int *)(unaff_EBP + -0x2c);
      iStack_24 = 5;
      iStack_28 = 0;
      piVar8 = (int *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0);
      piVar8 = (int *)*piVar8;
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      if (piVar2 != piVar8) {
        *piVar1 = (int)piVar8;
        FUN_00424ed4();
        if (piVar2 != (int *)0x0) {
          piStack_20 = (int *)0x5b44bd;
          (**(code **)(*piVar2 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        piStack_20 = (int *)0x5b44ce;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      piStack_20 = (int *)0x5b44db;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b44e6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_20 = (int *)0x5b44f3;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b44fe;
        FUN_00878dfb();
      }
      piStack_20 = (int *)0x5b450a;
      puVar5 = (undefined4 *)FUN_004489f5();
      piVar8 = (int *)*puVar5;
      *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
      *(int **)(unaff_EBP + -0x38) = piVar8;
      iVar7 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      piStack_20 = (int *)0x5b451f;
      (**(code **)(iVar7 + 4))();
      iVar7 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      if (iVar7 == 0) {
        piStack_20 = (int *)0x80004003;
        iStack_24 = 0x5b4532;
        FUN_00878dfb();
      }
      iStack_28 = *(int *)(unaff_EBP + -0x3c);
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      iVar7 = *piVar1;
      iStack_24 = *(int *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x18) = piVar1;
      piStack_20 = *(int **)(unaff_EBP + -0x34);
      iVar7 = (**(code **)(iVar7 + 100))(piVar1,*(undefined4 *)(unaff_EBP + -0x40));
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      iVar7 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar7 < 0) {
        FUN_00878dfb(iVar7);
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar7 = *(int *)(unaff_EBP + -0x14);
      puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
      piVar1 = (int *)*puVar5;
      *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
      *(int **)(unaff_EBP + -0x38) = piVar1;
      iVar4 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      (**(code **)(iVar4 + 4))(piVar1);
      iVar7 = *(int *)(iVar7 + 0x1f8);
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      if (iVar7 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      iVar7 = *piVar1;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      iVar7 = (**(code **)(iVar7 + 0xfc))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      iVar7 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar7 < 0) {
        FUN_00878dfb(iVar7);
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1f8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = (int *)*piVar1;
      iVar7 = (**(code **)(*piVar8 + 0xe0))(piVar8,0xffffffff);
      if (iVar7 < 0) {
        iStack_28 = 0x5b4662;
        iStack_24 = iVar7;
        piStack_20 = piVar8;
        FUN_00878e09();
      }
      piStack_20 = (int *)0x5b466e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      piStack_20 = (int *)(unaff_EBP + -0x2c);
      iStack_24 = 0x5b4678;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b4684;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      piStack_20 = (int *)0x5b468e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      piStack_20 = (int *)(unaff_EBP + -0x68);
      iStack_24 = 0x5b4698;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b46a4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      piStack_20 = (int *)0x5b46b1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
      piStack_20 = (int *)(unaff_EBP + -0x8c);
      iStack_24 = 0x5b46be;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b46ca;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      piStack_20 = (int *)0x5b46d4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
      piStack_20 = (int *)(unaff_EBP + -0x7c);
      iStack_24 = 0x5b46de;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b46ea;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      piStack_20 = (int *)0x5b46f4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_20 = (int *)(unaff_EBP + -0x40);
      iStack_24 = 0x5b46fe;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b470a;
        FUN_00878dfb();
      }
      piStack_20 = (int *)0x0;
      *(int **)(unaff_EBP + -0x90) = &iStack_24;
      iStack_28 = 0x62d;
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      FUN_00679e4e(&iStack_24);
      iStack_28 = unaff_EBP + -0xb0;
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      iStack_24 = 0x5b4756;
      iVar7 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x18) = iVar7;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar7 != 0) {
        piStack_20 = (int *)0x5b476c;
        iVar7 = FUN_0041a581();
        if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
          piStack_20 = (int *)0x5b477d;
          FUN_00878dfb();
        }
      }
      iVar7 = *piVar1;
      uVar6 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      if (iVar7 == 0) {
        piStack_20 = (int *)0x5b4793;
        FUN_00878dfb();
      }
      piStack_20 = (int *)(unaff_EBP + -0x68);
      iStack_24 = unaff_EBP + -0x8c;
      iStack_28 = unaff_EBP + -0x7c;
      FUN_004250ac(unaff_EBP + -0xa0,uVar6,unaff_EBP + -0x40);
      piStack_20 = (int *)0x5b47c5;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b47d0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_20 = (int *)0x5b47e1;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      piStack_20 = (int *)0x5b47f1;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b47fc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      piStack_20 = (int *)0x5b4809;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b4814;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      piStack_20 = (int *)0x5b4821;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b482c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      piStack_20 = (int *)0x5b483c;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b4847;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      piStack_20 = (int *)0x5b4854;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b485f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_20 = (int *)0x5b486c;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_20 = (int *)0x5b4877;
        FUN_00878dfb();
      }
    }
    piStack_20 = (int *)0x5b4883;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    piStack_20 = (int *)(unaff_EBP + -0x68);
    iStack_24 = 0x5b488d;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      piStack_20 = (int *)0x5b4899;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    piStack_20 = (int *)0x5b48a3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    piStack_20 = (int *)(unaff_EBP + -0x2c);
    iStack_24 = 0x5b48ad;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      piStack_20 = (int *)0x5b48b9;
      FUN_00878dfb();
    }
    iVar7 = *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar7 + 0x700);
    iVar3 = *(int *)(iVar7 + 0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 99;
    if (iVar4 == 0) {
      iVar4 = (-(uint)(iVar3 != 0) & 0xffffffaa) + 0x1e8;
    }
    else {
      iVar4 = (-(uint)(iVar3 != 0) & 0x56) + 0x192;
    }
    iVar7 = *(int *)(iVar7 + 0x1f8);
    *(int *)(unaff_EBP + -0x10) = iVar4;
    if (iVar7 == 0) {
      piStack_20 = (int *)0x5b4905;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
    iStack_28 = *(int *)(unaff_EBP + -0x68);
    iStack_24 = *(int *)(unaff_EBP + -100);
    piStack_20 = *(int **)(unaff_EBP + -0x60);
    iVar7 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x10),0x37,
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
    if (iVar7 < 0) {
      in_stack_00000014 = (VARIANTARG *)&DAT_00963de8;
      FUN_00878e09();
    }
    in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    in_stack_00000014 = (VARIANTARG *)FUN_00402bc3();
    if ((int)in_stack_00000014 < 0) {
      FUN_00878dfb();
    }
    in_stack_00000014 = (VARIANTARG *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    in_stack_00000014 = (VARIANTARG *)FUN_00402bc3();
    if ((int)in_stack_00000014 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    in_stack_00000014 = (VARIANTARG *)0x5b4985;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    in_stack_00000014 = (VARIANTARG *)0x5b4991;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    in_stack_00000014 = (VARIANTARG *)0x5b499d;
    FUN_00414ebb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x708) == 2) {
    in_stack_00000014 = *(VARIANTARG **)(unaff_EBP + 8);
    *(VARIANTARG ***)(unaff_EBP + -0x90) = &stack0x00000014;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 4))();
    }
    FUN_005b6478();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  in_stack_00000014 = (VARIANTARG *)0x5b4a4c;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  in_stack_00000014 = (VARIANTARG *)0x5b4a58;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  in_stack_00000014 = (VARIANTARG *)0x5b4a64;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  in_stack_00000014 = (VARIANTARG *)0x5b4a70;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  in_stack_00000014 = (VARIANTARG *)0x5b4a7c;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  in_stack_00000014 = (VARIANTARG *)0x5b4a88;
  FUN_00414ebb();
  in_stack_00000014 = *(VARIANTARG **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (in_stack_00000014 != (VARIANTARG *)0x0) {
    (**(code **)(*(int *)in_stack_00000014 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



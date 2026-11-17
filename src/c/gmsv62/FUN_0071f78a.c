/* FUN_0071f78a - 0x0071f78a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071f78a(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  bool bVar7;
  int iStack_c4;
  int *piStack_c0;
  undefined *puStack_bc;
  int *piStack_b8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) != 0x201) goto LAB_0071fdc8;
  piStack_b8 = (int *)(unaff_EBP + -0x14);
  puStack_bc = (undefined *)0x1;
  piStack_c0 = *(int **)(unaff_EBP + 0x14);
  iStack_c4 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
  *(int *)(unaff_EBP + -0x28) = extraout_ECX + -4;
  FUN_0071f653();
  if (*(int *)(unaff_EBP + -0x14) == -1) goto LAB_0071fdc8;
  piStack_b8 = (int *)0x71f7e6;
  FUN_0071f6dc();
  if (*(int *)(unaff_EBP + -0x24) == -1) goto LAB_0071fdc8;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x24) == 3) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    piStack_b8 = (int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_bc = (undefined *)0x71f820;
    puVar2 = (undefined4 *)FUN_00679d22();
    piStack_b8 = (int *)*puVar2;
    puStack_bc = (undefined *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_c0 = (int *)0x71f833;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_b8 = (int *)0x71f84a;
      FUN_00434e38();
    }
    piStack_b8 = (int *)0x71f854;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_b8 = (int *)0x71f861;
    FUN_00403191();
    piStack_b8 = (int *)0x0;
    puStack_bc = (undefined *)0xffffffff;
    piStack_c0 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_c4 = 0;
    (*DAT_0097b4c8)(0);
    FUN_0087a1b0();
    piStack_b8 = (int *)0x0;
    puStack_bc = (undefined *)(unaff_EBP + -0x4c);
    piStack_c0 = (int *)(unaff_EBP + -0x3c);
    iStack_c4 = -1;
    uVar3 = FUN_00449713(&stack0xffffff50);
    uVar3 = FUN_00456ad5(uVar3);
    *(int **)(unaff_EBP + -0x60) = &iStack_c4;
    FUN_004033a1(uVar3);
    iVar4 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_bc = (undefined *)0x71f8cf;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar4 != 0) {
      piStack_b8 = (int *)0x71f8e5;
      iVar4 = FUN_0041a581();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        piStack_b8 = (int *)0x71f8f6;
        FUN_00878dfb();
      }
    }
    piStack_b8 = (int *)0x71f901;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + -0x20));
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_b8 = (int *)0x71f916;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71f921;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_b8 = (int *)0x71f92e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71f939;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_b8 = (int *)0x71f946;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71f951;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
    piStack_b8 = (int *)0x71f960;
    FUN_0071f6dc();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_b8 = (int *)0x71f97b;
      FUN_00434e38();
    }
LAB_0071f9c4:
    piStack_b8 = (int *)0x71f9cd;
    FUN_00403191();
    piStack_b8 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_bc = (undefined *)0x71f9df;
    FUN_004031b7();
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (bVar7) {
      piStack_b8 = (int *)0x71f9f6;
      FUN_00878dfb();
    }
    piStack_b8 = (int *)(unaff_EBP + -0x90);
    puStack_bc = (undefined *)0x0;
    piStack_c0 = (int *)0x0;
    iStack_c4 = 0;
    FUN_0042a39f(unaff_EBP + 8,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_b8 = (int *)0x71fa25;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fa30;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_b8 = (int *)0x71fa3d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fa48;
      FUN_00878dfb();
    }
    piStack_b8 = (int *)0x71fa51;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_b8 = (int *)0x71fa5e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_b8 = (int *)0x71fa6e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_b8 = (int *)0x71fa7b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_b8 = (int *)0x71fa88;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_b8 = (int *)0x71fa97;
      FUN_00878dfb();
    }
    piStack_b8 = (int *)(unaff_EBP + -0x70);
    puStack_bc = (undefined *)(unaff_EBP + -0xa0);
    piStack_c0 = (int *)(unaff_EBP + -0x4c);
    iStack_c4 = unaff_EBP + -0x3c;
    FUN_004250ac(unaff_EBP + -0xb0,*(undefined4 *)(unaff_EBP + -0x10));
    piStack_b8 = (int *)0x71facc;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fad7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_b8 = (int *)0x71fae4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71faef;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_b8 = (int *)0x71fafc;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fb07;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_b8 = (int *)0x71fb17;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fb22;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_b8 = (int *)0x71fb2f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fb3a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_b8 = (int *)0x71fb47;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_b8 = (int *)0x71fb52;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_b8 = (int *)0x71fb5d;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    puStack_bc = (undefined *)0x71fb6e;
    piStack_b8 = piVar5;
    iVar4 = (**(code **)(*piVar5 + 0xe0))();
    if (iVar4 < 0) {
      puStack_bc = &DAT_00963df8;
      iStack_c4 = iVar4;
      piStack_c0 = piVar5;
      FUN_00878e09();
    }
    puStack_bc = (undefined *)(unaff_EBP + -0x1c);
    piStack_c0 = (int *)0x71fb8a;
    puVar2 = (undefined4 *)FUN_004489f5();
    piStack_c0 = (int *)*puVar2;
    puStack_bc = (undefined *)0x1;
    iStack_c4 = 0x71fb97;
    FUN_0040ee87();
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar5 == (int *)0x0) {
      puStack_bc = (undefined *)0x80004003;
      piStack_c0 = (int *)0x71fbac;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar4 = *piVar5;
    iStack_c4 = *(int *)(unaff_EBP + -0x58);
    piStack_c0 = *(int **)(unaff_EBP + -0x54);
    *(int **)(unaff_EBP + -0x28) = piVar5;
    puStack_bc = *(undefined **)(unaff_EBP + -0x50);
    iVar4 = (**(code **)(iVar4 + 100))(piVar5,*(undefined4 *)(unaff_EBP + -0x5c));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iVar4 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iVar4 = FUN_00402e32(unaff_EBP + -0x4c,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    iVar4 = FUN_0040eed0();
    *(int *)(unaff_EBP + 0x14) = (*(int *)(unaff_EBP + 0x14) - iVar4) + 0x10;
    iVar4 = FUN_0040eea9();
    iVar4 = (**(code **)(*piVar5 + 0x90))
                      (piVar5,(*(int *)(unaff_EBP + 0x10) - iVar4) + -0x10,
                       *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar5,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    puVar2 = (undefined4 *)FUN_004029b9(0x24);
    *(undefined4 **)(unaff_EBP + 0x14) = puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (puVar2 == (undefined4 *)0x0) {
      uVar6 = *(uint *)(unaff_EBP + -0x2c);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
      uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
      puVar2[4] = *(undefined4 *)(unaff_EBP + -0x20);
      puVar2[5] = *(undefined4 *)(unaff_EBP + -0x18);
      puVar2[7] = uVar3;
      uVar6 = *(uint *)(unaff_EBP + -0x2c);
      puVar2[6] = uVar1;
      puVar2[8] = -(uint)(uVar6 != 4) & uVar6;
      *puVar2 = &PTR_FUN_008efcdc;
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0081820c(-(uint)(uVar6 != 4) & uVar6,puVar2);
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x73b);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_007d3cdd(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00402676();
    FUN_0074d6fb();
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  else {
    piStack_b8 = *(int **)(unaff_EBP + -0x14);
    puStack_bc = (undefined *)0x71f98f;
    iVar4 = FUN_00598e2f();
    *(int *)(unaff_EBP + -0x20) = iVar4;
    if (iVar4 != 0) {
      piStack_b8 = (int *)0x71f9af;
      iVar4 = FUN_0064d61f();
      if (iVar4 != 0) {
        piStack_b8 = (int *)0x71f9c1;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                   *(IBinding **)(iVar4 + 0x90));
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        goto LAB_0071f9c4;
      }
    }
    FUN_004125e6();
  }
LAB_0071fdc8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



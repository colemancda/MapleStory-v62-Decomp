/* FUN_004304ea - 0x004304ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004304ea(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  bVar2 = false;
  *(int *)(unaff_EBP + -0x24) = extraout_ECX[2];
  iVar3 = extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  iVar3 = *extraout_ECX;
  *(int **)(unaff_EBP + -0x2c) = extraout_ECX;
  if (iVar3 == 0) {
    iVar3 = FUN_004308f4(extraout_ECX[1]);
    if (iVar3 == 0) goto LAB_004305e9;
    puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar4;
    iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
    iVar5 = FUN_005c5d3d();
    iVar3 = *(int *)(iVar3 + 4) - iVar5 / 2;
    goto LAB_004305e3;
  }
  iVar3 = FUN_007c00e8(iVar3);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x524) != 0)) goto LAB_004305e9;
  iVar5 = extraout_ECX[6];
  if ((iVar5 < 0) || (2 < iVar5)) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar4;
    iVar5 = FUN_0043f545();
    iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
    iVar3 = *(int *)(iVar3 + 4) - iVar5 / 2;
LAB_004305e3:
    *(int *)(unaff_EBP + -0x18) = iVar3;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1744) + 4 + iVar5 * 8);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x14) = *puVar4;
      iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
      iVar3 = *(int *)(iVar3 + 4);
      goto LAB_004305e3;
    }
  }
  bVar2 = true;
LAB_004305e9:
  iVar3 = *(int *)(unaff_EBP + 8) - extraout_ECX[5];
  if ((iVar3 < 700) && (bVar2)) {
    *(undefined4 *)(unaff_EBP + 8) = 0xff;
    if (0x1a4 < iVar3) {
      *(int *)(unaff_EBP + 8) = ((0x1a4 - iVar3) * 0xc0) / 0x118 + 0xff;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iVar5 = FUN_00402e32(unaff_EBP + -0x4c,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iVar5 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    iVar5 = extraout_ECX[4];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar6 = (int *)FUN_004113e5(unaff_EBP + -0x20);
    iVar5 = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar6 = (int *)*piVar6;
    iVar5 = *piVar6;
    *(int **)(unaff_EBP + -0x1c) = piVar6;
    iVar5 = (**(code **)(iVar5 + 0x90))
                      (piVar6,*(undefined4 *)(unaff_EBP + 8),0xff,*(undefined4 *)(unaff_EBP + -0x3c)
                       ,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    piVar6 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    iVar5 = *(int *)(unaff_EBP + -0x18);
    *(int *)(unaff_EBP + -0x24) =
         ((700 - iVar3) * *(int *)(unaff_EBP + -0x24) + iVar3 * *(int *)(unaff_EBP + -0x14)) / 700;
    iVar1 = *(int *)(unaff_EBP + -0x28);
    if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004308ad(unaff_EBP + -0x4c);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iVar7 = FUN_004032b4(0,0);
    *(int *)(unaff_EBP + 8) = iVar7;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar7 != 0) {
      iVar7 = FUN_0041a4e5(unaff_EBP + 8);
      if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
        FUN_00878dfb(iVar7);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar7 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00403191(&DAT_00980690);
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar6 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar6 = *(int **)(unaff_EBP + -0x10);
    }
    iVar7 = *piVar6;
    *(int **)(unaff_EBP + -0x2c) = piVar6;
    iVar3 = (**(code **)(iVar7 + 0x90))
                      (piVar6,*(undefined4 *)(unaff_EBP + -0x24),
                       ((700 - iVar3) * iVar1 + iVar3 * iVar5) / 700 + -0x28 +
                       ((iVar3 + -0x15e) * (iVar3 + -0x15e) * 0xa0) / 490000,
                       *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                       *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}



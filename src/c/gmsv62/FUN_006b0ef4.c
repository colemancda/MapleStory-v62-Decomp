/* FUN_006b0ef4 - 0x006b0ef4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b0ef4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) != 0x201) goto LAB_006b13a2;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + -4;
  iVar1 = FUN_006b1535(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  if (iVar1 != 0) {
    iVar2 = FUN_004becbc(500,0);
    if (iVar2 == 0) goto LAB_006b13a2;
    FUN_00455c59(unaff_EBP + -0x24);
    FUN_0045e4a2();
    *(int *)(unaff_EBP + -0x1c) = -100 - iVar1;
    iVar2 = FUN_00458c4f(unaff_EBP + -0x24,1,-100 - iVar1);
    iVar2 = *(int *)(iVar2 + 4);
    FUN_0046575e();
    if (iVar2 == 0) {
      *(int *)(unaff_EBP + -0x1c) = -iVar1;
      iVar1 = FUN_00458c4f(unaff_EBP + -0x24,1,-iVar1);
      iVar1 = *(int *)(iVar1 + 4);
      FUN_0046575e();
      if (iVar1 == 0) goto LAB_006b139d;
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004031b7(0,3);
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (bVar7) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x5c,unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x6c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar3 = FUN_0045e2eb(0,0);
    FUN_005536ce(unaff_EBP + -0x10,uVar3,uVar8,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x9c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x2c,
                 unaff_EBP + -0x7c,unaff_EBP + -0x8c,unaff_EBP + -0x4c,unaff_EBP + -0x3c);
    iVar1 = FUN_00402bc3(unaff_EBP + -0x9c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x7c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x8c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    iVar1 = (**(code **)(*piVar5 + 0xe0))(piVar5,0x80ffffff);
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar5,&DAT_00963df8);
    }
    puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x20);
    FUN_0040ee87(*puVar4,1);
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar5;
    *(int **)(unaff_EBP + -0x14) = piVar5;
    iVar1 = (**(code **)(iVar1 + 100))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00412600();
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if ((*(int *)(unaff_EBP + -0x10) == 0) &&
       (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x10) == 0)) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    iVar1 = FUN_0040eed0();
    *(int *)(unaff_EBP + 0x14) = (*(int *)(unaff_EBP + 0x14) - iVar1) + 0x10;
    iVar1 = FUN_0040eea9();
    iVar1 = (**(code **)(*piVar5 + 0x90))
                      (piVar5,(*(int *)(unaff_EBP + 0x10) - iVar1) + -0x10,
                       *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar5,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    puVar4 = (undefined4 *)FUN_004029b9(0x20);
    *(undefined4 **)(unaff_EBP + 0x14) = puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (puVar4 == (undefined4 *)0x0) {
      uVar6 = *(uint *)(unaff_EBP + -0x18);
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
      uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
      puVar4[6] = 0;
      puVar4[5] = uVar3;
      uVar6 = *(uint *)(unaff_EBP + -0x18);
      puVar4[4] = 1;
      puVar4[7] = -(uint)(uVar6 != 4) & uVar6;
      *puVar4 = &PTR_FUN_008ea2a8;
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0081820c(-(uint)(uVar6 != 4) & uVar6,puVar4);
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x73b);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_007d3cdd(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00402676();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
LAB_006b139d:
  FUN_0074d6fb();
LAB_006b13a2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



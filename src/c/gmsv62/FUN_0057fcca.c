/* FUN_0057fcca - 0x0057fcca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057fcca(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined4 *puStack_b4;
  int iStack_b0;
  undefined1 *puStack_ac;
  char *pcStack_a8;
  
  FUN_00879bb8();
  *(char *)(extraout_ECX + 0xd4) = (char)*(undefined4 *)(DAT_00978368 + 0x202c);
  piVar2 = *(int **)(*(int *)(extraout_ECX + 0xcc) + 0x178);
  if (piVar2 == (int *)0x0) {
LAB_0057fdca:
    pcStack_a8 = (char *)0x57fdd9;
    puVar4 = (undefined4 *)FUN_005851c2();
    pcStack_a8 = &DAT_00965860;
    *puVar4 = 0;
    puStack_ac = (undefined1 *)0x57fde9;
    FUN_00414edd();
    pcStack_a8 = (char *)0x57fdf5;
    puVar4 = (undefined4 *)FUN_005851c2();
    pcStack_a8 = s_Female_00965858;
    *puVar4 = 0;
    puStack_ac = (undefined1 *)0x57fe05;
    FUN_00414edd();
    pcStack_a8 = (char *)0x57fe11;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    pcStack_a8 = (char *)(unaff_EBP + -0x60);
    puStack_ac = (undefined1 *)0x57fe1f;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      pcStack_a8 = (char *)0x57fe2b;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    pcStack_a8 = (char *)0x57fe38;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    pcStack_a8 = (char *)(unaff_EBP + -0x50);
    puVar4 = &DAT_00980690;
    puStack_ac = (undefined1 *)0x57fe46;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      pcStack_a8 = (char *)0x57fe52;
      FUN_00878dfb();
      puVar4 = extraout_ECX_00;
    }
    pcStack_a8 = (char *)0x0;
    puStack_ac = (undefined1 *)(unaff_EBP + -0x60);
    iStack_b0 = unaff_EBP + -0x50;
    *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_b4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_b4 = puVar4;
    FUN_00679e4e(&puStack_b4,0x535);
    iVar5 = unaff_EBP + -0x70;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar5);
    FUN_00402660();
    FUN_00404a02(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_ac = (undefined1 *)0x57fe9e;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x2c) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (iVar5 != 0) {
      pcStack_a8 = (char *)0x57feb4;
      iVar5 = FUN_00404b30();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        pcStack_a8 = (char *)0x57fec5;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    pcStack_a8 = (char *)0x57fed2;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      pcStack_a8 = (char *)0x57fedd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    pcStack_a8 = (char *)0x57feea;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      pcStack_a8 = (char *)0x57fef5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    pcStack_a8 = (char *)0x57ff02;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      pcStack_a8 = (char *)0x57ff0d;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x1bc;
    do {
      FUN_0087a1b0();
      pcStack_a8 = (char *)0x0;
      iStack_b0 = *(undefined4 *)(unaff_EBP + -0x10);
      puStack_b4 = (undefined4 *)0x57ff2e;
      puStack_ac = &stack0xffffff60;
      iStack_b0 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_ac;
      puStack_b4 = (undefined4 *)0x57ff3a;
      FUN_004033a1();
      iStack_b0 = unaff_EBP + -0x90;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_b4 = (undefined4 *)0x57ff4d;
      FUN_0040263d();
      puStack_b4 = (undefined4 *)0x57ff54;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_ac = (undefined1 *)0x57ff5f;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        pcStack_a8 = (char *)0x57ff75;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          pcStack_a8 = (char *)0x57ff86;
          FUN_00878dfb();
        }
      }
      puVar7 = (undefined1 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pcStack_a8 = (char *)0x57ff96;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        pcStack_a8 = (char *)0x57ffa1;
        FUN_00878dfb();
        puVar7 = extraout_ECX_01;
      }
      pcStack_a8 = (char *)0x0;
      puStack_b4 = &puStack_ac;
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_ac;
      iStack_b0 = 0x59d;
      puStack_ac = puVar7;
      FUN_00679e4e();
      iStack_b0 = unaff_EBP + -0x80;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_b4 = (undefined4 *)0x57ffc6;
      FUN_0040263d();
      puStack_b4 = (undefined4 *)0x57ffcd;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_ac = (undefined1 *)0x57ffd8;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
      pcStack_a8 = (char *)0x57ffea;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        pcStack_a8 = (char *)0x57fffb;
        FUN_00878dfb();
      }
      puVar7 = (undefined1 *)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pcStack_a8 = (char *)0x580008;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        pcStack_a8 = (char *)0x580013;
        FUN_00878dfb();
        puVar7 = extraout_ECX_02;
      }
      pcStack_a8 = (char *)0x0;
      puStack_b4 = &puStack_ac;
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_ac;
      iStack_b0 = 0x5a1;
      puStack_ac = puVar7;
      FUN_00679e4e();
      iStack_b0 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_b4 = (undefined4 *)0x58003b;
      FUN_0040263d();
      puStack_b4 = (undefined4 *)0x580042;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_ac = (undefined1 *)0x58004d;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
      pcStack_a8 = (char *)0x58005c;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        pcStack_a8 = (char *)0x58006d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pcStack_a8 = (char *)0x58007d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        pcStack_a8 = (char *)0x580088;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        pcStack_a8 = (char *)0x580099;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
    } while (*(int *)(unaff_EBP + -0x10) < 9);
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 1;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    *(undefined4 *)(unaff_EBP + -0x14) = 0x44c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    piVar2 = (int *)(extraout_ECX + 0xe0);
    do {
      pcStack_a8 = (char *)(unaff_EBP + -0x1c);
      puStack_ac = (undefined1 *)0x5800e0;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      pcStack_a8 = (char *)0x5800ed;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00402676();
      pcStack_a8 = (char *)0x580108;
      iVar5 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (iVar5 != 0) {
        FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      pcStack_a8 = (char *)0x58012b;
      FUN_00450382();
      pcStack_a8 = (char *)0x0;
      puStack_ac = *(undefined1 **)(unaff_EBP + -0x10);
      puStack_b4 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -100);
      iStack_b0 = 0x44;
      (**(code **)(*(int *)*piVar2 + 0x20))(extraout_ECX);
      (**(code **)(*(int *)(*piVar2 + 4) + 0x24))(0);
      uVar6 = FUN_00679d86(unaff_EBP + -0x24,0x537);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00419192(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00402676();
      iVar5 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + -0x20) = iVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00450382(uVar6);
      (**(code **)(*(int *)piVar2[0x12] + 0x20))
                (extraout_ECX,*(undefined4 *)(unaff_EBP + -0x14),0xb7,
                 *(undefined4 *)(unaff_EBP + -0x10),0,unaff_EBP + -0x3c);
      (**(code **)(*(int *)(piVar2[0x12] + 4) + 0x24))(0);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
      piVar2 = piVar2 + 2;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) + -0x44c < 9);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      pcStack_a8 = (char *)0x58020a;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar5 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
    iVar1 = *piVar2;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
    if (iVar1 == 0) {
      pcStack_a8 = (char *)0x57fd42;
      piVar3 = (int *)FUN_005851c2();
      *piVar3 = piVar2[2];
      pcStack_a8 = (char *)piVar2[1];
      *(int **)(unaff_EBP + -0x18) = piVar3;
      puStack_ac = (undefined1 *)*piVar2;
      iStack_b0 = unaff_EBP + -0x14;
      puStack_b4 = (undefined4 *)0x57fd5b;
      FUN_00580a8e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      pcStack_a8 = (char *)0x57fd6a;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0057fdbc:
      FUN_00414ebb();
    }
    else if (iVar1 == 1) {
      pcStack_a8 = (char *)0x57fd89;
      piVar3 = (int *)FUN_005851c2();
      *piVar3 = piVar2[2];
      pcStack_a8 = (char *)piVar2[1];
      *(int **)(unaff_EBP + -0x18) = piVar3;
      puStack_ac = (undefined1 *)*piVar2;
      iStack_b0 = unaff_EBP + -0x2c;
      puStack_b4 = (undefined4 *)0x57fda2;
      FUN_00580a8e();
      *(undefined4 *)(unaff_EBP + -4) = 1;
      pcStack_a8 = (char *)0x57fdb5;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_0057fdbc;
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_0057fdca;
    piVar2 = *(int **)(unaff_EBP + -0x10);
  } while( true );
}



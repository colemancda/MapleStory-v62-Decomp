/* FUN_0059fcc1 - 0x0059fcc1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059fcc1(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar6;
  undefined1 *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  undefined1 *puStack_e0;
  int iStack_dc;
  undefined1 *puStack_d8;
  int *piStack_d4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    FUN_0087a1b0();
    piStack_d4 = (int *)0x0;
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_e0 = (undefined1 *)0x59fcf6;
    puStack_d8 = &stack0xffffff34;
    iStack_dc = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d8;
    puStack_e0 = (undefined1 *)0x59fd02;
    FUN_004033a1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_dc = unaff_EBP + -0xbc;
    puStack_e0 = (undefined1 *)0x59fd18;
    FUN_0040263d();
    puStack_e0 = (undefined1 *)0x59fd1f;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puStack_d8 = (undefined1 *)0x59fd2d;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      piStack_d4 = (int *)0x59fd43;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_d4 = (int *)0x59fd56;
        FUN_00878dfb();
      }
    }
    puVar6 = (undefined1 *)(unaff_EBP + -0xbc);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_d4 = (int *)0x59fd6d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d4 = (int *)0x59fd78;
      FUN_00878dfb();
      puVar6 = extraout_ECX_00;
    }
    piStack_d4 = (int *)0x0;
    puStack_e0 = (undefined1 *)&puStack_d8;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d8;
    iStack_dc = 0x3b4;
    puStack_d8 = puVar6;
    FUN_00679e4e();
    iStack_dc = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_e0 = (undefined1 *)0x59fda0;
    FUN_0040263d();
    puStack_e0 = (undefined1 *)0x59fda7;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_d8 = (undefined1 *)0x59fdb2;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x3c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar2 != 0) {
      piStack_d4 = (int *)0x59fdc8;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_d4 = (int *)0x59fdd6;
        FUN_00878dfb();
      }
    }
    puVar6 = (undefined1 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_d4 = (int *)0x59fde6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d4 = (int *)0x59fdf1;
      FUN_00878dfb();
      puVar6 = extraout_ECX_01;
    }
    piStack_d4 = (int *)0x0;
    puStack_e0 = (undefined1 *)&puStack_d8;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d8;
    iStack_dc = 0x5d1;
    puStack_d8 = puVar6;
    FUN_00679e4e();
    iStack_dc = unaff_EBP + -0x7c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_e0 = (undefined1 *)0x59fe16;
    FUN_0040263d();
    puStack_e0 = (undefined1 *)0x59fe1d;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_d8 = (undefined1 *)0x59fe28;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar2 != 0) {
      piStack_d4 = (int *)0x59fe3e;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_d4 = (int *)0x59fe4c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_d4 = (int *)0x59fe59;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d4 = (int *)0x59fe64;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      piStack_d4 = (int *)0x59fe73;
      FUN_00878dfb();
    }
    iVar2 = FUN_0040cf4d();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (0 < iVar2) {
      piStack_d4 = (int *)(unaff_EBP + -0x28);
      puStack_d8 = (undefined1 *)0x59fe96;
      FUN_00679d86();
      puStack_d8 = &stack0xffffff30;
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff30;
      piStack_d4 = (int *)0x5d3;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_dc = 0x59fead;
      FUN_00679e4e();
      piStack_d4 = (int *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_d8 = (undefined1 *)0x59fec0;
      FUN_0040263d();
      puStack_d8 = (undefined1 *)0x59fec7;
      FUN_004048a4();
      piStack_d4 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_d8 = (undefined1 *)0x59fed5;
      piVar3 = (int *)FUN_00405a23();
      puVar1 = (undefined4 *)*piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (puVar1 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)*puVar1;
      }
      piStack_d4 = (int *)0x59feed;
      FUN_0087a007();
      puStack_d8 = (undefined1 *)0x59fef8;
      piStack_d4 = piVar3;
      FUN_0046febf();
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_d4 = (int *)0x59ff17;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_d4 = (int *)0x59ff22;
        FUN_00878dfb();
      }
      piStack_d4 = (int *)0x59ff2e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_d4 = (int *)(unaff_EBP + -0x5c);
      puStack_d8 = (undefined1 *)0x59ff3c;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_d4 = (int *)0x59ff48;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_d4 = (int *)0x59ff52;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
      piStack_d4 = (int *)(unaff_EBP + -0x6c);
      puStack_d8 = (undefined1 *)0x59ff60;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_d4 = (int *)0x59ff6c;
        FUN_00878dfb();
      }
      piStack_d4 = (int *)0x0;
      puStack_d8 = (undefined1 *)(unaff_EBP + -0x5c);
      iStack_dc = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_e0 = (undefined1 *)0x59ff82;
      uVar4 = FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e0;
      puStack_e0 = extraout_ECX_02;
      FUN_004033a1(uVar4);
      iVar2 = unaff_EBP + -0xac;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_d8 = (undefined1 *)0x59ffb7;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      if (iVar2 != 0) {
        piStack_d4 = (int *)0x59ffcd;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          piStack_d4 = (int *)0x59ffde;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_d4 = (int *)0x59ffee;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_d4 = (int *)0x59fff9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_d4 = (int *)0x5a0006;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_d4 = (int *)0x5a0011;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_d4 = (int *)0x5a001e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_d4 = (int *)0x5a0029;
        FUN_00878dfb();
      }
      iVar2 = 0;
      if (0 < *(int *)(unaff_EBP + -0x14)) {
        do {
          FUN_0087a1b0();
          piStack_d4 = (int *)0x0;
          puStack_e0 = (undefined1 *)0x5a0047;
          iStack_dc = iVar2;
          puStack_d8 = &stack0xffffff34;
          iStack_dc = FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_d8;
          puStack_e0 = (undefined1 *)0x5a0053;
          FUN_004033a1();
          iStack_dc = unaff_EBP + -0xcc;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_e0 = (undefined1 *)0x5a0066;
          FUN_0040263d();
          puStack_e0 = (undefined1 *)0x5a006d;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_d8 = (undefined1 *)0x5a0078;
          iVar5 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x44) = iVar5;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (iVar5 != 0) {
            piStack_d4 = (int *)0x5a008e;
            iVar5 = FUN_00404b30();
            if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
              piStack_d4 = (int *)0x5a009f;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          piStack_d4 = (int *)0x5a00af;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            piStack_d4 = (int *)0x5a00ba;
            FUN_00878dfb();
          }
          piVar3 = *(int **)(unaff_EBP + -0x1c);
          piStack_d4 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff30;
          if (piStack_d4 != (int *)0x0) {
            puStack_d8 = (undefined1 *)0x5a00d2;
            (**(code **)(*piStack_d4 + 4))();
            piVar3 = extraout_ECX_03;
          }
          puStack_d8 = (undefined1 *)(unaff_EBP + -0x30);
          *(int ***)(unaff_EBP + -0x20) = &piStack_d4;
          iStack_dc = 0x5a00e1;
          piStack_d4 = piVar3;
          FUN_00424dbc();
          puStack_d8 = *(undefined1 **)(unaff_EBP + -0x10);
          iStack_dc = 0x5a00ec;
          FUN_005a0179();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
            piStack_d4 = (int *)0x5a00fd;
            (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_EBP + -0x14));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        piStack_d4 = (int *)0x5a0118;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00402676();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_d4 = (int *)0x5a0135;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      piStack_d4 = (int *)0x5a0146;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_d4 = (int *)0x5a0157;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



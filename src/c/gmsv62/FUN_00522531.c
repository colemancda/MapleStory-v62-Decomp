/* FUN_00522531 - 0x00522531 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00522531(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int *piStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int *piStack_94;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x3c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  do {
    puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0xf4 + *(int *)(unaff_EBP + -0x1c) * 4);
    *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
    *puVar1 = 0;
    piStack_94 = (int *)0xcb5;
    iStack_98 = unaff_EBP + -0x10;
    uStack_9c = 0x52257c;
    FUN_00679d22();
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 1) {
      piStack_94 = (int *)0xcb6;
      iStack_98 = unaff_EBP + -0x20;
      uStack_9c = 0x5226dc;
      piVar2 = (int *)FUN_00679d22();
      iStack_98 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iStack_98 == 0) {
        piStack_94 = (int *)0x0;
      }
      else {
        piStack_94 = *(int **)(iStack_98 + -4);
      }
      uStack_9c = 0x5226f7;
      FUN_0045efbb();
      iVar4 = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_005226fd:
      if (iVar4 != 0) {
        piStack_94 = (int *)(iVar4 + -0xc);
        iStack_98 = 0x52270a;
        FUN_00434e38();
      }
      piStack_94 = &DAT_00980690;
      iStack_98 = 0x522719;
      FUN_00403191();
      piStack_94 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_98 = 0x522726;
      FUN_00403191();
      piStack_94 = (int *)0x0;
      iStack_98 = 0;
      uStack_9c = 0xffffffff;
      uStack_a0 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_a4 = 0;
      uStack_a8 = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      piStack_b0 = (int *)0x0;
      iStack_b4 = unaff_EBP + -0x80;
      iStack_b8 = unaff_EBP + -0x70;
      uStack_bc = 0xffffffff;
      uVar3 = FUN_00449713(&uStack_a8);
      uVar3 = FUN_00456ad5(uVar3);
      *(undefined4 **)(unaff_EBP + -0x50) = &uStack_bc;
      FUN_004033a1(uVar3);
      iVar4 = unaff_EBP + -0x90;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00405a1d(iVar4);
      FUN_00402660();
      FUN_00404a02(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_b4 = 0x522799;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x4c) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar4 != 0) {
        piStack_b0 = (int *)0x5227af;
        iVar4 = FUN_00404b30();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          piStack_b0 = (int *)0x5227c0;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_b0 = (int *)0x5227d0;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_b0 = (int *)0x5227db;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_b0 = (int *)0x5227e8;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_b0 = (int *)0x5227f3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_b0 = (int *)0x522800;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_b0 = (int *)0x52280b;
        FUN_00878dfb();
      }
      piStack_b0 = (int *)0x522815;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_b0 = (int *)0x522824;
        FUN_00878dfb();
      }
      piStack_b0 = (int *)0x522830;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_b0 = (int *)0x52283d;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_004027b3();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_b0 = (int *)0x522857;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_b0 = (int *)0x522862;
        FUN_00878dfb();
      }
      piVar2 = *(int **)(unaff_EBP + -0x18);
      iVar4 = *piVar2;
      FUN_0040cf4d();
      iStack_b4 = 0x522875;
      piStack_b0 = piVar2;
      (**(code **)(iVar4 + 0x10))();
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        iStack_b4 = 0x80004003;
        iStack_b8 = 0x522885;
        FUN_00878dfb();
      }
      iStack_b4 = unaff_EBP + -0x28;
      iStack_b8 = unaff_EBP + -0x60;
      uStack_bc = 1;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 0xc))(*(int **)(unaff_EBP + -0x18));
      piStack_94 = (int *)(unaff_EBP + -0x60);
      iStack_98 = unaff_EBP + -0x38;
      uStack_9c = 0x5228a5;
      piVar2 = (int *)FUN_00405a23();
      if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
        piStack_94 = (int *)0x0;
      }
      else {
        piStack_94 = *(int **)*piVar2;
      }
      iStack_98 = 0x5228b9;
      uVar3 = FUN_0087a208();
      **(undefined4 **)(unaff_EBP + -0x30) = uVar3;
      piStack_94 = (int *)0x5228c7;
      FUN_00402fa6();
      piStack_94 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (piStack_94 != (int *)0x0) {
        iStack_98 = 0x5228d8;
        (**(code **)(*piStack_94 + 8))();
      }
      piStack_94 = (int *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_98 = 0x5228e5;
      piStack_94 = (int *)FUN_00402bc3();
      if ((int)piStack_94 < 0) {
        iStack_98 = 0x5228f0;
        FUN_00878dfb();
      }
      piStack_94 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_94 != (int *)0x0) {
        iStack_98 = 0x522900;
        (**(code **)(*piStack_94 + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_94 = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        iStack_98 = 0x522914;
        FUN_00434e38();
      }
    }
    else {
      if (iVar4 == 2) {
        piStack_94 = (int *)0xcb7;
        iStack_98 = unaff_EBP + -0x44;
        uStack_9c = 0x5226a9;
        piVar2 = (int *)FUN_00679d22();
        iStack_98 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iStack_98 == 0) {
          piStack_94 = (int *)0x0;
        }
        else {
          piStack_94 = *(int **)(iStack_98 + -4);
        }
        uStack_9c = 0x5226c4;
        FUN_0045efbb();
        iVar4 = *(int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_005226fd;
      }
      if (iVar4 == 3) {
        piStack_94 = (int *)0xcb8;
        iStack_98 = unaff_EBP + -0x34;
        uStack_9c = 0x522676;
        piVar2 = (int *)FUN_00679d22();
        iStack_98 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iStack_98 == 0) {
          piStack_94 = (int *)0x0;
        }
        else {
          piStack_94 = *(int **)(iStack_98 + -4);
        }
        uStack_9c = 0x522691;
        FUN_0045efbb();
        iVar4 = *(int *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_005226fd;
      }
      if (iVar4 == 4) {
        piStack_94 = (int *)0xcb9;
        iStack_98 = unaff_EBP + -0x40;
        uStack_9c = 0x522640;
        piVar2 = (int *)FUN_00679d22();
        iStack_98 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iStack_98 == 0) {
          piStack_94 = (int *)0x0;
        }
        else {
          piStack_94 = *(int **)(iStack_98 + -4);
        }
        uStack_9c = 0x52265b;
        FUN_0045efbb();
        iVar4 = *(int *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_005226fd;
      }
      if (iVar4 == 5) {
        piStack_94 = (int *)0xcba;
        iStack_98 = unaff_EBP + -0x2c;
        uStack_9c = 0x52260a;
        piVar2 = (int *)FUN_00679d22();
        iStack_98 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (iStack_98 == 0) {
          piStack_94 = (int *)0x0;
        }
        else {
          piStack_94 = *(int **)(iStack_98 + -4);
        }
        uStack_9c = 0x522625;
        FUN_0045efbb();
        iVar4 = *(int *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_005226fd;
      }
      if (iVar4 == 9) {
        piStack_94 = (int *)0xcbb;
        iStack_98 = unaff_EBP + -0x48;
        uStack_9c = 0x5225d4;
        piVar2 = (int *)FUN_00679d22();
        iStack_98 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iStack_98 == 0) {
          piStack_94 = (int *)0x0;
        }
        else {
          piStack_94 = *(int **)(iStack_98 + -4);
        }
        uStack_9c = 0x5225ef;
        FUN_0045efbb();
        iVar4 = *(int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_005226fd;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_94 = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        iStack_98 = 0x5225be;
        FUN_00434e38();
      }
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    if (9 < *(int *)(unaff_EBP + -0x1c)) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}



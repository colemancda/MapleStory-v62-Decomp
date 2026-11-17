/* FUN_006eeecd - 0x006eeecd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006eeecd(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  undefined4 uVar6;
  int iStack_15c;
  int iStack_158;
  int *piStack_154;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x38) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*(int *)(extraout_ECX + 4) + 0x5f0);
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  iVar1 = *(int *)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x5e8);
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x5e4);
  FUN_0045e787();
  uVar5 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x14;
  while (((*(int *)(iVar1 + 8) != 0 && (uVar5 < *(uint *)(*(int *)(iVar1 + 8) + -4))) &&
         (*(int *)(unaff_EBP + -0x24) < 0xc))) {
    if ((int)uVar5 < *(int *)(*(int *)(*(int *)(iVar1 + 4) + 0x588) + 0x38)) {
      (*DAT_0097b504)();
    }
    else {
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x5f4);
      piVar2 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar2 == (int *)0x0) {
        FUN_00878dfb();
        piVar2 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        piStack_154 = *(int **)(unaff_EBP + -0x10);
        iStack_15c = 0x6ef055;
        iStack_158 = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_154 = (int *)0x6ef065;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_154 = (int *)0x6ef070;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      iVar1 = *(int *)(unaff_EBP + -0x38);
      iStack_158 = unaff_EBP + -0x28;
      piStack_154 = (int *)&DAT_00964da0;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_15c = 0x6ef099;
      FUN_00434e21();
      iStack_158 = unaff_EBP + -0x20;
      *(int ***)(unaff_EBP + -0x10) = &piStack_154;
      iStack_15c = 0x6ef0ad;
      FUN_0046fcc9();
      iStack_158 = unaff_EBP + -0x28;
      iStack_15c = 0x6ef0b6;
      FUN_007d3a22();
      iStack_158 = unaff_EBP + -0x1c;
      piStack_154 = (int *)&DAT_0096477c;
      iStack_15c = 0x6ef0d1;
      FUN_00434e21();
      iStack_158 = unaff_EBP + -0x34;
      piStack_154 = (int *)&DAT_00964da0;
      iStack_15c = 0x6ef0e8;
      FUN_00434e21();
      if (*(int *)(*(int *)(iVar1 + 4) + 0xaf8) ==
          *(int *)(*(int *)(iVar1 + 8) + *(int *)(unaff_EBP + -0x18))) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_154 = (int *)0x6ef113;
          FUN_00878dfb();
        }
        piVar2 = *(int **)(unaff_EBP + 8);
        piStack_154 = (int *)0xd;
        iStack_158 = 0x85;
        iStack_15c = *(int *)(unaff_EBP + -0x14) + -1;
        iVar3 = (**(code **)(*piVar2 + 0x8c))(piVar2,5);
        if (iVar3 < 0) {
          iStack_15c = 0x6ef142;
          iStack_158 = iVar3;
          piStack_154 = piVar2;
          FUN_00878e09();
        }
        piStack_154 = (int *)0x6ef14e;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_154 = (int *)0x6ef15e;
        FUN_00403191();
        piStack_154 = (int *)(unaff_EBP + -0xdc);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_158 = 0x6ef178;
        iStack_158 = FUN_00449749();
        iStack_15c = 0x6ef181;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_15c;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar6 = 10;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_004115d9(10,uVar4);
        FUN_00448e3a(uVar6,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_154 = (int *)0x6ef1b5;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef1c0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_154 = (int *)0x6ef1d0;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef1db;
          FUN_00878dfb();
        }
        piStack_154 = (int *)0x6ef1e7;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_154 = (int *)0x6ef1f7;
        FUN_00403191();
        piStack_154 = (int *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_158 = 0x6ef211;
        iStack_158 = FUN_00449749();
        iStack_15c = 0x6ef21a;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_15c;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar3 = FUN_006f2e02(uVar4);
        iVar3 = iVar3 * -5 + 0x65;
        FUN_004115d9(iVar3);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_154 = (int *)0x6ef25d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef268;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_154 = (int *)0x6ef278;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef283;
          FUN_00878dfb();
        }
        piStack_154 = (int *)0x6ef28f;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piStack_154 = (int *)0x6ef29f;
        FUN_00403191();
        piStack_154 = (int *)(unaff_EBP + -0xac);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_158 = 0x6ef2b9;
        iStack_158 = FUN_00449749();
        iStack_15c = 0x6ef2c2;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_15c;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar6 = 0x74;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_004115d9(0x74,uVar4);
        FUN_00448e3a(uVar6,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piStack_154 = (int *)0x6ef2f6;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef301;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
      }
      else {
        piStack_154 = (int *)0x6ef31c;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_154 = (int *)0x6ef32c;
        FUN_00403191();
        piStack_154 = (int *)(unaff_EBP + -0xec);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_158 = 0x6ef346;
        iStack_158 = FUN_00449749();
        iStack_15c = 0x6ef34f;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_15c;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar6 = 10;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_004115d9(10,uVar4);
        FUN_00448e3a(uVar6,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_154 = (int *)0x6ef383;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef38e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_154 = (int *)0x6ef39e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef3a9;
          FUN_00878dfb();
        }
        piStack_154 = (int *)0x6ef3b5;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
        piStack_154 = (int *)(unaff_EBP + -0x7c);
        iStack_158 = 0x6ef3bf;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef3cb;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_154 = (int *)0x6ef3d5;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        piStack_154 = (int *)(unaff_EBP + -0x5c);
        iStack_158 = 0x6ef3df;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef3eb;
          FUN_00878dfb();
        }
        piStack_154 = (int *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_158 = 0x6ef3ff;
        iStack_158 = FUN_00449749();
        iStack_15c = 0x6ef408;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_15c;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar3 = FUN_006f2e02(uVar4);
        iVar3 = iVar3 * -5 + 0x65;
        FUN_004115d9(iVar3);
        FUN_00448e3a(iVar3,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_154 = (int *)0x6ef448;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef453;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_154 = (int *)0x6ef460;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef46b;
          FUN_00878dfb();
        }
        piStack_154 = (int *)0x6ef471;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        piStack_154 = (int *)(unaff_EBP + -0x4c);
        iStack_158 = 0x6ef47b;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef487;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_154 = (int *)0x6ef491;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
        piStack_154 = (int *)(unaff_EBP + -0x6c);
        iStack_158 = 0x6ef49b;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef4a7;
          FUN_00878dfb();
        }
        piStack_154 = (int *)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_158 = 0x6ef4bb;
        iStack_158 = FUN_00449749();
        iStack_15c = 0x6ef4c4;
        uVar4 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_15c;
        FUN_00448a17(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        uVar6 = 0x74;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_004115d9(0x74,uVar4);
        FUN_00448e3a(uVar6,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_154 = (int *)0x6ef4f5;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_154 = (int *)0x6ef500;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
      }
      piStack_154 = (int *)0x6ef50d;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_154 = (int *)0x6ef518;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      piStack_154 = (int *)0x8a;
      iStack_158 = iVar3 + -1;
      iStack_15c = 0;
      (*DAT_0097b504)(*(int *)(iVar1 + 8) + 0x14 + *(int *)(unaff_EBP + -0x18));
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      *(int *)(unaff_EBP + -0x14) = iVar3 + 0xd;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      iVar1 = *(int *)(unaff_EBP + -0x38);
    }
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x28;
    uVar5 = *(uint *)(unaff_EBP + -0x2c);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x5fc);
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + -0x3c) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    piStack_154 = *(int **)(unaff_EBP + -0x3c);
    iStack_15c = 0x6ef5f1;
    iStack_158 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_154 = (int *)0x6ef5fe;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_154 = (int *)0x6ef609;
    FUN_00878dfb();
  }
  piStack_154 = (int *)0x6ef613;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_154 = (int *)(unaff_EBP + -0x4c);
  iStack_158 = 0x6ef61d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_154 = (int *)0x6ef629;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x38) + 4) + 0x5f8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar2 == (int *)0x0) {
    piStack_154 = (int *)0x6ef64a;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar2;
  iStack_15c = *(int *)(unaff_EBP + -0x4c);
  iStack_158 = *(undefined4 *)(unaff_EBP + -0x48);
  piStack_154 = *(int **)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))(piVar2,0,*(int *)(unaff_EBP + -0x24) * 0xd + 0x13,uVar4);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar2 = *(int **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



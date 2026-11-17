/* FUN_00534ea7 - 0x00534ea7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00534ea7(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iVar4;
  int iStack_d4;
  int iStack_d0;
  int *piStack_cc;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  
  FUN_00879bb8();
  puStack_7c = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  uStack_80 = 0x534ec2;
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  puStack_7c = (undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_80 = 0x534ed6;
  FUN_00448dc6();
  puStack_7c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_80 = 0x534ee8;
  FUN_00403191();
  puStack_7c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_80 = 0x534ef5;
  FUN_00403191();
  puStack_7c = (undefined4 *)0x0;
  uStack_80 = 0;
  iStack_84 = unaff_EBP + -0x58;
  iStack_88 = unaff_EBP + -0x48;
  *(undefined4 **)(unaff_EBP + -0x34) = &uStack_8c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_84 = 0x534f3f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  puStack_7c = (undefined4 *)(unaff_EBP + 8);
  uStack_80 = 0x534f4e;
  puStack_7c = (undefined4 *)FUN_0041a581();
  if (((int)puStack_7c < 0) && (puStack_7c != (undefined4 *)0x80004002)) {
    uStack_80 = 0x534f5f;
    FUN_00878dfb();
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_80 = 0x534f6c;
  puStack_7c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x534f77;
    FUN_00878dfb();
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_80 = 0x534f84;
  puStack_7c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x534f8f;
    FUN_00878dfb();
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_80 = 0x534f9c;
  puStack_7c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x534fa7;
    FUN_00878dfb();
  }
  puStack_7c = &DAT_00980690;
  uStack_80 = 0x534fb0;
  FUN_00403191();
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar3 == (int *)0x0) {
    puStack_7c = (undefined4 *)0x80004003;
    uStack_80 = 0x534fc5;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x14);
  }
  iVar2 = *piVar3;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_7c = *(undefined4 **)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  piVar3 = (int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x74) + 0x50);
  *(int **)(unaff_EBP + -0x24) = piVar3;
  iVar2 = *piVar3;
  if ((iVar2 != 0) &&
     (iVar2 = *(int *)(iVar2 + -4), *(int *)(unaff_EBP + -0x1c) = iVar2, iVar2 != 0)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00403384();
    }
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191();
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x18) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x2c))();
    iVar4 = 0;
    if (iVar2 < 0) {
      piStack_cc = *(int **)(unaff_EBP + -0x18);
      iStack_d4 = 0x53510a;
      iStack_d0 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_cc = (int *)0x535117;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_cc = (int *)0x535122;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_cc = (int *)0x53512f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_cc = (int *)0x53513a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (0 < *(int *)(unaff_EBP + -0x1c)) {
      iVar2 = 10;
      do {
        if (iVar4 == *(int *)(*(int *)(unaff_EBP + -0x10) + 0x78)) {
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_cc = (int *)0x535165;
            FUN_00878dfb();
          }
          piVar3 = *(int **)(unaff_EBP + 8);
          piStack_cc = (int *)0x15;
          iStack_d0 = 0xcf;
          iStack_d4 = iVar2 + -6;
          iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3,5);
          if (iVar4 < 0) {
            iStack_d4 = 0x535193;
            iStack_d0 = iVar4;
            piStack_cc = piVar3;
            FUN_00878e09();
          }
          piStack_cc = (int *)0x53519c;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          piStack_cc = (int *)0x5351a9;
          FUN_00403191();
          piStack_cc = (int *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_d0 = 0x5351bd;
          iStack_d0 = FUN_00449749();
          iStack_d4 = *(int *)(unaff_EBP + -0x18);
          FUN_00537b60();
          iStack_d4 = 0x5351d0;
          FUN_0053797e();
          iStack_d4 = 0x5351da;
          FUN_0053793e();
          iStack_d4 = 0x5351e4;
          iStack_d4 = thunk_FUN_0045e2eb();
          iVar4 = unaff_EBP + -0x30;
          FUN_0048b97b(iVar4);
          FUN_0045a1d8(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_d4 = 0x535200;
          uVar1 = FUN_00449713();
          *(int **)(unaff_EBP + -0x38) = &iStack_d4;
          iStack_d4 = extraout_ECX_00;
          FUN_00448a17(uVar1);
          uVar1 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iVar4 = iVar2;
          FUN_004115d9(10,iVar2);
          FUN_00448e3a(uVar1,iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            piStack_cc = (int *)0x535236;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          piStack_cc = (int *)0x535244;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_cc = (int *)0x53524f;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        else {
          piStack_cc = (int *)0x535264;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_cc = (int *)0x535271;
          FUN_00403191();
          piStack_cc = (int *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_d0 = 0x535285;
          iStack_d0 = FUN_00449749();
          iStack_d4 = iVar4;
          FUN_00537b60();
          iStack_d4 = 0x535296;
          FUN_0053797e();
          iStack_d4 = 0x5352a0;
          FUN_0053793e();
          iStack_d4 = 0x5352aa;
          iStack_d4 = thunk_FUN_0045e2eb();
          iVar4 = unaff_EBP + -0x34;
          FUN_0048b97b(iVar4);
          FUN_0045a1d8(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_d4 = 0x5352c6;
          uVar1 = FUN_00449713();
          *(int **)(unaff_EBP + -0x38) = &iStack_d4;
          iStack_d4 = extraout_ECX_01;
          FUN_00448a17(uVar1);
          uVar1 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iVar4 = iVar2;
          FUN_004115d9(10,iVar2);
          FUN_00448e3a(uVar1,iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_cc = (int *)0x535301;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_cc = (int *)0x53530c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        piStack_cc = (int *)0x535319;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_cc = (int *)0x535324;
          FUN_00878dfb();
        }
        iVar4 = *(int *)(unaff_EBP + -0x18) + 1;
        iVar2 = iVar2 + 0x15;
        *(int *)(unaff_EBP + -0x18) = iVar4;
      } while (iVar4 < *(int *)(unaff_EBP + -0x1c));
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_cc = (int *)0x535347;
      FUN_00878dfb();
    }
    FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x34) =
         *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x84) + 0x38);
    piStack_cc = (int *)0x535368;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_cc = (int *)(unaff_EBP + -0x48);
    iStack_d0 = 0x535372;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_cc = (int *)0x53537e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_cc = (int *)0x535392;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = **(undefined4 **)(unaff_EBP + -0x14);
    iStack_d4 = *(int *)(unaff_EBP + -0x48);
    iStack_d0 = *(int *)(unaff_EBP + -0x44);
    piStack_cc = *(int **)(unaff_EBP + -0x40);
    iVar2 = (**(code **)(*(int *)(unaff_EBP + -0x30) + 0x84))
                      (*(undefined4 **)(unaff_EBP + -0x14),0xf,0x43,*(undefined4 *)(unaff_EBP + 8),
                       0xff,0xcf,0xae,0,*(int *)(unaff_EBP + -0x34) * 0x15,0xcf,0xae);
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



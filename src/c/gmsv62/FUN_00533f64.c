/* FUN_00533f64 - 0x00533f64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00533f64(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iVar5;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  
  FUN_00879bb8();
  puStack_78 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  uStack_7c = 0x533f7f;
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  puStack_78 = (undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_7c = 0x533f93;
  FUN_00448dc6();
  puStack_78 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_7c = 0x533fa5;
  FUN_00403191();
  puStack_78 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_7c = 0x533fb2;
  FUN_00403191();
  puStack_78 = (undefined4 *)0x0;
  uStack_7c = 0;
  iStack_80 = unaff_EBP + -0x54;
  iStack_84 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x34) = &uStack_88;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_80 = 0x533ffc;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  puStack_78 = (undefined4 *)(unaff_EBP + 8);
  uStack_7c = 0x53400b;
  puStack_78 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_78 < 0) && (puStack_78 != (undefined4 *)0x80004002)) {
    uStack_7c = 0x53401c;
    FUN_00878dfb();
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_7c = 0x534029;
  puStack_78 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    uStack_7c = 0x534034;
    FUN_00878dfb();
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_7c = 0x534041;
  puStack_78 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    uStack_7c = 0x53404c;
    FUN_00878dfb();
  }
  puStack_78 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_7c = 0x534059;
  puStack_78 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_78 < 0) {
    uStack_7c = 0x534064;
    FUN_00878dfb();
  }
  puStack_78 = &DAT_00980690;
  uStack_7c = 0x53406d;
  FUN_00403191();
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar4 == (int *)0x0) {
    puStack_78 = (undefined4 *)0x80004003;
    uStack_7c = 0x534082;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x18);
  }
  iVar2 = *piVar4;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_78 = *(undefined4 **)(unaff_EBP + -0x48);
  *(int **)(unaff_EBP + 8) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8);
  if ((iVar2 != 0) &&
     (iVar2 = *(int *)(iVar2 + -4), *(int *)(unaff_EBP + -0x1c) = iVar2, iVar2 != 0)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00403384();
    }
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x10) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x2c))();
    if (iVar2 < 0) {
      iStack_c8 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_d0 = 0x5341c1;
      iStack_cc = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_c8 = 0x5341ce;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c8 = 0x5341d9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_c8 = 0x5341e6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c8 = 0x5341f1;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (*(int *)(unaff_EBP + -0x1c) < 1) {
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    else {
      iVar5 = 10;
      do {
        iVar2 = *(int *)(unaff_EBP + -0x14);
        if (*(int *)(unaff_EBP + -0x10) == *(int *)(iVar2 + 0x78)) {
          piVar4 = *(int **)(unaff_EBP + 8);
          if (piVar4 == (int *)0x0) {
            iStack_c8 = 0x534222;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + 8);
          }
          iVar3 = *piVar4;
          iStack_c8 = 0x15;
          iStack_cc = 0xcf;
          iStack_d0 = iVar5 + -6;
          *(int **)(unaff_EBP + -0x2c) = piVar4;
          iVar3 = (**(code **)(iVar3 + 0x8c))(piVar4,5);
          if (iVar3 < 0) {
            iStack_c8 = *(undefined4 *)(unaff_EBP + -0x2c);
            iStack_d0 = 0x534255;
            iStack_cc = iVar3;
            FUN_00878e09();
          }
          iStack_c8 = 0x53425e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_c8 = 0x53426b;
          FUN_00403191();
          iStack_c8 = unaff_EBP + -0x54;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_cc = 0x53427f;
          iStack_cc = FUN_00449749();
          iStack_d0 = *(int *)(unaff_EBP + -0x10);
          piVar4 = (int *)FUN_00537b54();
          iStack_d0 = *piVar4;
          iVar3 = unaff_EBP + -0x30;
          FUN_0048b97b(iVar3);
          FUN_0045a1d8(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_d0 = 0x5342ab;
          uVar1 = FUN_00449713();
          *(int **)(unaff_EBP + -0x2c) = &iStack_d0;
          iStack_d0 = extraout_ECX_00;
          FUN_00448a17(uVar1);
          uVar1 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iVar3 = iVar5;
          FUN_004115d9(10,iVar5);
          FUN_00448e3a(uVar1,iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            iStack_c8 = 0x5342e1;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_c8 = 0x5342ef;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_c8 = 0x5342fa;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        else {
          iStack_c8 = 0x53430f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_c8 = 0x53431c;
          FUN_00403191();
          iStack_c8 = unaff_EBP + -100;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_cc = 0x534330;
          iStack_cc = FUN_00449749();
          iStack_d0 = *(int *)(unaff_EBP + -0x10);
          piVar4 = (int *)FUN_00537b54();
          iStack_d0 = *piVar4;
          iVar3 = unaff_EBP + -0x34;
          FUN_0048b97b(iVar3);
          FUN_0045a1d8(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_d0 = 0x53435c;
          uVar1 = FUN_00449713();
          *(int **)(unaff_EBP + -0x2c) = &iStack_d0;
          iStack_d0 = extraout_ECX_01;
          FUN_00448a17(uVar1);
          uVar1 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iVar3 = iVar5;
          FUN_004115d9(10,iVar5);
          FUN_00448e3a(uVar1,iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_c8 = 0x534397;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_c8 = 0x5343a2;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        iStack_c8 = 0x5343af;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_c8 = 0x5343ba;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        iVar5 = iVar5 + 0x15;
      } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x1c));
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      iStack_c8 = 0x5343e1;
      FUN_00878dfb();
    }
    FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(*(int *)(iVar2 + 0x84) + 0x38);
    iStack_c8 = 0x5343ff;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_c8 = unaff_EBP + -0x44;
    iStack_cc = 0x534409;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_c8 = 0x534415;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      iStack_c8 = 0x534429;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = **(undefined4 **)(unaff_EBP + -0x18);
    iStack_d0 = *(int *)(unaff_EBP + -0x44);
    iStack_cc = *(int *)(unaff_EBP + -0x40);
    iStack_c8 = *(undefined4 *)(unaff_EBP + -0x3c);
    iVar2 = (**(code **)(*(int *)(unaff_EBP + -0x30) + 0x84))
                      (*(undefined4 **)(unaff_EBP + -0x18),0xf,0x43,*(undefined4 *)(unaff_EBP + 8),
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
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



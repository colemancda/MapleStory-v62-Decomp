/* FUN_0062e7b5 - 0x0062e7b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0062e7b5(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint uVar8;
  int unaff_EBP;
  uint uVar9;
  undefined4 uStack_140;
  int *piStack_13c;
  undefined1 *puStack_138;
  int iStack_134;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_134 = 0x62e7dc;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_134 = 0x62e7ed;
  FUN_00403191();
  iStack_134 = 0;
  puStack_138 = (undefined1 *)(unaff_EBP + -0x8c);
  piStack_13c = (int *)(unaff_EBP + -0x9c);
  *(undefined4 **)(unaff_EBP + -0x34) = &uStack_140;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_140 = extraout_ECX_00;
  FUN_00679e4e(&uStack_140,0xc52);
  iVar3 = unaff_EBP + -0x11c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_138 = (undefined1 *)0x62e842;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x50) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar3 != 0) {
    iStack_134 = 0x62e858;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_134 = 0x62e869;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_134 = 0x62e879;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_134 = 0x62e884;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_134 = 0x62e894;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_134 = 0x62e89f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_134 = 0x62e8af;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_134 = 0x62e8ba;
    FUN_00878dfb();
  }
  iStack_134 = 0x62e8c4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    iStack_134 = 0x62e8d7;
    FUN_00878dfb();
  }
  iStack_134 = 0x62e8e3;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_134 = 0x62e8f0;
  FUN_004035f5();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004027b3();
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0x1f;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined ***)(unaff_EBP + -0x6c) = &PTR_FUN_008ed1a8;
  iStack_134 = 0x62e91a;
  FUN_0062ff6b();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x3c) == 0) {
      iStack_134 = 0x62e930;
      FUN_00878dfb();
    }
    piStack_13c = *(int **)(unaff_EBP + -0x3c);
    iStack_134 = unaff_EBP + -0x7c;
    puStack_138 = (undefined1 *)0x1;
    uStack_140 = 0x62e943;
    iVar3 = (**(code **)(*piStack_13c + 0xc))();
    if (iVar3 != 0) break;
    iStack_134 = unaff_EBP + -0x4c;
    puStack_138 = (undefined1 *)0x62e958;
    FUN_00405a23();
    iStack_134 = 0x62e96c;
    uVar4 = FUN_0087a208();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    FUN_00402fa6();
    FUN_0087a1b0();
    iStack_134 = 0;
    piStack_13c = (int *)(uint)*(ushort *)(unaff_EBP + -0x10);
    uStack_140 = 0x62e98f;
    puStack_138 = &stack0xfffffed4;
    piStack_13c = (int *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_138;
    uStack_140 = 0x62e99b;
    FUN_004033a1();
    piStack_13c = (int *)(unaff_EBP + -300);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_140 = 0x62e9ae;
    FUN_0040263d();
    uStack_140 = 0x62e9b5;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_138 = (undefined1 *)0x62e9c0;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar3 != 0) {
      iStack_134 = 0x62e9d6;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_134 = 0x62e9e7;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_134 = 0x62e9f7;
    iVar3 = unaff_EBP + -300;
    iVar5 = FUN_00402bc3();
    iStack_134 = iVar3;
    if (iVar5 < 0) {
      iStack_134 = 0x62ea02;
      FUN_00878dfb();
      iStack_134 = extraout_ECX_01;
    }
    piStack_13c = &iStack_134;
    *(int **)(unaff_EBP + -0x14) = &iStack_134;
    puStack_138 = (undefined1 *)0x64b;
    uStack_140 = 0x62ea1a;
    FUN_00679e4e();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xfc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62ea2d;
    FUN_0040263d();
    piStack_13c = (int *)0x62ea34;
    iStack_134 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_138 = (undefined1 *)0x62ea3e;
    iStack_134 = FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    puStack_138 = (undefined1 *)0x62ea4e;
    FUN_00454081();
    iStack_134 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_138 = (undefined1 *)0x62ea65;
    FUN_004b962a();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_134 = 0x62ea81;
    iVar3 = unaff_EBP + -0xfc;
    iVar5 = FUN_00402bc3();
    iStack_134 = iVar3;
    if (iVar5 < 0) {
      iStack_134 = 0x62ea8c;
      FUN_00878dfb();
      iStack_134 = extraout_ECX_02;
    }
    piStack_13c = &iStack_134;
    *(int **)(unaff_EBP + -0x14) = &iStack_134;
    puStack_138 = (undefined1 *)0xf98;
    uStack_140 = 0x62eaa0;
    FUN_00679e4e();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62eab3;
    FUN_0040263d();
    piStack_13c = (int *)0x62eaba;
    iStack_134 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_138 = (undefined1 *)0x62eac4;
    iVar3 = FUN_00412550();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xdc);
    *(uint *)(unaff_EBP + -0x14) = (uint)(iVar3 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62eadf;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_134 = 0x62eaec;
      FUN_00878dfb();
    }
    if ((iVar3 != 0) != 0) {
      iStack_134 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      puStack_138 = (undefined1 *)0x62eb0d;
      FUN_0062fcac();
    }
    piStack_13c = &iStack_134;
    *(int **)(unaff_EBP + -0x1c) = &iStack_134;
    puStack_138 = (undefined1 *)0xf9b;
    uStack_140 = 0x62eb21;
    FUN_00679e4e();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62eb34;
    FUN_0040263d();
    piStack_13c = (int *)0x62eb3b;
    iStack_134 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_138 = (undefined1 *)0x62eb45;
    iVar3 = FUN_00412550();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62eb5d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_134 = 0x62eb6a;
      FUN_00878dfb();
    }
    if (iVar3 != 0) {
      iStack_134 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      puStack_138 = (undefined1 *)0x62eb8b;
      FUN_0062fcac();
    }
    piStack_13c = &iStack_134;
    *(int **)(unaff_EBP + -0x1c) = &iStack_134;
    puStack_138 = (undefined1 *)0xf9c;
    uStack_140 = 0x62eb9f;
    FUN_00679e4e();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xbc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62ebb2;
    FUN_0040263d();
    piStack_13c = (int *)0x62ebb9;
    iStack_134 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_138 = (undefined1 *)0x62ebc3;
    iVar3 = FUN_00412550();
    *(int *)(unaff_EBP + -0x44) = iVar3 * 1000;
    puStack_138 = (undefined1 *)(unaff_EBP + -0xbc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62ebdc;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_134 = 0x62ebe9;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      iStack_134 = unaff_EBP + -0x10;
      puStack_138 = (undefined1 *)0x62ec04;
      FUN_0062fe47();
    }
    piStack_13c = &iStack_134;
    *(int **)(unaff_EBP + -0x1c) = &iStack_134;
    puStack_138 = (undefined1 *)0xff8;
    uStack_140 = 0x62ec18;
    FUN_00679e4e();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xcc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62ec2b;
    FUN_0040263d();
    piStack_13c = (int *)0x62ec32;
    iStack_134 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_138 = (undefined1 *)0x62ec3c;
    iVar3 = FUN_00412550();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xcc);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62ec54;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_134 = 0x62ec61;
      FUN_00878dfb();
    }
    if ((*(int *)(unaff_EBP + -0x14) != 0) && (iVar3 != 0)) {
      iStack_134 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      puStack_138 = (undefined1 *)0x62ec87;
      FUN_0062fcac();
    }
    piStack_13c = &iStack_134;
    *(int **)(unaff_EBP + -0x14) = &iStack_134;
    puStack_138 = (undefined1 *)0xc56;
    uStack_140 = 0x62ec9f;
    FUN_00679e4e();
    puStack_138 = (undefined1 *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_13c = (int *)0x62ecb2;
    FUN_0040263d();
    piStack_13c = (int *)0x62ecb9;
    iStack_134 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    puStack_138 = (undefined1 *)0x62ecc3;
    iStack_134 = FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    puStack_138 = (undefined1 *)0x62ecd3;
    FUN_00454081();
    iVar3 = unaff_EBP + -0xec;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_134 = 0x62ece3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_134 = 0x62ecee;
      FUN_00878dfb();
      iVar3 = extraout_ECX_03;
    }
    if ((*(char **)(unaff_EBP + -0x2c) != (char *)0x0) && (**(char **)(unaff_EBP + -0x2c) != '\0'))
    {
      piStack_13c = &iStack_134;
      *(int **)(unaff_EBP + -0x14) = &iStack_134;
      puStack_138 = (undefined1 *)0xc42;
      uStack_140 = 0x62ed15;
      iStack_134 = iVar3;
      FUN_00679e4e();
      puStack_138 = (undefined1 *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_13c = (int *)0x62ed28;
      FUN_0040263d();
      piStack_13c = (int *)0x62ed2f;
      iStack_134 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_138 = (undefined1 *)0x62ed39;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
      puStack_138 = (undefined1 *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_13c = (int *)0x62ed4c;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_134 = 0x62ed59;
        FUN_00878dfb();
      }
      iStack_134 = unaff_EBP + -0x10;
      puStack_138 = (undefined1 *)0x62ed69;
      FUN_0062fe47();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      iStack_134 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      puStack_138 = (undefined1 *)0x62ed85;
      FUN_0062f464();
      iStack_134 = 0x62ed8f;
      puVar6 = (undefined2 *)FUN_005ee789();
      *puVar6 = *(undefined2 *)(unaff_EBP + -0x10);
      iStack_134 = unaff_EBP + -0x10;
      puStack_138 = (undefined1 *)0x62eda9;
      FUN_004b962a();
      iStack_134 = unaff_EBP + -0x2c;
      puStack_138 = (undefined1 *)0x62edb8;
      FUN_0062f4b8();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_005ee767();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_134 = 0x62ede5;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
  }
  iVar3 = *(int *)(unaff_EBP + -0x20);
  piVar7 = *(int **)(iVar3 + 8);
  *(int *)(unaff_EBP + -0x1c) = iVar3 + 4;
  if (piVar7 != (int *)0x0) {
    piVar1 = piVar7 + *(int *)(iVar3 + 0xc);
    for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
      if (*piVar7 != 0) {
        iVar3 = *piVar7;
        goto LAB_0062ee13;
      }
    }
  }
  iVar3 = 0;
LAB_0062ee13:
  *(int *)(unaff_EBP + -0x40) = iVar3;
  while (iVar3 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_134 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_138 = (undefined1 *)0x62ee34;
    FUN_0062f645();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_134 = 0x62ee40;
    FUN_00414f8b();
    iStack_134 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    while( true ) {
      if (iStack_134 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iStack_134 + -4);
      }
      if (iVar3 - 1U <= *(uint *)(unaff_EBP + -0x28)) break;
      uVar8 = *(uint *)(unaff_EBP + -0x28) + 1;
      *(uint *)(unaff_EBP + -0x38) = uVar8;
      for (uVar9 = uVar8; (iStack_134 != 0 && (uVar9 < *(uint *)(iStack_134 + -4)));
          uVar9 = uVar9 + 1) {
        iVar3 = *(int *)(unaff_EBP + -0x28) * 2;
        iStack_134 = iStack_134 + iVar3;
        puStack_138 = (undefined1 *)0x62ee83;
        iVar5 = FUN_0062fdf4();
        if (iVar5 != 0) {
          iStack_134 = *(int *)(unaff_EBP + -0x10) + uVar9 * 2;
          puStack_138 = (undefined1 *)0x62ee9a;
          iVar5 = FUN_0062fdf4();
          if ((iVar5 != 0) && (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x34))) {
            iVar5 = *(int *)(unaff_EBP + -0x10);
            uVar2 = *(undefined2 *)(iVar3 + iVar5);
            *(undefined2 *)(iVar3 + iVar5) = *(undefined2 *)(iVar5 + uVar9 * 2);
            *(undefined2 *)(*(int *)(unaff_EBP + -0x10) + uVar9 * 2) = uVar2;
          }
        }
        iStack_134 = *(int *)(unaff_EBP + -0x10);
        uVar8 = *(uint *)(unaff_EBP + -0x38);
      }
      *(uint *)(unaff_EBP + -0x28) = uVar8;
    }
    iStack_134 = unaff_EBP + -0x24;
    puStack_138 = (undefined1 *)0x62eee1;
    FUN_0062f4b8();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_005ee767();
    iVar3 = *(int *)(unaff_EBP + -0x40);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined ***)(unaff_EBP + -0x6c) = &PTR_FUN_008ed1a8;
  FUN_0062ff1a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    iStack_134 = 0x62ef26;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_134 = 0x62ef33;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_134 = 0x62ef3e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    iStack_134 = 0x62ef4f;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



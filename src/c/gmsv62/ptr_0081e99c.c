/* ptr_0081e99c - 0x0081e99c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0081e99c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_4;
  
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_ESI + 0x20);
  *(undefined4 *)(unaff_EBP + -0x18) = 0x20;
  if (0x20 < iVar3 + -0x12) {
    while( true ) {
      FUN_004031b7();
      iVar3 = *(int *)(unaff_ESI + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (iVar3 == 0) {
        FUN_00878dfb();
      }
      uStack_4 = *(undefined4 *)(unaff_EBP + -0x14);
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piVar1;
      *(int **)(unaff_EBP + -0x20) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        uStack_18 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_20 = 0x81eab9;
        iStack_1c = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_18 = 0x81eac6;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        uStack_18 = 0x81ead1;
        FUN_00878dfb();
      }
      uStack_18 = 0xff;
      iStack_1c = 0x81eae0;
      FUN_004031b7();
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (iVar3 == 0) {
        uStack_18 = 0x81eaf9;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piVar1;
      uStack_24 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_20 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_1c = *(int *)(unaff_EBP + -0x30);
      uStack_18 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x20) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x20);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      if (iVar3 + -0x12 <= *(int *)(unaff_EBP + -0x18)) break;
      unaff_ESI = *(int *)(unaff_EBP + -0x10);
    }
    unaff_ESI = *(int *)(unaff_EBP + -0x10);
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00403191();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  iVar3 = *(int *)(unaff_ESI + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  uStack_4 = *(undefined4 *)(unaff_EBP + -0x14);
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    uStack_18 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_20 = 0x81ec90;
    iStack_1c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_18 = 0x81ec9d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_18 = 0x81ecaa;
    FUN_00878dfb();
  }
  uStack_18 = 0x81ecb3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_18 = 0x81ecc0;
  FUN_00403191();
  uStack_18 = 0;
  iStack_1c = unaff_EBP + -0x34;
  iStack_20 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_24;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_1c = 0x81ed0a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  uStack_18 = 0x81ed19;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_18 = 0x81ed2a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_18 = 0x81ed37;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_18 = 0x81ed42;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_18 = 0x81ed4f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_18 = 0x81ed5a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_18 = 0x81ed67;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_18 = 0x81ed72;
    FUN_00878dfb();
  }
  uStack_18 = 0xff;
  iStack_1c = 0x81ed81;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar3 == 0) {
    uStack_18 = 0x81ed99;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  uStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_1c = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    uStack_38 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_40 = 0x81edd5;
    iStack_3c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_38 = 0x81ede2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_38 = 0x81edef;
    FUN_00878dfb();
  }
  uStack_38 = 0x81edf8;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_38 = 0x81ee05;
  FUN_00403191();
  uStack_38 = 0;
  iStack_3c = unaff_EBP + -0x34;
  iStack_40 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_44;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_3c = 0x81ee4f;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  uStack_38 = 0x81ee5e;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_38 = 0x81ee6f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_38 = 0x81ee7c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_38 = 0x81ee87;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_38 = 0x81ee94;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_38 = 0x81ee9f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_38 = 0x81eeac;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_38 = 0x81eeb7;
    FUN_00878dfb();
  }
  uStack_38 = 0xff;
  iStack_3c = 0x81eec6;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar3 == 0) {
    uStack_38 = 0x81eede;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  uStack_44 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_40 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_3c = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_38 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_58 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_60 = 0x81ef1a;
    iStack_5c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_58 = 0x81ef27;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x81ef34;
    FUN_00878dfb();
  }
  iStack_58 = 0x81ef40;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_58 = unaff_EBP + -0x44;
  iStack_5c = 0x81ef4a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_58 = 0x81ef56;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_58 = 0x81ef60;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_58 = unaff_EBP + -0x34;
  iStack_5c = 0x81ef6a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_58 = 0x81ef76;
    FUN_00878dfb();
  }
  iStack_58 = 0;
  iStack_5c = unaff_EBP + -0x44;
  iStack_60 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_64;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00679e4e(&uStack_64,0x8ce);
  iVar3 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_5c = 0x81efc0;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  iStack_58 = 0x81efcf;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_58 = 0x81efe0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_58 = 0x81efed;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x81eff8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_58 = 0x81f005;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x81f010;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_58 = 0x81f01d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x81f028;
    FUN_00878dfb();
  }
  iStack_58 = 0xff;
  iStack_5c = 0x81f037;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar3 == 0) {
    iStack_58 = 0x81f04f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x10);
  piVar1 = *(int **)(iVar3 + 0x60);
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x4c);
  iVar3 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,*(int *)(iVar3 + 0x1c) + -7,*(int *)(iVar3 + 0x20) + -0x12);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



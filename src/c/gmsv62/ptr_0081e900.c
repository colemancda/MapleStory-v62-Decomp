/* ptr_0081e900 - 0x0081e900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0081e900(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  param_3 = 0x81e912;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  param_4 = 0x81e921;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    param_4 = 0x81e932;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  param_4 = 0x81e93f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81e94a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = 0x81e957;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81e962;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  param_4 = 0x81e96f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81e97a;
    FUN_00878dfb();
  }
  param_4 = 0x81e983;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  param_4 = 0x81e990;
  FUN_00403191();
  param_4 = 0;
  param_3 = unaff_EBP + -0x34;
  param_2 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &param_1;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  param_1 = extraout_ECX;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  param_3 = 0x81e9d9;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  param_4 = 0x81e9e8;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    param_4 = 0x81e9f9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  param_4 = 0x81ea06;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81ea11;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  param_4 = 0x81ea1e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81ea29;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  param_4 = 0x81ea36;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81ea41;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_ESI + 0x20);
  *(undefined4 *)(unaff_EBP + -0x18) = 0x20;
  if (0x20 < iVar3 + -0x12) {
    while( true ) {
      param_4 = 0xff;
      param_3 = 0x81ea69;
      FUN_004031b7();
      iVar3 = *(int *)(unaff_ESI + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (iVar3 == 0) {
        param_4 = 0x81ea7f;
        FUN_00878dfb();
      }
      param_1 = *(undefined4 *)(unaff_EBP + -0x14);
      param_2 = *(int *)(unaff_EBP + -0x44);
      param_3 = *(int *)(unaff_EBP + -0x40);
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piVar1;
      param_4 = *(undefined4 *)(unaff_EBP + -0x3c);
      *(int **)(unaff_EBP + -0x20) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        uStack_10 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_18 = 0x81eab9;
        iStack_14 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_10 = 0x81eac6;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        uStack_10 = 0x81ead1;
        FUN_00878dfb();
      }
      uStack_10 = 0xff;
      iStack_14 = 0x81eae0;
      FUN_004031b7();
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (iVar3 == 0) {
        uStack_10 = 0x81eaf9;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piVar1;
      uStack_1c = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_18 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_14 = *(int *)(unaff_EBP + -0x30);
      uStack_10 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x20) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        param_4 = *(undefined4 *)(unaff_EBP + -0x20);
        param_2 = 0x81eb36;
        param_3 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      param_4 = 0x81eb43;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        param_4 = 0x81eb4e;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x20);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      if (iVar3 + -0x12 <= *(int *)(unaff_EBP + -0x18)) break;
      unaff_ESI = *(int *)(unaff_EBP + -0x10);
    }
    unaff_ESI = *(int *)(unaff_EBP + -0x10);
  }
  param_4 = 0x81eb74;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_4 = 0x81eb81;
  FUN_00403191();
  param_4 = 0;
  param_3 = unaff_EBP + -0x34;
  param_2 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &param_1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  param_3 = 0x81ebca;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  param_4 = 0x81ebd9;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    param_4 = 0x81ebea;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  param_4 = 0x81ebf7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81ec02;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_4 = 0x81ec0f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81ec1a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  param_4 = 0x81ec27;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    param_4 = 0x81ec32;
    FUN_00878dfb();
  }
  param_4 = 0xff;
  param_3 = 0x81ec41;
  FUN_004031b7();
  iVar3 = *(int *)(unaff_ESI + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar3 == 0) {
    param_4 = 0x81ec57;
    FUN_00878dfb();
  }
  param_1 = *(undefined4 *)(unaff_EBP + -0x14);
  param_2 = *(undefined4 *)(unaff_EBP + -0x44);
  param_3 = *(undefined4 *)(unaff_EBP + -0x40);
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  param_4 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_18 = 0x81ec90;
    iStack_14 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_10 = 0x81ec9d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_10 = 0x81ecaa;
    FUN_00878dfb();
  }
  uStack_10 = 0x81ecb3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_10 = 0x81ecc0;
  FUN_00403191();
  uStack_10 = 0;
  iStack_14 = unaff_EBP + -0x34;
  iStack_18 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_14 = 0x81ed0a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  uStack_10 = 0x81ed19;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_10 = 0x81ed2a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_10 = 0x81ed37;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_10 = 0x81ed42;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_10 = 0x81ed4f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_10 = 0x81ed5a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_10 = 0x81ed67;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_10 = 0x81ed72;
    FUN_00878dfb();
  }
  uStack_10 = 0xff;
  iStack_14 = 0x81ed81;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar3 == 0) {
    uStack_10 = 0x81ed99;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  uStack_1c = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_18 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_14 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_10 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    uStack_30 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_38 = 0x81edd5;
    iStack_34 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_30 = 0x81ede2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_30 = 0x81edef;
    FUN_00878dfb();
  }
  uStack_30 = 0x81edf8;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_30 = 0x81ee05;
  FUN_00403191();
  uStack_30 = 0;
  iStack_34 = unaff_EBP + -0x34;
  iStack_38 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_34 = 0x81ee4f;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  uStack_30 = 0x81ee5e;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_30 = 0x81ee6f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_30 = 0x81ee7c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_30 = 0x81ee87;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_30 = 0x81ee94;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_30 = 0x81ee9f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_30 = 0x81eeac;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_30 = 0x81eeb7;
    FUN_00878dfb();
  }
  uStack_30 = 0xff;
  iStack_34 = 0x81eec6;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar3 == 0) {
    uStack_30 = 0x81eede;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_38 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_34 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_30 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_58 = 0x81ef1a;
    iStack_54 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x81ef27;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x81ef34;
    FUN_00878dfb();
  }
  iStack_50 = 0x81ef40;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_50 = unaff_EBP + -0x44;
  iStack_54 = 0x81ef4a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x81ef56;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_50 = 0x81ef60;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_50 = unaff_EBP + -0x34;
  iStack_54 = 0x81ef6a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x81ef76;
    FUN_00878dfb();
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x44;
  iStack_58 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00679e4e(&uStack_5c,0x8ce);
  iVar3 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_54 = 0x81efc0;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  iStack_50 = 0x81efcf;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x81efe0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_50 = 0x81efed;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x81eff8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_50 = 0x81f005;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x81f010;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x81f01d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x81f028;
    FUN_00878dfb();
  }
  iStack_50 = 0xff;
  iStack_54 = 0x81f037;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar3 == 0) {
    iStack_50 = 0x81f04f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x10);
  piVar1 = *(int **)(iVar3 + 0x60);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_54 = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_50 = *(undefined4 *)(unaff_EBP + -0x4c);
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



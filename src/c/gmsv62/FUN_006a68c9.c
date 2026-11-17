/* FUN_006a68c9 - 0x006a68c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a68c9(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  
  FUN_00879bb8();
  FUN_00679d86();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(*(int *)extraout_ECX[0x23] + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(*(int *)extraout_ECX[0x25] + 0x20))();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x74) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x94) = 2;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0x8c) = 2;
  *(undefined4 *)(unaff_EBP + -0x88) = 2;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xff000000;
  puVar2 = (undefined4 *)FUN_00679e4e();
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x84) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0xc;
  FUN_00414edd();
  FUN_004a77eb();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puVar2 = (undefined4 *)FUN_00679e4e();
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0xc4) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0xc0) = 0xf;
  *(undefined4 *)(unaff_EBP + -0xa0) = 5;
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0x124) = 0;
  *(undefined4 *)(unaff_EBP + -0x104) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(undefined4 *)(unaff_EBP + -0x10c) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x108) = 0xe;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar1 != 0) {
    FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045e1ff();
  (**(code **)(*(int *)extraout_ECX[0x28] + 0x20))();
  FUN_00499fb8();
  (**(code **)(*(int *)(extraout_ECX[0x28] + 4) + 0x24))();
  if (extraout_ECX[0x2d] == 1) {
    *(undefined4 *)(unaff_EBP + -0xa4) = 0xaa;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x12;
    *(undefined4 *)(unaff_EBP + -0x20) = 0xb4;
  }
  else {
    iStack_178 = 0x6a6bf2;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar1 != 0) {
      FUN_004a0726();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_178 = 0x6a6c18;
    FUN_0045e196();
    iStack_178 = 0xe;
    iStack_17c = 0x96;
    iStack_180 = 0x44;
    puStack_184 = (undefined4 *)0x2c;
    (**(code **)(*(int *)extraout_ECX[0x2a] + 8))(extraout_ECX,5);
    (**(code **)(*(int *)(extraout_ECX[0x2a] + 4) + 0x1c))(0);
    *(undefined4 *)(unaff_EBP + -0xa4) = 0x7d;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x28;
    *(undefined4 *)(unaff_EBP + -0x20) = 0x87;
    iStack_178 = 0x6a6c6c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iStack_178 = unaff_EBP + -0x50;
    iStack_17c = 0x6a6c7a;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6c86;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_178 = 0x6a6c90;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_178 = unaff_EBP + -0x40;
    puVar2 = &DAT_00980690;
    iStack_17c = 0x6a6c9e;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6caa;
      FUN_00878dfb();
      puVar2 = extraout_ECX_00;
    }
    iStack_178 = 0;
    iStack_17c = unaff_EBP + -0x50;
    iStack_180 = unaff_EBP + -0x40;
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_184;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_184 = puVar2;
    FUN_00679e4e(&puStack_184,0xf2b);
    iVar1 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_17c = 0x6a6cf3;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    iStack_178 = 0x6a6d05;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_178 = 0x6a6d16;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_178 = 0x6a6d23;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6d2e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_178 = 0x6a6d3b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6d46;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_178 = 0x6a6d53;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6d5e;
      FUN_00878dfb();
    }
    iStack_178 = 0x6a6d64;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_178 = unaff_EBP + -0x40;
    iStack_17c = 0x6a6d72;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6d7e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_178 = 0x6a6d88;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iStack_178 = unaff_EBP + -0x50;
    puVar2 = &DAT_00980690;
    iStack_17c = 0x6a6d96;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6da2;
      FUN_00878dfb();
      puVar2 = extraout_ECX_01;
    }
    iStack_178 = 0;
    iStack_17c = unaff_EBP + -0x40;
    iStack_180 = unaff_EBP + -0x50;
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_184;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_184 = puVar2;
    FUN_00679e4e(&puStack_184,0xf2c);
    iVar1 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_17c = 0x6a6deb;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    iStack_178 = 0x6a6dfd;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_178 = 0x6a6e0e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_178 = 0x6a6e1b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6e26;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_178 = 0x6a6e33;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6e3e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_178 = 0x6a6e4b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_178 = 0x6a6e56;
      FUN_00878dfb();
    }
  }
  if (extraout_ECX[0x2d] == 0) {
    FUN_0045621e();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    *(undefined4 *)(unaff_EBP + -0xf8) = 0;
    *(undefined4 *)(unaff_EBP + -0xe0) = 0xe;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0xe;
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
    iStack_178 = 0x6a6e9c;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (iVar1 != 0) {
      FUN_004562b1();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_178 = 0x6a6ebf;
    FUN_0045e1ff();
    iStack_178 = 0x41;
    iStack_17c = 5;
    iStack_180 = 0;
    puStack_184 = extraout_ECX;
    (**(code **)(*(int *)extraout_ECX[0x1f] + 0x20))();
    iStack_178 = 0x6a6edd;
    FUN_00499fb8();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00457a09();
  }
  else if (extraout_ECX[0x2d] == 2) {
    iStack_178 = 0x6a6f03;
    (**(code **)(*(int *)(extraout_ECX[0x2a] + 4) + 0x1c))();
  }
  iStack_178 = 0x6a6f12;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar1 != 0) {
    FUN_004a8730();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_178 = 0x6a6f38;
  FUN_00609bca();
  iStack_178 = 0x4b;
  iStack_17c = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_180 = 0x71;
  puStack_184 = *(undefined4 **)(unaff_EBP + -0x10);
  (**(code **)(*(int *)extraout_ECX[0x2c] + 8))(extraout_ECX,2);
  iVar1 = extraout_ECX[0x2d];
  if (iVar1 == 0) {
    uVar3 = extraout_ECX[0x1f];
  }
  else if (iVar1 == 1) {
    uVar3 = extraout_ECX[0x2c];
  }
  else {
    if (iVar1 != 2) goto LAB_006a6f81;
    uVar3 = extraout_ECX[0x2a];
  }
  FUN_008164fd(uVar3);
LAB_006a6f81:
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00457a09();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00608bf3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045c14e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



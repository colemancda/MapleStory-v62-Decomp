/* ptr_0046e900 - 0x0046e900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046e900(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBX;
  int unaff_EBP;
  bool bVar9;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int *piStack_28;
  
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x70;
  FUN_004031b7();
  bVar9 = DAT_0097c1ac == unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x71;
  if (bVar9) {
    FUN_00878dfb();
  }
  puVar4 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x18);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x70;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined2 *)(unaff_EBP + -0x90) = 0xd;
  *(int **)(unaff_EBP + -0x88) = *(int **)(unaff_EBP + 0x14);
  (**(code **)(**(int **)(unaff_EBP + 0x14) + 4))();
  piVar1 = *(int **)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  if (piVar1 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + 0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
  puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18);
  *(undefined4 **)(unaff_EBP + 0x18) = puVar4;
  if (piVar1 == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*puVar4 + 0xe0))();
  if (iVar3 < (int)unaff_EBX) {
    piStack_28 = (int *)0x46ea50;
    FUN_00878e09();
  }
  iVar3 = *(int *)(unaff_EBP + -0x18);
  if (*(int **)(iVar3 + 0x10) == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar1 = (int *)*puVar4;
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(iVar3 + 0x10);
  if (piVar1 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar1 = (int *)*puVar4;
  FUN_004320e3();
  iVar3 = (**(code **)(*piVar1 + 0xb4))();
  if (iVar3 < (int)unaff_EBX) {
    piStack_28 = piVar1;
    FUN_00878e09();
  }
  *(int **)(unaff_EBP + 0x24) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x73;
  *(int **)(unaff_EBP + 0x20) = unaff_EBX;
  while( true ) {
    if (*(int **)(unaff_EBP + -0x70) == unaff_EBX) {
      piStack_28 = (int *)0x46eac0;
      FUN_00878dfb();
    }
    uVar5 = FUN_0040cf4d();
    if (uVar5 <= *(uint *)(unaff_EBP + 0x20)) break;
    FUN_0087a1b0();
    piStack_28 = *(int **)(unaff_EBP + 0x20);
    piStack_28 = (int *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffffdc;
    FUN_00402e8e();
    piStack_28 = (int *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    FUN_0040263d();
    FUN_004048a4();
    piStack_28 = (int *)(unaff_EBP + -0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x76;
    piStack_28 = (int *)0x46eb32;
    iVar3 = FUN_0041a485();
    if ((iVar3 < (int)unaff_EBX) && (iVar3 != -0x7fffbffe)) {
      piStack_28 = (int *)0x46eb43;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    if (*(int **)(unaff_EBP + -0xb8) != unaff_EBX) {
      piStack_28 = (int *)0x46eb57;
      (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
    }
    *(int ***)(unaff_EBP + -0x30) = &piStack_28;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x77;
    FUN_004115d9();
    FUN_00404e7f();
    *(undefined1 *)(unaff_EBP + -4) = 0x79;
    FUN_0040263d();
    piStack_28 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x7a;
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0xcc) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x79;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ebcf;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    if (*(int **)(unaff_EBP + -0xc0) != unaff_EBX) {
      piStack_28 = (int *)0x46ebe3;
      (**(code **)(**(int **)(unaff_EBP + -0xc0) + 8))();
    }
    piStack_28 = (int *)0x46ebe9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    piStack_28 = (int *)(unaff_EBP + -0x2c);
    iVar3 = FUN_00402e32();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ebff;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    piStack_28 = (int *)0x46ec09;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    piStack_28 = (int *)(unaff_EBP + -0x58);
    iVar3 = FUN_00402e32();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ec1f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7c;
    piStack_28 = (int *)0x46ec2c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
    piStack_28 = (int *)(unaff_EBP + -0xe0);
    iVar3 = FUN_00402e32();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ec45;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7d;
    piStack_28 = (int *)0x46ec52;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    piStack_28 = (int *)(unaff_EBP + -0x90);
    iVar3 = FUN_00402e32();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ec6b;
      FUN_00878dfb();
    }
    piStack_28 = *(int **)(unaff_EBP + -0xcc);
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    FUN_004031b7();
    piVar1 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x7f;
    if (piVar1 == unaff_EBX) {
      piStack_28 = (int *)0x46ec94;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x58);
    FUN_004250ac();
    piStack_28 = (int *)0x46ecce;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ecd9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    piStack_28 = (int *)0x46ece6;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ecf1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7d;
    piStack_28 = (int *)0x46ed01;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ed0c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7c;
    piStack_28 = (int *)0x46ed1c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ed27;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    piStack_28 = (int *)0x46ed34;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ed3f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    piStack_28 = (int *)0x46ed4c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ed57;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    piStack_28 = (int *)0x46ed67;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      piStack_28 = (int *)0x46ed72;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
  }
  piStack_28 = (int *)0x46ed80;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  piStack_28 = (int *)(unaff_EBP + -0x58);
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    piStack_28 = (int *)0x46ed96;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  piStack_28 = (int *)0x46eda0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_28 = (int *)(unaff_EBP + -0x2c);
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    piStack_28 = (int *)0x46edb6;
    FUN_00878dfb();
  }
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  if (piVar1 == unaff_EBX) {
    piStack_28 = (int *)0x46edcb;
    FUN_00878dfb();
  }
  piStack_28 = *(int **)(unaff_EBP + -0x50);
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + 0x20) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x110))();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = *(int *)(unaff_EBP + 0x20);
    uStack_58 = 0x46ee0b;
    iStack_54 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  iStack_50 = 0x46ee18;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46ee23;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x73;
  iStack_50 = 0x46ee30;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46ee3b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  if (*(int **)(unaff_EBP + 0x24) != unaff_EBX) {
    iStack_50 = 0x46ee4c;
    (**(code **)(**(int **)(unaff_EBP + 0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  if (*(int **)(unaff_EBP + 0x28) != unaff_EBX) {
    iStack_50 = 0x46ee5d;
    (**(code **)(**(int **)(unaff_EBP + 0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
    iStack_50 = 0x46ee6e;
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  iStack_50 = unaff_EBP + -0x80;
  iStack_54 = 0x46ee79;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  if (*(int **)(unaff_EBP + 0xc) == unaff_EBX) {
    iStack_50 = 0;
  }
  else {
    iStack_50 = **(int **)(unaff_EBP + 0xc);
  }
  *(int **)(unaff_EBP + -0x48) = unaff_EBX;
  iStack_54 = 0x46ee9a;
  FUN_004184ca();
  *(int **)(*(int *)(unaff_EBP + -0x18) + 0x58) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iStack_50 = 0x46eeb0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_50 = unaff_EBP + -0x2c;
  iStack_54 = 0x46eebf;
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46eecb;
    FUN_00878dfb();
  }
  iStack_50 = 100;
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  iStack_54 = 0x46eedd;
  uStack_58 = FUN_00411641();
  *(int **)(unaff_EBP + 0x20) = &iStack_54;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  uStack_58 = 0x46eef5;
  FUN_0044974c();
  uStack_58 = 0x46eefc;
  uVar6 = FUN_0047077a();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iStack_50 = 0x46ef0c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46ef17;
    FUN_00878dfb();
  }
  iStack_50 = unaff_EBP + -0xf4;
  iStack_54 = 0x46ef29;
  FUN_0046fcad();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  iStack_50 = 0x46ef33;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_50 = unaff_EBP + -0x2c;
  iStack_54 = 0x46ef3d;
  iVar3 = FUN_00402e32();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46ef49;
    FUN_00878dfb();
  }
  iStack_50 = 0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iStack_54 = 0x46ef5f;
  FUN_004031b7();
  iStack_50 = unaff_EBP + -0xf0;
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  iStack_54 = 0x46ef76;
  iStack_54 = FUN_00449749();
  uStack_58 = 0x46ef82;
  uVar6 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + 0x18) = &uStack_58;
  FUN_004033a1(uVar6);
  iVar8 = *(int *)(unaff_EBP + -0x40) + 8;
  iVar3 = *(int *)(unaff_EBP + -0x44) + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  *(int *)(unaff_EBP + 0x24) = iVar3;
  FUN_004115d9(iVar3,iVar8);
  FUN_00448e3a(iVar3,iVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iStack_50 = 0x46efc2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46efcd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  iStack_50 = 0x46efda;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EBX) {
    iStack_50 = 0x46efe5;
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(int **)(unaff_EBP + -0x48))[-1] >> 1;
  }
  if (*(int *)(unaff_EBP + 0x20) < (int)uVar5) {
    iStack_50 = *(int *)(unaff_EBP + 0x20);
    iStack_54 = unaff_EBP + 0x20;
    uStack_58 = 0x46f00f;
    FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 0x8a;
    iStack_50 = 0x46f01c;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    FUN_00402676();
    iStack_54 = unaff_EBP + -0x80;
    *(int **)(unaff_EBP + 0x20) = &iStack_50;
    uStack_58 = 0x46f039;
    FUN_0046fcc9();
    iStack_54 = unaff_EBP + -0x48;
    uStack_58 = 0x46f042;
    uVar6 = FUN_007d381d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = uVar6;
    iStack_50 = 0x46f051;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_50 = unaff_EBP + -0x2c;
    iStack_54 = 0x46f05b;
    iVar3 = FUN_00402e32();
    if (iVar3 < (int)unaff_EBX) {
      iStack_50 = 0x46f067;
      FUN_00878dfb();
    }
    iStack_50 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_54 = 0x46f07d;
    FUN_004031b7();
    iStack_50 = unaff_EBP + -0xf0;
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    iStack_54 = 0x46f094;
    iStack_54 = FUN_00449749();
    uStack_58 = 0x46f09d;
    uVar6 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + 0x20) = &uStack_58;
    FUN_004033a1(uVar6);
    iVar3 = *(int *)(unaff_EBP + -0x40) + 0x16;
    uVar6 = *(undefined4 *)(unaff_EBP + 0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_004115d9(uVar6,iVar3);
    FUN_00448e3a(uVar6,iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_50 = 0x46f0d6;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      iStack_50 = 0x46f0e1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    iStack_50 = 0x46f0ee;
    iVar3 = FUN_00402bc3();
    if (iVar3 < (int)unaff_EBX) {
      iStack_50 = 0x46f0f9;
      FUN_00878dfb();
    }
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    iStack_50 = 0x46f108;
    FUN_00878dfb();
  }
  iVar8 = FUN_0040e48b();
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar3 + 0x48) = iVar8 / -2;
  if (piVar1 == unaff_EBX) {
    iStack_50 = 0x46f12b;
    FUN_00878dfb();
  }
  iVar7 = FUN_0040e53d();
  iVar8 = *(int *)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar3 + 0x4c) = -iVar7;
  if (((iVar2 == 4) && ((int)unaff_EBX < *(int *)(unaff_EBP + 0x1c))) ||
     (*(int *)(unaff_EBP + 8) == 5)) {
    *(int *)(iVar3 + 0x4c) = -iVar7 + 7 + iVar8;
  }
  iStack_50 = 0x46f15b;
  FUN_0046f8b1();
  *(undefined4 *)(iVar3 + 0x54) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x80) != unaff_EBX) {
    iStack_50 = 0x46f18e;
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0xbc) != unaff_EBX) {
    iStack_50 = 0x46f1cc;
    (**(code **)(**(int **)(unaff_EBP + -0xbc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0xc4) != unaff_EBX) {
    iStack_50 = 0x46f1e0;
    (**(code **)(**(int **)(unaff_EBP + -0xc4) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x6c) != unaff_EBX) {
    iStack_50 = 0x46f1f1;
    (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -200) != unaff_EBX) {
    iStack_50 = 0x46f205;
    (**(code **)(**(int **)(unaff_EBP + -200) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0xb0) != unaff_EBX) {
    iStack_50 = 0x46f219;
    (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
    iStack_50 = 0x46f22a;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    iStack_50 = 0x46f23b;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
    iStack_50 = 0x46f24c;
    (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x78) != unaff_EBX) {
    iStack_50 = 0x46f25d;
    (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0xa8) != unaff_EBX) {
    iStack_50 = 0x46f271;
    (**(code **)(**(int **)(unaff_EBP + -0xa8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x3c) != unaff_EBX) {
    iStack_50 = 0x46f282;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    FUN_004030b1();
  }
  FUN_004115a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



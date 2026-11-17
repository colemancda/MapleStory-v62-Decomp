/* FUN_00736427 - 0x00736427 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00736427(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_EBP;
  int iVar7;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined *puStack_60;
  undefined4 *puStack_5c;
  
  FUN_00879bb8();
  puStack_5c = (undefined4 *)(unaff_EBP + -0x30);
  puStack_60 = (undefined *)0x736448;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  puStack_5c = (undefined4 *)0x736453;
  FUN_0045e4a2();
  puStack_5c = (undefined4 *)(unaff_EBP + -0x14);
  puStack_60 = (undefined *)0x73645e;
  FUN_00448dc6();
  puStack_5c = (undefined4 *)0x1;
  puStack_60 = *(undefined **)(unaff_EBP + 8);
  iStack_64 = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_68 = 0x736471;
  FUN_00737ec6();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  puStack_5c = (undefined4 *)0xb2e;
  puStack_60 = (undefined *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_64 = 0x736493;
  puVar3 = (undefined4 *)FUN_00679d22();
  puStack_60 = (undefined *)*puVar3;
  puStack_5c = (undefined4 *)0x1;
  iStack_64 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_68 = 0x7364a5;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_5c = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    puStack_60 = (undefined *)0x7364bc;
    FUN_00434e38();
  }
  iVar7 = *(int *)(unaff_EBP + 8);
  if (iVar7 == 0x40) {
    puStack_5c = *(undefined4 **)(iVar2 + 0x45);
    puStack_60 = (undefined *)(iVar2 + 0x41);
    iStack_64 = 0x736747;
    sVar1 = FUN_0045f084();
    puStack_5c = (undefined4 *)(sVar1 + -1);
    iStack_64 = unaff_EBP + -0x10;
    puStack_60 = &DAT_0096477c;
    iStack_68 = 0x73675c;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + 8) = 2;
    goto LAB_00736766;
  }
  if (iVar7 == 0x80) {
    puStack_5c = *(undefined4 **)(iVar2 + 0x4d);
    puStack_60 = (undefined *)(iVar2 + 0x49);
    iStack_64 = 0x73671a;
    sVar1 = FUN_0045f084();
    puStack_5c = (undefined4 *)(sVar1 + -1);
    iStack_64 = unaff_EBP + -0x10;
    puStack_60 = &DAT_0096477c;
    iStack_68 = 0x73672f;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + 8) = 3;
    goto LAB_00736766;
  }
  if (iVar7 == 0x100) {
    puStack_5c = *(undefined4 **)(iVar2 + 0x55);
    puStack_60 = (undefined *)(iVar2 + 0x51);
    iStack_64 = 0x7366ed;
    sVar1 = FUN_0045f084();
    puStack_5c = (undefined4 *)(sVar1 + -1);
    iStack_64 = unaff_EBP + -0x10;
    puStack_60 = &DAT_0096477c;
    iStack_68 = 0x736702;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + 8) = 4;
    goto LAB_00736766;
  }
  if (iVar7 == 0x200) {
    puStack_5c = *(undefined4 **)(iVar2 + 0x5d);
    puStack_60 = (undefined *)(iVar2 + 0x59);
    iStack_64 = 0x7366bd;
    sVar1 = FUN_0045f084();
    puStack_5c = (undefined4 *)(sVar1 + -1);
    iStack_64 = unaff_EBP + -0x10;
    puStack_60 = &DAT_0096477c;
    iStack_68 = 0x7366d2;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + 8) = 5;
    goto LAB_00736766;
  }
  if (iVar7 != 0x800) {
    if (iVar7 == 0x2000) {
      puStack_5c = (undefined4 *)0x736506;
      FUN_0087a1b0();
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffa8;
      puStack_5c = *(undefined4 **)(iVar2 + 0x7d);
      puStack_60 = (undefined *)(iVar2 + 0x79);
      iStack_64 = 0x736515;
      uVar4 = FUN_0045f084();
      iStack_64 = *(undefined4 *)(iVar2 + 0x3d);
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      iStack_6c = 0x736524;
      iStack_68 = iVar2 + 0x39;
      sVar1 = FUN_0045f084();
      iStack_6c = (int)sVar1;
      uStack_70 = 0x73652d;
      iStack_78 = FUN_00738082();
      uStack_70 = 10;
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_78 = *(short *)(unaff_EBP + 8) - iStack_78;
      puStack_5c = (undefined4 *)FUN_0087b818();
      puStack_60 = (undefined *)(unaff_EBP + -0x10);
      iStack_64 = 0x73654b;
      FUN_00434e21();
      iStack_64 = *(undefined4 *)(iVar2 + 0x3d);
      iStack_6c = 0x736554;
      iStack_68 = iVar2 + 0x39;
      sVar1 = FUN_0045f084();
      puStack_5c = (undefined4 *)0xb2e;
      puStack_60 = (undefined *)(unaff_EBP + -0x24);
      iStack_64 = 0x736569;
      puVar3 = (undefined4 *)FUN_00679d22();
      uVar4 = *puVar3;
      puStack_5c = (undefined4 *)(int)sVar1;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_60 = (undefined *)0x736578;
      puStack_5c = (undefined4 *)FUN_00738082();
      iStack_64 = unaff_EBP + -0x18;
      iStack_68 = 0x736584;
      puStack_60 = (undefined *)uVar4;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_5c = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        puStack_60 = (undefined *)0x73659b;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + 8) = 1;
    }
    goto LAB_00736766;
  }
  puStack_5c = (undefined4 *)0x7365b0;
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffa8;
  puStack_5c = *(undefined4 **)(iVar2 + 0x6d);
  puStack_60 = (undefined *)(iVar2 + 0x69);
  iStack_64 = 0x7365bf;
  uVar4 = FUN_0045f084();
  iStack_64 = *(undefined4 *)(iVar2 + 0x3d);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  iStack_6c = 0x7365ce;
  iStack_68 = iVar2 + 0x39;
  sVar1 = FUN_0045f084();
  iVar7 = (int)sVar1 / 100;
  if (iVar7 == 0) {
    puStack_5c = (undefined4 *)0xc;
    puVar3 = puStack_5c;
  }
  else if (iVar7 == 1) {
    puStack_5c = (undefined4 *)0x36;
    puVar3 = puStack_5c;
  }
  else if (iVar7 == 2) {
    puStack_5c = (undefined4 *)0xa;
    puVar3 = puStack_5c;
  }
  else if (iVar7 < 3) {
LAB_007365fc:
    puVar3 = (undefined4 *)0;
  }
  else if (iVar7 < 5) {
    puStack_5c = (undefined4 *)0x14;
    puVar3 = puStack_5c;
  }
  else {
    if (iVar7 != 5) goto LAB_007365fc;
    puStack_5c = (undefined4 *)0x2a;
    puVar3 = puStack_5c;
  }
  puStack_5c = (undefined4 *)0xa;
  puStack_60 = *(undefined **)(unaff_EBP + 8);
  iStack_64 = (int)*(short *)(unaff_EBP + -0x20) - (int)puVar3;
  iStack_68 = 0x73661c;
  puStack_5c = (undefined4 *)FUN_0087b818();
  puStack_60 = (undefined *)(unaff_EBP + -0x10);
  iStack_64 = 0x736629;
  FUN_00434e21();
  iStack_64 = *(undefined4 *)(iVar2 + 0x3d);
  iStack_6c = 0x736632;
  iStack_68 = iVar2 + 0x39;
  sVar1 = FUN_0045f084();
  iVar2 = (int)sVar1 / 100;
  if (iVar2 == 0) {
    puStack_5c = (undefined4 *)0xc;
    puVar3 = puStack_5c;
  }
  else if (iVar2 == 1) {
    puStack_5c = (undefined4 *)0x36;
    puVar3 = puStack_5c;
  }
  else if (iVar2 == 2) {
    puStack_5c = (undefined4 *)0xa;
    puVar3 = puStack_5c;
  }
  else if (iVar2 < 3) {
LAB_00736660:
    puVar3 = (undefined4 *)0;
  }
  else if (iVar2 < 5) {
    puStack_5c = (undefined4 *)0x14;
    puVar3 = puStack_5c;
  }
  else {
    if (iVar2 != 5) goto LAB_00736660;
    puStack_5c = (undefined4 *)0x2a;
    puVar3 = puStack_5c;
  }
  puStack_5c = (undefined4 *)0xb2e;
  puStack_60 = (undefined *)(unaff_EBP + -0x28);
  iStack_64 = 0x73667f;
  puVar5 = (undefined4 *)FUN_00679d22();
  puStack_60 = (undefined *)*puVar5;
  iStack_64 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_68 = 0x736690;
  puStack_5c = puVar3;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_5c = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    puStack_60 = (undefined *)0x7366a7;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
LAB_00736766:
  puStack_5c = &DAT_00980690;
  puStack_60 = (undefined *)0x736774;
  FUN_00403191();
  puStack_5c = (undefined4 *)0x0;
  puStack_60 = (undefined *)0x0;
  iStack_64 = 0xffffffff;
  iStack_68 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_6c = 0;
  uStack_70 = 0;
  iStack_74 = 0x736789;
  (*DAT_0097b4c8)();
  iStack_74 = 0x736796;
  FUN_0087a1b0();
  iStack_74 = unaff_EBP + -0x58;
  iStack_78 = -1;
  FUN_00449713();
  FUN_00456ad5();
  *(int **)(unaff_EBP + -0x24) = &iStack_78;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0044974c();
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  iStack_74 = 0x7367e8;
  FUN_004497b5();
  iStack_74 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_78 = 0x7367f5;
  iStack_74 = FUN_00402bc3();
  if (iStack_74 < 0) {
    iStack_78 = 0x736800;
    FUN_00878dfb();
  }
  iStack_74 = 3;
  iStack_78 = 0xff;
  if (*(int *)(unaff_EBP + 8) < 2) {
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar6 == (int *)0x0) {
      iStack_74 = 0x80004003;
      iStack_78 = 0x73682e;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar2 = *piVar6;
    iStack_78 = *(int *)(unaff_EBP + -0x50);
    *(int **)(unaff_EBP + -0x28) = piVar6;
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x4c);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      iStack_98 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_a0 = 0x73686b;
      iStack_9c = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_98 = 0x736878;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_98 = 0x736883;
      FUN_00878dfb();
    }
    iStack_98 = 0x73688c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_98 = 0x736899;
    FUN_00403191();
    iStack_98 = unaff_EBP + -0x58;
    iStack_a0 = unaff_EBP + -0x28;
    iStack_9c = 0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_9c = 0x7368bd;
    iStack_9c = FUN_00449749();
    iStack_a0 = 0x7368c6;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_a0;
    FUN_00448a17(uVar4);
    iVar7 = (*(int *)(unaff_EBP + 8) * 9 + 0x24) * 2;
    uVar4 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar2 = iVar7;
    FUN_004115d9(0x3d,iVar7);
    FUN_00448e3a(uVar4,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_98 = 0x736902;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_98 = 0x73690f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_98 = 0x73691a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_98 = 0x736927;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_98 = 0x736932;
      FUN_00878dfb();
    }
    iStack_98 = 0x73693e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_98 = unaff_EBP + -0x48;
    iStack_9c = 0x736948;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_98 = 0x736954;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_98 = 0x73695e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_98 = unaff_EBP + -0x38;
    iStack_9c = 0x736968;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_98 = 0x736974;
      FUN_00878dfb();
    }
    iStack_98 = unaff_EBP + -0x38;
    iStack_a0 = unaff_EBP + 8;
    iStack_9c = 0x1a;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_9c = 0x736998;
    iStack_9c = FUN_00449749();
    iStack_a0 = 0x7369a1;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_a0;
    FUN_00448a17(uVar4);
    iVar2 = *(int *)(unaff_EBP + -0x20) + 0x41;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004115d9(iVar2,iVar7);
    FUN_00448e3a(iVar2,iVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_98 = 0x7369d9;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_98 = 0x7369e6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_98 = 0x7369f1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (piVar6 == (int *)0x0) {
      iStack_74 = 0x80004003;
      iStack_78 = 0x736a1a;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar2 = *piVar6;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) * 0x12;
    iStack_78 = *(int *)(unaff_EBP + -0x50);
    *(int **)(unaff_EBP + -0x28) = piVar6;
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x4c);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      iStack_98 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_a0 = 0x736a5b;
      iStack_9c = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_98 = 0x736a68;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_98 = 0x736a73;
      FUN_00878dfb();
    }
    iStack_98 = 0x736a7f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_98 = unaff_EBP + -0x38;
    iStack_9c = 0x736a89;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_98 = 0x736a95;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_98 = 0x736a9f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_98 = unaff_EBP + -0x48;
    iStack_9c = 0x736aa9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_98 = 0x736ab5;
      FUN_00878dfb();
    }
    iStack_98 = unaff_EBP + -0x48;
    iStack_a0 = unaff_EBP + -0x28;
    iStack_9c = 0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_9c = 0x736ad9;
    iStack_9c = FUN_00449749();
    iStack_a0 = 0x736ae2;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_a0;
    FUN_00448a17(uVar4);
    iVar2 = *(int *)(unaff_EBP + 8) + 0x4e;
    uVar4 = 0x3d;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iVar7 = iVar2;
    FUN_004115d9(0x3d,iVar2);
    FUN_00448e3a(uVar4,iVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_98 = 0x736b1b;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_98 = 0x736b28;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_98 = 0x736b33;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_98 = 0x736b40;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_98 = 0x736b4b;
      FUN_00878dfb();
    }
    iStack_98 = 0x736b51;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iStack_98 = unaff_EBP + -0x58;
    iStack_9c = 0x736b5b;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_98 = 0x736b67;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_98 = 0x736b71;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_98 = unaff_EBP + -0x48;
    iStack_9c = 0x736b7b;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_98 = 0x736b87;
      FUN_00878dfb();
    }
    iStack_98 = unaff_EBP + -0x48;
    iStack_a0 = unaff_EBP + 8;
    iStack_9c = 0x1a;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_9c = 0x736bab;
    iStack_9c = FUN_00449749();
    iStack_a0 = 0x736bb4;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_a0;
    FUN_00448a17(uVar4);
    iVar7 = *(int *)(unaff_EBP + -0x20) + 0x41;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_004115d9(iVar7,iVar2);
    FUN_00448e3a(iVar7,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_98 = 0x736bec;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_98 = 0x736bf9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_98 = 0x736c04;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  iStack_98 = 0x736c11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_98 = 0x736c1c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_98 = 0x736c45;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_98 = 0x736c56;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



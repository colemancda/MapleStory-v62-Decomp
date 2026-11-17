/* FUN_006f1716 - 0x006f1716 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f1716(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_e0;
  char *pcStack_dc;
  int iStack_d8;
  int iStack_c0;
  char *pcStack_bc;
  int iStack_b8;
  undefined4 *puStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  char *pcStack_9c;
  int iStack_98;
  undefined4 *puStack_94;
  int *piStack_90;
  undefined1 *puStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_78 = 0x6f1740;
  puVar1 = (undefined4 *)FUN_00448dc6();
  uStack_78 = 0x6f174a;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar1);
  FUN_004125e6();
  if (*(int *)(extraout_ECX + 0x5bc) != 0) {
    uStack_78 = 0xff;
    iStack_7c = 0x6f1769;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x5f0);
    piStack_90 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piStack_90 == (int *)0x0) {
      uStack_78 = 0x6f1787;
      FUN_00878dfb();
      piStack_90 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piStack_90;
    uStack_84 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_7c = *(int *)(unaff_EBP + -0x4c);
    iStack_88 = 0x68;
    uStack_78 = *(undefined4 *)(unaff_EBP + -0x48);
    puStack_8c = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x28) = piStack_90;
    puStack_94 = (undefined4 *)0x6f17a9;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      uStack_78 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_80 = 0x6f17bb;
      iStack_7c = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_78 = 0x6f17c8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_78 = 0x6f17d3;
      FUN_00878dfb();
    }
  }
  uStack_78 = 0xff;
  iStack_7c = 0x6f17e4;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_78 = 0x6f17f6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_78 = 0x6f1803;
  FUN_00403191();
  uStack_78 = 0;
  iStack_7c = unaff_EBP + -0x40;
  iStack_80 = unaff_EBP + -0x50;
  puStack_8c = (undefined1 *)&uStack_84;
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_84;
  iStack_88 = 0xfbe;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_90 = (int *)0x6f1827;
  FUN_00679e4e();
  iStack_88 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_8c = (undefined1 *)0x6f1834;
  FUN_00405a1d();
  puStack_8c = (undefined1 *)0x6f183b;
  FUN_00402660();
  puStack_8c = (undefined1 *)0x6f1842;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_7c = 0x6f184d;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    uStack_78 = 0x6f1863;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      uStack_78 = 0x6f1874;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar3 == (int *)0x0) {
    uStack_78 = 0x6f188f;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar3;
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x60);
  iStack_7c = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_88 = 0;
  puStack_8c = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x30) = piVar3;
  puStack_94 = (undefined4 *)0x6f18b1;
  piStack_90 = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    puStack_94 = (undefined4 *)&DAT_00963cc8;
    iStack_98 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_a0 = 0x6f18c3;
    pcStack_9c = (char *)iVar2;
    FUN_00878e09();
  }
  puStack_94 = (undefined4 *)0x6f18cb;
  FUN_004125e6();
  puStack_94 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_98 = 0x6f18d8;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    iStack_98 = 0x6f18e3;
    FUN_00878dfb();
  }
  puStack_94 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_98 = 0x6f18f0;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    iStack_98 = 0x6f18fb;
    FUN_00878dfb();
  }
  puStack_94 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_98 = 0x6f1908;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    iStack_98 = 0x6f1913;
    FUN_00878dfb();
  }
  puStack_94 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_98 = 0x6f1920;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    iStack_98 = 0x6f192b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_94 = *(undefined4 **)(extraout_ECX + 0xb08);
  iStack_a0 = unaff_EBP + -0x24;
  iStack_98 = *(undefined4 *)(extraout_ECX + 0xb04);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  pcStack_9c = s__d____d_0096b138;
  uStack_a4 = 0x6f194c;
  FUN_00434e21();
  puStack_94 = &DAT_00980690;
  iStack_98 = 0x6f195d;
  FUN_00403191();
  puStack_94 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_98 = 0x6f196a;
  FUN_00403191();
  puStack_94 = (undefined4 *)(unaff_EBP + -0x50);
  iStack_98 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  pcStack_9c = (char *)0x6f1981;
  pcStack_9c = (char *)FUN_00449749();
  iStack_a0 = 0x6f198a;
  uStack_a4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_a0;
  uStack_a8 = 0x6f1996;
  FUN_00448a17();
  uStack_a4 = 0x23;
  uStack_a8 = 0x4f;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_ac = 0x6f19a6;
  FUN_004115d9();
  uStack_ac = 0x6f19ad;
  FUN_00448e3a();
  puStack_94 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_98 = 0x6f19ba;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    iStack_98 = 0x6f19c5;
    FUN_00878dfb();
  }
  puStack_94 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_98 = 0x6f19d2;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    iStack_98 = 0x6f19dd;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0xb1c);
  puStack_94 = (undefined4 *)0x3;
  iStack_98 = 0xff;
  pcStack_9c = (char *)0x6f19fc;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x30) =
       *(undefined4 *)(extraout_ECX + 0x5f0 + ((iVar2 != 0) + 4) * 4);
  piStack_b0 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piStack_b0 == (int *)0x0) {
    puStack_94 = (undefined4 *)0x80004003;
    iStack_98 = 0x6f1a1b;
    FUN_00878dfb();
    piStack_b0 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piStack_b0;
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_a0 = *(int *)(unaff_EBP + -0x60);
  pcStack_9c = *(char **)(unaff_EBP + -0x5c);
  uStack_a8 = 0x33;
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x58);
  uStack_ac = 8;
  *(int **)(unaff_EBP + -0x2c) = piStack_b0;
  puStack_94 = *(undefined4 **)(unaff_EBP + -0x54);
  puStack_b4 = (undefined4 *)0x6f1a3d;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    puStack_b4 = (undefined4 *)&DAT_00963cc8;
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_c0 = 0x6f1a51;
    pcStack_bc = (char *)iVar2;
    FUN_00878e09();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b8 = 0x6f1a5e;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    iStack_b8 = 0x6f1a69;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar2 = *(int *)(extraout_ECX + 0xb1c);
  puStack_b4 = *(undefined4 **)(extraout_ECX + 0xb14 + iVar2 * 4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_b8 = *(undefined4 *)(extraout_ECX + 0xb0c + iVar2 * 4);
  iStack_c0 = unaff_EBP + -0x20;
  pcStack_bc = s__d____d_0096b138;
  FUN_00434e21();
  puStack_b4 = &DAT_00980690;
  iStack_b8 = 0x6f1aa3;
  FUN_00403191();
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_b8 = 0x6f1ab0;
  FUN_00403191();
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x50);
  iStack_b8 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  pcStack_bc = (char *)0x6f1ac7;
  pcStack_bc = (char *)FUN_00449749();
  iStack_c0 = 0x6f1ad0;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_c0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004115d9();
  FUN_00448e3a();
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_b8 = 0x6f1b00;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    iStack_b8 = 0x6f1b0b;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_b8 = 0x6f1b18;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    iStack_b8 = 0x6f1b23;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)0x3;
  iStack_b8 = 0xff;
  *(uint *)(unaff_EBP + -0x18) = (uint)(*(int *)(extraout_ECX + 0xb1c) == 0);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  pcStack_bc = (char *)0x6f1b4d;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x30) =
       *(undefined4 *)(extraout_ECX + 0x5f0 + ((iVar2 != 0) + 4) * 4);
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar3 == (int *)0x0) {
    puStack_b4 = (undefined4 *)0x80004003;
    iStack_b8 = 0x6f1b6c;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar3;
  iStack_c0 = *(int *)(unaff_EBP + -0x60);
  pcStack_bc = *(char **)(unaff_EBP + -0x5c);
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x58);
  *(int **)(unaff_EBP + -0x2c) = piVar3;
  puStack_b4 = *(undefined4 **)(unaff_EBP + -0x54);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_d8 = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_e0 = 0x6f1ba2;
    pcStack_dc = (char *)iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_d8 = 0x6f1baf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d8 = 0x6f1bba;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_d8 = *(undefined4 *)(extraout_ECX + 0xb0c + *(int *)(unaff_EBP + -0x18) * 4);
  iStack_e0 = unaff_EBP + -0x1c;
  pcStack_dc = s__d____d_0096b138;
  FUN_00434e21();
  iStack_d8 = 0x6f1bf1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_d8 = 0x6f1bfe;
  FUN_00403191();
  iStack_d8 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  pcStack_dc = (char *)0x6f1c15;
  pcStack_dc = (char *)FUN_00449749();
  iStack_e0 = 0x6f1c1e;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_e0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_d8 = 0x6f1c4e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d8 = 0x6f1c59;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_d8 = 0x6f1c66;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_d8 = 0x6f1c71;
    FUN_00878dfb();
  }
  iStack_d8 = unaff_EBP + -0x30;
  pcStack_dc = (char *)0x6f1c84;
  piVar3 = (int *)FUN_00679d86();
  pcStack_dc = (char *)*piVar3;
  iStack_d8 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_e0 = 0x6f1c95;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00402676();
  if (*(int *)(extraout_ECX + 0x5bc) != 0) {
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x5d0 + *(int *)(extraout_ECX + 0x5a8) * 4) + 8);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    *(int *)(unaff_EBP + -0x18) = iVar2 * 0xd + 0x36;
    iStack_d8 = 0x6f1ce2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iStack_d8 = unaff_EBP + -0x50;
    pcStack_dc = (char *)0x6f1cec;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_d8 = 0x6f1cf8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_d8 = 0x6f1d02;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_d8 = unaff_EBP + -0x40;
    pcStack_dc = (char *)0x6f1d0c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_d8 = 0x6f1d18;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (piVar3 == (int *)0x0) {
      iStack_d8 = 0x6f1d2d;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x14);
    }
    iStack_e0 = *(int *)(unaff_EBP + -0x50);
    pcStack_dc = *(char **)(unaff_EBP + -0x4c);
    iVar2 = *piVar3;
    iStack_d8 = *(undefined4 *)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + -0x30) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x2c))();
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x30));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff00;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    FUN_006eeecd();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iVar2 = FUN_00402e32(unaff_EBP + -0x50);
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x30) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x84))
                      (piVar3,0,0x80,*(undefined4 *)(unaff_EBP + -0x14),0xff,0xa2,
                       *(undefined4 *)(unaff_EBP + -0x18),0,0,0xa2,
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x30),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004031b7(0xff,3);
    iVar2 = *(int *)(extraout_ECX + 0x5a4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puVar1 = (undefined4 *)(extraout_ECX + 0x608);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)(extraout_ECX + 0x60c);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = *puVar1;
    piVar3 = *(int **)(unaff_EBP + -0x10);
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x2c) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar3,9,*(int *)(unaff_EBP + -0x18) + 0x6c,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x60),
                       *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54));
    if (iVar2 < 0) {
      iStack_d8 = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_e0 = 0x6f1ed5;
      pcStack_dc = (char *)iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_d8 = 0x6f1ee2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_d8 = 0x6f1eed;
      FUN_00878dfb();
    }
  }
  iStack_d8 = 0x6f1ef7;
  FUN_0081622a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_d8 = 0x6f1f2c;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_d8 = 0x6f1f3d;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



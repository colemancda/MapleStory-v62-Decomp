/* FUN_00745acd - 0x00745acd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00745acd(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar8;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  int iStack_20c;
  undefined1 *puStack_208;
  int iStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 *puStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int *piStack_1e0;
  undefined1 *puStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 *puStack_1c4;
  
  FUN_00879bb8();
  puStack_1c4 = (undefined4 *)0x3;
  iStack_1c8 = 0;
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  iStack_1cc = 0x745af5;
  FUN_004031b7();
  iVar4 = *(int *)(extraout_ECX + 0xc2c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    puStack_1c4 = (undefined4 *)0x80004003;
    iStack_1c8 = 0x745b10;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0xf0);
  iStack_1c8 = unaff_EBP + -0x18;
  iStack_1cc = 0x745b24;
  FUN_00425067();
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_1c8 = 0x745b34;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745b3f;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)0x3;
  iStack_1c8 = 0;
  iStack_1cc = 0x745b4d;
  FUN_004031b7();
  iVar4 = *(int *)(extraout_ECX + 0xc30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    puStack_1c4 = (undefined4 *)0x80004003;
    iStack_1c8 = 0x745b69;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x160);
  iStack_1c8 = unaff_EBP + -0x48;
  iStack_1cc = 0x745b7b;
  FUN_00425067();
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x160);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_1c8 = 0x745b8b;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745b96;
    FUN_00878dfb();
  }
  puStack_1c4 = &DAT_00980690;
  iStack_1c8 = 0x745ba7;
  FUN_00403191();
  puStack_1c4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_1c8 = 0x745bb7;
  FUN_00403191();
  puStack_1c4 = (undefined4 *)0x0;
  iStack_1c8 = 0;
  iStack_1cc = unaff_EBP + -0xd0;
  iStack_1d0 = unaff_EBP + -0x150;
  puStack_1dc = (undefined1 *)&uStack_1d4;
  *(undefined4 **)(unaff_EBP + -0x40) = &uStack_1d4;
  iStack_1d8 = 0x958;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_1e0 = (int *)0x745be3;
  FUN_00679e4e();
  iStack_1d8 = unaff_EBP + -0x170;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_1dc = (undefined1 *)0x745bf3;
  FUN_00405a1d();
  puStack_1dc = (undefined1 *)0x745bfa;
  FUN_00402660();
  puStack_1dc = (undefined1 *)0x745c01;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_1cc = 0x745c0c;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  if (iVar4 != 0) {
    puStack_1c4 = (undefined4 *)(unaff_EBP + -0x68);
    iStack_1c8 = 0x745c22;
    puStack_1c4 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_1c4 < 0) && (puStack_1c4 != (undefined4 *)0x80004002)) {
      iStack_1c8 = 0x745c33;
      FUN_00878dfb();
    }
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x170);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_1c8 = 0x745c43;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745c4e;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x150);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_1c8 = 0x745c5e;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745c69;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_1c8 = 0x745c79;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745c84;
    FUN_00878dfb();
  }
  puStack_1c4 = &DAT_00980690;
  iStack_1c8 = 0x745c90;
  FUN_00403191();
  puStack_1c4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_1c8 = 0x745ca0;
  FUN_00403191();
  puStack_1c4 = (undefined4 *)0x0;
  iStack_1c8 = 0;
  iStack_1cc = unaff_EBP + -0xa0;
  iStack_1d0 = unaff_EBP + -0x120;
  puStack_1dc = (undefined1 *)&uStack_1d4;
  *(undefined4 **)(unaff_EBP + -0x40) = &uStack_1d4;
  iStack_1d8 = 0x949;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_1e0 = (int *)0x745cc7;
  FUN_00679e4e();
  iStack_1d8 = unaff_EBP + -400;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_1dc = (undefined1 *)0x745cd7;
  FUN_00405a1d();
  puStack_1dc = (undefined1 *)0x745cde;
  FUN_00402660();
  puStack_1dc = (undefined1 *)0x745ce5;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_1cc = 0x745cf0;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x74) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  if (iVar4 != 0) {
    puStack_1c4 = (undefined4 *)(unaff_EBP + -0x74);
    iStack_1c8 = 0x745d06;
    puStack_1c4 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_1c4 < 0) && (puStack_1c4 != (undefined4 *)0x80004002)) {
      iStack_1c8 = 0x745d17;
      FUN_00878dfb();
    }
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -400);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_1c8 = 0x745d27;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745d32;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x120);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_1c8 = 0x745d42;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745d4d;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_1c8 = 0x745d5d;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745d68;
    FUN_00878dfb();
  }
  puStack_1c4 = &DAT_00980690;
  iStack_1c8 = 0x745d74;
  FUN_00403191();
  puStack_1c4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_1c8 = 0x745d84;
  FUN_00403191();
  puStack_1c4 = (undefined4 *)0x0;
  iStack_1c8 = 0;
  iStack_1cc = unaff_EBP + -0x110;
  iStack_1d0 = unaff_EBP + -0x140;
  puStack_1dc = (undefined1 *)&uStack_1d4;
  *(undefined4 **)(unaff_EBP + -0x40) = &uStack_1d4;
  iStack_1d8 = 0x9a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_1e0 = (int *)0x745dab;
  FUN_00679e4e();
  iStack_1d8 = unaff_EBP + -0x1b0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_1dc = (undefined1 *)0x745dbb;
  FUN_00405a1d();
  puStack_1dc = (undefined1 *)0x745dc2;
  FUN_00402660();
  puStack_1dc = (undefined1 *)0x745dc9;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_1cc = 0x745dd4;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x70) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar4 != 0) {
    puStack_1c4 = (undefined4 *)(unaff_EBP + -0x70);
    iStack_1c8 = 0x745dea;
    puStack_1c4 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_1c4 < 0) && (puStack_1c4 != (undefined4 *)0x80004002)) {
      iStack_1c8 = 0x745dfb;
      FUN_00878dfb();
    }
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x1b0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1c8 = 0x745e0b;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745e16;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x140);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_1c8 = 0x745e26;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745e31;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x110);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_1c8 = 0x745e41;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x745e4c;
    FUN_00878dfb();
  }
  puStack_1c4 = &DAT_00980690;
  iStack_1c8 = 0x745e58;
  FUN_00403191();
  piVar5 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (piVar5 == (int *)0x0) {
    puStack_1c4 = (undefined4 *)0x80004003;
    iStack_1c8 = 0x745e6d;
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x18);
  }
  iVar4 = *piVar5;
  uStack_1d4 = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_1d0 = *(undefined4 *)(unaff_EBP + -0x90);
  iStack_1cc = *(undefined4 *)(unaff_EBP + -0x8c);
  iStack_1d8 = 0;
  iStack_1c8 = *(undefined4 *)(unaff_EBP + -0x88);
  puStack_1dc = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x14) = piVar5;
  puStack_1c4 = *(undefined4 **)(unaff_EBP + -0x84);
  piStack_1e0 = piVar5;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    iStack_1e8 = *(int *)(unaff_EBP + -0x14);
    puStack_1f0 = (undefined1 *)0x745ea2;
    iStack_1ec = iVar4;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_1e8 = 0x745eb2;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_1e8 = 0x745ebd;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x3c) + 0xc88;
  do {
    iStack_1e8 = unaff_EBP + -0x24;
    iStack_1ec = *(int *)(unaff_EBP + -0x38);
    puStack_1f0 = (undefined1 *)0x745ede;
    FUN_00746819();
    if ((*(int *)(unaff_EBP + -0x24) != 0) || (*(int *)(unaff_EBP + -0x28) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      iStack_1e8 = unaff_EBP + -0x80;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_1ec = 0x745f06;
      piVar5 = (int *)FUN_00679d22();
      iStack_1e8 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_1ec = unaff_EBP + -0x30;
      puStack_1f0 = (undefined1 *)0x745f19;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (*(int *)(unaff_EBP + -0x80) != 0) {
        iStack_1e8 = 0x745f30;
        FUN_00434e38();
      }
      iStack_1e8 = 0x745f41;
      FUN_00403191();
      iStack_1e8 = 0;
      iStack_1ec = -1;
      puStack_1f0 = *(undefined1 **)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      uStack_1f4 = 0;
      uStack_1f8 = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      uStack_200 = 0;
      iStack_204 = -1;
      iStack_20c = 0x745f70;
      puStack_208 = (undefined1 *)&uStack_1f8;
      iStack_20c = FUN_00449713();
      puStack_208 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x1c) = &iStack_204;
      iStack_20c = 0x745f83;
      FUN_004033a1();
      puStack_208 = (undefined1 *)(unaff_EBP + -0x180);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_20c = 0x745f96;
      FUN_0040263d();
      iStack_20c = 0x745f9d;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_204 = 0x745fa8;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x6c) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      if (iVar4 != 0) {
        uStack_200 = 0x745fbe;
        iVar4 = FUN_0041a581();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          uStack_200 = 0x745fcf;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x54);
      piVar5 = *(int **)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piVar5 == (int *)0x0) {
        uStack_200 = 0x745fea;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x48);
      }
      iStack_20c = *(int *)(unaff_EBP + -0x14);
      puStack_208 = *(undefined1 **)(unaff_EBP + -0x90);
      iStack_204 = *(int *)(unaff_EBP + -0x8c);
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x24) + 2;
      iVar4 = *piVar5;
      uStack_200 = *(undefined4 *)(unaff_EBP + -0x88);
      *(int **)(unaff_EBP + -0x2c) = piVar5;
      iVar4 = (**(code **)(iVar4 + 0x80))
                        (piVar5,*(undefined4 *)(unaff_EBP + -0x20),*(int *)(unaff_EBP + -0x28) + 2);
      if (iVar4 < 0) {
        iStack_1e8 = *(int *)(unaff_EBP + -0x2c);
        puStack_1f0 = (undefined1 *)0x746030;
        iStack_1ec = iVar4;
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_1e8 = 0x746048;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_1e8 = 0x746053;
        FUN_00878dfb();
      }
      puVar8 = (undefined1 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_1e8 = 0x746063;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_1e8 = 0x74606e;
        FUN_00878dfb();
        puVar8 = extraout_ECX_00;
      }
      pcVar2 = *(char **)(unaff_EBP + -0x44);
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          iStack_1e8 = 0x74608f;
          FUN_00434e38();
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\a')) {
          iVar4 = *(int *)(pcVar2 + 1);
          iVar3 = *(int *)(pcVar2 + 8);
          iStack_1e8 = 0;
          iStack_1ec = 0;
          puStack_1f0 = (undefined1 *)0x0;
          uStack_1f4 = 0;
          uStack_1f8 = 0;
          uStack_200 = *(undefined4 *)(unaff_EBP + -0x24);
          iStack_20c = unaff_EBP + -0x18;
          *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_208;
          puStack_208 = puVar8;
          iStack_204 = iVar4;
          FUN_0046fc23();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_20c = 0x7460db;
          FUN_0048b97b();
          iStack_20c = 0x7460e2;
          FUN_005558b0();
          if (iVar4 / 1000000 == 2) {
            iStack_1e8 = 1000000;
            iStack_1ec = *(int *)(unaff_EBP + -0x3c) + 0xbac;
            *(int **)(unaff_EBP + -0x1c) = &iStack_1e8;
            puStack_1f0 = (undefined1 *)0x746106;
            FUN_00424dbc();
            puStack_1f0 = (undefined1 *)(*(int *)(unaff_EBP + -0x28) + 0x14);
            uStack_1f4 = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_1f8;
            uStack_200 = 0x746120;
            uStack_1f8 = extraout_ECX_01;
            iStack_1ec = iVar3;
            FUN_0046fc23();
            FUN_007d3201();
          }
          iStack_1e8 = 0;
          puStack_1f0 = (undefined1 *)(unaff_EBP + -0x7c);
          uStack_1f4 = 0x74613a;
          iStack_1ec = iVar4;
          puVar6 = (undefined4 *)FUN_005536ce();
          iStack_1e8 = 0x746144;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar6);
          FUN_004125e6();
        }
        else if (cVar1 == '\x01') {
          iStack_1e8 = 0x746167;
          iVar4 = FUN_0064d61f();
          iStack_1e8 = 0x746175;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     *(IBinding **)(iVar4 + 0x90));
          iStack_1e8 = 0xff;
          iStack_1ec = 0x746187;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            iStack_1e8 = 0x74619b;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              iStack_1e8 = 0x7461a6;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_1e8 = 0x7461b4;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x20) = piVar5;
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x10);
          iVar4 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + -0x28) - iVar4) + 0x20;
          FUN_0040eea9();
          uStack_1f4 = *(undefined4 *)(unaff_EBP + -0x2c);
          uStack_1f8 = *(undefined4 *)(unaff_EBP + -0x14);
          puStack_1f0 = *(undefined1 **)(unaff_EBP + -0x130);
          iStack_1ec = *(int *)(unaff_EBP + -300);
          iStack_1e8 = *(int *)(unaff_EBP + -0x128);
          uStack_200 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_204 = 0x7461ff;
          iVar4 = (**(code **)(*piVar5 + 0x80))();
          if (iVar4 < 0) {
            iStack_1e8 = *(int *)(unaff_EBP + -0x20);
            puStack_1f0 = (undefined1 *)0x746211;
            iStack_1ec = iVar4;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_1e8 = 0x746221;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            iStack_1e8 = 0x746230;
            FUN_00878dfb();
          }
        }
        else {
          if (cVar1 == '\b') {
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
            iStack_1e8 = unaff_EBP + -0x60;
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            iStack_1ec = 0x746257;
            piVar5 = (int *)FUN_00679d22();
            iStack_1e8 = *piVar5;
            iStack_1ec = unaff_EBP + -0x20;
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            puStack_1f0 = (undefined1 *)0x74626a;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            if (*(int *)(unaff_EBP + -0x60) != 0) {
              iStack_1e8 = 0x746281;
              FUN_00434e38();
            }
            iStack_1e8 = 0x746293;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            iStack_1e8 = 0x7462a3;
            FUN_00403191();
            iStack_1e8 = 0;
            iStack_1ec = -1;
            puStack_1f0 = *(undefined1 **)(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            uStack_1f4 = 0;
            uStack_1f8 = 0;
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            uStack_200 = 0;
            iStack_204 = unaff_EBP + -0xc0;
            puStack_208 = (undefined1 *)(unaff_EBP + -0xb0);
            iStack_20c = -1;
            uVar7 = FUN_00449713(&uStack_1f8);
            uVar7 = FUN_00456ad5(uVar7);
            *(int **)(unaff_EBP + -0x1c) = &iStack_20c;
            FUN_004033a1(uVar7);
            iVar4 = unaff_EBP + -0x1a0;
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            FUN_00405a1d(iVar4);
            FUN_00402660();
            FUN_00404a02(iVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            iStack_204 = 0x74631c;
            iVar4 = FUN_004032b4();
            *(int *)(unaff_EBP + -100) = iVar4;
            *(undefined4 *)(unaff_EBP + -0x5c) = 0;
            if (iVar4 != 0) {
              uStack_200 = 0x746332;
              iVar4 = FUN_0041a581();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                uStack_200 = 0x746343;
                FUN_00878dfb();
              }
            }
            uStack_200 = 0x74634e;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                       *(IBinding **)(unaff_EBP + -0x5c));
            if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
              uStack_200 = 0x74635b;
              (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            uStack_200 = 0x74636b;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              uStack_200 = 0x746376;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            uStack_200 = 0x746386;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              uStack_200 = 0x746391;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            uStack_200 = 0x7463a1;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              uStack_200 = 0x7463ac;
              FUN_00878dfb();
            }
            uStack_200 = 0xff;
            iStack_204 = 0x7463be;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              uStack_200 = 0x7463d2;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                uStack_200 = 0x7463dd;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              uStack_200 = 0x7463eb;
              FUN_00878dfb();
            }
            piVar5 = *(int **)(unaff_EBP + -0x18);
            *(int **)(unaff_EBP + -0x14) = piVar5;
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x10);
            iVar4 = FUN_0040eed0();
            *(int *)(unaff_EBP + -0x1c) = (*(int *)(unaff_EBP + -0x28) - iVar4) + 0x20;
            iVar4 = FUN_0040eea9();
            iStack_20c = *(int *)(unaff_EBP + -0x2c);
            puStack_208 = *(undefined1 **)(unaff_EBP + -0xe0);
            iStack_204 = *(int *)(unaff_EBP + -0xdc);
            uStack_200 = *(undefined4 *)(unaff_EBP + -0xd8);
            iVar4 = (**(code **)(*piVar5 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),
                               *(int *)(unaff_EBP + -0x24) - iVar4,
                               *(undefined4 *)(unaff_EBP + -0x1c));
            if (iVar4 < 0) {
              iStack_1e8 = *(int *)(unaff_EBP + -0x14);
              puStack_1f0 = (undefined1 *)0x746448;
              iStack_1ec = iVar4;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            iStack_1e8 = 0x746458;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_1e8 = 0x746463;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
          }
          else {
            if (((cVar1 != '\x04') && (cVar1 != '\x05')) && (cVar1 != '\x06')) goto LAB_00746628;
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            iStack_1e8 = unaff_EBP + -0x78;
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            iStack_1ec = 0x74649c;
            piVar5 = (int *)FUN_00679d22();
            iStack_1e8 = *piVar5;
            iStack_1ec = unaff_EBP + -0x34;
            *(undefined1 *)(unaff_EBP + -4) = 0x30;
            puStack_1f0 = (undefined1 *)0x7464af;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            FUN_00414ebb();
            iStack_1e8 = 0;
            iStack_1ec = -1;
            puStack_1f0 = *(undefined1 **)(unaff_EBP + -0x34);
            uStack_1f4 = 0;
            uStack_1f8 = 0;
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            iStack_1e8 = 0;
            iStack_1ec = -1;
            uStack_1f4 = 0x7464e9;
            puStack_1f0 = (undefined1 *)&piStack_1e0;
            uStack_1f4 = FUN_00449713();
            uStack_1f8 = 0x7464ef;
            puStack_1f0 = (undefined1 *)FUN_00456ad5();
            *(int **)(unaff_EBP + -0x1c) = &iStack_1ec;
            uStack_1f4 = 0x7464fc;
            FUN_004033a1();
            puStack_1f0 = (undefined1 *)(unaff_EBP + -0x1c0);
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            uStack_1f4 = 0x74650f;
            FUN_0040263d();
            uStack_1f4 = 0x746516;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x32;
            iStack_1ec = 0x746521;
            uVar7 = FUN_004032b4();
            *(undefined4 *)(unaff_EBP + -0x40) = uVar7;
            iStack_1e8 = 0x746530;
            iVar4 = FUN_0041a581();
            if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
              iStack_1e8 = 0x746541;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            iStack_1e8 = 0x746551;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_1e8 = 0x74655c;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              iStack_1e8 = 0xff;
              iStack_1ec = 0x746577;
              FUN_004031b7();
              *(undefined1 *)(unaff_EBP + -4) = 0x33;
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                iStack_1e8 = 0x74658b;
                FUN_00878dfb();
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  iStack_1e8 = 0x746596;
                  FUN_00878dfb();
                }
              }
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                iStack_1e8 = 0x7465a4;
                FUN_00878dfb();
              }
              piVar5 = *(int **)(unaff_EBP + -0x18);
              *(int **)(unaff_EBP + -0x14) = piVar5;
              *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
              iVar4 = FUN_0040eed0();
              *(int *)(unaff_EBP + -0x2c) = (*(int *)(unaff_EBP + -0x28) - iVar4) + 0x20;
              FUN_0040eea9();
              uStack_1f4 = *(undefined4 *)(unaff_EBP + -0x1c);
              uStack_1f8 = *(undefined4 *)(unaff_EBP + -0x2c);
              puStack_1f0 = *(undefined1 **)(unaff_EBP + -0x100);
              iStack_1ec = *(int *)(unaff_EBP + -0xfc);
              iStack_1e8 = *(int *)(unaff_EBP + -0xf8);
              uStack_200 = *(undefined4 *)(unaff_EBP + -0x14);
              iStack_204 = 0x7465ef;
              iVar4 = (**(code **)(*piVar5 + 0x80))();
              if (iVar4 < 0) {
                iStack_1e8 = *(int *)(unaff_EBP + -0x14);
                puStack_1f0 = (undefined1 *)0x746601;
                iStack_1ec = iVar4;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x2f;
              iStack_1e8 = 0x746611;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_1e8 = 0x74661c;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
          }
          FUN_00414ebb();
        }
LAB_00746628:
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          iStack_1e8 = 0x746639;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00414ebb();
      }
    }
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 0xc;
    if (7 < *(int *)(unaff_EBP + -0x38)) {
      FUN_00748389();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
        iStack_1e8 = 0x74666f;
        (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
        iStack_1e8 = 0x746680;
        (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
        iStack_1e8 = 0x746691;
        (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
        iStack_1e8 = 0x7466a2;
        (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        iStack_1e8 = 0x7466b3;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}



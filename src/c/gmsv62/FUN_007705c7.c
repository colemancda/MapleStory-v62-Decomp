/* FUN_007705c7 - 0x007705c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007705c7(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  int unaff_EBP;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uStack_2c4;
  int iStack_2c0;
  int *piStack_2bc;
  uint uStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  uint uStack_284;
  int iStack_280;
  uint uStack_27c;
  int *piStack_278;
  int *piStack_274;
  undefined4 uStack_270;
  int iStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  int iStack_260;
  int iStack_25c;
  undefined4 *puStack_258;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -100) = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(*(int *)(extraout_ECX + 0x28) + 0x838);
  puStack_258 = (undefined4 *)0x770610;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(*(int *)(extraout_ECX + 0x28) + 0x834);
  puStack_258 = (undefined4 *)0x770625;
  FUN_0045e787();
  iVar4 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -0x7c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xffffffff;
  iVar4 = *(int *)(iVar4 + 0x77c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_258 = &DAT_00980690;
  if (iVar4 < 1) {
    iStack_25c = 0x77084c;
    FUN_00403191();
    puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
    iStack_25c = 0x16e;
    iStack_260 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_264 = 0x770868;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_25c = 0x770873;
    iStack_260 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_25c;
    uStack_264 = 0x77087f;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_260 = 0x77088b;
    FUN_0044974c();
    iStack_260 = 0x770892;
    iVar4 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_258 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      iStack_25c = 0x7708a8;
      FUN_00434e38();
    }
    puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_25c = 0x7708b6;
    puStack_258 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_258 < 0) {
      iStack_25c = 0x7708c1;
      FUN_00878dfb();
    }
    puStack_258 = &DAT_00980690;
    iStack_25c = 0x7708d8;
    FUN_00403191();
    puStack_258 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_25c = 0x7708e5;
    FUN_00403191();
    puStack_258 = (undefined4 *)(unaff_EBP + -0x78);
    iStack_25c = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_260 = 0x7708f9;
    iStack_260 = FUN_00449749();
    uStack_264 = 0x16e;
    iStack_268 = unaff_EBP + -0x18;
    iStack_26c = 0x770909;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    uStack_264 = 0x770914;
    iStack_268 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x38) = &uStack_264;
    iStack_26c = 0x770920;
    FUN_00448a17();
    iStack_268 = 3;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    uStack_270 = 0x77092f;
    iStack_26c = (0x132 - iVar4) / 2;
    FUN_004115d9();
    uStack_270 = 0x770936;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_258 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      iStack_25c = 0x77094a;
      FUN_00434e38();
    }
    puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_25c = 0x770958;
    puStack_258 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_258 < 0) {
      iStack_25c = 0x770963;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
  }
  else {
    iStack_25c = 0x77064e;
    FUN_00403191();
    puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_25c = 0x77065e;
    iStack_260 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_25c;
    uStack_264 = 0x77066a;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_260 = 0x770676;
    FUN_0044974c();
    iStack_260 = 0x77067d;
    iVar4 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x20) = iVar4 + 0x1a;
    puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_25c = 0x770690;
    puStack_258 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_258 < 0) {
      iStack_25c = 0x77069b;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x18) = (0x132 - *(int *)(unaff_EBP + -0x20)) / 2;
    if (*(short *)(*(int *)(unaff_EBP + -100) + 0x2cc7) == 0) {
      puStack_258 = &DAT_00980690;
      iStack_25c = 0x77075a;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x24);
      piStack_274 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piStack_274 == (int *)0x0) {
        puStack_258 = (undefined4 *)0x80004003;
        iStack_25c = 0x770775;
        FUN_00878dfb();
        piStack_274 = *(int **)(unaff_EBP + 8);
      }
      iVar4 = *piStack_274;
      iStack_268 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_264 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_260 = *(int *)(unaff_EBP + -0x48);
      iStack_26c = 0;
      uStack_270 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_25c = *(int *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x24) = piStack_274;
      puStack_258 = *(undefined4 **)(unaff_EBP + -0x40);
      piStack_278 = (int *)0x770798;
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < 0) {
        puStack_258 = (undefined4 *)&DAT_00963cc8;
        iStack_25c = *(int *)(unaff_EBP + -0x24);
        uStack_264 = 0x7707aa;
        iStack_260 = iVar4;
        FUN_00878e09();
      }
      puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_25c = 0x7707b7;
      puStack_258 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_258 < 0) {
        iStack_25c = 0x7707c2;
        FUN_00878dfb();
      }
    }
    else {
      puStack_258 = (undefined4 *)0x0;
      iStack_25c = 0;
      iStack_260 = 0;
      uStack_264 = 0;
      iStack_268 = unaff_EBP + -0x14;
      iStack_26c = 0x7706ce;
      FUN_00856c17();
      puStack_258 = (undefined4 *)0x3;
      iStack_25c = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_260 = 0x7706e1;
      FUN_004031b7();
      piStack_274 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (piStack_274 == (int *)0x0) {
        puStack_258 = (undefined4 *)0x80004003;
        iStack_25c = 0x7706f6;
        FUN_00878dfb();
        piStack_274 = *(int **)(unaff_EBP + 8);
      }
      iVar4 = *piStack_274;
      iStack_268 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_264 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_260 = *(int *)(unaff_EBP + -0x48);
      iStack_26c = 1;
      uStack_270 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_25c = *(int *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x24) = piStack_274;
      puStack_258 = *(undefined4 **)(unaff_EBP + -0x40);
      piStack_278 = (int *)0x770719;
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < 0) {
        puStack_258 = (undefined4 *)&DAT_00963cc8;
        iStack_25c = *(int *)(unaff_EBP + -0x24);
        uStack_264 = 0x77072b;
        iStack_260 = iVar4;
        FUN_00878e09();
      }
      puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_25c = 0x770738;
      puStack_258 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_258 < 0) {
        iStack_25c = 0x770743;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_258 = (undefined4 *)0x77074f;
      FUN_004125e6();
    }
    puStack_258 = &DAT_00980690;
    iStack_25c = 0x7707cb;
    FUN_00403191();
    puStack_258 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_25c = 0x7707d8;
    FUN_00403191();
    puStack_258 = (undefined4 *)(unaff_EBP + -0x78);
    iStack_25c = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_260 = 0x7707ec;
    iStack_260 = FUN_00449749();
    uStack_264 = 0x7707f8;
    iStack_268 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x38) = &uStack_264;
    iStack_26c = 0x770804;
    FUN_00448a17();
    iStack_268 = 3;
    iStack_26c = *(int *)(unaff_EBP + -0x18) + 0x1a;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_270 = 0x770819;
    FUN_004115d9();
    uStack_270 = 0x770820;
    FUN_00448e3a();
    puStack_258 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_25c = 0x77082d;
    puStack_258 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_258 < 0) {
      iStack_25c = 0x770838;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
  }
  puStack_258 = (undefined4 *)(unaff_EBP + -0x78);
  iStack_25c = 0x770970;
  puStack_258 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_258 < 0) {
    iStack_25c = 0x77097b;
    FUN_00878dfb();
  }
  puStack_258 = &DAT_00980690;
  iStack_25c = 0x770984;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x1c);
  piVar10 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (piVar10 == (int *)0x0) {
    puStack_258 = (undefined4 *)0x80004003;
    iStack_25c = 0x7709a2;
    FUN_00878dfb();
    piVar10 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar10;
  iStack_268 = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_264 = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_260 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_26c = 0x19;
  iStack_25c = *(int *)(unaff_EBP + -0x44);
  uStack_270 = 0;
  *(int **)(unaff_EBP + -0x14) = piVar10;
  puStack_258 = *(undefined4 **)(unaff_EBP + -0x40);
  piStack_278 = (int *)0x7709c4;
  piStack_274 = piVar10;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    piStack_278 = (int *)&DAT_00963cc8;
    uStack_27c = *(uint *)(unaff_EBP + -0x14);
    uStack_284 = 0x7709d6;
    iStack_280 = iVar4;
    FUN_00878e09();
  }
  piStack_278 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_27c = 0x7709e3;
  piStack_278 = (int *)FUN_00402bc3();
  if ((int)piStack_278 < 0) {
    uStack_27c = 0x7709f0;
    FUN_00878dfb();
  }
  iVar4 = *(int *)(unaff_EBP + -0x28);
  if (*(int *)(*(int *)(iVar4 + 0x28) + 0x77c) < 1) {
    piStack_278 = (int *)0x0;
    uStack_27c = 0x770adc;
    cVar3 = FUN_00433bfa();
    if (cVar3 == '\0') {
      piStack_278 = (int *)0x0;
      uStack_27c = 0x770ae8;
      FUN_0051548c();
    }
  }
  else if ((*(char **)(iVar4 + 0x58) == (char *)0x0) || (**(char **)(iVar4 + 0x58) == '\0')) {
    piStack_278 = &DAT_00980690;
    uStack_27c = 0x770a1b;
    FUN_00403191();
    piStack_278 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uStack_27c = 0x770a28;
    FUN_00403191();
    piStack_278 = (int *)(unaff_EBP + -0x78);
    uStack_27c = unaff_EBP - 0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_280 = 0x770a3c;
    iStack_280 = FUN_00449749();
    uStack_284 = 0xccd;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    uStack_284 = 0x770a5b;
    FUN_00449713();
    *(uint **)(unaff_EBP + -0x38) = &uStack_284;
    uStack_284 = extraout_ECX_00;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      piStack_278 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      uStack_27c = 0x770a92;
      FUN_00434e38();
    }
    piStack_278 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uStack_27c = 0x770aa0;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770aab;
      FUN_00878dfb();
    }
    piStack_278 = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_27c = 0x770ab8;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770ac3;
      FUN_00878dfb();
    }
  }
  else if (*(int *)(iVar4 + 0x5c) == 0) {
    piStack_278 = (int *)0x770acf;
    FUN_00771fce();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x94) = 0xa5;
  do {
    iVar4 = *(int *)(unaff_EBP + -0x18);
    iVar8 = *(int *)(unaff_EBP + -0x28);
    piVar10 = (int *)(iVar4 * 0x7c + 100 + iVar8);
    if (iVar4 == 0) {
      iVar5 = *(int *)(iVar8 + 0x28) + 0x788;
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x28) + 0x798;
    }
    piStack_278 = &DAT_00980690;
    *(int *)(unaff_EBP + -0x14) = iVar5;
    uStack_27c = 0x770b2d;
    FUN_00403191();
    *(int *)(unaff_EBP + -0x38) = iVar4 + 1;
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar8 + (iVar4 + 1) * 4);
    piVar9 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (piVar9 == (int *)0x0) {
      piStack_278 = (int *)0x80004003;
      uStack_27c = 0x770b4e;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 0xc);
    }
    iVar4 = *piVar9;
    uStack_284 = *(uint *)(unaff_EBP + -0x1c4);
    iStack_280 = *(int *)(unaff_EBP + -0x1c0);
    uStack_27c = *(uint *)(unaff_EBP + -0x1bc);
    *(int **)(unaff_EBP + -0x20) = piVar9;
    piStack_278 = *(int **)(unaff_EBP + -0x1b8);
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < 0) {
      piStack_278 = (int *)&DAT_00963cc8;
      uStack_27c = *(uint *)(unaff_EBP + -0x20);
      uStack_284 = 0x770b86;
      iStack_280 = iVar4;
      FUN_00878e09();
    }
    piStack_278 = (int *)(unaff_EBP + -0x1c4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_27c = 0x770b96;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770ba1;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x10);
    piVar10[1] = 0x4d;
    piVar10[2] = iVar4 + 8;
    if (piVar10[0x1c] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(piVar10[0x1c] + -4);
    }
    piStack_278 = (int *)0x80f;
    uStack_27c = unaff_EBP - 0x80;
    iStack_280 = 0x770bd2;
    puVar6 = (undefined4 *)FUN_00679d22();
    piStack_278 = *(int **)(*(int *)(*(int *)(unaff_EBP + -0x28) + 0x28) + 0x77c);
    iStack_280 = *puVar6;
    uStack_284 = unaff_EBP - 0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uStack_27c = uVar11;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_278 = (int *)0x770bfe;
    FUN_00414ebb();
    piStack_278 = &DAT_00980690;
    uStack_27c = 0x770c0f;
    FUN_00403191();
    piStack_278 = (int *)(unaff_EBP + -0x1e4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    uStack_27c = 0x770c22;
    iStack_280 = FUN_00449713();
    *(uint **)(unaff_EBP + -0x1c) = &uStack_27c;
    uStack_284 = 0x770c2e;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_280 = 0x770c3a;
    FUN_0044974c();
    iStack_280 = 0x770c41;
    iVar4 = FUN_00448ebb();
    piStack_278 = (int *)(unaff_EBP + -0x1e4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_27c = 0x770c53;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770c5e;
      FUN_00878dfb();
    }
    piStack_278 = &DAT_00980690;
    uStack_27c = 0x770c6a;
    FUN_00403191();
    piStack_278 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uStack_27c = 0x770c7a;
    FUN_00403191();
    piStack_278 = (int *)(unaff_EBP + -0x204);
    uStack_27c = unaff_EBP - 0x224;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_280 = 0x770c94;
    iStack_280 = FUN_00449749();
    uStack_284 = 0x770c9d;
    FUN_00449713();
    *(uint **)(unaff_EBP + -0x1c) = &uStack_284;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_004115d9();
    FUN_00448e3a();
    piStack_278 = (int *)(unaff_EBP + -0x224);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uStack_27c = 0x770cd8;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770ce3;
      FUN_00878dfb();
    }
    piStack_278 = (int *)(unaff_EBP + -0x204);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_27c = 0x770cf3;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770cfe;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x8c) = iVar4 + 0xcd;
    puVar6 = *(undefined4 **)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + -0x88) = *(int *)(unaff_EBP + -0x10) + 0x17;
    *(int *)(unaff_EBP + -0x90) = *(int *)(unaff_EBP + -0x10) + 1;
    *puVar6 = *(undefined4 *)(unaff_EBP + -0x94);
    puVar6[1] = *(undefined4 *)(unaff_EBP + -0x90);
    puVar6[2] = *(undefined4 *)(unaff_EBP + -0x8c);
    puVar6[3] = *(undefined4 *)(unaff_EBP + -0x88);
    iVar4 = piVar10[0x1c];
    if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) < 2)) {
      piVar10[7] = 1;
    }
    else {
      iVar8 = 0;
      if (iVar4 != 0) {
        iVar8 = *(int *)(iVar4 + -4);
      }
      piVar10[7] = (iVar8 - 1U) / 0x14 + 1;
    }
    piStack_278 = (int *)0x80f;
    uStack_27c = unaff_EBP - 0x84;
    iStack_280 = 0x770d6e;
    puVar6 = (undefined4 *)FUN_00679d22();
    piStack_278 = (int *)piVar10[7];
    iStack_280 = *puVar6;
    uStack_27c = piVar10[6];
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    uStack_284 = unaff_EBP - 0x3c;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_278 = (int *)0x770d96;
    FUN_00414ebb();
    piStack_278 = &DAT_00980690;
    uStack_27c = 0x770da7;
    FUN_00403191();
    piStack_278 = (int *)(unaff_EBP + -0x244);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    uStack_27c = 0x770dba;
    iStack_280 = FUN_00449713();
    *(uint **)(unaff_EBP + -0x1c) = &uStack_27c;
    uStack_284 = 0x770dc6;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_280 = 0x770dd2;
    FUN_0044974c();
    iStack_280 = 0x770dd9;
    uVar7 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
    piStack_278 = (int *)(unaff_EBP + -0x244);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_27c = 0x770dec;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770df7;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x20);
    piStack_278 = &DAT_00980690;
    uStack_27c = 0x770e0b;
    FUN_00403191();
    piStack_278 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uStack_27c = 0x770e1b;
    FUN_00403191();
    piStack_278 = (int *)(unaff_EBP + -500);
    uStack_27c = unaff_EBP - 0x1d4;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_280 = 0x770e35;
    iStack_280 = FUN_00449749();
    uStack_284 = 0x770e3e;
    FUN_00449713();
    *(uint **)(unaff_EBP + -0x1c) = &uStack_284;
    uStack_284 = extraout_ECX_01;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 6;
    FUN_004115d9();
    FUN_00448e3a();
    piStack_278 = (int *)(unaff_EBP + -0x1d4);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uStack_27c = 0x770e78;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770e83;
      FUN_00878dfb();
    }
    piStack_278 = (int *)(unaff_EBP + -500);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_27c = 0x770e93;
    piStack_278 = (int *)FUN_00402bc3();
    if ((int)piStack_278 < 0) {
      uStack_27c = 0x770e9e;
      FUN_00878dfb();
    }
    piVar10[4] = *(int *)(unaff_EBP + -0x14);
    iVar8 = *(int *)(unaff_EBP + -0x20);
    piVar10[3] = 0xf8 - iVar4;
    iVar4 = *(int *)(unaff_EBP + -0x28);
    piVar10[5] = iVar8 + 0xd;
    if (*(int *)(iVar4 + 4) == 0) {
      piStack_278 = (int *)0x80004003;
      uStack_27c = 0x770ec6;
      FUN_00878dfb();
    }
    piStack_278 = (int *)0x770ece;
    iVar8 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar8;
    if (*piVar10 != 0) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
      piStack_278 = &DAT_00980690;
      uStack_27c = 0x770eea;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar4 + 0xc);
      piVar9 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (piVar9 == (int *)0x0) {
        piStack_278 = (int *)0x80004003;
        uStack_27c = 0x770f05;
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + 0xc);
      }
      iVar4 = *piVar9;
      uStack_284 = *(uint *)(unaff_EBP + -0x214);
      iStack_280 = *(int *)(unaff_EBP + -0x210);
      uStack_27c = *(uint *)(unaff_EBP + -0x20c);
      *(int **)(unaff_EBP + -0x24) = piVar9;
      piStack_278 = *(int **)(unaff_EBP + -0x208);
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < 0) {
        iStack_29c = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_2a4 = 0x770f3d;
        iStack_2a0 = iVar4;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_29c = 0x770f4d;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_29c = 0x770f58;
        FUN_00878dfb();
      }
      iVar8 = *(int *)(unaff_EBP + -0x10);
      piVar10[10] = 0x118;
      iVar4 = iVar8 + 1;
      piVar10[9] = iVar4;
      iVar8 = iVar8 + 0x11;
      piVar10[0xb] = iVar8;
      piVar10[8] = 1;
      piVar10[0xd] = iVar4;
      piVar10[0xc] = 1;
      piVar10[0xe] = 0x60;
      piVar10[0xf] = iVar8;
      iVar4 = piVar10[0xe];
      piVar10[0x10] = iVar4;
      piVar10[0x11] = piVar10[9];
      piVar10[0x13] = piVar10[0xb];
      piVar10[0x12] = iVar4 + 0x45;
      piVar10[0x14] = iVar4 + 0x45;
      piVar10[0x15] = piVar10[9];
      piVar10[0x17] = piVar10[0xb];
      piVar10[0x16] = iVar4 + 0x6d;
      piVar10[0x18] = iVar4 + 0x6d;
      piVar10[0x19] = piVar10[9];
      piVar10[0x1a] = iVar4 + 0xb8;
      piVar10[0x1b] = piVar10[0xb];
      iVar4 = piVar10[0x1d];
      if ((((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) || (iVar4 == 4)) {
        iVar4 = iVar4 + 2;
        *(int *)(unaff_EBP + -0x14) = piVar10[iVar4 * 4 + 2] - piVar10[iVar4 * 4];
        iStack_29c = 0x771006;
        FUN_00403191();
        piVar9 = *(int **)(unaff_EBP + 0xc);
        uVar7 = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
        if (piVar9 == (int *)0x0) {
          iStack_29c = 0x771024;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 0xc);
        }
        iVar8 = (piVar10 + iVar4 * 4)[1];
        *(int *)(unaff_EBP + -0x68) = piVar10[iVar4 * 4];
        piStack_2bc = *(int **)(unaff_EBP + -0x14);
        uStack_2a4 = *(uint *)(unaff_EBP + -0x234);
        iStack_2c0 = -1;
        uStack_2c4 = *(undefined4 *)(unaff_EBP + -0x24);
        iStack_2a0 = *(int *)(unaff_EBP + -0x230);
        *(int *)(unaff_EBP + -0x20) = iVar8;
        iVar4 = *piVar9;
        iStack_29c = *(undefined4 *)(unaff_EBP + -0x22c);
        *(int **)(unaff_EBP + -0x1c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x84))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x68),
                           *(undefined4 *)(unaff_EBP + -0x20));
        if (iVar4 < 0) {
          iStack_29c = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_2a4 = 0x77107a;
          iStack_2a0 = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_29c = 0x77108a;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_29c = 0x771095;
          FUN_00878dfb();
        }
      }
      iVar4 = *(int *)(unaff_EBP + -0x28);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iStack_29c = 0x7710a8;
        FUN_00878dfb();
      }
      iVar8 = FUN_0040e53d();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar8;
      iVar8 = piVar10[6] * 0x14 + -0x14;
      *(int *)(unaff_EBP + -0x14) = iVar8;
      *(int *)(unaff_EBP + -0x24) = iVar8 * 0x40;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 4;
      while( true ) {
        if (piVar10[0x1c] == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(piVar10[0x1c] + -4);
        }
        iVar5 = piVar10[6] * 0x14;
        if (iVar8 <= piVar10[6] * 0x14) {
          iVar5 = iVar8;
        }
        if (iVar5 <= *(int *)(unaff_EBP + -0x14)) break;
        iStack_29c = 0x771108;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar4 + 0x10);
        piVar9 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (piVar9 == (int *)0x0) {
          iStack_29c = 0x771123;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 0xc);
        }
        iVar4 = *piVar9;
        uStack_2a4 = *(uint *)(unaff_EBP + -0x254);
        iStack_2a0 = *(int *)(unaff_EBP + -0x250);
        iStack_29c = *(undefined4 *)(unaff_EBP + -0x24c);
        *(int **)(unaff_EBP + -0x68) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x80))();
        if (iVar4 < 0) {
          piStack_2bc = *(int **)(unaff_EBP + -0x68);
          uStack_2c4 = 0x77115b;
          iStack_2c0 = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_2bc = (int *)0x77116b;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_2bc = (int *)0x771176;
          FUN_00878dfb();
        }
        iVar4 = *(int *)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        piStack_2bc = (int *)0x77118d;
        FUN_00414f8b();
        iStack_2c0 = unaff_EBP + -0x34;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_2bc;
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        uStack_2c4 = 0x7711a2;
        FUN_0046fcc9();
        iStack_2c0 = unaff_EBP + -0x54;
        uStack_2c4 = 0x7711ab;
        uVar7 = FUN_007d3a22();
        *(undefined4 *)(piVar10[0x1c] + 0x3c + iVar4) = uVar7;
        piStack_2bc = (int *)(unaff_EBP + -0x50);
        if (*(int *)(piVar10[0x1c] + iVar4 + 0x10) == -1) {
          iStack_2c0 = 0x7711cd;
          FUN_00434e21();
          piStack_2bc = (int *)(unaff_EBP + -0x5c);
          iStack_2c0 = 0x7711db;
          FUN_00434e21();
          piStack_2bc = (int *)(unaff_EBP + -0x60);
          iStack_2c0 = 0x7711eb;
          FUN_00434e21();
        }
        else {
          iStack_2c0 = 0x7711f4;
          FUN_00434e21();
          piStack_2bc = (int *)(unaff_EBP + -0x5c);
          iStack_2c0 = 0x771202;
          FUN_00434e21();
          iStack_2c0 = unaff_EBP + -0x60;
          piStack_2bc = (int *)&DAT_0096477c;
          uStack_2c4 = 0x771219;
          FUN_00434e21();
        }
        iVar8 = *(int *)(unaff_EBP + -0x28);
        piStack_2bc = (int *)(unaff_EBP + -0x58);
        iStack_2c0 = 0x771233;
        FUN_00434e21();
        if (*(int *)(*(int *)(iVar8 + 0x28) + 0x818) == *(int *)(piVar10[0x1c] + iVar4)) {
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            piStack_2bc = (int *)0x77125a;
            FUN_00878dfb();
          }
          piVar9 = *(int **)(unaff_EBP + 0xc);
          piStack_2bc = (int *)0x12;
          iStack_2c0 = 0x119;
          uStack_2c4 = *(undefined4 *)(unaff_EBP + -0x10);
          iVar4 = (**(code **)(*piVar9 + 0x8c))(piVar9,1);
          if (iVar4 < 0) {
            uStack_2c4 = 0x771287;
            iStack_2c0 = iVar4;
            piStack_2bc = piVar9;
            FUN_00878e09();
          }
          piStack_2bc = (int *)0x771296;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xf4));
          piStack_2bc = (int *)(unaff_EBP + -0xf4);
          iStack_2c0 = 0x7712a8;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7712b4;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          piStack_2bc = (int *)0x7712c1;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
          piStack_2bc = (int *)(unaff_EBP + -0xc4);
          iStack_2c0 = 0x7712ce;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7712da;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0xc4);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          iStack_2c0 = 0x7712f4;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x7712fd;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          FUN_004115d9(10,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          piStack_2bc = (int *)0x771331;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77133c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x77134c;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771357;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)0x771360;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
          piStack_2bc = (int *)(unaff_EBP + -0xa4);
          iStack_2c0 = 0x77136d;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771379;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          piStack_2bc = (int *)0x771386;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x114));
          piStack_2bc = (int *)(unaff_EBP + -0x114);
          iStack_2c0 = 0x771393;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77139f;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x114);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          iStack_2c0 = 0x7713b9;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x7713c2;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 100;
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          FUN_004115d9(100,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          piStack_2bc = (int *)0x7713f6;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771401;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x771411;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77141c;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)0x771425;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xe4));
          piStack_2bc = (int *)(unaff_EBP + -0xe4);
          iStack_2c0 = 0x771432;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77143e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          piStack_2bc = (int *)0x77144b;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x154));
          piStack_2bc = (int *)(unaff_EBP + -0x154);
          iStack_2c0 = 0x771458;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771464;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x154);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          iStack_2c0 = 0x77147e;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x771487;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 0xaa;
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          FUN_004115d9(0xaa,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          piStack_2bc = (int *)0x7714be;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7714c9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x7714d9;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7714e4;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)0x7714ed;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x104));
          piStack_2bc = (int *)(unaff_EBP + -0x104);
          iStack_2c0 = 0x7714fa;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771506;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          piStack_2bc = (int *)0x771513;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x174));
          piStack_2bc = (int *)(unaff_EBP + -0x174);
          iStack_2c0 = 0x771520;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77152c;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x174);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          iStack_2c0 = 0x771546;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x77154f;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 0xd2;
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          FUN_004115d9(0xd2,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          piStack_2bc = (int *)0x771586;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771591;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x7715a1;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7715ac;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x18);
          *(undefined4 *)(unaff_EBP + -0x2c) =
               *(undefined4 *)(piVar10[0x1c] + 0x14 + *(int *)(unaff_EBP + -0x24));
        }
        else {
          piStack_2bc = (int *)0x7715d3;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x124));
          piStack_2bc = (int *)(unaff_EBP + -0x124);
          iStack_2c0 = 0x7715e5;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7715f1;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          piStack_2bc = (int *)0x7715fe;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x194));
          piStack_2bc = (int *)(unaff_EBP + -0x194);
          iStack_2c0 = 0x77160b;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771617;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x194);
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iStack_2c0 = 0x771631;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x77163a;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_004115d9(10,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          piStack_2bc = (int *)0x77166e;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771679;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x771689;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771694;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)0x77169d;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x144));
          piStack_2bc = (int *)(unaff_EBP + -0x144);
          iStack_2c0 = 0x7716aa;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7716b6;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          piStack_2bc = (int *)0x7716c3;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x1b4));
          piStack_2bc = (int *)(unaff_EBP + -0x1b4);
          iStack_2c0 = 0x7716d0;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7716dc;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x1b4);
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          iStack_2c0 = 0x7716f6;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x7716ff;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 100;
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          FUN_004115d9(100,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          piStack_2bc = (int *)0x771733;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77173e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x77174e;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771759;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)0x771762;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x164));
          piStack_2bc = (int *)(unaff_EBP + -0x164);
          iStack_2c0 = 0x77176f;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x77177b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          piStack_2bc = (int *)0x771788;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x184));
          piStack_2bc = (int *)(unaff_EBP + -0x184);
          iStack_2c0 = 0x771795;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7717a1;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x184);
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          iStack_2c0 = 0x7717bb;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x7717c4;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 0xaa;
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          FUN_004115d9(0xaa,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          piStack_2bc = (int *)0x7717fb;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771806;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x771816;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771821;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)0x77182a;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x134));
          piStack_2bc = (int *)(unaff_EBP + -0x134);
          iStack_2c0 = 0x771837;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771843;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          piStack_2bc = (int *)0x771850;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x1a4));
          piStack_2bc = (int *)(unaff_EBP + -0x1a4);
          iStack_2c0 = 0x77185d;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x771869;
            FUN_00878dfb();
          }
          piStack_2bc = (int *)(unaff_EBP + -0x1a4);
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          iStack_2c0 = 0x771883;
          iStack_2c0 = FUN_00449749();
          uStack_2c4 = 0x77188c;
          uVar7 = FUN_00449713();
          *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2c4;
          FUN_00448a17(uVar7);
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          uVar12 = 0xd2;
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          FUN_004115d9(0xd2,uVar7);
          FUN_00448e3a(uVar12,uVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          piStack_2bc = (int *)0x7718c3;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7718ce;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_2bc = (int *)0x7718de;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_2bc = (int *)0x7718e9;
            FUN_00878dfb();
          }
        }
        iVar4 = *(int *)(unaff_EBP + -0x20);
        iVar8 = *(int *)(unaff_EBP + -0x24);
        piStack_2bc = (int *)0x119;
        iStack_2c0 = *(int *)(unaff_EBP + -0x10);
        uStack_2c4 = 0;
        (*DAT_0097b504)(piVar10[0x1c] + 0x18 + iVar8);
        (*DAT_0097b504)(piVar10[0x1c] + 0x2c + iVar8,0x61,*(undefined4 *)(unaff_EBP + -0x10),0xa4,
                        iVar4 + 0xe);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x12;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00414ebb();
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        *(int *)(unaff_EBP + -0x24) = iVar8 + 0x40;
        iVar4 = *(int *)(unaff_EBP + -0x28);
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iStack_29c = 0x771960;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
        iStack_29c = unaff_EBP + -0xb4;
        iStack_2a0 = 0x771971;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          iStack_29c = 0x77197d;
          FUN_00878dfb();
        }
        piVar10 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        if (piVar10 == (int *)0x0) {
          iStack_29c = 0x771995;
          FUN_00878dfb();
          piVar10 = *(int **)(unaff_EBP + 0xc);
        }
        iVar4 = *piVar10;
        uStack_2a4 = *(uint *)(unaff_EBP + -0xb4);
        iStack_2a0 = *(int *)(unaff_EBP + -0xb0);
        iStack_29c = *(undefined4 *)(unaff_EBP + -0xac);
        *(int **)(unaff_EBP + -0x1c) = piVar10;
        iVar4 = (**(code **)(iVar4 + 0x80))();
        if (iVar4 < 0) {
          iStack_29c = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_2a4 = 0x7719cb;
          iStack_2a0 = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_29c = 0x7719db;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_29c = 0x7719e6;
          FUN_00878dfb();
        }
        iStack_29c = 0x7719f2;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        iStack_29c = unaff_EBP + -0x78;
        iStack_2a0 = 0x771a01;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          iStack_29c = 0x771a0d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_29c = 0x771a1a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xd4));
        iStack_29c = unaff_EBP + -0xd4;
        iStack_2a0 = 0x771a27;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          iStack_29c = 0x771a33;
          FUN_00878dfb();
        }
        iStack_29c = unaff_EBP + -0xd4;
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        iStack_2a0 = 0x771a4a;
        iStack_2a0 = FUN_00449749();
        *(uint **)(unaff_EBP + -0x1c) = &uStack_2a4;
        uStack_2a4 = extraout_ECX_02;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_29c = 0x771a8d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_29c = 0x771a98;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_29c = 0x771aa5;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_29c = 0x771ab0;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
      }
      iStack_29c = 0x771ac1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_29c = unaff_EBP + -0x4c;
      iStack_2a0 = 0x771acf;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_29c = 0x771adb;
        FUN_00878dfb();
      }
      piVar10 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (piVar10 == (int *)0x0) {
        iStack_29c = 0x771af3;
        FUN_00878dfb();
        piVar10 = *(int **)(unaff_EBP + 0xc);
      }
      iVar4 = *piVar10;
      uStack_2a4 = *(uint *)(unaff_EBP + -0x4c);
      iStack_2a0 = *(int *)(unaff_EBP + -0x48);
      iStack_29c = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x1c) = piVar10;
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < 0) {
        piStack_278 = (int *)&DAT_00963cc8;
        uStack_27c = *(uint *)(unaff_EBP + -0x1c);
        uStack_284 = 0x771b26;
        iStack_280 = iVar4;
        FUN_00878e09();
      }
      piStack_278 = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_27c = 0x771b33;
      piStack_278 = (int *)FUN_00402bc3();
      if ((int)piStack_278 < 0) {
        uStack_27c = 0x771b3e;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x14) == 0) {
        piStack_278 = (int *)0x80004003;
        uStack_27c = 0x771b51;
        FUN_00878dfb();
      }
      piStack_278 = (int *)0x771b59;
      iVar4 = FUN_0040e53d();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar4;
      iVar4 = *(int *)(unaff_EBP + -0x28);
    }
    bVar2 = false;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x38);
  } while (*(int *)(unaff_EBP + -0x38) < 2);
  iVar8 = *(int *)(unaff_EBP + -100);
  if (*(int *)(iVar8 + 0x2cac) == 0) {
    iVar8 = 0x608;
    do {
      piStack_278 = (int *)0x0;
      uStack_27c = 0x771f32;
      (**(code **)(*(int *)(*(int *)(iVar8 + *(int *)(iVar4 + 0x28)) + 4) + 0x1c))();
      iVar8 = iVar8 + 8;
    } while (iVar8 < 0x668);
    goto LAB_00771f3d;
  }
  piStack_278 = *(int **)(iVar8 + 0x2088);
  if ((int *)**(int **)(iVar8 + 0x2cb8) == piStack_278) {
LAB_00771bab:
    piStack_278 = (int *)0x1;
  }
  else {
    uStack_27c = 0x771ba2;
    iVar5 = FUN_004ea83d();
    if (iVar5 == 2) goto LAB_00771bab;
    piStack_278 = (int *)0x0;
  }
  uStack_27c = 0x771bc0;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x608) + 4) + 0x1c))();
  if ((*(int *)(iVar8 + 0x2cac) != 0) && (**(int **)(iVar8 + 0x2cb8) == *(int *)(iVar8 + 0x2088))) {
    bVar2 = true;
  }
  uStack_27c = (uint)!bVar2;
  iStack_280 = 0x771bf5;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x610) + 4) + 0x1c))();
  if (*(int *)(unaff_EBP + -0x2c) != 1) {
    if (*(int *)(unaff_EBP + -0x2c) == 2) {
      if ((*(int *)(iVar8 + 0x2cac) == 0) ||
         (**(int **)(iVar8 + 0x2cb8) != *(int *)(iVar8 + 0x2088))) {
        iStack_280 = 0;
      }
      else {
        iStack_280 = 1;
      }
      iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x618) + 4);
      goto LAB_00771c44;
    }
    if (*(int *)(unaff_EBP + -0x2c) < 1) {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x618) + 4);
      iStack_280 = 0;
    }
    else {
      if ((*(int *)(iVar8 + 0x2cac) == 0) ||
         (**(int **)(iVar8 + 0x2cb8) != *(int *)(iVar8 + 0x2088))) {
        iStack_280 = *(undefined4 *)(iVar8 + 0x2088);
        uStack_284 = 0x771c75;
        iVar5 = FUN_004ea83d();
        if (iVar5 == 2) goto LAB_00771c7e;
        iStack_280 = 0;
      }
      else {
LAB_00771c7e:
        iStack_280 = 1;
      }
      iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x618) + 4);
    }
    uStack_284 = 0x771ca4;
    (**(code **)(iVar5 + 0x1c))();
    if (0 < *(int *)(unaff_EBP + -0x2c)) goto LAB_00771cad;
    goto LAB_00771dbe;
  }
  iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x618) + 4);
  iStack_280 = 0;
LAB_00771c44:
  uStack_284 = 0x771c47;
  (**(code **)(iVar5 + 0x1c))();
LAB_00771cad:
  if ((*(int *)(iVar8 + 0x2cac) == 0) || (**(int **)(iVar8 + 0x2cb8) != *(int *)(iVar8 + 0x2088))) {
    if (*(int *)(unaff_EBP + -0x2c) < 1) {
LAB_00771dbe:
      uStack_284 = 0;
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x620) + 4) + 0x1c))();
      iVar5 = *(int *)(*(int *)(iVar4 + 0x28) + 0x628);
LAB_00771ddc:
      iVar5 = *(int *)(iVar5 + 4);
      goto LAB_00771ddf;
    }
    uStack_284 = *(uint *)(iVar8 + 0x2088);
    iVar5 = FUN_004ea83d();
    if (((iVar5 != 2) || (*(int *)(unaff_EBP + -0x2c) == 1)) || (*(int *)(unaff_EBP + -0x2c) == 2))
    goto LAB_00771dbe;
    uStack_284 = (uint)(*(int *)(unaff_EBP + -0x2c) != 3);
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x620) + 4) + 0x1c))();
    iVar5 = *(int *)(*(int *)(iVar4 + 0x28) + 0x628);
    iVar1 = *(int *)(iVar5 + 4);
    *(int *)(unaff_EBP + -0x38) = iVar5 + 4;
    FUN_008569b4();
    (**(code **)(iVar1 + 0x1c))();
  }
  else {
    if (*(int *)(unaff_EBP + -0x2c) == 1) goto LAB_00771dbe;
    if (*(int *)(unaff_EBP + -0x2c) != 2) {
      uStack_284 = 0x771d05;
      iVar5 = FUN_008569b4();
      if (*(int *)(unaff_EBP + -0x2c) != iVar5) {
        uStack_284 = 1;
        (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x620) + 4) + 0x1c))();
        iVar5 = *(int *)(*(int *)(iVar4 + 0x28) + 0x628);
        goto LAB_00771d4b;
      }
      uStack_284 = 1;
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x620) + 4) + 0x1c))();
      iVar5 = *(int *)(*(int *)(iVar4 + 0x28) + 0x628);
      goto LAB_00771ddc;
    }
    uStack_284 = 0;
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x620) + 4) + 0x1c))();
    iVar5 = *(int *)(*(int *)(iVar4 + 0x28) + 0x628);
LAB_00771d4b:
    iVar5 = *(int *)(iVar5 + 4);
LAB_00771ddf:
    (**(code **)(iVar5 + 0x1c))();
  }
  *(uint *)(unaff_EBP + -0x18) = (uint)(*(int *)(unaff_EBP + -0x7c) == 0);
  iVar5 = *(int *)(iVar4 + 0x28);
  *(uint *)(unaff_EBP + -0x14) = (uint)(*(int *)(iVar5 + 0x818) != *(int *)(DAT_00978368 + 0x2088));
  (**(code **)(*(int *)(*(int *)(iVar5 + 0x630) + 4) + 0x1c))();
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x638) + 4) + 0x1c))();
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x640) + 4) + 0x1c))();
  iStack_29c = 0x771e81;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x648) + 4) + 0x1c))();
  if ((*(int *)(iVar8 + 0x2cac) == 0) || (**(int **)(iVar8 + 0x2cb8) != *(int *)(iVar8 + 0x2088))) {
    iStack_29c = *(undefined4 *)(iVar8 + 0x2088);
    iStack_2a0 = 0x771ea6;
    iVar5 = FUN_004ea83d();
    if (iVar5 == 2) goto LAB_00771eaf;
    iStack_29c = 0;
  }
  else {
LAB_00771eaf:
    iStack_29c = 1;
  }
  iStack_2a0 = 0x771ec4;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x650) + 4) + 0x1c))();
  if (((*(int *)(unaff_EBP + -0x18) == 0) || (*(int *)(unaff_EBP + -0x14) == 0)) ||
     ((*(int *)(iVar8 + 0x2b40) == 0 || (*(int *)(iVar8 + 0x2bf2) != *(int *)(iVar8 + 0x2088))))) {
    iStack_2a0 = 0;
  }
  else {
    iStack_2a0 = 1;
  }
  uStack_2a4 = 0x771efd;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x658) + 4) + 0x1c))();
  uStack_2a4 = (uint)(0 < *(int *)(iVar8 + 0x2cac));
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x660) + 4) + 0x1c))();
LAB_00771f3d:
  piStack_278 = *(int **)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_278 != (int *)0x0) {
    uStack_27c = 0x771f4e;
    (**(code **)(*piStack_278 + 8))();
  }
  piStack_278 = *(int **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piStack_278 != (int *)0x0) {
    uStack_27c = 0x771f5f;
    (**(code **)(*piStack_278 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_278 = (int *)0x771f6b;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_278 = (int *)0x771f77;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_278 = (int *)0x771f83;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_278 = (int *)0x771f8f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_278 = (int *)0x771f9b;
  FUN_00414ebb();
  piStack_278 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_278 != (int *)0x0) {
    uStack_27c = 0x771fac;
    (**(code **)(*piStack_278 + 8))();
  }
  piStack_278 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_278 != (int *)0x0) {
    uStack_27c = 0x771fbd;
    (**(code **)(*piStack_278 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



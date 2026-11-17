/* FUN_005b4ab0 - 0x005b4ab0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b4ab0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iStack_490;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
  undefined1 *puStack_47c;
  int iStack_478;
  int iStack_474;
  int iStack_470;
  int iStack_46c;
  undefined1 *puStack_464;
  int iStack_460;
  int iStack_45c;
  int iStack_458;
  int iStack_454;
  undefined4 *puStack_450;
  undefined1 *puStack_44c;
  int iStack_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  undefined4 *puStack_438;
  undefined1 *puStack_434;
  int iStack_430;
  int iStack_42c;
  int iStack_428;
  int iStack_424;
  undefined4 *puStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  undefined4 *puStack_408;
  undefined4 uStack_404;
  int iStack_400;
  int iStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  int iStack_3e4;
  int *piStack_3e0;
  undefined4 *puStack_3dc;
  int *piStack_3d8;
  undefined *puStack_3d4;
  int *piStack_3d0;
  undefined4 uStack_3cc;
  int iStack_3c8;
  undefined4 uStack_3c4;
  undefined *puStack_3c0;
  int *piStack_3bc;
  undefined4 uStack_3b8;
  int iStack_3b4;
  int *piStack_3b0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  piStack_3b0 = (int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3b4 = 0x5b4aea;
  puVar3 = (undefined4 *)FUN_00679d22();
  piStack_3b0 = (int *)*puVar3;
  iStack_3b4 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_3b8 = 0x5b4b00;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    piStack_3b0 = (int *)0x5b4b17;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  do {
    uVar5 = *(undefined4 *)(unaff_EBP + 8);
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
    piStack_3b0 = (int *)0x5b4b3c;
    FUN_00403191();
    piStack_3b0 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_3b4 = 0x5b4b4e;
    FUN_004031b7();
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (bVar7) {
      piStack_3b0 = (int *)0x5b4b64;
      FUN_00878dfb();
    }
    piStack_3b0 = (int *)(unaff_EBP + -0x178);
    iStack_3b4 = 5;
    uStack_3b8 = 0;
    piStack_3bc = (int *)0x0;
    puStack_3c0 = (undefined *)0x0;
    uStack_3c4 = 0;
    iStack_3c8 = unaff_EBP + -0x44;
    uStack_3cc = 0x5b4b87;
    puVar3 = (undefined4 *)FUN_0042a39f();
    piStack_3b0 = (int *)0x5b4b91;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_3b0 = (int *)0x5b4ba9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_3b0 = (int *)0x5b4bb4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_3b0 = (int *)0x5b4bc4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_3b0 = (int *)0x5b4bcf;
      FUN_00878dfb();
    }
    piStack_3b0 = (int *)0x5b4bdb;
    puVar3 = (undefined4 *)FUN_004489f5();
    piStack_3b0 = (int *)*puVar3;
    iStack_3b4 = 0x5b4beb;
    FUN_0040ee87();
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar6 == (int *)0x0) {
      piStack_3b0 = (int *)0x5b4c00;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar6;
    uStack_3b8 = *(undefined4 *)(unaff_EBP + -0xd8);
    iStack_3b4 = *(int *)(unaff_EBP + -0xd4);
    piStack_3b0 = *(int **)(unaff_EBP + -0xd0);
    *(int **)(unaff_EBP + -0x14) = piVar6;
    puStack_3c0 = (undefined *)0x5b4c1b;
    piStack_3bc = piVar6;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      puStack_3c0 = &DAT_00963de8;
      uStack_3c4 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_3cc = 0x5b4c2d;
      iStack_3c8 = iVar4;
      FUN_00878e09();
    }
    puStack_3c0 = (undefined *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_3c4 = 0x5b4c3d;
    puStack_3c0 = (undefined *)FUN_00402bc3();
    if ((int)puStack_3c0 < 0) {
      uStack_3c4 = 0x5b4c48;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_3c0 = (undefined *)0x5b4c54;
    FUN_00412600();
    puStack_3c0 = (undefined *)(unaff_EBP + -0x50);
    uStack_3c4 = 0x5b4c60;
    puVar3 = (undefined4 *)FUN_004489f5();
    uStack_3c4 = *puVar3;
    puStack_3c0 = (undefined *)0x1;
    iStack_3c8 = 0x5b4c70;
    FUN_0040ee87();
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar6 == (int *)0x0) {
      puStack_3c0 = (undefined *)0x80004003;
      uStack_3c4 = 0x5b4c85;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar6;
    uStack_3cc = *(undefined4 *)(unaff_EBP + -0x2c8);
    iStack_3c8 = *(undefined4 *)(unaff_EBP + -0x2c4);
    uStack_3c4 = *(undefined4 *)(unaff_EBP + -0x2c0);
    *(int **)(unaff_EBP + -0x14) = piVar6;
    puStack_3c0 = *(undefined **)(unaff_EBP + -700);
    puStack_3d4 = (undefined *)0x5b4ca3;
    piStack_3d0 = piVar6;
    iVar4 = (**(code **)(iVar4 + 0xfc))();
    if (iVar4 < 0) {
      puStack_3d4 = &DAT_00963df8;
      piStack_3d8 = *(int **)(unaff_EBP + -0x14);
      piStack_3e0 = (int *)0x5b4cb5;
      puStack_3dc = (undefined4 *)iVar4;
      FUN_00878e09();
    }
    puStack_3d4 = (undefined *)(unaff_EBP + -0x2c8);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_3d8 = (int *)0x5b4cc5;
    puStack_3d4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_3d4 < 0) {
      piStack_3d8 = (int *)0x5b4cd0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_3d4 = (undefined *)0x5b4cdc;
    FUN_00412600();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_3d4 = (undefined *)0x80004003;
      piStack_3d8 = (int *)0x5b4cec;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x10);
    puStack_3d4 = (undefined *)0xffffffff;
    puStack_3dc = (undefined4 *)0x5b4cfa;
    piStack_3d8 = piVar6;
    iVar4 = (**(code **)(*piVar6 + 0xe0))();
    if (iVar4 < 0) {
      puStack_3dc = (undefined4 *)&DAT_00963df8;
      uStack_3e8 = 0x5b4d0a;
      iStack_3e4 = iVar4;
      piStack_3e0 = piVar6;
      FUN_00878e09();
    }
    puStack_3dc = &DAT_00980690;
    piStack_3e0 = (int *)0x5b4d16;
    FUN_00403191();
    puStack_3dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_3e0 = (int *)0x5b4d26;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_3dc = (undefined4 *)0x80004003;
      piStack_3e0 = (int *)0x5b4d3a;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x2c);
    iVar1 = *(int *)(iVar4 + 0x7dc);
    iStack_3fc = (*(int *)(unaff_EBP + -0x30) / iVar1) * 0x43 + *(int *)(iVar4 + 0x7e4);
    *(int **)(unaff_EBP + -0x14) = *(int **)(unaff_EBP + -0x10);
    iStack_400 = (*(int *)(unaff_EBP + -0x30) % iVar1) * 0x38 + *(int *)(iVar4 + 0x7e0);
    uStack_3e8 = *(undefined4 *)(unaff_EBP + -600);
    iStack_3e4 = *(int *)(unaff_EBP + -0x254);
    piStack_3e0 = *(int **)(unaff_EBP + -0x250);
    puStack_3dc = *(undefined4 **)(unaff_EBP + -0x24c);
    uStack_3f8 = *(undefined4 *)(unaff_EBP + -0xf8);
    uStack_3f4 = *(undefined4 *)(unaff_EBP + -0xf4);
    uStack_3f0 = *(undefined4 *)(unaff_EBP + -0xf0);
    uStack_404 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_3ec = *(undefined4 *)(unaff_EBP + -0xec);
    puStack_408 = (undefined4 *)0x5b4d94;
    iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x90))();
    if (iVar4 < 0) {
      puStack_408 = (undefined4 *)&DAT_00963de8;
      uStack_40c = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_414 = 0x5b4da6;
      iStack_410 = iVar4;
      FUN_00878e09();
    }
    puStack_408 = (undefined4 *)(unaff_EBP + -0xf8);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_40c = 0x5b4db6;
    puStack_408 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_408 < 0) {
      uStack_40c = 0x5b4dc3;
      FUN_00878dfb();
    }
    puStack_408 = (undefined4 *)(unaff_EBP + -600);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_40c = 0x5b4dd3;
    puStack_408 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_408 < 0) {
      uStack_40c = 0x5b4dde;
      FUN_00878dfb();
    }
    puStack_408 = &DAT_00980690;
    uStack_40c = 0x5b4dea;
    FUN_00403191();
    puStack_408 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_40c = 0x5b4dfa;
    FUN_00403191();
    puStack_408 = (undefined4 *)0x3;
    uStack_40c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_410 = 0x5b4e12;
    FUN_004031b7();
    puStack_408 = (undefined4 *)0x3;
    uStack_40c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_410 = 0x5b4e23;
    FUN_004031b7();
    puStack_408 = (undefined4 *)0x3;
    uStack_40c = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_410 = 0x5b4e38;
    FUN_004031b7();
    puStack_408 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_40c = 0x5b4e48;
    FUN_00403191();
    puStack_408 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_40c = 0x5b4e58;
    FUN_00403191();
    puStack_408 = (undefined4 *)0x0;
    uStack_40c = 0;
    iStack_410 = -1;
    uStack_414 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_418 = 0;
    uStack_41c = 0;
    puStack_420 = (undefined4 *)0x5b4e6b;
    (*DAT_0097b4c8)();
    puStack_420 = (undefined4 *)0x5b4e77;
    FUN_0087a1b0();
    puStack_420 = (undefined4 *)0x0;
    iStack_424 = 0;
    iStack_428 = unaff_EBP + -0x2e8;
    iStack_42c = unaff_EBP + -0x118;
    iStack_430 = -1;
    puStack_438 = (undefined4 *)0x5b4e94;
    puStack_434 = (undefined1 *)&uStack_41c;
    puStack_438 = (undefined4 *)FUN_00449713();
    iStack_43c = 0x5b4e9a;
    puStack_434 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &iStack_430;
    puStack_438 = (undefined4 *)0x5b4ea7;
    FUN_004033a1();
    puStack_434 = (undefined1 *)(unaff_EBP + -0x338);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_438 = (undefined4 *)0x5b4eb7;
    FUN_00405a1d();
    puStack_438 = (undefined4 *)0x5b4ebe;
    FUN_00402660();
    puStack_438 = (undefined4 *)0x5b4ec5;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_428 = 0x5b4ed0;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar4 != 0) {
      puStack_420 = (undefined4 *)(unaff_EBP + -0x4c);
      iStack_424 = 0x5b4ee6;
      puStack_420 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_420 < 0) && (puStack_420 != (undefined4 *)0x80004002)) {
        iStack_424 = 0x5b4ef7;
        FUN_00878dfb();
      }
    }
    puVar2 = *(undefined1 **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_420 = (undefined4 *)0x80004003;
      iStack_424 = 0x5b4f0d;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0xa8);
    iStack_424 = unaff_EBP + -0x308;
    iStack_428 = unaff_EBP + -0x158;
    iStack_42c = unaff_EBP + -0x278;
    iStack_430 = unaff_EBP + -0x138;
    puStack_438 = (undefined4 *)(unaff_EBP + -0x318);
    iStack_43c = 0x5b4f40;
    puStack_434 = puVar2;
    FUN_004250ac();
    puStack_420 = (undefined4 *)(unaff_EBP + -0x318);
    iStack_424 = 0x5b4f4c;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b4f57;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)0x5b4f5f;
    FUN_004125e6();
    puStack_420 = (undefined4 *)(unaff_EBP + -0x338);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_424 = 0x5b4f6f;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b4f7a;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_424 = 0x5b4f8a;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b4f95;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0x2e8);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_424 = 0x5b4fa5;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b4fb0;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_424 = 0x5b4fc0;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b4fcb;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0x278);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_424 = 0x5b4fdb;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b4fe6;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0x158);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_424 = 0x5b4ff6;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b5001;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0x308);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_424 = 0x5b5011;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b501c;
      FUN_00878dfb();
    }
    puStack_420 = (undefined4 *)(unaff_EBP + -0xa8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_424 = 0x5b502c;
    puStack_420 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_420 < 0) {
      iStack_424 = 0x5b5037;
      FUN_00878dfb();
    }
    puStack_420 = &DAT_00980690;
    iStack_424 = 0x5b5043;
    FUN_00403191();
    puStack_420 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_424 = 0x5b5053;
    FUN_00403191();
    puStack_420 = (undefined4 *)0x3;
    iStack_424 = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_428 = 0x5b506a;
    FUN_004031b7();
    puStack_420 = (undefined4 *)0x3;
    iStack_424 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_428 = 0x5b5080;
    FUN_004031b7();
    puStack_420 = (undefined4 *)0x3;
    iStack_424 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_428 = 0x5b5096;
    FUN_004031b7();
    puStack_420 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_424 = 0x5b50a6;
    FUN_00403191();
    puStack_420 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_424 = 0x5b50b6;
    FUN_00403191();
    puStack_420 = (undefined4 *)0x0;
    iStack_424 = 0;
    iStack_428 = 0xffffffff;
    iStack_42c = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_430 = 0;
    puStack_434 = (undefined1 *)0x0;
    puStack_438 = (undefined4 *)0x5b50c9;
    (*DAT_0097b4c8)();
    puStack_438 = (undefined4 *)0x5b50d6;
    FUN_0087a1b0();
    puStack_438 = (undefined4 *)0x0;
    iStack_43c = 0;
    iStack_440 = unaff_EBP + -0x198;
    iStack_444 = unaff_EBP + -0x298;
    iStack_448 = -1;
    puStack_450 = (undefined4 *)0x5b50f3;
    puStack_44c = (undefined1 *)&puStack_434;
    puStack_450 = (undefined4 *)FUN_00449713();
    iStack_454 = 0x5b50f9;
    puStack_44c = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &iStack_448;
    puStack_450 = (undefined4 *)0x5b5106;
    FUN_004033a1();
    puStack_44c = (undefined1 *)(unaff_EBP + -0x358);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_450 = (undefined4 *)0x5b5116;
    FUN_00405a1d();
    puStack_450 = (undefined4 *)0x5b511d;
    FUN_00402660();
    puStack_450 = (undefined4 *)0x5b5124;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_440 = 0x5b512f;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x58) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar4 != 0) {
      puStack_438 = (undefined4 *)(unaff_EBP + -0x58);
      iStack_43c = 0x5b5145;
      puStack_438 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_438 < 0) && (puStack_438 != (undefined4 *)0x80004002)) {
        iStack_43c = 0x5b5156;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_438 = (undefined4 *)0x80004003;
      iStack_43c = 0x5b516f;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x2f8);
    iStack_43c = unaff_EBP + -0x1d8;
    iStack_440 = unaff_EBP + -0x2b8;
    iStack_444 = unaff_EBP + -0x1b8;
    iStack_448 = unaff_EBP + -0x2d8;
    puStack_44c = *(undefined1 **)(unaff_EBP + -0x14);
    puStack_450 = (undefined4 *)(unaff_EBP + -0x378);
    iStack_454 = 0x5b51a4;
    FUN_004250ac();
    puStack_438 = (undefined4 *)(unaff_EBP + -0x378);
    iStack_43c = 0x5b51b0;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b51bb;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)0x5b51c3;
    FUN_004125e6();
    puStack_438 = (undefined4 *)(unaff_EBP + -0x358);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_43c = 0x5b51d3;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b51de;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x298);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_43c = 0x5b51ee;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b51f9;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x198);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_43c = 0x5b5209;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b5214;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x2d8);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_43c = 0x5b5224;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b522f;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x1b8);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_43c = 0x5b523f;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b524a;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x2b8);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_43c = 0x5b525a;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b5265;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x1d8);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_43c = 0x5b5275;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b5280;
      FUN_00878dfb();
    }
    puStack_438 = (undefined4 *)(unaff_EBP + -0x2f8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_43c = 0x5b5290;
    puStack_438 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_438 < 0) {
      iStack_43c = 0x5b529b;
      FUN_00878dfb();
    }
    puStack_438 = &DAT_00980690;
    iStack_43c = 0x5b52a7;
    FUN_00403191();
    puStack_438 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_43c = 0x5b52b7;
    FUN_00403191();
    puStack_438 = (undefined4 *)0x3;
    iStack_43c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_440 = 0x5b52cd;
    FUN_004031b7();
    puStack_438 = (undefined4 *)0x3;
    iStack_43c = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_440 = 0x5b52df;
    FUN_004031b7();
    puStack_438 = (undefined4 *)0x3;
    iStack_43c = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_440 = 0x5b52f5;
    FUN_004031b7();
    puStack_438 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_43c = 0x5b5305;
    FUN_00403191();
    puStack_438 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_43c = 0x5b5315;
    FUN_00403191();
    puStack_438 = (undefined4 *)0x0;
    iStack_43c = 0;
    iStack_440 = 0xffffffff;
    iStack_444 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_448 = 0;
    puStack_44c = (undefined1 *)0x0;
    puStack_450 = (undefined4 *)0x5b5328;
    (*DAT_0097b4c8)();
    puStack_450 = (undefined4 *)0x5b5335;
    FUN_0087a1b0();
    puStack_450 = (undefined4 *)0x0;
    iStack_454 = 0;
    iStack_458 = unaff_EBP + -0x288;
    iStack_45c = unaff_EBP + -0x1f8;
    iStack_460 = -1;
    puStack_464 = (undefined1 *)&puStack_44c;
    FUN_00449713();
    iStack_46c = 0x5b5358;
    puStack_464 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &iStack_460;
    FUN_004033a1();
    puStack_464 = (undefined1 *)(unaff_EBP + -0x328);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_458 = 0x5b538e;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x54) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar4 != 0) {
      puStack_450 = (undefined4 *)(unaff_EBP + -0x54);
      iStack_454 = 0x5b53a4;
      puStack_450 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_450 < 0) && (puStack_450 != (undefined4 *)0x80004002)) {
        iStack_454 = 0x5b53b5;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_450 = (undefined4 *)0x80004003;
      iStack_454 = 0x5b53ce;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0xe8);
    iStack_454 = unaff_EBP + -200;
    iStack_458 = unaff_EBP + -0xb8;
    iStack_45c = unaff_EBP + -0x2a8;
    iStack_460 = unaff_EBP + -0x218;
    puStack_464 = *(undefined1 **)(unaff_EBP + -0x14);
    iStack_46c = 0x5b5403;
    FUN_004250ac();
    puStack_450 = (undefined4 *)(unaff_EBP + -0x398);
    iStack_454 = 0x5b540f;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b541a;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)0x5b5422;
    FUN_004125e6();
    puStack_450 = (undefined4 *)(unaff_EBP + -0x328);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_454 = 0x5b5432;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b543d;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0x1f8);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_454 = 0x5b544d;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b5458;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0x288);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_454 = 0x5b5468;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b5473;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0x218);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_454 = 0x5b5483;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b548e;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0x2a8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_454 = 0x5b549e;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b54a9;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_454 = 0x5b54b9;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b54c4;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -200);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_454 = 0x5b54d4;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b54df;
      FUN_00878dfb();
    }
    puStack_450 = (undefined4 *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_454 = 0x5b54ef;
    puStack_450 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_450 < 0) {
      iStack_454 = 0x5b54fa;
      FUN_00878dfb();
    }
    puStack_450 = &DAT_00980690;
    iStack_454 = 0x5b5506;
    FUN_00403191();
    puStack_450 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_454 = 0x5b5516;
    FUN_00403191();
    puStack_450 = (undefined4 *)0x3;
    iStack_454 = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_458 = 0x5b5528;
    FUN_004031b7();
    puStack_450 = (undefined4 *)0x3;
    iStack_454 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_458 = 0x5b553e;
    FUN_004031b7();
    puStack_450 = (undefined4 *)0x3;
    iStack_454 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_458 = 0x5b5554;
    FUN_004031b7();
    puStack_450 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_454 = 0x5b5564;
    FUN_00403191();
    puStack_450 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_454 = 0x5b5574;
    FUN_00403191();
    puStack_450 = (undefined4 *)0x0;
    iStack_454 = 0;
    iStack_458 = 0xffffffff;
    iStack_45c = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_460 = 0;
    puStack_464 = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_46c = 0;
    iStack_470 = unaff_EBP + -0x128;
    iStack_474 = unaff_EBP + -0x108;
    iStack_478 = -1;
    puStack_47c = (undefined1 *)&puStack_464;
    FUN_00449713();
    iStack_484 = 0x5b55b7;
    puStack_47c = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &iStack_478;
    FUN_004033a1();
    puStack_47c = (undefined1 *)(unaff_EBP + -0x368);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_470 = 0x5b55ed;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x40) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (iVar4 != 0) {
      iStack_46c = 0x5b5603;
      iVar4 = FUN_0041a581();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_46c = 0x5b5614;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_46c = 0x5b562d;
      FUN_00878dfb();
    }
    iStack_46c = unaff_EBP + -0x1a8;
    iStack_470 = unaff_EBP + -0x188;
    iStack_474 = unaff_EBP + -0x168;
    iStack_478 = unaff_EBP + -0x148;
    puStack_47c = *(undefined1 **)(unaff_EBP + -0x14);
    iStack_484 = 0x5b5662;
    FUN_004250ac();
    iStack_46c = 0x5b566e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b5679;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_46c = 0x5b5691;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b569c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_46c = 0x5b56ac;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b56b7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_46c = 0x5b56c7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b56d2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_46c = 0x5b56e2;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b56ed;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_46c = 0x5b56fd;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b5708;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_46c = 0x5b5718;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b5723;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_46c = 0x5b5733;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b573e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_46c = 0x5b574e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_46c = 0x5b5759;
      FUN_00878dfb();
    }
    iStack_46c = 0x5b5766;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
    iStack_46c = unaff_EBP + -0x88;
    iStack_470 = 0x5b5773;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_46c = 0x5b577f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_46c = 0x5b578d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    iStack_46c = unaff_EBP + -0x68;
    iStack_470 = 0x5b5797;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_46c = 0x5b57a3;
      FUN_00878dfb();
    }
    iStack_46c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_470 = 0x5b57b9;
    FUN_004031b7();
    iStack_46c = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_470 = 0x5b57cb;
    FUN_004031b7();
    iStack_46c = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_470 = 0x5b57e1;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_46c = 0x5b57f1;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_46c = 0x5b5801;
    FUN_00403191();
    iStack_46c = 0;
    iStack_470 = 0xffffffff;
    iStack_474 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_478 = 0;
    puStack_47c = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_484 = 0;
    iStack_488 = unaff_EBP + -0x208;
    iStack_48c = unaff_EBP + -0x1e8;
    iStack_490 = -1;
    uVar5 = FUN_00449713(&puStack_47c);
    uVar5 = FUN_00456ad5(uVar5);
    *(int **)(unaff_EBP + -0x14) = &iStack_490;
    FUN_004033a1(uVar5);
    iVar4 = unaff_EBP + -0x3a8;
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_488 = 0x5b587a;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar4 != 0) {
      iStack_484 = 0x5b5890;
      iVar4 = FUN_0041a581();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_484 = 0x5b58a1;
        FUN_00878dfb();
      }
    }
    uVar5 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_484 = 0x5b58b7;
      FUN_00878dfb();
    }
    iStack_484 = unaff_EBP + -0x68;
    iStack_488 = unaff_EBP + -0x268;
    iStack_48c = unaff_EBP + -0x248;
    iStack_490 = unaff_EBP + -0x228;
    FUN_004250ac(unaff_EBP + -0x388,uVar5);
    iStack_484 = 0x5b58f3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b58fe;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_484 = 0x5b590f;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_484 = 0x5b591f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b592a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_484 = 0x5b593a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b5945;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_484 = 0x5b5955;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b5960;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_484 = 0x5b5970;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b597b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_484 = 0x5b598b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b5996;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_484 = 0x5b59a6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b59b1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_484 = 0x5b59be;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b59c9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_484 = 0x5b59d9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_484 = 0x5b59e4;
      FUN_00878dfb();
    }
    iStack_484 = 0x5b59f3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
    iStack_484 = unaff_EBP + -0x98;
    iStack_488 = 0x5b5a00;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_484 = 0x5b5a0c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_484 = 0x5b5a16;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_484 = unaff_EBP + -0x78;
    iStack_488 = 0x5b5a20;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_484 = 0x5b5a2c;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    if (piVar6 == (int *)0x0) {
      iStack_484 = 0x5b5a41;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_48c = *(undefined4 *)(unaff_EBP + -0x98);
    iStack_488 = *(undefined4 *)(unaff_EBP + -0x94);
    iVar4 = *piVar6;
    iStack_484 = *(undefined4 *)(unaff_EBP + -0x90);
    *(int **)(unaff_EBP + -0x14) = piVar6;
    iStack_490 = *(int *)(unaff_EBP + -0x6c);
    iVar4 = (**(code **)(iVar4 + 0x110))
                      (piVar6,0,*(undefined4 *)(unaff_EBP + -0x78),
                       *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70));
    if (iVar4 < 0) {
      piStack_3b0 = *(int **)(unaff_EBP + -0x14);
      uStack_3b8 = 0x5b5a7f;
      iStack_3b4 = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_3b0 = (int *)0x5b5a8c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_3b0 = (int *)0x5b5a97;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_3b0 = (int *)0x5b5aa7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_3b0 = (int *)0x5b5ab2;
      FUN_00878dfb();
    }
    piStack_3b0 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffc54;
    if (piStack_3b0 != (int *)0x0) {
      iStack_3b4 = 0x5b5aca;
      (**(code **)(*piStack_3b0 + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_3b0 = (int *)0x5b5ad3;
    FUN_00424e82();
    piStack_3b0 = (int *)0x5b5ada;
    FUN_00427af9();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
  } while (*(int *)(unaff_EBP + -0x20) < 2);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_3b0 = (int *)0x5b5b04;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



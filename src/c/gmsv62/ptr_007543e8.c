/* ptr_007543e8 - 0x007543e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007543e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined *puStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined *puStack_44;
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  undefined *puStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_20;
  
  while( true ) {
    *(int **)(unaff_EBP + 0x1c) = unaff_ESI;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 8);
    iVar1 = FUN_0040e53d();
    iVar2 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x18) = (iVar2 - iVar1) / 2 + 0x29 + *(int *)(unaff_EBP + -0x7c);
    FUN_0040e48b();
    FUN_0040e48b();
    iStack_20 = *(int *)(unaff_EBP + 0x1c);
    iVar1 = (**(code **)(*unaff_ESI + 0x80))();
    if (iVar1 < 0) {
      iStack_28 = *(int *)(unaff_EBP + 0x1c);
      piStack_30 = (int *)0x754466;
      iStack_2c = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_28 = 0x754476;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_28 = 0x754481;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      FUN_0045e2eb();
      iStack_28 = unaff_EBP + -0xe8;
      iStack_2c = 0x7544b2;
      FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      iStack_28 = 0x7544bf;
      FUN_00414f8b();
      iVar1 = *(int *)(unaff_EBP + -0xe8);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
    }
    else {
      iStack_28 = unaff_EBP + -0xd8;
      iStack_2c = 0x7544e1;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iStack_28 = 0x7544ee;
      FUN_00414f8b();
      iVar1 = *(int *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
    }
    if (iVar1 != 0) {
      iStack_28 = 0x754505;
      FUN_00434e38();
    }
    iStack_28 = 0x754512;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_28 = 0x754522;
    FUN_00403191();
    iStack_28 = unaff_EBP + -0x1b8;
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    iStack_2c = 0x75453c;
    iStack_2c = FUN_00449749();
    piStack_30 = (int *)0x754545;
    puStack_34 = (undefined *)FUN_00449713();
    *(int ***)(unaff_EBP + 0x1c) = &piStack_30;
    piStack_38 = (int *)0x754551;
    FUN_00448a17();
    puStack_34 = (undefined *)
                 (*(int *)(unaff_EBP + -0x48) + *(int *)(unaff_EBP + -0xf0) + 0x20 +
                 *(int *)(unaff_EBP + -0x7c));
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    piStack_38 = (int *)0x754570;
    FUN_004115d9();
    piStack_38 = (int *)0x754577;
    iVar2 = FUN_0040e48b();
    iVar1 = *(int *)(unaff_EBP + 0xc);
    piStack_38 = (int *)(iVar2 + 0x15 + iVar1);
    iStack_3c = 0x754587;
    FUN_004115d9();
    iStack_3c = 0x75458e;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_28 = 0x75459e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x7545a9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_28 = 0x7545b9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x7545c4;
      FUN_00878dfb();
    }
    iStack_28 = 0x7545d0;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    iStack_28 = 0x7545e3;
    iStack_2c = FUN_00449713();
    *(int **)(unaff_EBP + 0x1c) = &iStack_28;
    piStack_30 = (int *)0x7545ef;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    iStack_2c = 0x7545fb;
    FUN_0044974c();
    iStack_2c = 0x754602;
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_28 = 0x754615;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_28 = 0x754620;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        iStack_28 = unaff_EBP + -100;
        iStack_2c = 0x75464f;
        FUN_0084a5e4();
        iVar1 = ((100 - *(int *)(unaff_EBP + -0xfc)) * *(int *)(*(int *)(unaff_EBP + -0x90) + 100))
                / 100;
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        *(int *)(unaff_EBP + -0xa0) = *(int *)(unaff_EBP + -0xa0) + iVar1;
        *(int *)(unaff_EBP + -0x70) = iVar1;
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x60) + 100);
        *(int *)(unaff_EBP + -0xa4) = *(int *)(unaff_EBP + -0xa4) + iVar1;
        if (*(int *)(*(int *)(unaff_EBP + -0x90) + 0x20) == 0) {
          *(undefined4 *)(unaff_EBP + -0x28) = 100;
        }
        else {
          *(int *)(unaff_EBP + -0x28) = ((iVar1 - *(int *)(unaff_EBP + -0x70)) * 100) / iVar1;
        }
        iStack_28 = 0xff;
        iStack_2c = 0x7546ad;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iStack_28 = 0x7546c1;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          iStack_28 = 0x7546d1;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(int **)(unaff_EBP + -0x18) = piVar5;
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
        iVar1 = FUN_0040e48b();
        iStack_3c = iVar1 + *(int *)(unaff_EBP + 0xc) + 0x1a + *(int *)(unaff_EBP + -0x58);
        iVar2 = *(int *)(unaff_EBP + -0x48) + *(int *)(unaff_EBP + -0x7c);
        iVar1 = *piVar5;
        puStack_34 = *(undefined **)(unaff_EBP + -0x24);
        piStack_30 = *(int **)(unaff_EBP + -600);
        iStack_2c = *(int *)(unaff_EBP + -0x254);
        *(int *)(unaff_EBP + 0x1c) = iVar2;
        piStack_38 = (int *)(iVar2 + 0x25);
        iStack_28 = *(int *)(unaff_EBP + -0x250);
        piStack_40 = *(int **)(unaff_EBP + -0x18);
        puStack_44 = (undefined *)0x75471c;
        iVar1 = (**(code **)(iVar1 + 0x80))();
        if (iVar1 < 0) {
          puStack_44 = &DAT_00963cc8;
          iStack_48 = *(undefined4 *)(unaff_EBP + -0x18);
          uStack_50 = 0x75472e;
          iStack_4c = iVar1;
          FUN_00878e09();
        }
        puStack_44 = (undefined *)(unaff_EBP + -600);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_48 = 0x75473e;
        puStack_44 = (undefined *)FUN_00402bc3();
        if ((int)puStack_44 < 0) {
          iStack_48 = 0x754749;
          FUN_00878dfb();
        }
        iVar1 = *(int *)(unaff_EBP + -0x28) / 100;
        *(int *)(unaff_EBP + -0x74) = iVar1;
        if (0 < iVar1) {
          puStack_44 = (undefined *)0x3;
          iStack_48 = 0xff;
          iStack_4c = 0x75476f;
          FUN_004031b7();
          uVar3 = *(undefined4 *)(unaff_EBP + -0x2a0 + *(int *)(unaff_EBP + -0x74) * 4);
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            puStack_44 = (undefined *)0x80004003;
            iStack_48 = 0x754791;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x38) == 0) {
            puStack_44 = (undefined *)0x80004003;
            iStack_48 = 0x75479d;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_44 = (undefined *)0x80004003;
            iStack_48 = 0x7547ac;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x10);
          *(int **)(unaff_EBP + -0x18) = piVar5;
          puStack_44 = (undefined *)0x7547b9;
          iVar1 = FUN_0040e48b();
          puStack_44 = (undefined *)0x7547c3;
          iVar2 = FUN_0040e48b();
          uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
          uStack_50 = *(undefined4 *)(unaff_EBP + -0x1f8);
          iStack_5c = iVar2 + *(int *)(unaff_EBP + 0xc) + iVar1 + 0x1a + *(int *)(unaff_EBP + -0x58)
          ;
          iStack_4c = *(int *)(unaff_EBP + -500);
          iStack_58 = *(int *)(unaff_EBP + 0x1c) + 0x25;
          iStack_48 = *(undefined4 *)(unaff_EBP + -0x1f0);
          uStack_60 = *(undefined4 *)(unaff_EBP + -0x18);
          puStack_44 = *(undefined **)(unaff_EBP + -0x1ec);
          puStack_64 = (undefined *)0x7547f6;
          iVar1 = (**(code **)(*piVar5 + 0x80))();
          if (iVar1 < 0) {
            puStack_44 = &DAT_00963cc8;
            iStack_48 = *(undefined4 *)(unaff_EBP + -0x18);
            uStack_50 = 0x754808;
            iStack_4c = iVar1;
            FUN_00878e09();
          }
          puStack_44 = (undefined *)(unaff_EBP + -0x1f8);
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          iStack_48 = 0x754818;
          puStack_44 = (undefined *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x754823;
            FUN_00878dfb();
          }
        }
        iVar1 = *(int *)(unaff_EBP + -0x28) / 10;
        *(int *)(unaff_EBP + -0x24) = iVar1;
        if (0 < iVar1) {
          puStack_44 = (undefined *)0x3;
          iStack_48 = 0xff;
          iStack_4c = 0x754849;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          if (*(int *)(unaff_EBP + -0x74) < 1) {
            iVar1 = 0;
          }
          else {
            iVar1 = 5;
          }
          *(undefined4 *)(unaff_EBP + -0x2c) =
               *(undefined4 *)(unaff_EBP + -0x2a0 + ((*(int *)(unaff_EBP + -0x28) % 100) / 10) * 4);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            puStack_44 = (undefined *)0x80004003;
            iStack_48 = 0x754886;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x38) == 0) {
            puStack_44 = (undefined *)0x80004003;
            iStack_48 = 0x754892;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_44 = (undefined *)0x80004003;
            iStack_48 = 0x7548a4;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
          puStack_44 = (undefined *)0x7548b2;
          iVar2 = FUN_0040e48b();
          puStack_44 = (undefined *)0x7548bc;
          iVar4 = FUN_0040e48b();
          uStack_54 = *(undefined4 *)(unaff_EBP + -0x2c);
          iStack_5c = iVar4 + iVar1 + iVar2 + *(int *)(unaff_EBP + 0xc) + 0x1a +
                      *(int *)(unaff_EBP + -0x58);
          uStack_50 = *(undefined4 *)(unaff_EBP + -0x278);
          iStack_4c = *(int *)(unaff_EBP + -0x274);
          iStack_58 = *(int *)(unaff_EBP + 0x1c) + 0x25;
          iStack_48 = *(undefined4 *)(unaff_EBP + -0x270);
          uStack_60 = *(undefined4 *)(unaff_EBP + -0x18);
          puStack_44 = *(undefined **)(unaff_EBP + -0x26c);
          puStack_64 = (undefined *)0x7548f2;
          iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x80))();
          if (iVar1 < 0) {
            puStack_44 = &DAT_00963cc8;
            iStack_48 = *(undefined4 *)(unaff_EBP + -0x18);
            uStack_50 = 0x754904;
            iStack_4c = iVar1;
            FUN_00878e09();
          }
          puStack_44 = (undefined *)(unaff_EBP + -0x278);
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          iStack_48 = 0x754914;
          puStack_44 = (undefined *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x75491f;
            FUN_00878dfb();
          }
        }
        puStack_44 = (undefined *)0x3;
        iStack_48 = 0xff;
        iStack_4c = 0x754931;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        *(undefined4 *)(unaff_EBP + -0x34) = 5;
        if (*(int *)(unaff_EBP + -0x74) < 1) {
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
        *(undefined4 *)(unaff_EBP + -0x18) = 5;
        if (*(int *)(unaff_EBP + -0x24) < 1) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        *(undefined4 *)(unaff_EBP + -0x2c) =
             *(undefined4 *)(unaff_EBP + -0x2a0 + (*(int *)(unaff_EBP + -0x28) % 10) * 4);
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_44 = (undefined *)0x80004003;
          iStack_48 = 0x754978;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          puStack_44 = (undefined *)0x80004003;
          iStack_48 = 0x754983;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_44 = (undefined *)0x80004003;
          iStack_48 = 0x754992;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(int **)(unaff_EBP + -0x28) = piVar5;
        puStack_44 = (undefined *)0x75499f;
        iVar1 = FUN_0040e48b();
        puStack_44 = (undefined *)0x7549a9;
        iVar2 = FUN_0040e48b();
        uStack_54 = *(undefined4 *)(unaff_EBP + -0x2c);
        uStack_50 = *(undefined4 *)(unaff_EBP + -0x228);
        iStack_5c = iVar2 + *(int *)(unaff_EBP + 0xc) + iVar1 + *(int *)(unaff_EBP + -0x58) +
                    *(int *)(unaff_EBP + -0x18) + 0x1a + *(int *)(unaff_EBP + -0x34);
        iStack_4c = *(int *)(unaff_EBP + -0x224);
        iStack_58 = *(int *)(unaff_EBP + 0x1c) + 0x25;
        iStack_48 = *(int *)(unaff_EBP + -0x220);
        uStack_60 = *(undefined4 *)(unaff_EBP + -0x28);
        puStack_44 = *(undefined **)(unaff_EBP + -0x21c);
        puStack_64 = (undefined *)0x7549e2;
        iVar1 = (**(code **)(*piVar5 + 0x80))();
        if (iVar1 < 0) {
          puStack_64 = &DAT_00963cc8;
          uStack_68 = *(undefined4 *)(unaff_EBP + -0x28);
          uStack_70 = 0x7549f4;
          iStack_6c = iVar1;
          FUN_00878e09();
        }
        puStack_64 = (undefined *)(unaff_EBP + -0x228);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        uStack_68 = 0x754a04;
        puStack_64 = (undefined *)FUN_00402bc3();
        if ((int)puStack_64 < 0) {
          uStack_68 = 0x754a11;
          FUN_00878dfb();
        }
        puStack_64 = (undefined *)0x3;
        uStack_68 = 0xff;
        iStack_6c = 0x754a23;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        *(undefined4 *)(unaff_EBP + -0x34) = 5;
        if (*(int *)(unaff_EBP + -0x74) < 1) {
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
        iVar1 = *(int *)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -0x24) = 5;
        if (iVar1 < 1) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_64 = (undefined *)0x80004003;
          uStack_68 = 0x754a55;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          puStack_64 = (undefined *)0x80004003;
          uStack_68 = 0x754a60;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_64 = (undefined *)0x80004003;
          uStack_68 = 0x754a6f;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(int **)(unaff_EBP + -0x18) = piVar5;
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x98);
        puStack_64 = (undefined *)0x754a85;
        iVar1 = FUN_0040e48b();
        puStack_64 = (undefined *)0x754a8f;
        iVar2 = FUN_0040e48b();
        uStack_74 = *(undefined4 *)(unaff_EBP + -0x2c);
        uStack_70 = *(undefined4 *)(unaff_EBP + -0x218);
        iStack_7c = iVar2 + *(int *)(unaff_EBP + 0xc) + iVar1 + *(int *)(unaff_EBP + -0x58) +
                    *(int *)(unaff_EBP + -0x24) + 0x1f + *(int *)(unaff_EBP + -0x34);
        iStack_6c = *(int *)(unaff_EBP + -0x214);
        iStack_78 = *(int *)(unaff_EBP + 0x1c) + 0x25;
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x210);
        uStack_80 = *(undefined4 *)(unaff_EBP + -0x18);
        puStack_64 = *(undefined **)(unaff_EBP + -0x20c);
        puStack_84 = (undefined4 *)0x754ac8;
        iVar1 = (**(code **)(*piVar5 + 0x80))();
        if (iVar1 < 0) {
          puStack_84 = (undefined4 *)&DAT_00963cc8;
          iStack_88 = *(int *)(unaff_EBP + -0x18);
          iStack_90 = 0x754ada;
          iStack_8c = iVar1;
          FUN_00878e09();
        }
        puStack_84 = (undefined4 *)(unaff_EBP + -0x218);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_88 = 0x754aea;
        puStack_84 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_84 < 0) {
          iStack_88 = 0x754af5;
          FUN_00878dfb();
        }
        iVar1 = *(int *)(unaff_EBP + -0x60);
        puStack_84 = (undefined4 *)0xa4c;
        iStack_88 = unaff_EBP + -0x100;
        iStack_8c = 0x754b0e;
        piVar5 = (int *)FUN_00679d86();
        puStack_84 = *(undefined4 **)(iVar1 + 100);
        iStack_88 = *piVar5;
        iStack_8c = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        iStack_90 = 0x754b21;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        puStack_84 = (undefined4 *)0x754b33;
        FUN_00402676();
        iStack_88 = 0x754b3f;
        puStack_84 = unaff_EBX;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_88 = 0x754b4f;
        puStack_84 = unaff_EBX;
        FUN_00403191();
        puStack_84 = (undefined4 *)(unaff_EBP + -0x168);
        iStack_88 = unaff_EBP + -0x268;
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        iStack_8c = 0x754b69;
        iStack_8c = FUN_00449749();
        iStack_90 = 0x754b72;
        uVar3 = FUN_00411641();
        *(int **)(unaff_EBP + -0x2c) = &iStack_90;
        FUN_004033a1(uVar3);
        iVar4 = (*(int *)(unaff_EBP + -0xac) + 1) * 0x35 + *(int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        *(int *)(unaff_EBP + -0x34) = iVar4;
        FUN_004115d9(iVar4);
        iVar1 = FUN_0040e48b();
        iVar2 = *(int *)(unaff_EBP + 0xc);
        iVar1 = iVar1 + 0x15 + iVar2;
        FUN_004115d9(iVar1);
        FUN_00448e3a(iVar1,iVar4);
        puStack_84 = (undefined4 *)(unaff_EBP + -0x268);
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_88 = 0x754bcb;
        puStack_84 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_84 < 0) {
          iStack_88 = 0x754bd6;
          FUN_00878dfb();
        }
        puStack_84 = (undefined4 *)(unaff_EBP + -0x168);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_88 = 0x754be6;
        puStack_84 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_84 < 0) {
          iStack_88 = 0x754bf1;
          FUN_00878dfb();
        }
        iStack_88 = 0x754bfd;
        puStack_84 = unaff_EBX;
        FUN_00403191();
        puStack_84 = (undefined4 *)(unaff_EBP + -0x188);
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        iStack_88 = 0x754c10;
        iStack_8c = FUN_00411641();
        *(int **)(unaff_EBP + -0x2c) = &iStack_88;
        iStack_90 = 0x754c1c;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        iStack_8c = 0x754c28;
        FUN_0044974c();
        iStack_8c = 0x754c2f;
        uVar3 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
        puStack_84 = (undefined4 *)(unaff_EBP + -0x188);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_88 = 0x754c42;
        puStack_84 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_84 < 0) {
          iStack_88 = 0x754c4d;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_84 = (undefined4 *)0x80004003;
          iStack_88 = 0x754c5d;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_84 = (undefined4 *)0x80004003;
          iStack_88 = 0x754c6d;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        puStack_84 = (undefined4 *)0x754c78;
        iVar1 = FUN_0040e48b();
        puStack_84 = (undefined4 *)0xffffffff;
        iStack_88 = 1;
        iStack_8c = *(int *)(unaff_EBP + -0x48) + 2;
        iStack_90 = *(int *)(unaff_EBP + 0x1c) + 0x39;
        iVar1 = (**(code **)(*piVar5 + 0x8c))(piVar5,iVar1 + 0x15 + iVar2);
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,piVar5,&DAT_00963cc8);
        }
        FUN_004031b7(0xff,3);
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(int **)(unaff_EBP + -0x24) = piVar5;
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x4c);
        iVar1 = FUN_0040e48b();
        iVar1 = (**(code **)(*piVar5 + 0x80))
                          (*(undefined4 *)(unaff_EBP + -0x24),
                           iVar1 + *(int *)(unaff_EBP + 0xc) + 0x1f + *(int *)(unaff_EBP + -0x48),
                           *(int *)(unaff_EBP + 0x1c) + 0x36,*(undefined4 *)(unaff_EBP + -0x2c),
                           *(undefined4 *)(unaff_EBP + -0x1a8),*(undefined4 *)(unaff_EBP + -0x1a4),
                           *(undefined4 *)(unaff_EBP + -0x1a0),*(undefined4 *)(unaff_EBP + -0x19c));
        if (iVar1 < 0) {
          iStack_28 = *(int *)(unaff_EBP + -0x24);
          piStack_30 = (int *)0x754d33;
          iStack_2c = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_28 = 0x754d43;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_28 = 0x754d4e;
          FUN_00878dfb();
        }
        iStack_28 = unaff_EBP + -0x108;
        iStack_2c = 0x754d64;
        piVar5 = (int *)FUN_00679d86();
        iStack_28 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        iStack_2c = unaff_EBP + -0x1c;
        piStack_30 = (int *)0x754d77;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        FUN_00402676();
        iStack_28 = 0x754d98;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x128));
        iStack_28 = unaff_EBP + -0x128;
        iStack_2c = 0x754da5;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          iStack_28 = 0x754db1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        iStack_28 = 0x754dc1;
        FUN_00403191();
        iStack_28 = unaff_EBP + -0x1c8;
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        iStack_2c = 0x754ddb;
        iStack_2c = FUN_00449749();
        piStack_30 = (int *)0x754de4;
        puStack_34 = (undefined *)FUN_00411641();
        *(int ***)(unaff_EBP + -0x2c) = &piStack_30;
        piStack_38 = (int *)0x754df0;
        piStack_30 = extraout_ECX;
        FUN_004033a1();
        puStack_34 = *(undefined **)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        piStack_38 = (int *)0x754dff;
        FUN_004115d9();
        piStack_38 = (int *)0x754e06;
        iVar1 = FUN_0040e48b();
        piStack_38 = (int *)0x754e10;
        FUN_004115d9();
        piStack_38 = (int *)0x754e17;
        iVar2 = FUN_0040e48b();
        piStack_38 = (int *)(iVar2 + *(int *)(unaff_EBP + 0xc) + iVar1 + 0x24 +
                            *(int *)(unaff_EBP + -0x48));
        iStack_3c = 0x754e2e;
        FUN_004115d9();
        iStack_3c = 0x754e35;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        iStack_28 = 0x754e45;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_28 = 0x754e50;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_28 = 0x754e60;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_28 = 0x754e6b;
          FUN_00878dfb();
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x90) + 0x28) != 0) {
          iStack_28 = unaff_EBP + -0xdc;
          iStack_2c = 0x754e91;
          piVar5 = (int *)FUN_00679d86();
          iStack_28 = *piVar5;
          iStack_2c = unaff_EBP + -0x1c;
          *(undefined1 *)(unaff_EBP + -4) = 0x51;
          piStack_30 = (int *)0x754ea4;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          FUN_00402676();
          iStack_28 = 0x754ebf;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x138));
          iStack_28 = unaff_EBP + -0x138;
          iStack_2c = 0x754ecc;
          iVar1 = FUN_00402e32();
          if (iVar1 < 0) {
            iStack_28 = 0x754ed8;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x52;
          iStack_28 = 0x754ee5;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
          iStack_28 = unaff_EBP + -0x148;
          iStack_2c = 0x754ef2;
          iVar1 = FUN_00402e32();
          if (iVar1 < 0) {
            iStack_28 = 0x754efe;
            FUN_00878dfb();
          }
          iStack_28 = unaff_EBP + -0x148;
          *(undefined1 *)(unaff_EBP + -4) = 0x53;
          iStack_2c = 0x754f18;
          iStack_2c = FUN_00449749();
          piStack_30 = (int *)0x754f21;
          puStack_34 = (undefined *)FUN_00411641();
          *(int ***)(unaff_EBP + -0x2c) = &piStack_30;
          piStack_38 = (int *)0x754f2d;
          piStack_30 = extraout_ECX_00;
          FUN_004033a1();
          puStack_34 = (undefined *)(*(int *)(unaff_EBP + 0x1c) + 0x45);
          *(undefined1 *)(unaff_EBP + -4) = 0x53;
          piStack_38 = (int *)0x754f40;
          FUN_004115d9();
          piStack_38 = (int *)0x754f47;
          iVar1 = FUN_0040e48b();
          piStack_38 = (int *)(iVar1 + 0x15 + *(int *)(unaff_EBP + 0xc));
          iStack_3c = 0x754f57;
          FUN_004115d9();
          iStack_3c = 0x754f5e;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x52;
          iStack_28 = 0x754f6e;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_28 = 0x754f79;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          iStack_28 = 0x754f89;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_28 = 0x754f94;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int *)(unaff_EBP + -0x60) != 0) {
          iStack_28 = 0x754fac;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x60) = 0;
        }
      }
      else {
        iStack_28 = unaff_EBP + -0x3c;
        iStack_2c = 0x754fce;
        piVar5 = (int *)FUN_00679d86();
        iStack_28 = *piVar5;
        iStack_2c = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        piStack_30 = (int *)0x754fe1;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        FUN_00402676();
        iStack_28 = 0x754fff;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
        iStack_28 = unaff_EBP + -0x8c;
        iStack_2c = 0x75500c;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          iStack_28 = 0x755018;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        iStack_28 = 0x755025;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
        iStack_28 = unaff_EBP + -0xc4;
        iStack_2c = 0x755032;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          iStack_28 = 0x75503e;
          FUN_00878dfb();
        }
        iStack_28 = unaff_EBP + -0xc4;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        iStack_2c = 0x755058;
        iStack_2c = FUN_00449749();
        piStack_30 = (int *)0x755061;
        puStack_34 = (undefined *)FUN_00411641();
        *(int ***)(unaff_EBP + 0xc) = &piStack_30;
        piStack_38 = (int *)0x75506d;
        piStack_30 = extraout_ECX_01;
        FUN_004033a1();
        puStack_34 = (undefined *)((*(int *)(unaff_EBP + -0xac) + 1) * 0x35);
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        piStack_38 = (int *)0x755084;
        FUN_004115d9();
        piStack_38 = (int *)0x75508b;
        iVar2 = FUN_0040e48b();
        piStack_38 = (int *)(iVar2 + 0x15 + iVar1);
        iStack_3c = 0x755098;
        FUN_004115d9();
        iStack_3c = 0x75509f;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        iStack_28 = 0x7550af;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_28 = 0x7550ba;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_28 = 0x7550ca;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_28 = 0x7550d5;
          FUN_00878dfb();
        }
      }
    }
    iStack_28 = 0xff;
    iStack_2c = 0x7550e7;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_28 = 0x7550fb;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    puStack_34 = *(undefined **)(unaff_EBP + -0x9c);
    piStack_30 = *(int **)(unaff_EBP + -0xd4);
    iStack_2c = *(int *)(unaff_EBP + -0xd0);
    piStack_38 = (int *)(*(int *)(unaff_EBP + -0x7c) + 0x56);
    iStack_3c = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_28 = *(int *)(unaff_EBP + -0xcc);
    puStack_44 = (undefined *)0x755126;
    piStack_40 = piVar5;
    iVar1 = (**(code **)(*piVar5 + 0x80))();
    if (iVar1 < 0) {
      param_4 = 0x755138;
      param_5 = iVar1;
      param_6 = piVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    param_6 = (int *)0x755148;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      param_6 = (int *)0x755153;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      param_6 = (int *)0x755170;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0x90) != 0) {
      param_6 = (int *)0x755188;
      FUN_0045e794();
      *(undefined4 *)(unaff_EBP + -0x90) = 0;
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    if (*(int *)(unaff_EBP + -0x68) <= *(int *)(unaff_EBP + -0x20)) break;
    iVar1 = *(int *)(unaff_EBP + -0x6c);
    if (*(int *)(unaff_EBP + -0x20) < iVar1) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0xb0);
    }
    *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0x20) - iVar1;
    param_6 = (int *)(unaff_EBP + -0x94);
    param_5 = 0x754100;
    FUN_0084a5e4();
    *(uint *)(unaff_EBP + -0x48) =
         (-(uint)(*(int *)(*(int *)(unaff_EBP + -0x90) + 0x28) != 0) & 0xfffffff7) + 9;
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x90) + 0xc);
    if ((iVar1 < 90000000) || (*(undefined4 *)(unaff_EBP + -0x28) = 1, 90999999 < iVar1)) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      param_6 = (int *)0x0;
      param_5 = 0x75414d;
      param_5 = FUN_0045e2eb();
      param_4 = unaff_EBP + -0xe0;
      param_3 = 0x75415c;
      puVar6 = (undefined4 *)FUN_005536ce();
      param_6 = (int *)0x754166;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                 (IBinding *)*puVar6);
      FUN_004125e6();
    }
    else {
      *(undefined4 *)(unaff_EBP + 0x1c) = 0;
      param_6 = (int *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      param_5 = 0x75419a;
      puVar6 = (undefined4 *)FUN_00679d22();
      param_6 = (int *)*puVar6;
      param_5 = unaff_EBP + 0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      param_4 = 0x7541ad;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (*(int *)(unaff_EBP + -0x10c) != 0) {
        param_6 = (int *)0x7541c7;
        FUN_00434e38();
      }
      param_6 = (int *)0x7541d9;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      param_6 = (int *)0x7541e9;
      FUN_00403191();
      param_6 = (int *)0x0;
      param_5 = 0xffffffff;
      param_4 = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      param_3 = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      param_6 = (int *)0x0;
      param_5 = unaff_EBP + -0x248;
      param_4 = unaff_EBP + -0x178;
      param_3 = 0xffffffff;
      FUN_00449713();
      FUN_00456ad5();
      *(int **)(unaff_EBP + -0x2c) = &param_3;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      param_5 = 0x754262;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x104) = uVar3;
      param_6 = (int *)0x754277;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        param_6 = (int *)0x754288;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      param_6 = (int *)0x754298;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        param_6 = (int *)0x7542a3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      param_6 = (int *)0x7542b3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        param_6 = (int *)0x7542be;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      param_6 = (int *)0x7542ce;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        param_6 = (int *)0x7542d9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + 0x1c) != 0) {
        param_6 = (int *)0x7542ed;
        FUN_00434e38();
      }
    }
    unaff_EBX = &DAT_00980690;
    param_6 = (int *)0xff;
    param_5 = 0x754300;
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (piVar5 == (int *)0x0) {
      param_6 = (int *)0x754315;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    param_3 = *(int *)(unaff_EBP + -0x14);
    param_4 = *(undefined4 *)(unaff_EBP + -0x198);
    param_5 = *(int *)(unaff_EBP + -0x194);
    *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0xac) * 0x35;
    *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + 0xc) + 0xd;
    iVar1 = *piVar5;
    param_6 = *(int **)(unaff_EBP + -400);
    *(int **)(unaff_EBP + 0x1c) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 8);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    unaff_ESI = *(int **)(unaff_EBP + -0x10);
  }
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      param_6 = (int *)0x7551b7;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(unaff_EBP + -0x78);
    param_6 = (int *)0x1;
    param_5 = *(int *)(*(int *)(unaff_EBP + -0x54) + 0xc) + -0x14;
    param_4 = iVar1 + 0x23;
    param_3 = 0xd;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar5;
    *(int **)(unaff_EBP + 0x18) = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      iStack_20 = *(int *)(unaff_EBP + 0x18);
      iStack_28 = 0x75524a;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_20 = 0x75525a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_20 = 0x755265;
      FUN_00878dfb();
    }
    iStack_20 = unaff_EBP + 0x18;
    piVar5 = (int *)FUN_00679d86();
    iStack_20 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    iStack_28 = 0x75528e;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00402676();
    iStack_20 = 0x7552ac;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
    iStack_20 = unaff_EBP + -0xc4;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_20 = 0x7552ca;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    iStack_20 = 0x7552d7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    iStack_20 = unaff_EBP + -0x8c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_20 = 0x7552f0;
      FUN_00878dfb();
    }
    iStack_20 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    FUN_00449749();
    iStack_28 = 0x755313;
    iStack_2c = FUN_00411641();
    *(int **)(unaff_EBP + 0x18) = &iStack_28;
    piStack_30 = (int *)0x75531f;
    FUN_004033a1();
    iStack_2c = iVar1 + 0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    piStack_30 = (int *)0x75532f;
    FUN_004115d9();
    piStack_30 = (int *)0x755336;
    iVar1 = FUN_0040e48b();
    piStack_30 = (int *)(iVar1 + 0x10);
    puStack_34 = (undefined *)0x755342;
    FUN_004115d9();
    puStack_34 = (undefined *)0x755349;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    iStack_20 = 0x755359;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_20 = 0x755364;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_20 = 0x755374;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_20 = 0x75537f;
      FUN_00878dfb();
    }
    iStack_20 = 0x755388;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    iStack_20 = unaff_EBP + -0x8c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_20 = 0x7553a1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iStack_20 = 0x7553b4;
    FUN_00411641();
    *(int **)(unaff_EBP + 0x18) = &iStack_20;
    iStack_28 = 0x7553c0;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    FUN_0044974c();
    iVar1 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_20 = 0x7553e5;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_20 = 0x7553f0;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      iStack_20 = 0x755401;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_20 = 0x75540d;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    iStack_2c = FUN_0040e48b();
    iStack_20 = 1;
    iStack_28 = *(int *)(unaff_EBP + -0x78) + 0x31;
    iStack_2c = iStack_2c + 0x10;
    puStack_34 = (undefined *)0x755434;
    piStack_30 = piVar5;
    iStack_3c = (**(code **)(*piVar5 + 0x8c))();
    if (iStack_3c < 0) {
      puStack_34 = &DAT_00963cc8;
      piStack_40 = (int *)0x755444;
      piStack_38 = piVar5;
      FUN_00878e09();
    }
    puStack_34 = (undefined *)0x3;
    piStack_38 = (int *)0xff;
    iStack_3c = 0x755456;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      puStack_34 = (undefined *)0x80004003;
      piStack_38 = (int *)0x755466;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_34 = (undefined *)0x80004003;
      piStack_38 = (int *)0x755472;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 0x18) = piVar5;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x4c);
    puStack_34 = (undefined *)0x755486;
    iVar2 = FUN_0040e48b();
    puStack_44 = *(undefined **)(unaff_EBP + 0xc);
    piStack_40 = *(int **)(unaff_EBP + -0xd4);
    iStack_3c = *(undefined4 *)(unaff_EBP + -0xd0);
    iStack_48 = *(int *)(unaff_EBP + -0x78) + 0x2d;
    iStack_4c = iVar2 + 0x1a + iVar1;
    piStack_38 = *(int **)(unaff_EBP + -0xcc);
    uStack_50 = *(undefined4 *)(unaff_EBP + 0x18);
    puStack_34 = *(undefined **)(unaff_EBP + -200);
    uStack_54 = 0x7554af;
    iVar1 = (**(code **)(*piVar5 + 0x80))();
    if (iVar1 < 0) {
      param_6 = *(int **)(unaff_EBP + 0x18);
      param_4 = 0x7554c1;
      param_5 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    param_6 = (int *)0x7554d1;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      param_6 = (int *)0x7554dc;
      FUN_00878dfb();
    }
    param_6 = (int *)(unaff_EBP + 0x18);
    param_5 = 0x7554ef;
    puVar6 = (undefined4 *)FUN_00679d86();
    param_6 = (int *)*puVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    param_5 = unaff_EBP + -0x1c;
    param_4 = 0x755505;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00402676();
    param_6 = (int *)0x755523;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
    param_6 = (int *)(unaff_EBP + -0xc4);
    param_5 = 0x755535;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      param_6 = (int *)0x755541;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 99;
    param_6 = (int *)0x75554e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    param_6 = (int *)(unaff_EBP + -0x8c);
    param_5 = 0x75555b;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      param_6 = (int *)0x755567;
      FUN_00878dfb();
    }
    param_6 = (int *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 100;
    param_5 = 0x755581;
    param_5 = FUN_00449749();
    param_4 = 0x75558a;
    param_3 = FUN_00411641();
    *(int **)(unaff_EBP + 0x18) = &param_4;
    param_4 = extraout_ECX_02;
    FUN_004033a1();
    iVar1 = *(int *)(unaff_EBP + -0x78);
    param_3 = iVar1 + 0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 100;
    FUN_004115d9();
    FUN_0040e48b();
    FUN_004115d9();
    FUN_0040e48b();
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 99;
    param_6 = (int *)0x7555e7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      param_6 = (int *)0x7555f2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    param_6 = (int *)0x755602;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      param_6 = (int *)0x75560d;
      FUN_00878dfb();
    }
    param_6 = (int *)(iVar1 + 0x41);
    param_5 = 0x755620;
    FUN_007509d5();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    param_6 = (int *)0x75564c;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    param_6 = (int *)0x75566c;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    param_6 = (int *)0x75567d;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    param_6 = (int *)0x75568e;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    param_6 = (int *)0x75569f;
    (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (*(int **)(unaff_EBP + -0x9c) != (int *)0x0) {
    param_6 = (int *)0x7556b3;
    (**(code **)(**(int **)(unaff_EBP + -0x9c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int **)(unaff_EBP + -0x98) != (int *)0x0) {
    param_6 = (int *)0x7556c7;
    (**(code **)(**(int **)(unaff_EBP + -0x98) + 8))();
  }
  param_6 = (int *)0xa;
  param_5 = 4;
  param_4 = unaff_EBP + -0x2a0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  param_3 = 0x7556e0;
  FUN_0087a0b8();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    param_6 = (int *)0x7556f1;
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    param_6 = (int *)0x755702;
    (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    param_6 = (int *)0x755716;
    FUN_0045e794();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_006ad95e - 0x006ad95e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ad95e(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  int *piStack_18c;
  undefined4 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int *piStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined *puStack_158;
  int *piStack_154;
  undefined *puStack_150;
  int *piStack_14c;
  undefined1 *puStack_148;
  int iStack_144;
  undefined1 *puStack_140;
  int *piStack_13c;
  undefined4 *puStack_138;
  int *piStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  undefined *puStack_128;
  int *piStack_124;
  undefined *puStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 *puStack_f4;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x578);
  iVar7 = *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((*(int *)(unaff_EBP + 8) != iVar2) || (iVar7 != *(int *)(extraout_ECX + 0x57c))) {
    *(int *)(extraout_ECX + 0x578) = *(int *)(unaff_EBP + 8);
    *(int *)(extraout_ECX + 0x57c) = iVar7;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    puStack_f4 = (undefined4 *)0x3af;
    iStack_f8 = unaff_EBP + -0x1c;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_fc = 0x6ad9b5;
    puVar1 = (undefined4 *)FUN_00679d86();
    uStack_fc = *puVar1;
    puStack_f4 = (undefined4 *)0x0;
    iStack_f8 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_100 = 0x6ad9c6;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_f4 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      iStack_f8 = 0x6ad9dc;
      FUN_00403384();
    }
    puStack_f4 = &DAT_00980690;
    iStack_f8 = 0x6ad9eb;
    FUN_00403191();
    puStack_f4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_f8 = 0x6ad9f8;
    FUN_00403191();
    piStack_11c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_11c == (int *)0x0) {
      puStack_f4 = (undefined4 *)0x80004003;
      iStack_f8 = 0x6ada0d;
      FUN_00878dfb();
      piStack_11c = *(int **)(unaff_EBP + -0x10);
    }
    uStack_114 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x20);
    uStack_100 = *(undefined4 *)(unaff_EBP + -0x60);
    uStack_fc = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_f8 = *(undefined4 *)(unaff_EBP + -0x58);
    puStack_f4 = *(undefined4 **)(unaff_EBP + -0x54);
    uStack_110 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_10c = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
    uStack_118 = *(undefined4 *)(unaff_EBP + -0x1c);
    iVar2 = *piStack_11c;
    uStack_108 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x28) = piStack_11c;
    uStack_104 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_120 = (undefined *)0x6ada41;
    iVar2 = (**(code **)(iVar2 + 0x2c))();
    if (iVar2 < 0) {
      puStack_120 = &DAT_00963cc8;
      piStack_124 = *(int **)(unaff_EBP + -0x28);
      piStack_12c = (int *)0x6ada53;
      puStack_128 = (undefined *)iVar2;
      FUN_00878e09();
    }
    puStack_120 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_124 = (int *)0x6ada60;
    puStack_120 = (undefined *)FUN_00402bc3();
    if ((int)puStack_120 < 0) {
      piStack_124 = (int *)0x6ada6b;
      FUN_00878dfb();
    }
    puStack_120 = (undefined *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_124 = (int *)0x6ada77;
    puStack_120 = (undefined *)FUN_00402bc3();
    if ((int)puStack_120 < 0) {
      piStack_124 = (int *)0x6ada82;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_120 = (undefined *)0x80004003;
      piStack_124 = (int *)0x6ada91;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    puStack_120 = (undefined *)0x0;
    puStack_128 = (undefined *)0x6ada9b;
    piStack_124 = piVar4;
    puVar1 = (undefined4 *)(**(code **)(*piVar4 + 0x70))();
    if ((int)puVar1 < 0) {
      puStack_128 = &DAT_00963cc8;
      piStack_134 = (int *)0x6adaab;
      puStack_130 = puVar1;
      piStack_12c = piVar4;
      FUN_00878e09();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_128 = (undefined *)0x80004003;
      piStack_12c = (int *)0x6adaba;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    puStack_128 = (undefined *)0x0;
    puStack_130 = (undefined4 *)0x6adac4;
    piStack_12c = piVar4;
    puVar1 = (undefined4 *)(**(code **)(*piVar4 + 0x78))();
    if ((int)puVar1 < 0) {
      puStack_130 = (undefined4 *)&DAT_00963cc8;
      piStack_13c = (int *)0x6adad4;
      puStack_138 = puVar1;
      piStack_134 = piVar4;
      FUN_00878e09();
    }
    puStack_130 = &DAT_00980690;
    piStack_134 = (int *)0x6adae5;
    FUN_00403191();
    puStack_130 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_134 = (int *)0x6adaf5;
    FUN_00403191();
    puStack_130 = (undefined4 *)0x0;
    piStack_134 = (int *)0x0;
    puStack_138 = (undefined4 *)(unaff_EBP + -0x90);
    piStack_13c = (int *)(unaff_EBP + -0xa0);
    puStack_148 = (undefined1 *)&puStack_140;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_140;
    iStack_144 = 0x75a;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_14c = (int *)0x6adb21;
    FUN_00679e4e();
    iStack_144 = unaff_EBP + -0xf0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_148 = (undefined1 *)0x6adb31;
    FUN_00405a1d();
    puStack_148 = (undefined1 *)0x6adb38;
    FUN_00402660();
    puStack_148 = (undefined1 *)0x6adb3f;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_138 = (undefined4 *)0x6adb4a;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -100) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar2 != 0) {
      puStack_130 = (undefined4 *)(unaff_EBP + -100);
      piStack_134 = (int *)0x6adb65;
      puStack_130 = (undefined4 *)FUN_00404b30();
      if (((int)puStack_130 < 0) && (puStack_130 != (undefined4 *)0x80004002)) {
        piStack_134 = (int *)0x6adb73;
        FUN_00878dfb();
      }
    }
    puStack_130 = (undefined4 *)(unaff_EBP + -0xf0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_134 = (int *)0x6adb83;
    puStack_130 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_130 < 0) {
      piStack_134 = (int *)0x6adb8e;
      FUN_00878dfb();
    }
    puStack_130 = (undefined4 *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_134 = (int *)0x6adb9e;
    puStack_130 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_130 < 0) {
      piStack_134 = (int *)0x6adba9;
      FUN_00878dfb();
    }
    puStack_130 = (undefined4 *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_134 = (int *)0x6adbb9;
    puVar3 = (undefined4 *)FUN_00402bc3();
    puVar1 = puStack_130;
    if ((int)puVar3 < 0) {
      piStack_134 = (int *)0x6adbc4;
      puStack_130 = puVar3;
      FUN_00878dfb();
      puVar1 = extraout_ECX_00;
    }
    if (*(int *)(unaff_EBP + 8) == *(int *)(unaff_EBP + 0xc)) {
      puStack_130 = (undefined4 *)0x3;
      piStack_134 = (int *)0xfffffffe;
      puStack_138 = (undefined4 *)0x6adbdc;
      FUN_004031b7();
      puStack_130 = (undefined4 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_134 = (int *)0x6adbec;
      piVar4 = (int *)FUN_004489f5();
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (iVar2 == 0) {
        puStack_130 = (undefined4 *)0x80004003;
        piStack_134 = (int *)0x6adc00;
        FUN_00878dfb();
      }
      puStack_130 = (undefined4 *)(unaff_EBP + -0x3c);
      piStack_134 = (int *)(unaff_EBP + 0xc);
      puStack_138 = (undefined4 *)0x6adc0f;
      FUN_0041141a();
      puStack_130 = (undefined4 *)0x6adc17;
      FUN_004125e6();
      puStack_130 = (undefined4 *)0x6adc1f;
      FUN_00412600();
      puStack_130 = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_134 = (int *)0x6adc2c;
      puVar3 = (undefined4 *)FUN_00402bc3();
      puVar1 = puStack_130;
      if ((int)puVar3 < 0) {
        piStack_134 = (int *)0x6adc37;
        puStack_130 = puVar3;
        FUN_00878dfb();
        puVar1 = extraout_ECX_01;
      }
      puStack_130 = (undefined4 *)0x0;
      piStack_134 = (int *)0x0;
      puStack_140 = (undefined1 *)&puStack_138;
      *(undefined4 ***)(unaff_EBP + 0xc) = &puStack_138;
      piStack_13c = (int *)0x674;
      iStack_144 = 0x6adc4c;
      puStack_138 = puVar1;
      FUN_00679e4e();
      piStack_13c = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_140 = (undefined1 *)0x6adc5c;
      FUN_0040263d();
      puStack_140 = (undefined1 *)0x6adc63;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_138 = (undefined4 *)0x6adc6e;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        puStack_130 = (undefined4 *)(unaff_EBP + -0x1c);
        piStack_134 = (int *)0x6adc84;
        puStack_130 = (undefined4 *)FUN_00404b30();
        if (((int)puStack_130 < 0) && (puStack_130 != (undefined4 *)0x80004002)) {
          piStack_134 = (int *)0x6adc95;
          FUN_00878dfb();
        }
      }
      puStack_130 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_134 = (int *)0x6adca2;
      puStack_130 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_130 < 0) {
        piStack_134 = (int *)0x6adcad;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      while( true ) {
        puStack_130 = (undefined4 *)0x6adcbd;
        FUN_0087a1b0();
        piStack_134 = *(int **)(unaff_EBP + 8);
        puStack_138 = (undefined4 *)0x6adcc8;
        puStack_130 = &piStack_12c;
        piStack_134 = (int *)FUN_00412335();
        *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_130;
        puStack_138 = (undefined4 *)0x6adcd6;
        FUN_00402e8e();
        piStack_134 = (int *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_138 = (undefined4 *)0x6adce6;
        FUN_0040263d();
        puStack_138 = (undefined4 *)0x6adced;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(short *)(unaff_EBP + -0x60) == 0) break;
        puStack_130 = (undefined4 *)(unaff_EBP + -0x60);
        piStack_134 = (int *)(unaff_EBP + -100);
        puStack_138 = (undefined4 *)0x6add08;
        puStack_130 = (undefined4 *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_134 = (int *)0x6add17;
        FUN_004172b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_130 = (undefined4 *)0x6add23;
        FUN_004027b3();
        piVar4 = *(int **)(unaff_EBP + 0xc);
        if (piVar4 == (int *)0x0) {
          puStack_130 = (undefined4 *)0x6addc1;
          FUN_004125e6();
          break;
        }
        puStack_130 = (undefined4 *)0x0;
        puStack_138 = (undefined4 *)0x6add37;
        piStack_134 = piVar4;
        puVar5 = (undefined1 *)(**(code **)(*piVar4 + 0x70))();
        if ((int)puVar5 < 0) {
          puStack_138 = (undefined4 *)&DAT_00963cc8;
          iStack_144 = 0x6add43;
          puStack_140 = puVar5;
          piStack_13c = piVar4;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          puStack_138 = (undefined4 *)0x80004003;
          piStack_13c = (int *)0x6add52;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 0xc);
        puStack_138 = (undefined4 *)0x0;
        puStack_140 = (undefined1 *)0x6add5c;
        piStack_13c = piVar4;
        puVar1 = (undefined4 *)(**(code **)(*piVar4 + 0x78))();
        if ((int)puVar1 < 0) {
          puStack_130 = (undefined4 *)&DAT_00963cc8;
          piStack_13c = (int *)0x6add68;
          puStack_138 = puVar1;
          piStack_134 = piVar4;
          FUN_00878e09();
        }
        puStack_130 = *(undefined4 **)(unaff_EBP + 0xc);
        *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_130;
        piStack_134 = (int *)0x6add78;
        FUN_004125f3();
        puStack_138 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x18);
        *(int ***)(unaff_EBP + -0x24) = &piStack_134;
        piStack_13c = (int *)0x6add8a;
        FUN_0041160e();
        puStack_138 = (undefined4 *)0x6add8f;
        FUN_0042ea7d();
        puStack_130 = (undefined4 *)0x6add99;
        FUN_004125e6();
        puStack_130 = (undefined4 *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_134 = (int *)0x6adda6;
        puStack_130 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_130 < 0) {
          piStack_134 = (int *)0x6addb1;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      }
      puStack_130 = (undefined4 *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_134 = (int *)0x6addce;
      puStack_130 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_130 < 0) {
        piStack_134 = (int *)0x6addd9;
        FUN_00878dfb();
      }
      puStack_130 = &DAT_00980690;
      piStack_134 = (int *)0x6addea;
      FUN_00403191();
      puStack_130 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_134 = (int *)0x6addfa;
      FUN_00403191();
      puStack_130 = (undefined4 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_134 = (int *)0x6ade0a;
      piStack_154 = (int *)FUN_004489f5();
      iVar2 = *piStack_154;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (iVar2 == 0) {
        puStack_130 = (undefined4 *)0x80004003;
        piStack_134 = (int *)0x6ade1e;
        FUN_00878dfb();
      }
      piStack_154 = (int *)*piStack_154;
      piStack_13c = *(int **)(unaff_EBP + -0xa0);
      puStack_138 = *(undefined4 **)(unaff_EBP + -0x9c);
      iVar2 = *piStack_154;
      piStack_134 = *(int **)(unaff_EBP + -0x98);
      puStack_130 = *(undefined4 **)(unaff_EBP + -0x94);
      piStack_14c = *(int **)(unaff_EBP + -0x90);
      puStack_148 = *(undefined1 **)(unaff_EBP + -0x8c);
      iStack_144 = *(undefined4 *)(unaff_EBP + -0x88);
      puStack_150 = (undefined *)0x20;
      *(int **)(unaff_EBP + 0xc) = piStack_154;
      puStack_140 = *(undefined1 **)(unaff_EBP + -0x84);
      puStack_158 = (undefined *)0x6ade4c;
      iVar2 = (**(code **)(iVar2 + 0x110))();
      if (iVar2 < 0) {
        puStack_158 = &DAT_00963df8;
        uStack_15c = *(undefined4 *)(unaff_EBP + 0xc);
        uStack_164 = 0x6ade5e;
        iStack_160 = iVar2;
        FUN_00878e09();
      }
      puStack_158 = (undefined *)0x6ade66;
      FUN_00412600();
      puStack_158 = (undefined *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      uStack_15c = 0x6ade76;
      puStack_158 = (undefined *)FUN_00402bc3();
      if ((int)puStack_158 < 0) {
        uStack_15c = 0x6ade81;
        FUN_00878dfb();
      }
      puStack_158 = (undefined *)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      uStack_15c = 0x6ade91;
      puStack_158 = (undefined *)FUN_00402bc3();
      if ((int)puStack_158 < 0) {
        uStack_15c = 0x6ade9c;
        FUN_00878dfb();
      }
      puStack_158 = (undefined *)0x6adea4;
      FUN_004027eb();
      puStack_158 = (undefined *)0x6adeac;
      FUN_004027eb();
      puStack_158 = (undefined *)0x6adeb4;
      FUN_004125e6();
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined4 *)(unaff_EBP + -0x68) = 0;
      puStack_130 = (undefined4 *)0x0;
      piStack_134 = (int *)0x0;
      puStack_140 = (undefined1 *)&puStack_138;
      *(undefined4 ***)(unaff_EBP + 8) = &puStack_138;
      piStack_13c = (int *)0x578;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_144 = 0x6aded8;
      puStack_138 = puVar1;
      FUN_00679e4e();
      piStack_13c = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_140 = (undefined1 *)0x6adee8;
      FUN_0040263d();
      puStack_140 = (undefined1 *)0x6adeef;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_138 = (undefined4 *)0x6adefa;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
      puStack_130 = (undefined4 *)(unaff_EBP + 0xc);
      piStack_134 = (int *)0x6adf09;
      puStack_130 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_130 < 0) && (puStack_130 != (undefined4 *)0x80004002)) {
        piStack_134 = (int *)0x6adf17;
        FUN_00878dfb();
      }
      puStack_130 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_134 = (int *)0x6adf24;
      puVar3 = (undefined4 *)FUN_00402bc3();
      puVar1 = puStack_130;
      if ((int)puVar3 < 0) {
        piStack_134 = (int *)0x6adf2f;
        puStack_130 = puVar3;
        FUN_00878dfb();
        puVar1 = extraout_ECX_02;
      }
      puStack_130 = (undefined4 *)0x0;
      piStack_134 = (int *)0x0;
      puStack_140 = (undefined1 *)&puStack_138;
      *(undefined4 ***)(unaff_EBP + 8) = &puStack_138;
      piStack_13c = (int *)0x577;
      iStack_144 = 0x6adf44;
      puStack_138 = puVar1;
      FUN_00679e4e();
      piStack_13c = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_140 = (undefined1 *)0x6adf54;
      FUN_0040263d();
      puStack_140 = (undefined1 *)0x6adf5b;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      puStack_138 = (undefined4 *)0x6adf66;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
      puStack_130 = (undefined4 *)(unaff_EBP + 0xc);
      piStack_134 = (int *)0x6adf75;
      puStack_130 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_130 < 0) && (puStack_130 != (undefined4 *)0x80004002)) {
        piStack_134 = (int *)0x6adf83;
        FUN_00878dfb();
      }
      puStack_130 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_134 = (int *)0x6adf90;
      puStack_130 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_130 < 0) {
        piStack_134 = (int *)0x6adf9b;
        FUN_00878dfb();
      }
      puStack_130 = (undefined4 *)0x3;
      piStack_134 = (int *)0xb4;
      puStack_138 = (undefined4 *)0x6adfaa;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (piVar4 == (int *)0x0) {
        puStack_130 = (undefined4 *)0x80004003;
        piStack_134 = (int *)0x6adfbf;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar4;
      puStack_140 = *(undefined1 **)(unaff_EBP + -0x2c);
      piStack_13c = *(int **)(unaff_EBP + -0x3c);
      puStack_138 = *(undefined4 **)(unaff_EBP + -0x38);
      iStack_144 = 0;
      piStack_134 = *(int **)(unaff_EBP + -0x34);
      puStack_148 = (undefined1 *)0x0;
      *(int **)(unaff_EBP + 0xc) = piVar4;
      puStack_130 = *(undefined4 **)(unaff_EBP + -0x30);
      puStack_150 = (undefined *)0x6adfdf;
      piStack_14c = piVar4;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        puStack_150 = &DAT_00963cc8;
        piStack_154 = *(int **)(unaff_EBP + 0xc);
        uStack_15c = 0x6adff1;
        puStack_158 = (undefined *)iVar2;
        FUN_00878e09();
      }
      puStack_150 = (undefined *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_154 = (int *)0x6adffe;
      puStack_150 = (undefined *)FUN_00402bc3();
      if ((int)puStack_150 < 0) {
        piStack_154 = (int *)0x6ae009;
        FUN_00878dfb();
      }
      puStack_150 = (undefined *)0x3;
      piStack_154 = (int *)0xb4;
      puStack_158 = (undefined *)0x6ae018;
      FUN_004031b7();
      piStack_16c = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (piStack_16c == (int *)0x0) {
        puStack_150 = (undefined *)0x80004003;
        piStack_154 = (int *)0x6ae02d;
        FUN_00878dfb();
        piStack_16c = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piStack_16c;
      iStack_160 = *(undefined4 *)(unaff_EBP + -0x68);
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x3c);
      puStack_158 = *(undefined **)(unaff_EBP + -0x38);
      uStack_164 = 0;
      iStack_168 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) + -6;
      piStack_154 = *(int **)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + 0xc) = piStack_16c;
      puStack_150 = *(undefined **)(unaff_EBP + -0x30);
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        iStack_174 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_17c = 0x6ae068;
        iStack_178 = iVar2;
        FUN_00878e09();
      }
      iVar2 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_174 = 0x6ae075;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_174 = 0x6ae080;
        FUN_00878dfb();
        iVar2 = extraout_ECX_03;
      }
      iStack_174 = 0;
      puStack_180 = (undefined1 *)&iStack_178;
      *(int **)(unaff_EBP + 8) = &iStack_178;
      iStack_17c = 0x579;
      puStack_184 = (undefined1 *)0x6ae09a;
      iStack_178 = iVar2;
      FUN_00679e4e();
      iStack_17c = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      puStack_180 = (undefined1 *)0x6ae0aa;
      FUN_0040263d();
      puStack_180 = (undefined1 *)0x6ae0b1;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_178 = 0x6ae0bc;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
      iStack_174 = 0x6ae0cb;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_174 = 0x6ae0dc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_174 = 0x6ae0e9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae0f4;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
      *(undefined4 *)(unaff_EBP + 0xc) = 6;
      if (6 < iVar2 + -6) {
        do {
          iStack_174 = 0xb4;
          iStack_178 = 0x6ae119;
          FUN_004031b7();
          piVar4 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (piVar4 == (int *)0x0) {
            iStack_174 = 0x6ae12e;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          puStack_180 = *(undefined1 **)(unaff_EBP + -0x2c);
          iStack_17c = *(int *)(unaff_EBP + -0x3c);
          iStack_178 = *(int *)(unaff_EBP + -0x38);
          puStack_184 = (undefined1 *)0x0;
          puStack_188 = *(undefined4 **)(unaff_EBP + 0xc);
          iStack_174 = *(undefined4 *)(unaff_EBP + -0x34);
          *(int **)(unaff_EBP + 8) = piVar4;
          iStack_190 = 0x6ae150;
          piStack_18c = piVar4;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            iStack_174 = *(undefined4 *)(unaff_EBP + 8);
            iStack_17c = 0x6ae162;
            iStack_178 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iStack_174 = 0x6ae16f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_174 = 0x6ae17a;
            FUN_00878dfb();
          }
          iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        } while (*(int *)(unaff_EBP + 0xc) < iVar2 + -6);
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x578);
      *(int *)(unaff_EBP + 0xc) = iVar2;
      if ((iVar2 != 0) &&
         (iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x57c), *(int *)(unaff_EBP + 8) = iVar2,
         iVar2 != 0)) {
        uVar6 = __ftol();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iStack_174 = unaff_EBP + 0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_178 = 0x6ae1ea;
        puVar1 = (undefined4 *)FUN_00679d22();
        iStack_174 = *puVar1;
        iStack_178 = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        iStack_17c = 0x6ae1fc;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          iStack_174 = 0x6ae213;
          FUN_00434e38();
        }
        iStack_174 = unaff_EBP + 0xc;
        iStack_178 = 0x6ae224;
        puVar1 = (undefined4 *)FUN_00679d22();
        iStack_174 = *puVar1;
        iStack_178 = unaff_EBP + 8;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_17c = 0x6ae236;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          iStack_174 = 0x6ae24d;
          FUN_00434e38();
        }
        iStack_174 = 0x6ae25c;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        iStack_174 = 0x6ae269;
        FUN_00403191();
        iStack_174 = 0;
        iStack_178 = -1;
        iStack_17c = *(undefined4 *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        puStack_180 = (undefined1 *)0x0;
        puStack_184 = (undefined1 *)0x0;
        puStack_188 = (undefined4 *)0x6ae27b;
        (*DAT_0097b4c8)();
        puStack_188 = (undefined4 *)0x6ae288;
        FUN_0087a1b0();
        puStack_188 = (undefined4 *)0x0;
        piStack_18c = (int *)0x0;
        iStack_190 = unaff_EBP + -0x60;
        iStack_194 = unaff_EBP + -0x3c;
        uStack_198 = 0xffffffff;
        uVar6 = FUN_00449713(&puStack_184);
        uVar6 = FUN_00456ad5(uVar6);
        *(undefined4 **)(unaff_EBP + 0xc) = &uStack_198;
        FUN_004033a1(uVar6);
        iVar2 = unaff_EBP + -0xe0;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_00405a1d(iVar2);
        FUN_00402660();
        FUN_00404a02(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        iStack_190 = 0x6ae2da;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x70) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        if (iVar2 != 0) {
          puStack_188 = (undefined4 *)(unaff_EBP + -0x70);
          piStack_18c = (int *)0x6ae2f0;
          puStack_188 = (undefined4 *)FUN_0041a581();
          if (((int)puStack_188 < 0) && (puStack_188 != (undefined4 *)0x80004002)) {
            piStack_18c = (int *)0x6ae301;
            FUN_00878dfb();
          }
        }
        puStack_188 = (undefined4 *)(unaff_EBP + -0xe0);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_18c = (int *)0x6ae311;
        puStack_188 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_188 < 0) {
          piStack_18c = (int *)0x6ae31c;
          FUN_00878dfb();
        }
        puStack_188 = (undefined4 *)(unaff_EBP + -0x3c);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_18c = (int *)0x6ae329;
        puStack_188 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_188 < 0) {
          piStack_18c = (int *)0x6ae334;
          FUN_00878dfb();
        }
        puStack_188 = (undefined4 *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        piStack_18c = (int *)0x6ae341;
        puStack_188 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_188 < 0) {
          piStack_18c = (int *)0x6ae34c;
          FUN_00878dfb();
        }
        puStack_188 = &DAT_00980690;
        piStack_18c = (int *)0x6ae358;
        FUN_00403191();
        puStack_188 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        piStack_18c = (int *)0x6ae368;
        FUN_00403191();
        puStack_188 = (undefined4 *)0x0;
        piStack_18c = (int *)0x0;
        iStack_190 = 0xffffffff;
        iStack_194 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        uStack_198 = 0;
        (*DAT_0097b4c8)(0);
        FUN_0087a1b0();
        iStack_174 = 0;
        iStack_178 = unaff_EBP + -0xb0;
        iStack_17c = unaff_EBP + -0xd0;
        puStack_180 = (undefined1 *)0xffffffff;
        puStack_188 = (undefined4 *)0x6ae3a3;
        puStack_184 = (undefined1 *)&piStack_16c;
        puStack_188 = (undefined4 *)FUN_00449713();
        piStack_18c = (int *)0x6ae3a9;
        puStack_184 = (undefined1 *)FUN_00456ad5();
        *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_180;
        puStack_188 = (undefined4 *)0x6ae3b6;
        FUN_004033a1();
        puStack_184 = (undefined1 *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        puStack_188 = (undefined4 *)0x6ae3c6;
        FUN_00405a1d();
        puStack_188 = (undefined4 *)0x6ae3cd;
        FUN_00402660();
        puStack_188 = (undefined4 *)0x6ae3d4;
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        iStack_178 = 0x6ae3df;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x6c) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        if (iVar2 != 0) {
          iStack_174 = 0x6ae3f5;
          iVar2 = FUN_0041a581();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_174 = 0x6ae406;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_174 = 0x6ae416;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_174 = 0x6ae421;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        iStack_174 = 0x6ae431;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_174 = 0x6ae43c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        iStack_174 = 0x6ae44c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_174 = 0x6ae457;
          FUN_00878dfb();
        }
        if (0 < *(int *)(unaff_EBP + -0x1c)) {
          *(undefined4 *)(unaff_EBP + 0xc) = 2;
          do {
            if ((*(int *)(unaff_EBP + 0xc) == 2) ||
               (*(int *)(unaff_EBP + 0xc) == *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) + -3)) {
              iStack_174 = 0xff;
              iStack_178 = 0x6ae4ec;
              FUN_004031b7();
              piVar4 = *(int **)(unaff_EBP + -0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x39;
              if (piVar4 == (int *)0x0) {
                iStack_174 = 0x6ae501;
                FUN_00878dfb();
                piVar4 = *(int **)(unaff_EBP + -0x10);
              }
              iVar2 = *piVar4;
              puStack_180 = *(undefined1 **)(unaff_EBP + -0x28);
              iStack_17c = *(int *)(unaff_EBP + -0x4c);
              iStack_178 = *(int *)(unaff_EBP + -0x48);
              puStack_184 = (undefined1 *)0x3;
              puStack_188 = *(undefined4 **)(unaff_EBP + 0xc);
              iStack_174 = *(undefined4 *)(unaff_EBP + -0x44);
              *(int **)(unaff_EBP + -0x24) = piVar4;
              iStack_190 = 0x6ae524;
              piStack_18c = piVar4;
              iVar2 = (**(code **)(iVar2 + 0x80))();
              if (iVar2 < 0) {
                iStack_174 = *(undefined4 *)(unaff_EBP + -0x24);
                iStack_17c = 0x6ae536;
                iStack_178 = iVar2;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x36;
            }
            else {
              iStack_174 = 0xff;
              iStack_178 = 0x6ae48a;
              FUN_004031b7();
              piVar4 = *(int **)(unaff_EBP + -0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x3a;
              if (piVar4 == (int *)0x0) {
                iStack_174 = 0x6ae49f;
                FUN_00878dfb();
                piVar4 = *(int **)(unaff_EBP + -0x10);
              }
              iVar2 = *piVar4;
              puStack_180 = *(undefined1 **)(unaff_EBP + -0x50);
              iStack_17c = *(int *)(unaff_EBP + -0x80);
              iStack_178 = *(int *)(unaff_EBP + -0x7c);
              puStack_184 = (undefined1 *)0x2;
              puStack_188 = *(undefined4 **)(unaff_EBP + 0xc);
              iStack_174 = *(undefined4 *)(unaff_EBP + -0x78);
              *(int **)(unaff_EBP + -0x24) = piVar4;
              iStack_190 = 0x6ae4c2;
              piStack_18c = piVar4;
              iVar2 = (**(code **)(iVar2 + 0x80))();
              if (iVar2 < 0) {
                iStack_174 = *(undefined4 *)(unaff_EBP + -0x24);
                iStack_17c = 0x6ae4d4;
                iStack_178 = iVar2;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x36;
            }
            iStack_174 = 0x6ae543;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_174 = 0x6ae54e;
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
          } while (*(int *)(unaff_EBP + 0xc) + -2 < *(int *)(unaff_EBP + -0x1c));
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
          iStack_174 = 0x6ae576;
          (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          iStack_174 = 0x6ae587;
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00414ebb();
      }
      iStack_174 = 0xfffffffe;
      iStack_178 = 0x6ae5b2;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      iStack_174 = 0x6ae5c2;
      piVar4 = (int *)FUN_004489f5();
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (iVar2 == 0) {
        iStack_174 = 0x6ae5d6;
        FUN_00878dfb();
      }
      iStack_174 = unaff_EBP + 0xc;
      iStack_178 = 0x6ae5e5;
      FUN_0041141a();
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        iStack_174 = 0x6ae5f2;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_174 = 0x6ae603;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_174 = 0x6ae610;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae61b;
        FUN_00878dfb();
      }
      iStack_174 = 0x6ae627;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      iStack_174 = unaff_EBP + -0x3c;
      iStack_178 = 0x6ae631;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae63d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_174 = 0x6ae647;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      iStack_174 = unaff_EBP + -0x60;
      iStack_178 = 0x6ae651;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae65d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      iStack_174 = 0x6ae66d;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iStack_174 = 0x6ae67a;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      iStack_174 = 0x6ae687;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      iStack_174 = 0x6ae697;
      piVar4 = (int *)FUN_004489f5();
      iVar2 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      if (iVar2 == 0) {
        iStack_174 = 0x6ae6ab;
        FUN_00878dfb();
      }
      iStack_174 = unaff_EBP + -0x60;
      iStack_178 = unaff_EBP + -0xb0;
      iStack_17c = unaff_EBP + -0x80;
      puStack_180 = (undefined1 *)(unaff_EBP + -0x4c);
      puStack_184 = *(undefined1 **)(unaff_EBP + -0x10);
      puStack_188 = (undefined4 *)(unaff_EBP + -0xc0);
      piStack_18c = (int *)0x6ae6d3;
      FUN_004250ac();
      iStack_174 = 0x6ae6df;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae6ea;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        iStack_174 = 0x6ae6fb;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      iStack_174 = 0x6ae708;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae713;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iStack_174 = 0x6ae720;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae72b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      iStack_174 = 0x6ae73b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae746;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_174 = 0x6ae753;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae75e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_174 = 0x6ae76b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x6ae776;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (*(int **)(unaff_EBP + -0x68) != (int *)0x0) {
        iStack_174 = 0x6ae787;
        (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        iStack_174 = 0x6ae798;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_174 = 0x6ae7a8;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_174 = 0x6ae7b9;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



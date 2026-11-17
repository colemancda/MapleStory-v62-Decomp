/* FUN_00796bff - 0x00796bff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00796bff(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  undefined1 *puStack_1e8;
  int iStack_1e4;
  int *piStack_1dc;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined *puStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int *piStack_19c;
  undefined4 *puStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  undefined *puStack_180;
  int *piStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  undefined *puStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  int *piStack_130;
  undefined *puStack_12c;
  int *piStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 *puStack_118;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x40) = extraout_ECX;
  if (iVar4 == 0) {
    puStack_118 = (undefined4 *)0x6;
    iStack_11c = 0x796c2c;
    uVar2 = FUN_0079ba1a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    if (*(int *)(unaff_EBP + 8) == 0) {
      *(undefined4 *)(extraout_ECX + 0x17bc) = 0;
    }
    else if ((*(int *)(extraout_ECX + 0x4e0) == 0) && (*(int *)(extraout_ECX + 0x4f4) == 0)) {
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x58) = 0;
      puStack_118 = (undefined4 *)0x964;
      iStack_11c = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_120 = 0x796c79;
      puVar3 = (undefined4 *)FUN_00679d86();
      iStack_11c = *puVar3;
      puStack_118 = *(undefined4 **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_120 = unaff_EBP + -0x38;
      iStack_124 = 0x796c8c;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_118 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        iStack_11c = 0x796ca3;
        FUN_00403384();
      }
      puStack_118 = &DAT_00980690;
      iStack_11c = 0x796cb2;
      FUN_00403191();
      puStack_118 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_11c = 0x796cbf;
      FUN_00403191();
      puStack_118 = (undefined4 *)0x0;
      iStack_11c = 0;
      iStack_120 = unaff_EBP + -0x50;
      iStack_124 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_128 = (int *)0x796cd5;
      puStack_12c = (undefined *)FUN_00411641();
      *(int ***)(unaff_EBP + -0x3c) = &piStack_128;
      piStack_130 = (int *)0x796ce1;
      FUN_004033a1();
      puStack_12c = (undefined *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_130 = (int *)0x796cf1;
      FUN_00405a1d();
      piStack_130 = (int *)0x796cf8;
      FUN_00402660();
      piStack_130 = (int *)0x796cff;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_120 = 0x796d0a;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + 8) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      if (iVar4 != 0) {
        puStack_118 = (undefined4 *)(unaff_EBP + 8);
        iStack_11c = 0x796d20;
        puStack_118 = (undefined4 *)FUN_00404b30();
        if (((int)puStack_118 < 0) && (puStack_118 != (undefined4 *)0x80004002)) {
          iStack_11c = 0x796d31;
          FUN_00878dfb();
        }
      }
      puStack_118 = (undefined4 *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_11c = 0x796d41;
      puStack_118 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_118 < 0) {
        iStack_11c = 0x796d4c;
        FUN_00878dfb();
      }
      puStack_118 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_11c = 0x796d59;
      puStack_118 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_118 < 0) {
        iStack_11c = 0x796d64;
        FUN_00878dfb();
      }
      puStack_118 = (undefined4 *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_11c = 0x796d71;
      puStack_118 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_118 < 0) {
        iStack_11c = 0x796d7c;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      puStack_118 = (undefined4 *)0x3b1;
      iStack_11c = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_120 = 0x796d93;
      puVar3 = (undefined4 *)FUN_00679d86();
      iStack_120 = *puVar3;
      puStack_118 = (undefined4 *)0x0;
      iStack_11c = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_124 = 0x796da4;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + 8) != 0) {
        puStack_118 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
        iStack_11c = 0x796dbb;
        FUN_00403384();
      }
      iStack_11c = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0xd28);
      puStack_118 = (undefined4 *)0x1;
      iStack_120 = 0x796dd0;
      FUN_0040ee87();
      piStack_128 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piStack_128 == (int *)0x0) {
        puStack_118 = (undefined4 *)0x80004003;
        iStack_11c = 0x796de5;
        FUN_00878dfb();
        piStack_128 = *(int **)(unaff_EBP + -0x28);
      }
      iVar4 = *piStack_128;
      iStack_124 = *(undefined4 *)(unaff_EBP + -0x50);
      iStack_120 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_11c = *(undefined4 *)(unaff_EBP + -0x48);
      *(int **)(unaff_EBP + 8) = piStack_128;
      puStack_118 = *(undefined4 **)(unaff_EBP + -0x44);
      puStack_12c = (undefined *)0x796dfd;
      iVar4 = (**(code **)(iVar4 + 100))();
      if (iVar4 < 0) {
        puStack_12c = &DAT_00963de8;
        piStack_130 = *(int **)(unaff_EBP + 8);
        uStack_138 = 0x796e0f;
        iStack_134 = iVar4;
        FUN_00878e09();
      }
      puStack_12c = (undefined *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_130 = (int *)0x796e1c;
      puStack_12c = (undefined *)FUN_00402bc3();
      if ((int)puStack_12c < 0) {
        piStack_130 = (int *)0x796e27;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x14) + 0x14;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          puStack_12c = (undefined *)0x80004003;
          piStack_130 = (int *)0x796e42;
          FUN_00878dfb();
        }
        puStack_12c = (undefined *)0x796e4a;
        uVar5 = FUN_0040cf4d();
        if (uVar5 <= *(uint *)(unaff_EBP + -0x30)) break;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        puStack_12c = (undefined *)0x3b1;
        piStack_130 = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_134 = 0x796e6d;
        puVar3 = (undefined4 *)FUN_00679d86();
        iStack_134 = *puVar3;
        puStack_12c = (undefined *)0x0;
        piStack_130 = (int *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        uStack_138 = 0x796e7e;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (*(int *)(unaff_EBP + -100) != 0) {
          puStack_12c = (undefined *)(*(int *)(unaff_EBP + -100) + -0xc);
          piStack_130 = (int *)0x796e95;
          FUN_00403384();
        }
        puStack_12c = (undefined *)0x1;
        piStack_130 = *(int **)(unaff_EBP + -0x28);
        iStack_134 = 0x796ea3;
        FUN_0040ee87();
        piVar7 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (piVar7 == (int *)0x0) {
          puStack_12c = (undefined *)0x80004003;
          piStack_130 = (int *)0x796eb8;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + 8);
        }
        iVar4 = *piVar7;
        uStack_138 = *(undefined4 *)(unaff_EBP + -0x50);
        iStack_134 = *(undefined4 *)(unaff_EBP + -0x4c);
        piStack_130 = *(int **)(unaff_EBP + -0x48);
        *(int **)(unaff_EBP + -0x14) = piVar7;
        puStack_12c = *(undefined **)(unaff_EBP + -0x44);
        puStack_140 = (undefined *)0x796ed0;
        piStack_13c = piVar7;
        iVar4 = (**(code **)(iVar4 + 100))();
        if (iVar4 < 0) {
          puStack_140 = &DAT_00963de8;
          iStack_144 = *(undefined4 *)(unaff_EBP + -0x14);
          uStack_14c = 0x796ee2;
          iStack_148 = iVar4;
          FUN_00878e09();
        }
        puStack_140 = (undefined *)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_144 = 0x796eef;
        puStack_140 = (undefined *)FUN_00402bc3();
        if ((int)puStack_140 < 0) {
          iStack_144 = 0x796efa;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        puStack_140 = (undefined *)0x3b1;
        iStack_144 = unaff_EBP + -0x60;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_148 = 0x796f15;
        puVar3 = (undefined4 *)FUN_00679d86();
        iStack_148 = *puVar3;
        puStack_140 = (undefined *)0x0;
        iStack_144 = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        uStack_14c = 0x796f26;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (*(int *)(unaff_EBP + -0x60) != 0) {
          puStack_140 = (undefined *)(*(int *)(unaff_EBP + -0x60) + -0xc);
          iStack_144 = 0x796f3d;
          FUN_00403384();
        }
        puStack_140 = (undefined *)0x796f4a;
        uVar5 = FUN_004133f0();
        iVar4 = (uVar5 % 10 - 5) * 10;
        if (iVar4 < 0) {
          iVar4 = iVar4 + -5;
        }
        else {
          iVar4 = iVar4 + 5;
        }
        *(int *)(unaff_EBP + -0x14) = iVar4;
        puStack_140 = (undefined *)0x796f6d;
        uVar5 = FUN_004133f0();
        iVar4 = (uVar5 % 10) * 8 + -0x28;
        *(int *)(unaff_EBP + -0x1c) = iVar4;
        if (iVar4 < 0) {
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + -5;
        }
        else {
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 10;
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        puStack_140 = (undefined *)0x3b1;
        iStack_144 = unaff_EBP + -0x5c;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_148 = 0x796fa2;
        puVar3 = (undefined4 *)FUN_00679d86();
        iStack_148 = *puVar3;
        puStack_140 = (undefined *)0x0;
        iStack_144 = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        uStack_14c = 0x796fb3;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x5c) != 0) {
          puStack_140 = (undefined *)(*(int *)(unaff_EBP + -0x5c) + -0xc);
          iStack_144 = 0x796fca;
          FUN_00403384();
        }
        puStack_140 = (undefined *)0x1;
        iStack_144 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_148 = 0x796fd8;
        FUN_0040ee87();
        piVar7 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (piVar7 == (int *)0x0) {
          puStack_140 = (undefined *)0x80004003;
          iStack_144 = 0x796fed;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + -0x18);
        }
        iVar4 = *piVar7;
        uStack_14c = *(undefined4 *)(unaff_EBP + -0x74);
        iStack_148 = *(int *)(unaff_EBP + -0x70);
        iStack_144 = *(undefined4 *)(unaff_EBP + -0x6c);
        *(int **)(unaff_EBP + -0x10) = piVar7;
        puStack_140 = *(undefined **)(unaff_EBP + -0x68);
        puStack_154 = (undefined4 *)0x797005;
        piStack_150 = piVar7;
        iVar4 = (**(code **)(iVar4 + 100))();
        if (iVar4 < 0) {
          puStack_154 = (undefined4 *)&DAT_00963de8;
          uStack_158 = *(undefined4 *)(unaff_EBP + -0x10);
          uStack_160 = 0x797017;
          iStack_15c = iVar4;
          FUN_00878e09();
        }
        puStack_154 = (undefined4 *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uStack_158 = 0x797024;
        puStack_154 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_154 < 0) {
          uStack_158 = 0x79702f;
          FUN_00878dfb();
        }
        puStack_154 = &DAT_00980690;
        uStack_158 = 0x797040;
        FUN_00403191();
        puStack_154 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uStack_158 = 0x797050;
        FUN_00403191();
        piVar7 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (piVar7 == (int *)0x0) {
          puStack_154 = (undefined4 *)0x80004003;
          uStack_158 = 0x797065;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + 8);
        }
        uStack_160 = *(undefined4 *)(unaff_EBP + -0xf4);
        iStack_15c = *(int *)(unaff_EBP + -0xf0);
        iVar4 = *piVar7;
        uStack_158 = *(undefined4 *)(unaff_EBP + -0xec);
        puStack_154 = *(undefined4 **)(unaff_EBP + -0xe8);
        uStack_174 = *(undefined4 *)(unaff_EBP + -0x1c);
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_170 = *(undefined4 *)(unaff_EBP + -0xe4);
        uStack_16c = *(undefined4 *)(unaff_EBP + -0xe0);
        uStack_168 = *(undefined4 *)(unaff_EBP + -0xdc);
        *(int **)(unaff_EBP + -0x10) = piVar7;
        uStack_164 = *(undefined4 *)(unaff_EBP + -0xd8);
        puStack_180 = (undefined *)0x797098;
        piStack_17c = piVar7;
        iVar4 = (**(code **)(iVar4 + 0x90))();
        if (iVar4 < 0) {
          puStack_180 = &DAT_00963de8;
          iStack_184 = *(undefined4 *)(unaff_EBP + -0x10);
          uStack_18c = 0x7970aa;
          iStack_188 = iVar4;
          FUN_00878e09();
        }
        puStack_180 = (undefined *)(unaff_EBP + -0xe4);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_184 = 0x7970ba;
        puStack_180 = (undefined *)FUN_00402bc3();
        if ((int)puStack_180 < 0) {
          iStack_184 = 0x7970c5;
          FUN_00878dfb();
        }
        puStack_180 = (undefined *)(unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_184 = 0x7970d5;
        puStack_180 = (undefined *)FUN_00402bc3();
        if ((int)puStack_180 < 0) {
          iStack_184 = 0x7970e0;
          FUN_00878dfb();
        }
        puStack_180 = (undefined *)0x7970ea;
        uVar5 = FUN_004133f0();
        if ((int)(((ulonglong)uVar5 % 3) % 3) == 0) {
          if (*(int *)(unaff_EBP + 8) == 0) {
            puStack_180 = (undefined *)0x80004003;
            iStack_184 = 0x797162;
            FUN_00878dfb();
          }
          piVar7 = *(int **)(unaff_EBP + 8);
          puStack_180 = (undefined *)0x5;
          iStack_184 = 0;
          iStack_188 = 5;
          uStack_18c = 5;
          uStack_190 = *(undefined4 *)(unaff_EBP + -0x18);
          puStack_198 = (undefined4 *)0x797178;
          piStack_194 = piVar7;
          iVar4 = (**(code **)(*piVar7 + 0x98))();
          piStack_19c = piVar7;
          if (iVar4 < 0) goto LAB_00797182;
        }
        else {
          puStack_180 = (undefined *)0x797107;
          uVar5 = FUN_004133f0();
          puStack_180 = (undefined *)0x797115;
          uVar6 = FUN_004133f0();
          piVar7 = *(int **)(unaff_EBP + 8);
          if (piVar7 == (int *)0x0) {
            puStack_180 = (undefined *)0x80004003;
            iStack_184 = 0x79712d;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 8);
          }
          iVar4 = *piVar7;
          iStack_188 = 5;
          uStack_18c = 5;
          uStack_190 = *(undefined4 *)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x10) = piVar7;
          puStack_198 = (undefined4 *)0x797145;
          piStack_194 = piVar7;
          iStack_184 = (uVar6 & 3) + 2;
          puStack_180 = (undefined *)((uVar5 & 3) + 2);
          iVar4 = (**(code **)(iVar4 + 0x98))();
          if (iVar4 < 0) {
            piStack_19c = *(int **)(unaff_EBP + -0x10);
LAB_00797182:
            puStack_198 = (undefined4 *)&DAT_00963de8;
            uStack_1a4 = 0x797188;
            iStack_1a0 = iVar4;
            FUN_00878e09();
          }
        }
        puStack_198 = &DAT_00980690;
        piStack_19c = (int *)0x797199;
        FUN_00403191();
        puStack_198 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_19c = (int *)0x7971a9;
        FUN_00403191();
        piVar7 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (piVar7 == (int *)0x0) {
          puStack_198 = (undefined4 *)0x80004003;
          piStack_19c = (int *)0x7971be;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + -0x18);
        }
        uStack_1a4 = *(undefined4 *)(unaff_EBP + -0xc4);
        iStack_1a0 = *(int *)(unaff_EBP + -0xc0);
        iVar4 = *piVar7;
        piStack_19c = *(int **)(unaff_EBP + -0xbc);
        puStack_198 = *(undefined4 **)(unaff_EBP + -0xb8);
        uStack_1b4 = *(undefined4 *)(unaff_EBP + -0x94);
        uStack_1b0 = *(undefined4 *)(unaff_EBP + -0x90);
        uStack_1b8 = 0xfffffffb;
        uStack_1ac = *(undefined4 *)(unaff_EBP + -0x8c);
        uStack_1bc = 0;
        *(int **)(unaff_EBP + -0x10) = piVar7;
        uStack_1a8 = *(undefined4 *)(unaff_EBP + -0x88);
        puStack_1c4 = (undefined *)0x7971ee;
        piStack_1c0 = piVar7;
        iVar4 = (**(code **)(iVar4 + 0x90))();
        if (iVar4 < 0) {
          puStack_1c4 = &DAT_00963de8;
          iStack_1c8 = *(undefined4 *)(unaff_EBP + -0x10);
          uStack_1d0 = 0x797200;
          iStack_1cc = iVar4;
          FUN_00878e09();
        }
        puStack_1c4 = (undefined *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_1c8 = 0x797210;
        puStack_1c4 = (undefined *)FUN_00402bc3();
        if ((int)puStack_1c4 < 0) {
          iStack_1c8 = 0x79721b;
          FUN_00878dfb();
        }
        puStack_1c4 = (undefined *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_1c8 = 0x79722b;
        puStack_1c4 = (undefined *)FUN_00402bc3();
        if ((int)puStack_1c4 < 0) {
          iStack_1c8 = 0x797236;
          FUN_00878dfb();
        }
        puStack_1c4 = (undefined *)0x797240;
        uVar5 = FUN_004133f0();
        puStack_1c4 = (undefined *)0x3;
        iStack_1c8 = uVar5 % 1000 + 1000;
        iStack_1cc = 0x79725b;
        FUN_004031b7();
        piVar7 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (piVar7 == (int *)0x0) {
          puStack_1c4 = (undefined *)0x80004003;
          iStack_1c8 = 0x797270;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + -0x20);
        }
        iVar4 = *piVar7;
        uStack_1d0 = *(undefined4 *)(unaff_EBP + -0x104);
        iStack_1cc = *(int *)(unaff_EBP + -0x100);
        iStack_1c8 = *(undefined4 *)(unaff_EBP + -0xfc);
        puStack_1c4 = *(undefined **)(unaff_EBP + -0xf8);
        uStack_1d8 = 0;
        *(int **)(unaff_EBP + -0x10) = piVar7;
        piStack_1dc = piVar7;
        puVar8 = (undefined1 *)(**(code **)(iVar4 + 0xa0))();
        if ((int)puVar8 < 0) {
          iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x10);
          puStack_1e8 = puVar8;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_1e4 = 0x7972b7;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_1e4 = 0x7972c2;
          FUN_00878dfb();
        }
        FUN_0087a1b0();
        iStack_1e4 = 0;
        puStack_1e8 = (undefined1 *)&piStack_1dc;
        uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x30));
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1e8;
        FUN_004033a1(uVar2);
        iVar4 = unaff_EBP + -0x114;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_0040263d(iVar4);
        FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_1e8 = (undefined1 *)0x797308;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x54) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        if (iVar4 != 0) {
          iStack_1e4 = 0x79731e;
          iVar4 = FUN_0041a581();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            iStack_1e4 = 0x79732f;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_1e4 = 0x79733f;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_1e4 = 0x79734a;
          FUN_00878dfb();
        }
        iStack_1e4 = 0x79735a;
        FUN_00403191();
        iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x24);
        puStack_1e8 = (undefined1 *)0x79736a;
        FUN_0040ee87();
        bVar9 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (bVar9) {
          iStack_1e4 = 0x797380;
          FUN_00878dfb();
        }
        iStack_1e4 = unaff_EBP + -0xa4;
        puStack_1e8 = (undefined1 *)0x0;
        puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x3c,0,0,0,0);
        this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x34);
        iStack_1e4 = 0x7973ae;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
        FUN_00412600();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iStack_1e4 = 0x7973c6;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_1e4 = 0x7973d1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_1e4 = 0x7973e1;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_1e4 = 0x7973ec;
          FUN_00878dfb();
        }
        iStack_1e4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0xd3c);
        puStack_1e8 = (undefined1 *)0x797403;
        FUN_0040ee87();
        iVar4 = *(int *)this;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (iVar4 == 0) {
          iStack_1e4 = 0x797415;
          FUN_00878dfb();
        }
        piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x34);
        iVar4 = *piVar7;
        puStack_1e8 = *(undefined1 **)(unaff_EBP + -0xd0);
        iStack_1e4 = *(undefined4 *)(unaff_EBP + -0xcc);
        *(int **)(unaff_EBP + -0x10) = piVar7;
        iVar4 = (**(code **)(iVar4 + 0xfc))(piVar7,*(undefined4 *)(unaff_EBP + -0xd4));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar4 = FUN_00402bc3(unaff_EBP + -0xd4);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        iVar4 = FUN_0087a90a(*(undefined4 *)(unaff_EBP + -0x14));
        if (((0x13 < iVar4) || (*(int *)(unaff_EBP + -0x1c) < -4)) ||
           (*(undefined4 *)(unaff_EBP + -0x14) = 0xfffffffb, 0x13 < *(int *)(unaff_EBP + -0x1c))) {
          *(undefined4 *)(unaff_EBP + -0x14) = 5;
        }
        piVar7 = *(int **)(unaff_EBP + -0x34);
        if (*piVar7 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = (int *)*piVar7;
        iStack_134 = (**(code **)(*piVar1 + 0xb4))(piVar1,*(undefined4 *)(unaff_EBP + -0x14));
        if (iStack_134 < 0) {
          puStack_12c = &DAT_00963df8;
          uStack_138 = 0x7974b7;
          piStack_130 = piVar1;
          FUN_00878e09();
        }
        puStack_12c = (undefined *)0x1;
        piStack_130 = *(int **)(unaff_EBP + 8);
        iStack_134 = 0x7974c7;
        FUN_0043f060();
        puStack_12c = (undefined *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        piStack_130 = (int *)0x7974d9;
        FUN_00424e27();
        piStack_130 = (int *)0x7974e0;
        FUN_00429607();
        puStack_12c = (undefined *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        piStack_130 = (int *)0x7974f0;
        puStack_12c = (undefined *)FUN_00402bc3();
        if ((int)puStack_12c < 0) {
          piStack_130 = (int *)0x7974fb;
          FUN_00878dfb();
        }
        puStack_12c = (undefined *)0xffffffff;
        piStack_130 = (int *)0x797504;
        FUN_00424e27();
        piStack_130 = (int *)0x79750b;
        FUN_00444e05();
        puStack_12c = (undefined *)0x797513;
        FUN_004125e6();
        puStack_12c = (undefined *)0x79751b;
        FUN_004125d9();
        puStack_12c = (undefined *)0x797523;
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_12c = (undefined *)0x79752f;
        FUN_004125d9();
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
        *(int **)(unaff_EBP + -0x34) = piVar7 + 6;
      }
      puStack_12c = (undefined *)0x797545;
      FUN_004125d9();
      puStack_12c = (undefined *)0x79754d;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_12c = (undefined *)0x797558;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_12c = (undefined *)0x797564;
      FUN_00402676();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



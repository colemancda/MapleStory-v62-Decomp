/* FUN_0042bcc5 - 0x0042bcc5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042bcc5(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  float10 fVar8;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined8 local_130;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  local_130 = 0x9806900042bce9;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_130 = 0x9806900042bcf7;
  FUN_00403191();
  local_130 = 0;
  puStack_134 = (undefined1 *)(unaff_EBP + -0x48);
  puStack_138 = (undefined1 *)(unaff_EBP + -0x38);
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_13c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_13c = extraout_ECX_00;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = unaff_EBP + -0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_134 = (undefined1 *)0x42bd3c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    local_130 = CONCAT44(unaff_EBP + -0x24,0x42bd52);
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      local_130 = CONCAT44(iVar2,0x42bd63);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  local_130 = CONCAT44(unaff_EBP + -0xd8,0x42bd73);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_130 = CONCAT44(iVar2,0x42bd7e);
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  local_130 = CONCAT44(unaff_EBP + -0x38,0x42bd8b);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_130 = CONCAT44(iVar2,0x42bd96);
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_130 = CONCAT44(unaff_EBP + -0x48,0x42bda3);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_130 = CONCAT44(iVar2,0x42bdae);
    FUN_00878dfb();
  }
  piVar4 = (int *)0x0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    local_130 = CONCAT44(0x42bdbe,(int)local_130);
    iVar2 = FUN_0040cf4d();
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        local_130 = CONCAT44(0x42bdd6,(int)local_130);
        FUN_0087a1b0();
        local_130 = 0;
        puStack_138 = *(undefined1 **)(unaff_EBP + -0x1c);
        puStack_13c = (undefined1 *)0x42bde3;
        puStack_134 = &stack0xfffffed8;
        puStack_138 = (undefined1 *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_134;
        puStack_13c = (undefined1 *)0x42bdef;
        FUN_004033a1();
        puStack_138 = (undefined1 *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_13c = (undefined1 *)0x42bdff;
        FUN_0040263d();
        puStack_13c = (undefined1 *)0x42be06;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_134 = (undefined1 *)0x42be11;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        if (iVar2 != 0) {
          local_130 = CONCAT44(unaff_EBP + -0x20,0x42be27);
          iVar2 = FUN_00404b30();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            local_130 = CONCAT44(iVar2,0x42be38);
            FUN_00878dfb();
          }
        }
        local_130._4_4_ = (undefined *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        local_130._0_4_ = 0x42be45;
        iVar2 = FUN_00402bc3();
        local_130._0_4_ = (int)local_130._4_4_;
        if (iVar2 < 0) {
          local_130 = CONCAT44(iVar2,0x42be50);
          FUN_00878dfb();
          local_130._0_4_ = extraout_ECX_01;
        }
        if (*(int *)(unaff_EBP + 8) == 0) break;
        puStack_138 = (undefined1 *)&local_130;
        local_130._4_4_ = &DAT_0097812c;
        *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
        puStack_134 = (undefined1 *)0xffd;
        puStack_13c = (undefined1 *)0x42be71;
        FUN_00679e4e();
        puStack_134 = (undefined1 *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_138 = (undefined1 *)0x42be81;
        FUN_0040263d();
        puStack_138 = (undefined1 *)0x42be88;
        uVar3 = FUN_004048a4();
        local_130 = CONCAT44(local_130._4_4_,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_134 = (undefined1 *)0x42be92;
        uVar3 = FUN_004343c5();
        local_130 = CONCAT44(0xffffffff,uVar3);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        puStack_134 = (undefined1 *)0x42bea2;
        FUN_004184ca();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        local_130 = CONCAT44(unaff_EBP + -0x58,0x42beaf);
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          local_130 = CONCAT44(iVar2,0x42beba);
          FUN_00878dfb();
        }
        if ((*(short **)(unaff_EBP + -0x18) != (short *)0x0) &&
           (**(short **)(unaff_EBP + -0x18) != 0)) {
          local_130 = CONCAT44(0x42bedc,(int)local_130);
          piVar4 = (int *)FUN_004360e4();
          puStack_138 = (undefined1 *)&local_130;
          local_130._4_4_ = (undefined *)0x0;
          *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
          puStack_134 = (undefined1 *)0x5ed;
          puStack_13c = (undefined1 *)0x42bef2;
          FUN_00679e4e();
          puStack_134 = (undefined1 *)(unaff_EBP + -0x98);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42bf05;
          FUN_0040263d();
          puStack_138 = (undefined1 *)0x42bf0c;
          uVar3 = FUN_004048a4();
          local_130 = CONCAT44(local_130._4_4_,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          puStack_134 = (undefined1 *)0x42bf16;
          iVar2 = FUN_00412550();
          *piVar4 = iVar2;
          puStack_134 = (undefined1 *)(unaff_EBP + -0x98);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42bf28;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42bf35);
            FUN_00878dfb();
          }
          local_130 = CONCAT44(unaff_EBP + -0x18,0x42bf41);
          FUN_00419192();
          puStack_134 = (undefined1 *)((int)&local_130 + 4);
          *(int *)(unaff_EBP + -0x10) = (int)&local_130 + 4;
          local_130._0_4_ = 0xffe;
          puStack_138 = (undefined1 *)0x42bf54;
          local_130._4_4_ = (undefined *)extraout_ECX_02;
          FUN_00679e4e();
          local_130 = CONCAT44(local_130._4_4_,unaff_EBP + -0x118);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_134 = (undefined1 *)0x42bf67;
          FUN_0040263d();
          puStack_134 = (undefined1 *)0x42bf6e;
          psVar5 = (short *)FUN_004048a4();
          sVar1 = *psVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (sVar1 == 8) {
            puVar6 = *(undefined **)(psVar5 + 4);
          }
          else {
            puVar6 = &DAT_0097812c;
          }
          local_130 = CONCAT44(0xffffffff,puVar6);
          puStack_134 = (undefined1 *)0x42bf8d;
          FUN_004184ca();
          local_130._4_4_ = (undefined *)(unaff_EBP + -0x118);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          local_130._0_4_ = 0x42bf9d;
          iVar2 = FUN_00402bc3();
          local_130._0_4_ = (int)local_130._4_4_;
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42bfa8);
            FUN_00878dfb();
            local_130._0_4_ = extraout_ECX_03;
          }
          puStack_138 = (undefined1 *)&local_130;
          local_130._4_4_ = (undefined *)0x0;
          *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
          puStack_134 = (undefined1 *)0x3d0;
          puStack_13c = (undefined1 *)0x42bfbc;
          FUN_00679e4e();
          puStack_134 = (undefined1 *)(unaff_EBP + -0xb8);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42bfcf;
          FUN_0040263d();
          puStack_138 = (undefined1 *)0x42bfd6;
          uVar3 = FUN_004048a4();
          local_130 = CONCAT44(local_130._4_4_,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_134 = (undefined1 *)0x42bfe0;
          iVar2 = FUN_00412550();
          puStack_134 = (undefined1 *)0x42bfe7;
          iVar7 = FUN_007d1e08();
          puStack_134 = (undefined1 *)(unaff_EBP + -0xb8);
          piVar4[3] = iVar2 + iVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42bffc;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42c00b);
            FUN_00878dfb();
          }
          local_130._4_4_ = *(undefined **)(unaff_EBP + 0x10);
          puStack_138 = (undefined1 *)&local_130;
          *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
          puStack_134 = (undefined1 *)0x3ca;
          puStack_13c = (undefined1 *)0x42c021;
          FUN_00679e4e();
          puStack_134 = (undefined1 *)(unaff_EBP + -0xf8);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c034;
          FUN_0040263d();
          puStack_138 = (undefined1 *)0x42c03b;
          uVar3 = FUN_004048a4();
          local_130 = CONCAT44(local_130._4_4_,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_134 = (undefined1 *)0x42c045;
          iVar2 = FUN_00412550();
          piVar4[4] = iVar2;
          puStack_134 = (undefined1 *)(unaff_EBP + -0xf8);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c058;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42c065);
            FUN_00878dfb();
          }
          local_130._4_4_ = *(undefined **)(unaff_EBP + 0x14);
          puStack_138 = (undefined1 *)&local_130;
          *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
          puStack_134 = (undefined1 *)0x3cb;
          puStack_13c = (undefined1 *)0x42c07b;
          FUN_00679e4e();
          puStack_134 = (undefined1 *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c08b;
          FUN_0040263d();
          puStack_138 = (undefined1 *)0x42c092;
          uVar3 = FUN_004048a4();
          local_130 = CONCAT44(local_130._4_4_,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_134 = (undefined1 *)0x42c09c;
          iVar2 = FUN_00412550();
          piVar4[5] = iVar2;
          puStack_134 = (undefined1 *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c0ac;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42c0b9);
            FUN_00878dfb();
          }
          puStack_138 = (undefined1 *)&local_130;
          local_130._4_4_ = (undefined *)0x0;
          *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
          puStack_134 = (undefined1 *)0x5c0;
          puStack_13c = (undefined1 *)0x42c0cd;
          FUN_00679e4e();
          puStack_134 = (undefined1 *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c0e0;
          FUN_0040263d();
          puStack_138 = (undefined1 *)0x42c0e7;
          uVar3 = FUN_004048a4();
          local_130 = CONCAT44(local_130._4_4_,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_134 = (undefined1 *)0x42c0f1;
          iVar2 = FUN_00412550();
          piVar4[4] = piVar4[4] + iVar2;
          puStack_134 = (undefined1 *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c104;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42c111);
            FUN_00878dfb();
          }
          puStack_138 = (undefined1 *)&local_130;
          local_130._4_4_ = (undefined *)0x0;
          *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
          puStack_134 = (undefined1 *)0x5c1;
          puStack_13c = (undefined1 *)0x42c125;
          FUN_00679e4e();
          puStack_134 = (undefined1 *)(unaff_EBP + -0xa8);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c138;
          FUN_0040263d();
          puStack_138 = (undefined1 *)0x42c13f;
          uVar3 = FUN_004048a4();
          local_130 = CONCAT44(local_130._4_4_,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puStack_134 = (undefined1 *)0x42c149;
          iVar2 = FUN_00412550();
          piVar4[5] = piVar4[5] + iVar2;
          puStack_134 = (undefined1 *)(unaff_EBP + -0xa8);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_138 = (undefined1 *)0x42c15c;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_130 = CONCAT44(iVar2,0x42c169);
            FUN_00878dfb();
          }
          piVar4[6] = *(int *)(unaff_EBP + 0xc);
          if (*piVar4 == 1) {
            puStack_138 = (undefined1 *)&local_130;
            local_130._4_4_ = (undefined *)0x0;
            *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
            puStack_134 = (undefined1 *)0x3d1;
            puStack_13c = (undefined1 *)0x42c18c;
            FUN_00679e4e();
            puStack_134 = (undefined1 *)(unaff_EBP + -200);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_138 = (undefined1 *)0x42c19f;
            FUN_0040263d();
            puStack_138 = (undefined1 *)0x42c1a6;
            uVar3 = FUN_004048a4();
            local_130 = CONCAT44(local_130._4_4_,uVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            puStack_134 = (undefined1 *)0x42c1b0;
            iVar2 = FUN_00412550();
            piVar4[7] = iVar2;
            puStack_134 = (undefined1 *)(unaff_EBP + -200);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_138 = (undefined1 *)0x42c1c3;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_130 = CONCAT44(iVar2,0x42c1d0);
              FUN_00878dfb();
            }
            local_130 = 0;
            *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_134;
            puStack_138 = (undefined1 *)0xfff;
            puStack_13c = (undefined1 *)&puStack_134;
            FUN_00679e4e();
            puStack_138 = (undefined1 *)(unaff_EBP + -0xe8);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_13c = (undefined1 *)0x42c1fd;
            FUN_0040263d();
            puStack_13c = (undefined1 *)0x42c204;
            puStack_134 = (undefined1 *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            puStack_138 = (undefined1 *)0x42c20e;
            fVar8 = (float10)FUN_00434352();
            *(double *)(piVar4 + 10) = (double)fVar8;
            puStack_138 = (undefined1 *)(unaff_EBP + -0xe8);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_13c = (undefined1 *)0x42c221;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_130 = CONCAT44(iVar2,0x42c22e);
              FUN_00878dfb();
            }
            puStack_138 = (undefined1 *)&local_130;
            local_130._4_4_ = (undefined *)0x0;
            *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
            puStack_134 = (undefined1 *)0x6de;
            puStack_13c = (undefined1 *)0x42c242;
            FUN_00679e4e();
            puStack_134 = (undefined1 *)(unaff_EBP + -0x108);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_138 = (undefined1 *)0x42c255;
            FUN_0040263d();
            puStack_138 = (undefined1 *)0x42c25c;
            uVar3 = FUN_004048a4();
            local_130 = CONCAT44(local_130._4_4_,uVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            puStack_134 = (undefined1 *)0x42c266;
            iVar2 = FUN_00412550();
            piVar4[8] = iVar2;
            puStack_134 = (undefined1 *)(unaff_EBP + -0x108);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_138 = (undefined1 *)0x42c279;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_130 = CONCAT44(iVar2,0x42c286);
              FUN_00878dfb();
            }
            puStack_138 = (undefined1 *)&local_130;
            local_130._4_4_ = (undefined *)0x0;
            *(undefined8 **)(unaff_EBP + -0x10) = &local_130;
            puStack_134 = (undefined1 *)0x6df;
            puStack_13c = (undefined1 *)0x42c29a;
            FUN_00679e4e();
            puStack_134 = (undefined1 *)(unaff_EBP + -0x128);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_138 = (undefined1 *)0x42c2ad;
            FUN_0040263d();
            puStack_138 = (undefined1 *)0x42c2b4;
            uVar3 = FUN_004048a4();
            local_130 = CONCAT44(local_130._4_4_,uVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            puStack_134 = (undefined1 *)0x42c2be;
            iVar2 = FUN_00412550();
            piVar4[9] = iVar2;
            puStack_134 = (undefined1 *)(unaff_EBP + -0x128);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_138 = (undefined1 *)0x42c2d1;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_130 = CONCAT44(iVar2,0x42c2de);
              FUN_00878dfb();
            }
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        local_130 = CONCAT44(0x42c2ea,(int)local_130);
        FUN_00402676();
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar4 != (int *)0x0) {
          local_130 = CONCAT44(piVar4,0x42c2fb);
          (**(code **)(*piVar4 + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar4 != (int *)0x0) {
        local_130 = CONCAT44(piVar4,0x42c314);
        (**(code **)(*piVar4 + 8))();
      }
      goto LAB_0042c327;
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    local_130 = CONCAT44(piVar4,0x42c327);
    (**(code **)(*piVar4 + 8))();
  }
LAB_0042c327:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



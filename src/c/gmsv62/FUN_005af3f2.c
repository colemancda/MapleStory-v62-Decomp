/* FUN_005af3f2 - 0x005af3f2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005af3f2(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 *puStack_cc;
  int *piStack_c8;
  undefined *puStack_c4;
  int iStack_c0;
  undefined1 *puStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar5 = *(int *)(unaff_EBP + 0x10) + *(int *)(*(int *)(unaff_EBP + 0xc) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + 0x10) = iVar5;
  if (iVar5 < 0x8b) {
    if (*(int *)(extraout_ECX + 0x90) == 0) {
      iStack_b0 = 0x5af439;
      FUN_00878dfb();
    }
    iVar1 = FUN_0040e53d();
    if (iVar1 + iVar5 != 0) {
      iStack_b0 = 0x5af45a;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x90);
      piStack_c8 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_c8 == (int *)0x0) {
        iStack_b0 = 0x5af47b;
        FUN_00878dfb();
        piStack_c8 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piStack_c8;
      puStack_bc = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_c0 = *(int *)(unaff_EBP + 0x10);
      iStack_b8 = *(int *)(unaff_EBP + -0x38);
      iStack_b4 = *(int *)(unaff_EBP + -0x34);
      iStack_b0 = *(int *)(unaff_EBP + -0x30);
      puStack_c4 = (undefined *)0x0;
      *(int **)(unaff_EBP + -0x24) = piStack_c8;
      puStack_cc = (undefined4 *)0x5af49e;
      iVar5 = (**(code **)(iVar5 + 0x80))();
      if (iVar5 < 0) {
        iStack_b0 = *(int *)(unaff_EBP + -0x24);
        iStack_b8 = 0x5af4b0;
        iStack_b4 = iVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_b0 = 0x5af4bd;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_b0 = 0x5af4c8;
        FUN_00878dfb();
      }
      iStack_b0 = 0x5af4d1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_b0 = 0x5af4de;
      FUN_00403191();
      iStack_b0 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_b4 = 0x5af4f8;
      iStack_b4 = FUN_00449749();
      puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0xc) + 0xc);
      *(int **)(unaff_EBP + -0x14) = &iStack_b8;
      iStack_c0 = 0x5af50b;
      FUN_004059fd();
      iVar5 = *(int *)(unaff_EBP + 0x10);
      puStack_bc = (undefined1 *)(iVar5 + 3);
      iStack_c0 = 10;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puStack_c4 = (undefined *)0x5af520;
      FUN_004115d9();
      puStack_c4 = (undefined *)0x5af527;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_b0 = 0x5af534;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_b0 = 0x5af53f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar1 = unaff_EBP + -0x4c;
      iStack_b0 = 0x5af54c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_b0 = 0x5af557;
        FUN_00878dfb();
        iVar1 = extraout_ECX_00;
      }
      iStack_b0 = 0;
      puStack_bc = (undefined1 *)&iStack_b4;
      *(int **)(unaff_EBP + -0x14) = &iStack_b4;
      iStack_b8 = 0xa29;
      iStack_c0 = 0x5af571;
      iStack_b4 = iVar1;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_b8 = unaff_EBP + -0x98;
      puStack_bc = (undefined1 *)0x5af587;
      FUN_0040263d();
      puStack_bc = (undefined1 *)0x5af58e;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_b4 = 0x5af599;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      iStack_b4 = unaff_EBP + -0x18;
      *(int **)(unaff_EBP + -0x14) = &iStack_b0;
      iStack_b8 = 0x5af5ad;
      iStack_b0 = extraout_ECX_01;
      FUN_004251a3();
      iStack_b8 = *(int *)(unaff_EBP + 0xc) + 0x10;
      *(int **)(unaff_EBP + -0x28) = &iStack_b4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_bc = (undefined1 *)0x5af5c3;
      iStack_b4 = extraout_ECX_02;
      FUN_00450368();
      iStack_b8 = iVar5 + 6;
      puStack_bc = (undefined1 *)0xa9;
      puStack_c4 = (undefined *)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x14) = &iStack_c0;
      piStack_c8 = (int *)0x5af5db;
      iStack_c0 = extraout_ECX_03;
      FUN_0046fc23();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_c4 = (undefined *)0x5af5e4;
      FUN_007d2fea();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_c4 = (undefined *)(unaff_EBP + -0x98);
      piStack_c8 = (int *)0x5af5f4;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_b0 = 0x5af601;
        FUN_00878dfb();
      }
    }
    iVar5 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(iVar5 + 0x90) == 0) {
      iStack_b0 = 0x5af617;
      FUN_00878dfb();
    }
    iVar1 = FUN_0040e53d();
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    while( true ) {
      iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x14);
      if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= *(uint *)(unaff_EBP + -0x1c))) break;
      if (0x8a < *(int *)(unaff_EBP + 0x10)) goto LAB_005af8e0;
      if (*(int *)(iVar5 + 0x94) == 0) {
        iStack_b0 = 0x5af663;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040e53d();
      if (iVar5 + *(int *)(unaff_EBP + 0x10) != 0) {
        iStack_b0 = 0x5af680;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x94);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar4 == (int *)0x0) {
          iStack_b0 = 0x5af6a1;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar4;
        puStack_bc = *(undefined1 **)(unaff_EBP + -0x18);
        iStack_c0 = *(int *)(unaff_EBP + 0x10);
        iStack_b8 = *(int *)(unaff_EBP + -0x4c);
        iStack_b4 = *(int *)(unaff_EBP + -0x48);
        iStack_b0 = *(int *)(unaff_EBP + -0x44);
        puStack_c4 = (undefined *)0x0;
        *(int **)(unaff_EBP + -0x24) = piVar4;
        puStack_cc = (undefined4 *)0x5af6c4;
        piStack_c8 = piVar4;
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          iStack_b0 = *(int *)(unaff_EBP + -0x24);
          iStack_b8 = 0x5af6d6;
          iStack_b4 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_b0 = 0x5af6e3;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b0 = 0x5af6f0;
          FUN_00878dfb();
        }
        if ((*(int *)(unaff_EBP + -0x1c) == 0) && (*(int *)(*(int *)(unaff_EBP + 0xc) + 0x18) == 2))
        {
          if (**(int **)(*(int *)(unaff_EBP + 0xc) + 0x14) == 0) {
            iStack_b0 = 0;
          }
          else {
            iStack_b0 = FUN_00409205();
          }
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          iStack_b4 = 0x5af72a;
          FUN_00414edd();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_b0 = 0x5af73a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_b0 = 0x5af747;
          FUN_00403191();
          iStack_b0 = unaff_EBP + -0x38;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_b4 = 0x5af764;
          iStack_b4 = FUN_00449749();
          iStack_b8 = -1;
          puStack_bc = (undefined1 *)0x0;
          iStack_c0 = 0;
          puStack_c4 = &DAT_00965a54;
          piStack_c8 = (int *)0x5af776;
          iVar5 = FUN_004538dc();
          puStack_bc = (undefined1 *)(iVar5 + 1);
          iStack_c0 = unaff_EBP + -0x3c;
          puStack_c4 = (undefined *)0x5af784;
          FUN_0045e053();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_b8 = 0x5af78f;
          puStack_bc = (undefined1 *)FUN_00449713();
          *(int **)(unaff_EBP + -0x14) = &iStack_b8;
          iStack_c0 = 0x5af79b;
          iStack_b8 = extraout_ECX_04;
          FUN_00448a17();
          puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x10) + 3);
          iStack_c0 = 8;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puStack_c4 = (undefined *)0x5af7b0;
          FUN_004115d9();
          puStack_c4 = (undefined *)0x5af7b7;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (*(int *)(unaff_EBP + -0x3c) != 0) {
            iStack_b0 = 0x5af7cb;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_b0 = 0x5af7d9;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_b0 = 0x5af7e4;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_b0 = 0x5af7f4;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_b0 = 0x5af7ff;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            iStack_b0 = 0x5af817;
            FUN_00434e38();
          }
        }
        else {
          iStack_b0 = 0x5af826;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_b0 = 0x5af833;
          FUN_00403191();
          iStack_b0 = unaff_EBP + -0x68;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_b4 = 0x5af84d;
          iStack_b4 = FUN_00449749();
          iStack_b8 = *(int *)(unaff_EBP + -0x1c);
          puStack_bc = (undefined1 *)0x5af859;
          puStack_bc = (undefined1 *)FUN_005affb2();
          *(int **)(unaff_EBP + -0x14) = &iStack_b8;
          iStack_c0 = 0x5af865;
          iStack_b8 = extraout_ECX_05;
          FUN_004059fd();
          puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x10) + 3);
          iStack_c0 = 8;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_c4 = (undefined *)0x5af87a;
          FUN_004115d9();
          puStack_c4 = (undefined *)0x5af881;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_b0 = 0x5af88e;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_b0 = 0x5af899;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_b0 = 0x5af8a6;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_b0 = 0x5af8b1;
            FUN_00878dfb();
          }
        }
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x94) == 0) {
        iStack_b0 = 0x5af8c7;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar5;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      iVar5 = *(int *)(unaff_EBP + -0x10);
    }
    if (*(int *)(*(int *)(unaff_EBP + 0xc) + 0x18) == 1) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      iStack_b0 = unaff_EBP + -0x58;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_b4 = 0x5af918;
      FUN_00679e4e();
      iStack_b0 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_b4 = 0x5af929;
      FUN_00432f57();
      iStack_b0 = 0x5af932;
      FUN_0040810c();
      iStack_b0 = 0x5af93e;
      FUN_00402f41();
      FUN_00402fa6();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00402fa6();
      iStack_b0 = unaff_EBP + -0x50;
      iStack_b4 = 0x5af96a;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_b0 = 0x5af98f;
      FUN_00432cfc();
      iStack_b0 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_b4 = 0x5af9a0;
      FUN_00432f57();
      iStack_b0 = 0x5af9a9;
      FUN_0040810c();
      iStack_b0 = 0x5af9b5;
      FUN_00402f41();
      FUN_00402fa6();
      FUN_00402fa6();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00402fa6();
      iStack_b0 = 0x5af9e2;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x94);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (piVar4 == (int *)0x0) {
        iStack_b0 = 0x5afa03;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piVar4;
      puStack_bc = *(undefined1 **)(unaff_EBP + -0x28);
      iStack_c0 = *(int *)(unaff_EBP + 0x10);
      iStack_b8 = *(int *)(unaff_EBP + -0x78);
      iStack_b4 = *(int *)(unaff_EBP + -0x74);
      iStack_b0 = *(int *)(unaff_EBP + -0x70);
      puStack_c4 = (undefined *)0x0;
      *(int **)(unaff_EBP + -0x14) = piVar4;
      puStack_cc = (undefined4 *)0x5afa26;
      piStack_c8 = piVar4;
      iVar5 = (**(code **)(iVar5 + 0x80))();
      if (iVar5 < 0) {
        puStack_cc = (undefined4 *)&DAT_00963cc8;
        uStack_d0 = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_d8 = 0x5afa38;
        iStack_d4 = iVar5;
        FUN_00878e09();
      }
      puStack_cc = (undefined4 *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      uStack_d0 = 0x5afa45;
      puStack_cc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_cc < 0) {
        uStack_d0 = 0x5afa50;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(iVar5 + 0x94) == 0) {
        puStack_cc = (undefined4 *)0x80004003;
        uStack_d0 = 0x5afa66;
        FUN_00878dfb();
      }
      puStack_cc = (undefined4 *)0x5afa71;
      iVar1 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar1;
      puStack_cc = &DAT_00980690;
      uStack_d0 = 0x5afa7d;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 0x94);
      piStack_e8 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (piStack_e8 == (int *)0x0) {
        puStack_cc = (undefined4 *)0x80004003;
        uStack_d0 = 0x5afa9b;
        FUN_00878dfb();
        piStack_e8 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piStack_e8;
      uStack_dc = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_e0 = *(undefined4 *)(unaff_EBP + 0x10);
      uStack_d8 = *(undefined4 *)(unaff_EBP + -0x68);
      iStack_d4 = *(int *)(unaff_EBP + -100);
      uStack_d0 = *(undefined4 *)(unaff_EBP + -0x60);
      uStack_e4 = 0;
      *(int **)(unaff_EBP + -0x28) = piStack_e8;
      puStack_cc = *(undefined4 **)(unaff_EBP + -0x5c);
      puStack_ec = (undefined4 *)0x5afabe;
      iVar5 = (**(code **)(iVar5 + 0x80))();
      if (iVar5 < 0) {
        puStack_ec = (undefined4 *)&DAT_00963cc8;
        iStack_f0 = *(undefined4 *)(unaff_EBP + -0x28);
        uStack_f8 = 0x5afad0;
        iStack_f4 = iVar5;
        FUN_00878e09();
      }
      puStack_ec = (undefined4 *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_f0 = 0x5afadd;
      puStack_ec = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_ec < 0) {
        iStack_f0 = 0x5afae8;
        FUN_00878dfb();
      }
      puStack_ec = &DAT_00980690;
      iStack_f0 = 0x5afaf1;
      FUN_00403191();
      puStack_ec = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_f0 = 0x5afb01;
      FUN_00403191();
      iVar5 = *(int *)(unaff_EBP + -0x10);
      puStack_ec = (undefined4 *)(unaff_EBP + -0x4c);
      iStack_f0 = unaff_EBP + -0x88;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_f4 = 0x5afb1e;
      iStack_f4 = FUN_00449749();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_f8;
      FUN_004059fd(unaff_EBP + -0x20);
      iVar1 = *(int *)(unaff_EBP + 0x10) + 3;
      uVar3 = 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_004115d9(8,iVar1);
      FUN_00448e3a(uVar3,iVar1);
      puStack_ec = (undefined4 *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_f0 = 0x5afb5a;
      puStack_ec = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_ec < 0) {
        iStack_f0 = 0x5afb65;
        FUN_00878dfb();
      }
      puStack_ec = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_f0 = 0x5afb72;
      puStack_ec = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_ec < 0) {
        iStack_f0 = 0x5afb7d;
        FUN_00878dfb();
      }
      if (*(int *)(iVar5 + 0x94) == 0) {
        puStack_ec = (undefined4 *)0x80004003;
        iStack_f0 = 0x5afb90;
        FUN_00878dfb();
      }
      puStack_ec = (undefined4 *)0x5afb9b;
      iVar1 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar1;
      puStack_ec = &DAT_00980690;
      iStack_f0 = 0x5afba7;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 0x94);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (piVar4 == (int *)0x0) {
        puStack_ec = (undefined4 *)0x80004003;
        iStack_f0 = 0x5afbc5;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piVar4;
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_f4 = *(int *)(unaff_EBP + -0x34);
      iStack_f0 = *(undefined4 *)(unaff_EBP + -0x30);
      *(int **)(unaff_EBP + -0x28) = piVar4;
      puStack_ec = *(undefined4 **)(unaff_EBP + -0x2c);
      iVar5 = (**(code **)(iVar5 + 0x80))
                        (piVar4,0,*(undefined4 *)(unaff_EBP + 0x10),
                         *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar5 < 0) {
        iStack_b0 = *(int *)(unaff_EBP + -0x28);
        iStack_b8 = 0x5afbfa;
        iStack_b4 = iVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_b0 = 0x5afc07;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_b0 = 0x5afc12;
        FUN_00878dfb();
      }
      iStack_b0 = 0x5afc1e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_b0 = 0x5afc2e;
      FUN_00403191();
      iVar5 = *(int *)(unaff_EBP + -0x10);
      iStack_b0 = unaff_EBP + -0xa8;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_b4 = 0x5afc4e;
      iStack_b4 = FUN_00449749();
      puStack_bc = (undefined1 *)(unaff_EBP + 0xc);
      *(int **)(unaff_EBP + -0x14) = &iStack_b8;
      iStack_c0 = 0x5afc5e;
      iStack_b8 = extraout_ECX_06;
      FUN_004059fd();
      puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + 0x10) + 3);
      iStack_c0 = 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_c4 = (undefined *)0x5afc73;
      FUN_004115d9();
      puStack_c4 = (undefined *)0x5afc7a;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_b0 = 0x5afc8a;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_b0 = 0x5afc95;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_b0 = 0x5afca5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_b0 = 0x5afcb0;
        FUN_00878dfb();
      }
      if (*(int *)(iVar5 + 0x94) == 0) {
        iStack_b0 = 0x5afcc3;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar5;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_004030b1();
      }
    }
    if (*(int *)(unaff_EBP + 0x10) < 0x8b) {
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x98) == 0) {
        iStack_b0 = 0x5afd14;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040e53d();
      if (iVar5 + *(int *)(unaff_EBP + 0x10) != 0) {
        iStack_b0 = 0x5afd32;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        iStack_b0 = unaff_EBP + -0x38;
        iStack_b4 = 0x5afd3c;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_b0 = 0x5afd48;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x98);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (piVar4 == (int *)0x0) {
          iStack_b0 = 0x5afd69;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar4;
        puStack_bc = *(undefined1 **)(unaff_EBP + 0xc);
        iStack_c0 = *(int *)(unaff_EBP + 0x10);
        iStack_b8 = *(int *)(unaff_EBP + -0x38);
        iStack_b4 = *(int *)(unaff_EBP + -0x34);
        iStack_b0 = *(int *)(unaff_EBP + -0x30);
        puStack_c4 = (undefined *)0x0;
        *(int **)(unaff_EBP + -0x14) = piVar4;
        puStack_cc = (undefined4 *)0x5afd8c;
        piStack_c8 = piVar4;
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          iStack_b0 = *(int *)(unaff_EBP + -0x14);
          iStack_b8 = 0x5afd9e;
          iStack_b4 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_b0 = 0x5afdab;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b0 = 0x5afdb6;
          FUN_00878dfb();
        }
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x98) == 0) {
        iStack_b0 = 0x5afdcc;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040e53d();
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + iVar5;
      if ((*(int *)(unaff_EBP + 0x14) == 0) &&
         (*(int *)(unaff_EBP + 0x10) != -7 && -1 < *(int *)(unaff_EBP + 0x10) + 7)) {
        iStack_b0 = 0x5afdfc;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        iStack_b0 = unaff_EBP + -0x38;
        iStack_b4 = 0x5afe06;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_b0 = 0x5afe12;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x9c);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (piVar4 == (int *)0x0) {
          iStack_b0 = 0x5afe30;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        iStack_b8 = *(int *)(unaff_EBP + -0x38);
        iStack_b4 = *(int *)(unaff_EBP + -0x34);
        iStack_c0 = *(int *)(unaff_EBP + 0x10) + 3;
        iStack_b0 = *(int *)(unaff_EBP + -0x30);
        puStack_c4 = (undefined *)0x0;
        *(int **)(unaff_EBP + 0xc) = piVar4;
        puStack_cc = (undefined4 *)0x5afe55;
        piStack_c8 = piVar4;
        puStack_bc = (undefined1 *)iVar5;
        iVar5 = (**(code **)(iVar1 + 0x80))();
        if (iVar5 < 0) {
          iStack_b0 = *(int *)(unaff_EBP + 0xc);
          iStack_b8 = 0x5afe67;
          iStack_b4 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_b0 = 0x5afe74;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_b0 = 0x5afe7f;
          FUN_00878dfb();
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_b0 = 0x5afe90;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  else {
LAB_005af8e0:
    FUN_004125e6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



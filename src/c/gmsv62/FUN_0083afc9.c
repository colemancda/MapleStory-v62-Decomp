/* FUN_0083afc9 - 0x0083afc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083afc9(void)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int *piStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int *piStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  
  FUN_00879bb8();
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) =
       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x2ca4);
  iStack_d8 = 0x83aff1;
  cVar3 = FUN_00433bfa();
  if (cVar3 != '\0') {
    *(int *)(unaff_EBP + -0x20) = extraout_ECX + 0x2ca8;
    iStack_d8 = 0x83b008;
    cVar3 = FUN_00433bfa();
    if (cVar3 != '\0') {
      iStack_d8 = 0x83b01e;
      FUN_00403191();
      iStack_d8 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_dc = 0x83b02c;
      FUN_004031b7();
      bVar7 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (bVar7) {
        iStack_d8 = 0x83b042;
        FUN_00878dfb();
      }
      iStack_d8 = unaff_EBP + -0x50;
      iStack_dc = 0xc006156c;
      iStack_e0 = 0;
      piStack_e4 = (int *)0x0;
      puVar4 = (undefined4 *)FUN_0042a39f();
      iStack_d8 = 0x83b06b;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x2ca4),
                 (IBinding *)*puVar4);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_d8 = 0x83b080;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b08b;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_d8 = 0x83b098;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b0a3;
        FUN_00878dfb();
      }
      iStack_d8 = 0x83b0ac;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 2;
      iStack_d8 = 0x83b0bc;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_d8 = 0x83b0c9;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_d8 = 0x83b0d9;
      FUN_00403191();
      iStack_d8 = 200;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_dc = 0x83b0ed;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_d8 = 0x83b0fa;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_d8 = 0x83b107;
      FUN_00403191();
      iStack_d8 = 0;
      iStack_dc = unaff_EBP + -0x50;
      iStack_e0 = unaff_EBP + -0x60;
      *(int ***)(unaff_EBP + -0x10) = &piStack_e4;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_dc = 0x83b14e;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x18) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        iStack_d8 = 0x83b164;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_d8 = 0x83b175;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar5 = **(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (iVar5 == 0) {
        iStack_d8 = 0x83b190;
        FUN_00878dfb();
      }
      iStack_d8 = unaff_EBP + -0x40;
      iStack_dc = unaff_EBP + -0x80;
      iStack_e0 = unaff_EBP + -0x90;
      piStack_e4 = (int *)(unaff_EBP + -0x70);
      FUN_004250ac();
      iStack_d8 = 0x83b1c7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b1d2;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_d8 = 0x83b1ea;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b1f5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_d8 = 0x83b202;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b20d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_d8 = 0x83b21a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b225;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_d8 = 0x83b232;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b23d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_d8 = 0x83b24d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b258;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_d8 = 0x83b265;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b270;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_d8 = 0x83b27d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b288;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_d8 = 0x83b295;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b2a0;
        FUN_00878dfb();
      }
      iStack_d8 = 0x83b2a9;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
      iStack_d8 = 0x83b2b9;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_d8 = 0x83b2c6;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_d8 = 0x83b2d6;
      FUN_00403191();
      iStack_d8 = 200;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_dc = 0x83b2e5;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_d8 = 0x83b2f2;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_d8 = 0x83b2ff;
      FUN_00403191();
      iStack_d8 = 0;
      iStack_dc = unaff_EBP + -0x40;
      iStack_e0 = unaff_EBP + -0x30;
      *(int ***)(unaff_EBP + -0x18) = &piStack_e4;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_dc = 0x83b346;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        iStack_d8 = 0x83b35c;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_d8 = 0x83b36d;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar5 = **(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (iVar5 == 0) {
        iStack_d8 = 0x83b388;
        FUN_00878dfb();
      }
      iStack_d8 = unaff_EBP + -0x60;
      iStack_dc = unaff_EBP + -0x70;
      iStack_e0 = unaff_EBP + -0x90;
      piStack_e4 = (int *)(unaff_EBP + -0x80);
      FUN_004250ac();
      iStack_d8 = 0x83b3bf;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b3ca;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_d8 = 0x83b3e2;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b3ed;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_d8 = 0x83b3fa;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b405;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_d8 = 0x83b412;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b41d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_d8 = 0x83b42a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b435;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_d8 = 0x83b445;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b450;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_d8 = 0x83b45d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b468;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_d8 = 0x83b475;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b480;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_d8 = 0x83b48d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b498;
        FUN_00878dfb();
      }
      iStack_d8 = 0x83b4a1;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x16;
      iStack_d8 = 0x83b4b1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_d8 = 0x83b4be;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_d8 = 0x83b4ce;
      FUN_00403191();
      iStack_d8 = 200;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_dc = 0x83b4dd;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_d8 = 0x83b4ea;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_d8 = 0x83b4f7;
      FUN_00403191();
      iStack_d8 = 0;
      iStack_dc = unaff_EBP + -0x40;
      iStack_e0 = unaff_EBP + -0x30;
      *(int ***)(unaff_EBP + -0x18) = &piStack_e4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_dc = 0x83b53e;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        iStack_d8 = 0x83b554;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_d8 = 0x83b565;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar5 = **(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar5 == 0) {
        iStack_d8 = 0x83b580;
        FUN_00878dfb();
      }
      iStack_d8 = unaff_EBP + -0x60;
      iStack_dc = unaff_EBP + -0x70;
      iStack_e0 = unaff_EBP + -0x90;
      piStack_e4 = (int *)(unaff_EBP + -0x80);
      FUN_004250ac();
      iStack_d8 = 0x83b5b7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b5c2;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_d8 = 0x83b5da;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b5e5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_d8 = 0x83b5f2;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b5fd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_d8 = 0x83b60a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b615;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_d8 = 0x83b622;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b62d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_d8 = 0x83b63d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b648;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_d8 = 0x83b655;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b660;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_d8 = 0x83b66d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b678;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_d8 = 0x83b685;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b690;
        FUN_00878dfb();
      }
      iStack_d8 = 0x83b699;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x20;
      iStack_d8 = 0x83b6a9;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_d8 = 0x83b6b6;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_d8 = 0x83b6c6;
      FUN_00403191();
      iStack_d8 = 200;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_dc = 0x83b6d5;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_d8 = 0x83b6e2;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_d8 = 0x83b6ef;
      FUN_00403191();
      iStack_d8 = 0;
      iStack_dc = unaff_EBP + -0x40;
      iStack_e0 = unaff_EBP + -0x30;
      *(int ***)(unaff_EBP + -0x18) = &piStack_e4;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iStack_dc = 0x83b736;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        iStack_d8 = 0x83b74c;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_d8 = 0x83b75d;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar5 = **(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar5 == 0) {
        iStack_d8 = 0x83b778;
        FUN_00878dfb();
      }
      iStack_d8 = unaff_EBP + -0x60;
      iStack_dc = unaff_EBP + -0x70;
      iStack_e0 = unaff_EBP + -0x90;
      piStack_e4 = (int *)(unaff_EBP + -0x80);
      FUN_004250ac();
      iStack_d8 = 0x83b7af;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b7ba;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_d8 = 0x83b7d2;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b7dd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_d8 = 0x83b7ea;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b7f5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_d8 = 0x83b802;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b80d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_d8 = 0x83b81a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b825;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_d8 = 0x83b835;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b840;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_d8 = 0x83b84d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b858;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_d8 = 0x83b865;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b870;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_d8 = 0x83b87d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b888;
        FUN_00878dfb();
      }
      iStack_d8 = 0x83b891;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x2a;
      iStack_d8 = 0x83b8a1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_d8 = 0x83b8ae;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_d8 = 0x83b8be;
      FUN_00403191();
      iStack_d8 = 200;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_dc = 0x83b8cd;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_d8 = 0x83b8da;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_d8 = 0x83b8e7;
      FUN_00403191();
      iStack_d8 = 0;
      iStack_dc = unaff_EBP + -0x40;
      iStack_e0 = unaff_EBP + -0x30;
      *(int ***)(unaff_EBP + -0x18) = &piStack_e4;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iStack_dc = 0x83b92e;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        iStack_d8 = 0x83b944;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_d8 = 0x83b955;
          FUN_00878dfb();
        }
      }
      piVar6 = *(int **)(unaff_EBP + -0x1c);
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
      if (iVar5 == 0) {
        iStack_d8 = 0x83b970;
        FUN_00878dfb();
      }
      iStack_d8 = unaff_EBP + -0x60;
      iStack_dc = unaff_EBP + -0x70;
      iStack_e0 = unaff_EBP + -0x90;
      piStack_e4 = (int *)(unaff_EBP + -0x80);
      FUN_004250ac();
      iStack_d8 = 0x83b9a4;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b9af;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_d8 = 0x83b9c7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b9d2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_d8 = 0x83b9df;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83b9ea;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_d8 = 0x83b9f7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83ba02;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_d8 = 0x83ba0f;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83ba1a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_d8 = 0x83ba2a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83ba35;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_d8 = 0x83ba42;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83ba4d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iStack_d8 = 0x83ba5a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83ba65;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_d8 = 0x83ba72;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_d8 = 0x83ba7d;
        FUN_00878dfb();
      }
      iStack_d8 = 0x83ba8c;
      puVar4 = (undefined4 *)FUN_00485656();
      iStack_d8 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0x34;
      iStack_dc = 0x83baa0;
      FUN_0040ee87();
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (iVar5 == 0) {
        iStack_d8 = 0x83bab2;
        FUN_00878dfb();
      }
      piStack_e4 = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
      iVar5 = *piStack_e4;
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_dc = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_d8 = *(undefined4 *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + -0x10) = piStack_e4;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x36;
      FUN_00403191();
      piVar6 = *(int **)(unaff_EBP + -0x1c);
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      iVar5 = *piVar6;
      *(int *)(unaff_EBP + -0x10) = iVar5;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      if (*piVar6 == 0) {
        FUN_00878dfb();
      }
      piVar6 = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
      *(int **)(unaff_EBP + -0x14) = piVar6;
      iVar5 = FUN_0042fb34();
      *(int *)(unaff_EBP + -0x10) = iVar5 + 0x17;
      FUN_0042fb0a();
      iVar5 = (**(code **)(*piVar6 + 0x90))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x1c);
      if (*piVar6 == 0) {
        FUN_00878dfb();
      }
      iVar5 = (**(code **)(*(int *)*piVar6 + 0xe0))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x38;
      FUN_00403191();
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      piVar6 = (int *)FUN_004113e5();
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      iVar5 = *(int *)*piVar6;
      *(int **)(unaff_EBP + -0x10) = (int *)*piVar6;
      iVar5 = (**(code **)(iVar5 + 0x90))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x3b;
      FUN_00403191();
      iVar5 = **(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      iVar5 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
      *(int **)(unaff_EBP + -0x10) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
      iVar5 = (**(code **)(iVar5 + 0x110))();
      if (iVar5 < 0) {
        iStack_174 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_17c = 0x83bd3e;
        iStack_178 = iVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      iStack_174 = 0x83bd4b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bd58;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_174 = 0x83bd65;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bd70;
        FUN_00878dfb();
      }
      iStack_174 = 0x83bd79;
      FUN_00403191();
      iStack_174 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0x3d;
      iStack_178 = 0x83bd8b;
      FUN_004031b7();
      bVar7 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      if (bVar7) {
        iStack_174 = 0x83bda1;
        FUN_00878dfb();
      }
      iStack_174 = unaff_EBP + -0x30;
      iStack_178 = 0xc006156c;
      iStack_17c = 0;
      piStack_180 = (int *)0x0;
      puVar4 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x10,0,0);
      iStack_174 = 0x83bdcb;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20),
                 (IBinding *)*puVar4);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_174 = 0x83bde0;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bdeb;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_174 = 0x83bdf8;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83be03;
        FUN_00878dfb();
      }
      iStack_174 = 0x83be0c;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x3f;
      iStack_174 = 0x83be1c;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      iStack_174 = 0x83be29;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      iStack_174 = 0x83be39;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      iStack_174 = 0x83be46;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      iStack_174 = 0x83be53;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_174 = 0x83be60;
      FUN_00403191();
      iStack_174 = 0;
      iStack_178 = unaff_EBP + -0x40;
      iStack_17c = unaff_EBP + -0x30;
      *(int ***)(unaff_EBP + -0x18) = &piStack_180;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      FUN_004033a1(u_UI_UIWindow_img_PartySearch_icon_0096c7f8);
      iVar5 = unaff_EBP + -0xb0;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      FUN_00405a1d(iVar5);
      FUN_00402660();
      FUN_00404a02(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      iStack_178 = 0x83bea7;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar5 != 0) {
        iStack_174 = 0x83bebd;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_174 = 0x83bece;
          FUN_00878dfb();
        }
      }
      iVar5 = **(int **)(unaff_EBP + -0x20);
      uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (iVar5 == 0) {
        iStack_174 = 0x83bee6;
        FUN_00878dfb();
      }
      iStack_174 = unaff_EBP + -0x60;
      iStack_178 = unaff_EBP + -0x70;
      iStack_17c = unaff_EBP + -0x90;
      piStack_180 = (int *)(unaff_EBP + -0x80);
      FUN_004250ac(unaff_EBP + -0xa0,uVar1);
      iStack_174 = 0x83bf1b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bf26;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      iStack_174 = 0x83bf3e;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bf49;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_174 = 0x83bf56;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bf61;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      iStack_174 = 0x83bf6e;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bf79;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      iStack_174 = 0x83bf86;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bf91;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      iStack_174 = 0x83bfa1;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bfac;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      iStack_174 = 0x83bfb9;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bfc4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iStack_174 = 0x83bfd1;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bfdc;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_174 = 0x83bfe9;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_174 = 0x83bff4;
        FUN_00878dfb();
      }
      iStack_174 = 0x83c003;
      puVar4 = (undefined4 *)FUN_00485656();
      iStack_174 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0x49;
      iStack_178 = 0x83c017;
      FUN_0040ee87();
      iVar5 = **(int **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (iVar5 == 0) {
        iStack_174 = 0x83c02c;
        FUN_00878dfb();
      }
      piStack_180 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
      iVar5 = *piStack_180;
      iStack_17c = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_178 = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_174 = *(undefined4 *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + -0x10) = piStack_180;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x4b;
      FUN_00403191(&DAT_00980690);
      piVar6 = *(int **)(unaff_EBP + -0x20);
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar5 = *piVar6;
      *(int *)(unaff_EBP + -0x10) = iVar5;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*piVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
      *(int **)(unaff_EBP + -0x14) = piVar6;
      iVar5 = FUN_0042fb34();
      *(int *)(unaff_EBP + -0x10) = iVar5 + 0x17;
      iVar5 = FUN_0042fb0a();
      iVar5 = (**(code **)(*piVar6 + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x14),0x31d - iVar5,
                         *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      piVar6 = *(int **)(unaff_EBP + -0x20);
      if (*piVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)*piVar6;
      iVar5 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x4d;
      FUN_00403191(&DAT_00980690);
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)FUN_004113e5(unaff_EBP + -0x18);
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)*piVar6;
      iVar5 = *piVar6;
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar5 = (**(code **)(iVar5 + 0x90))
                        (piVar6,0,0,*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x50;
      FUN_00403191(&DAT_00980690);
      iVar5 = **(int **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
      iVar5 = (**(code **)(*piVar6 + 0x110))
                        (piVar6,0,*(undefined4 *)(unaff_EBP + -0xc0),
                         *(undefined4 *)(unaff_EBP + -0xbc),*(undefined4 *)(unaff_EBP + -0xb8),
                         *(undefined4 *)(unaff_EBP + -0xb4),*(undefined4 *)(unaff_EBP + -0xd0),
                         *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200),
                         *(undefined4 *)(unaff_EBP + -0xc4));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,piVar6,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      iVar5 = FUN_00402bc3(unaff_EBP + -0xc0);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3(unaff_EBP + -0xd0);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



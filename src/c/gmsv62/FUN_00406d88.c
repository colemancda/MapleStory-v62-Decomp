/* FUN_00406d88 - 0x00406d88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00406d88(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int unaff_EBP;
  int *piStack_2f8;
  int *piStack_2f4;
  undefined4 uStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int iStack_2dc;
  undefined4 uStack_2d8;
  undefined *puStack_2d4;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 *puStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  undefined1 *puStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int *piStack_288;
  undefined1 *puStack_284;
  int *piStack_280;
  undefined1 *puStack_27c;
  int *piStack_278;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x110) = *(undefined4 *)(unaff_EBP + 0xc);
  iVar5 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x10c) = *(undefined4 *)(unaff_EBP + 0x10);
  piStack_278 = (int *)(unaff_EBP + -0x110);
  *(int *)(unaff_EBP + -0xbc) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x108) = iVar5;
  *(int *)(unaff_EBP + -0x6c) = extraout_ECX + 0x44;
  puStack_27c = (undefined1 *)0x406dd6;
  iVar3 = FUN_00413f52();
  if (iVar3 != 0) {
    *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(iVar3 + 4);
    FUN_00412878();
    iVar5 = *(int *)(unaff_EBP + -0x6c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar5 + 0x24) = uVar4;
    FUN_004136e9();
    piStack_278 = (int *)0x406e0e;
    FUN_0041262c();
    uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x6c) + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0041288a();
    goto LAB_004080f5;
  }
  piStack_278 = (int *)(unaff_EBP + -0x94);
  puStack_27c = (undefined1 *)0x406e36;
  FUN_004084c5();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -0x114) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    iVar5 = unaff_EBP + -0x118;
    *(undefined4 *)(unaff_EBP + -4) = 3;
  }
  else {
    piStack_278 = (int *)(unaff_EBP + -0x150);
    puStack_27c = (undefined1 *)0x406e50;
    iVar5 = FUN_004084c5();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar5 + 4);
  FUN_00412817();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00412829();
  }
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00412829();
  }
  iVar5 = *(int *)(unaff_EBP + 0x10);
  if ((iVar5 < 0) || (0x16 < iVar5)) {
    iVar5 = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  piStack_278 = (int *)0x0;
  *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_27c;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_284 = (undefined1 *)0x406eea;
  piStack_280 = (int *)(&DAT_00978410 + iVar5 * 4);
  FUN_004059fd();
  piStack_280 = (int *)(unaff_EBP + -0x104);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_284 = (undefined1 *)0x406f00;
  FUN_0041170e();
  puStack_284 = (undefined1 *)0x406f0a;
  FUN_0040263d();
  puStack_284 = (undefined1 *)0x406f11;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_27c = (undefined1 *)0x406f1c;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  piStack_278 = (int *)0x406f2b;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    piStack_278 = (int *)0x406f3e;
    FUN_00878dfb();
  }
  puVar8 = (undefined1 *)(unaff_EBP + -0x104);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_278 = (int *)0x406f4e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_278 = (int *)0x406f59;
    FUN_00878dfb();
    puVar8 = extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
LAB_00406fe5:
    FUN_004027eb();
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00412829();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412829();
    uVar4 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      piStack_278 = (int *)0x0;
      *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_27c;
      puStack_284 = (undefined1 *)0x406f79;
      piStack_280 = (int *)(&DAT_00978410 + iVar5 * 4);
      puStack_27c = puVar8;
      FUN_004059fd();
      piStack_280 = (int *)(unaff_EBP + -0x104);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_284 = (undefined1 *)0x406f8c;
      FUN_0041170e();
      puStack_284 = (undefined1 *)0x406f96;
      FUN_0040263d();
      puStack_284 = (undefined1 *)0x406f9d;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_27c = (undefined1 *)0x406fa8;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      piStack_278 = (int *)0x406fb7;
      iVar5 = FUN_00404b30();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        piStack_278 = (int *)0x406fc5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_278 = (int *)0x406fd5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_278 = (int *)0x406fe0;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x2c) == 0) goto LAB_00406fe5;
    }
    piStack_278 = (int *)0x407024;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      piStack_278 = (int *)0x407037;
      FUN_00878dfb();
    }
    piStack_278 = (int *)0x407046;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_278 = (int *)0x407053;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_004027b3();
    *(undefined4 *)(unaff_EBP + -0x8c) = 5000;
    *(undefined4 *)(unaff_EBP + -0xd4) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x5c) == 0) {
        piStack_278 = (int *)0x407082;
        FUN_00878dfb();
      }
      piStack_280 = *(int **)(unaff_EBP + -0x5c);
      piStack_278 = (int *)(unaff_EBP + -0x148);
      puStack_27c = (undefined1 *)0x1;
      puStack_284 = (undefined1 *)0x40709b;
      iVar5 = (**(code **)(*piStack_280 + 0xc))();
      if (iVar5 != 0) break;
      piStack_278 = (int *)(unaff_EBP + -0x30);
      puStack_27c = (undefined1 *)0x4070b3;
      FUN_00405a23();
      piStack_278 = (int *)(unaff_EBP + -0x30);
      *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffd8c;
      puStack_27c = (undefined1 *)0x4070c4;
      FUN_0040810c();
      piStack_278 = (int *)(unaff_EBP + -0x138);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_27c = (undefined1 *)0x4070d7;
      FUN_0040263d();
      puStack_27c = (undefined1 *)0x4070de;
      FUN_004048a4();
      if (*(short *)(unaff_EBP + -0x138) == 3) {
        *(undefined4 *)(unaff_EBP + -0x8c) = *(undefined4 *)(unaff_EBP + -0x130);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_278 = (int *)0x407104;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_278 = (int *)0x40710f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_00402fa6();
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        piStack_278 = (int *)(unaff_EBP + -0x30);
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffd8c;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        *(undefined4 *)(unaff_EBP + -0x88) = 0;
        puStack_27c = (undefined1 *)0x407145;
        FUN_004059fd();
        piStack_278 = (int *)(unaff_EBP + -0x1c0);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_27c = (undefined1 *)0x407158;
        FUN_0040263d();
        puStack_27c = (undefined1 *)0x40715f;
        FUN_004048a4();
        piStack_278 = (int *)(unaff_EBP + -0xdc);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_27c = (undefined1 *)0x407170;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        piStack_278 = (int *)0x40717f;
        FUN_004171ec();
        piStack_278 = (int *)0x407187;
        FUN_00411581();
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_278 = (int *)0x4071a2;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_278 = (int *)0x4071ad;
          FUN_00878dfb();
        }
        puStack_27c = &stack0xfffffd8c;
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffd8c;
        piStack_278 = (int *)0x43b;
        piStack_280 = (int *)0x4071c5;
        FUN_00679e4e();
        piStack_278 = (int *)(unaff_EBP + -0x1e0);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_27c = (undefined1 *)0x4071d8;
        FUN_0040263d();
        puStack_27c = (undefined1 *)0x4071df;
        FUN_004048a4();
        piStack_278 = (int *)(unaff_EBP + -0xe4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_27c = (undefined1 *)0x4071f0;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        piStack_278 = (int *)0x4071ff;
        FUN_0041720f();
        piStack_278 = (int *)0x407207;
        FUN_004115ef();
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_278 = (int *)0x407222;
        piVar7 = (int *)(unaff_EBP + -0x1e0);
        iVar5 = FUN_00402bc3();
        piStack_278 = piVar7;
        if (iVar5 < 0) {
          piStack_278 = (int *)0x40722d;
          FUN_00878dfb();
          piStack_278 = extraout_ECX_01;
        }
        *(int ***)(unaff_EBP + -0x34) = &piStack_278;
        puStack_27c = (undefined1 *)0x474;
        puStack_284 = (undefined1 *)0x407242;
        piStack_280 = (int *)&piStack_278;
        FUN_00679e4e();
        puStack_27c = (undefined1 *)(unaff_EBP + -0x260);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_280 = (int *)0x407255;
        FUN_0040263d();
        piStack_280 = (int *)0x40725c;
        piStack_278 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_27c = (undefined1 *)0x407266;
        uVar4 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
        puStack_27c = (undefined1 *)(unaff_EBP + -0x260);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_280 = (int *)0x407279;
        iVar5 = FUN_00402bc3();
        puVar8 = extraout_ECX_02;
        if (iVar5 < 0) {
          piStack_278 = (int *)0x407286;
          FUN_00878dfb();
          puVar8 = extraout_ECX_03;
        }
        piStack_278 = (int *)0x0;
        piStack_280 = (int *)&puStack_27c;
        *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_27c;
        puStack_284 = (undefined1 *)0x407297;
        puStack_27c = puVar8;
        FUN_004115d9();
        puStack_284 = (undefined1 *)0x40729e;
        FUN_00404e7f();
        piStack_280 = (int *)0x4072a3;
        uVar4 = FUN_0065aaa6();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
          *(undefined4 *)(unaff_EBP + -0x84) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0x23;
        }
        else {
          piStack_278 = (int *)(unaff_EBP + -0x30);
          *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd8c;
          puStack_27c = (undefined1 *)0x4072bd;
          FUN_0040810c();
          piStack_278 = (int *)(unaff_EBP + -0x200);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_27c = (undefined1 *)0x4072d0;
          FUN_0040263d();
          puStack_27c = (undefined1 *)0x4072d7;
          FUN_004048a4();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
          piStack_278 = (int *)(unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          puStack_27c = (undefined1 *)0x4072ec;
          FUN_00412348();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
          *(undefined4 *)(unaff_EBP + -4) = 0x22;
        }
        piStack_278 = (int *)0x40731b;
        iVar5 = FUN_0041a425();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_278 = (int *)0x40732c;
          FUN_00878dfb();
        }
        if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
          FUN_004027b3();
        }
        if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
          FUN_004027b3();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0x17;
        if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
          piStack_278 = (int *)0x407373;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            piStack_278 = (int *)0x40737e;
            FUN_00878dfb();
          }
        }
        piStack_278 = (int *)0x407387;
        cVar2 = FUN_00411581();
        if (cVar2 == '\0') {
          puStack_27c = &stack0xfffffd8c;
          *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd8c;
          piStack_278 = (int *)0x3b3;
          piStack_280 = (int *)0x4073a2;
          FUN_00679e4e();
          piStack_278 = (int *)(unaff_EBP + -0x240);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_27c = (undefined1 *)0x4073b5;
          FUN_0040263d();
          puStack_27c = (undefined1 *)0x4073bc;
          FUN_004048a4();
          piStack_278 = (int *)(unaff_EBP + -0xe0);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          puStack_27c = (undefined1 *)0x4073cd;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_278 = (int *)0x4073dc;
          iVar5 = FUN_0041a485();
          if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
            piStack_278 = (int *)0x4073ed;
            FUN_00878dfb();
          }
          FUN_004027b3();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          piStack_278 = (int *)0x407408;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            piStack_278 = (int *)0x407413;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_0087a1b0();
            piStack_278 = *(int **)(unaff_EBP + 8);
            puStack_27c = (undefined1 *)0x40742f;
            piStack_278 = (int *)FUN_00412335();
            *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd8c;
            puStack_27c = (undefined1 *)0x40743d;
            FUN_00402e8e();
            piStack_278 = (int *)(unaff_EBP + -0x220);
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            puStack_27c = (undefined1 *)0x407450;
            FUN_0040263d();
            puStack_27c = (undefined1 *)0x407457;
            FUN_004048a4();
            piStack_278 = (int *)(unaff_EBP + -0xa8);
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            puStack_27c = (undefined1 *)0x407468;
            FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            piStack_278 = (int *)0x407477;
            iVar5 = FUN_0041a485();
            if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
              piStack_278 = (int *)0x407488;
              FUN_00878dfb();
            }
            FUN_004027b3();
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            piStack_278 = (int *)0x4074a3;
            iVar5 = FUN_00402bc3();
            if (iVar5 < 0) {
              piStack_278 = (int *)0x4074ae;
              FUN_00878dfb();
            }
          }
          piStack_278 = (int *)0x4074b7;
          FUN_004115ef();
          piStack_278 = (int *)0x0;
          piStack_280 = (int *)&puStack_27c;
          *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_27c;
          puStack_284 = (undefined1 *)0x4074c8;
          FUN_004115d9();
          puStack_284 = (undefined1 *)0x4074cf;
          FUN_00404e7f();
          piStack_280 = (int *)0x4074d4;
          uVar4 = FUN_0065aaa6();
          *(undefined4 *)(unaff_EBP + -0x88) = uVar4;
        }
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        piStack_278 = (int *)0x0;
        puStack_284 = (undefined1 *)&puStack_27c;
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_27c;
        piStack_280 = (int *)0x3b2;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_288 = (int *)0x4074ff;
        FUN_00679e4e();
        piStack_280 = (int *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        puStack_284 = (undefined1 *)0x407512;
        FUN_004115d9();
        puStack_284 = (undefined1 *)0x407519;
        FUN_00404e7f();
        piStack_280 = (int *)(unaff_EBP + -0x1d0);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        puStack_284 = (undefined1 *)0x40752b;
        FUN_0040263d();
        puStack_284 = (undefined1 *)0x407532;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        puStack_27c = (undefined1 *)0x40753d;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -200) = uVar4;
        piStack_278 = (int *)0x407552;
        iVar5 = FUN_0041a4e5();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_278 = (int *)0x407563;
          FUN_00878dfb();
        }
        piStack_278 = (int *)0x40756c;
        FUN_004115ad();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_278 = (int *)0x40757c;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_278 = (int *)0x407587;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_004027eb();
        piStack_278 = (int *)0x0;
        puStack_284 = (undefined1 *)&puStack_27c;
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_27c;
        piStack_280 = (int *)0x3a8;
        piStack_288 = (int *)0x4075ab;
        FUN_00679e4e();
        piStack_280 = (int *)(unaff_EBP + -0xac);
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        puStack_284 = (undefined1 *)0x4075be;
        FUN_004115d9();
        puStack_284 = (undefined1 *)0x4075c5;
        FUN_00404e7f();
        piStack_280 = (int *)(unaff_EBP + -0x1f0);
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        puStack_284 = (undefined1 *)0x4075d7;
        FUN_0040263d();
        puStack_284 = (undefined1 *)0x4075de;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        puStack_27c = (undefined1 *)0x4075e9;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0xa4) = uVar4;
        piStack_278 = (int *)0x4075fe;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_278 = (int *)0x40760f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        piStack_278 = (int *)0x40761f;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_278 = (int *)0x40762a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_004027eb();
        piStack_278 = (int *)0x0;
        puStack_284 = (undefined1 *)&puStack_27c;
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_27c;
        piStack_280 = (int *)0x439;
        piStack_288 = (int *)0x40764e;
        FUN_00679e4e();
        piStack_280 = (int *)(unaff_EBP + -0x210);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        puStack_284 = (undefined1 *)0x407661;
        FUN_0040263d();
        puStack_284 = (undefined1 *)0x407668;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        puStack_27c = (undefined1 *)0x407673;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0xc4) = uVar4;
        piStack_278 = (int *)0x407688;
        iVar5 = FUN_0041a4e5();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_278 = (int *)0x407699;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_278 = (int *)0x4076a9;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_278 = (int *)0x4076b4;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          piStack_278 = (int *)0x4076bf;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x14) == 0) {
          piStack_278 = (int *)0x4076ca;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x14);
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_278 = (int *)0x4076db;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x1c);
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          piStack_278 = (int *)0x4076ec;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0x10);
        if (*(int *)(unaff_EBP + 0x14) == 0) {
          piStack_278 = (int *)0x4076fd;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0x14);
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_278 = (int *)0x40770e;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x1c);
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          piStack_278 = (int *)0x40771f;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0x10);
        if (*(int *)(unaff_EBP + 0x14) == 0) {
          piStack_278 = (int *)0x407730;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0x14);
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          piStack_278 = (int *)0x407741;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0x10);
        if (*(int *)(unaff_EBP + 0x14) == 0) {
          piStack_278 = (int *)0x407752;
          FUN_00878dfb();
        }
        FUN_0040e53d();
        FUN_00404abb();
        FUN_00404abb();
        piStack_278 = (int *)0x40777c;
        iVar5 = FUN_0040e48b();
        piStack_278 = (int *)0x407786;
        iVar3 = FUN_00404a94();
        piStack_278 = (int *)0x407790;
        iVar6 = FUN_00404a94();
        piStack_278 = (int *)((iVar5 - iVar3) - iVar6);
        puStack_27c = (undefined1 *)0x40779b;
        iVar5 = FUN_00404abb();
        puStack_27c = (undefined1 *)0x4077a5;
        iVar3 = FUN_00404abb();
        puStack_27c = (undefined1 *)-(iVar5 + iVar3);
        piStack_280 = (int *)0x4077b1;
        iVar5 = FUN_00404a94();
        piStack_280 = (int *)0x4077bb;
        iVar3 = FUN_00404a94();
        piStack_280 = (int *)-(iVar5 + iVar3);
        puStack_284 = (undefined1 *)(unaff_EBP + -0x128);
        piStack_288 = (int *)0x4077cd;
        (*DAT_0097b504)();
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_288 = (int *)(unaff_EBP + -0xf4);
          iStack_28c = 0x407acf;
          (*DAT_0097b508)();
        }
        else {
          piStack_288 = (int *)0x0;
          iStack_28c = 0;
          puStack_298 = (undefined1 *)&iStack_290;
          *(int **)(unaff_EBP + -0x18) = &iStack_290;
          iStack_294 = 0x3b2;
          iStack_29c = 0x4077f0;
          FUN_00679e4e();
          iStack_294 = unaff_EBP + -0xd8;
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_298 = (undefined1 *)0x407803;
          FUN_004115d9();
          puStack_298 = (undefined1 *)0x40780a;
          FUN_00404e7f();
          iStack_294 = unaff_EBP + -0x230;
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          puStack_298 = (undefined1 *)0x40781c;
          FUN_0040263d();
          puStack_298 = (undefined1 *)0x407823;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          iStack_290 = 0x40782e;
          uVar4 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0xb0) = uVar4;
          piStack_288 = (int *)(unaff_EBP + -0xb0);
          iStack_28c = 0x407843;
          piStack_288 = (int *)FUN_0041a4e5();
          if (((int)piStack_288 < 0) && (piStack_288 != (int *)0x80004002)) {
            iStack_28c = 0x407856;
            FUN_00878dfb();
          }
          piStack_288 = (int *)(unaff_EBP + -0x230);
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          iStack_28c = 0x407866;
          iVar5 = FUN_00402bc3();
          piVar7 = piStack_288;
          if (iVar5 < 0) {
            iStack_28c = 0x407871;
            piStack_288 = (int *)iVar5;
            FUN_00878dfb();
            piVar7 = (int *)extraout_ECX_04;
          }
          piStack_288 = *(int **)(unaff_EBP + -0xd8);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          if (piStack_288 != (int *)0x0) {
            iStack_28c = 0x407885;
            (**(code **)(*piStack_288 + 8))();
            piVar7 = (int *)extraout_ECX_05;
          }
          piStack_288 = (int *)0x0;
          iStack_28c = 0;
          puStack_298 = (undefined1 *)&iStack_290;
          *(int **)(unaff_EBP + -0x18) = &iStack_290;
          iStack_294 = 0x3a8;
          iStack_29c = 0x40789a;
          iStack_290 = (int)piVar7;
          FUN_00679e4e();
          iStack_294 = unaff_EBP + -0xd0;
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          puStack_298 = (undefined1 *)0x4078ad;
          FUN_004115d9();
          puStack_298 = (undefined1 *)0x4078b4;
          FUN_00404e7f();
          iStack_294 = unaff_EBP + -0x250;
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          puStack_298 = (undefined1 *)0x4078c6;
          FUN_0040263d();
          puStack_298 = (undefined1 *)0x4078cd;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          iStack_290 = 0x4078d8;
          uVar4 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0xb8) = uVar4;
          piStack_288 = (int *)(unaff_EBP + -0xb8);
          iStack_28c = 0x4078ed;
          piStack_288 = (int *)FUN_00404b30();
          if (((int)piStack_288 < 0) && (piStack_288 != (int *)0x80004002)) {
            iStack_28c = 0x4078fb;
            FUN_00878dfb();
          }
          piStack_288 = (int *)(unaff_EBP + -0x250);
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iStack_28c = 0x40790b;
          iVar5 = FUN_00402bc3();
          piVar7 = piStack_288;
          if (iVar5 < 0) {
            iStack_28c = 0x407916;
            piStack_288 = (int *)iVar5;
            FUN_00878dfb();
            piVar7 = (int *)extraout_ECX_06;
          }
          piStack_288 = *(int **)(unaff_EBP + -0xd0);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          if (piStack_288 != (int *)0x0) {
            iStack_28c = 0x40792a;
            (**(code **)(*piStack_288 + 8))();
            piVar7 = (int *)extraout_ECX_07;
          }
          piStack_288 = (int *)0x0;
          iStack_28c = 0;
          puStack_298 = (undefined1 *)&iStack_290;
          *(int **)(unaff_EBP + -0x18) = &iStack_290;
          iStack_294 = 0x439;
          iStack_29c = 0x40793f;
          iStack_290 = (int)piVar7;
          FUN_00679e4e();
          iStack_294 = unaff_EBP + -0x270;
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          puStack_298 = (undefined1 *)0x407952;
          FUN_0040263d();
          puStack_298 = (undefined1 *)0x407959;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          iStack_290 = 0x407964;
          uVar4 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x98) = uVar4;
          piStack_288 = (int *)(unaff_EBP + -0x98);
          iStack_28c = 0x407979;
          piStack_288 = (int *)FUN_0041a4e5();
          if (((int)piStack_288 < 0) && (piStack_288 != (int *)0x80004002)) {
            iStack_28c = 0x407987;
            FUN_00878dfb();
          }
          piStack_288 = (int *)(unaff_EBP + -0x270);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iStack_28c = 0x407997;
          piStack_288 = (int *)FUN_00402bc3();
          if ((int)piStack_288 < 0) {
            iStack_28c = 0x4079a2;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x4079b2;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x4079bd;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0x14);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x4079ce;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x4079dc;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0x10);
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x4079ed;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0x14);
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x4079fe;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x14);
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x407a0f;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0x10);
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x407a20;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0x14);
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x407a31;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0x10);
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_288 = (int *)0x80004003;
            iStack_28c = 0x407a42;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x14);
          piStack_288 = (int *)0x407a4f;
          iVar5 = FUN_0040e53d();
          piStack_288 = (int *)0x407a59;
          iVar3 = FUN_00404abb();
          piStack_288 = (int *)0x407a63;
          iVar6 = FUN_00404abb();
          piStack_288 = (int *)((iVar5 - iVar3) - iVar6);
          iStack_28c = 0x407a6e;
          iVar5 = FUN_0040e48b();
          iStack_28c = 0x407a78;
          iVar3 = FUN_00404a94();
          iStack_28c = 0x407a82;
          iStack_28c = FUN_00404a94();
          iStack_28c = (iVar5 - iVar3) - iStack_28c;
          iStack_290 = 0x407a8d;
          iVar5 = FUN_00404abb();
          iStack_290 = 0x407a97;
          iVar3 = FUN_00404abb();
          iStack_290 = -(iVar5 + iVar3);
          iStack_294 = 0x407aa4;
          iVar5 = FUN_00404a94();
          iStack_294 = 0x407aae;
          iVar3 = FUN_00404a94();
          iStack_294 = -(iVar5 + iVar3);
          puStack_298 = (undefined1 *)(unaff_EBP + -0xf4);
          iStack_29c = 0x407ac0;
          (*DAT_0097b504)();
        }
        iStack_29c = unaff_EBP + -0xf4;
        iStack_2a0 = unaff_EBP + -0x128;
        iStack_2a4 = unaff_EBP + -0x80;
        puStack_2a8 = (undefined4 *)0x407aec;
        (*DAT_0097b500)();
        puStack_2a8 = (undefined4 *)0x3af;
        iStack_2ac = unaff_EBP + -0x9c;
        uStack_2b0 = 0x407b02;
        piVar7 = (int *)FUN_00679e4e();
        puVar1 = (undefined4 *)*piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        if (puVar1 == (undefined4 *)0x0) {
          uStack_2b0 = 0;
        }
        else {
          uStack_2b0 = *puVar1;
        }
        puStack_2a8 = (undefined4 *)0x0;
        iStack_2ac = unaff_EBP + 0xc;
        uStack_2b4 = 0x407b1d;
        FUN_0040381b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        puStack_2a8 = (undefined4 *)0x407b2f;
        FUN_00402fa6();
        puStack_2a8 = &DAT_00980690;
        iStack_2ac = 0x407b40;
        FUN_00403191();
        puStack_2a8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x42;
        iStack_2ac = 0x407b50;
        FUN_00403191();
        piVar7 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        if (piVar7 == (int *)0x0) {
          puStack_2a8 = (undefined4 *)0x80004003;
          iStack_2ac = 0x407b61;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + 0xc);
        }
        iStack_2c8 = *(int *)(unaff_EBP + -0x74) - *(int *)(unaff_EBP + -0x7c);
        iStack_2cc = *(int *)(unaff_EBP + -0x78) - *(int *)(unaff_EBP + -0x80);
        uStack_2b4 = *(undefined4 *)(unaff_EBP + -0x160);
        uStack_2b0 = *(undefined4 *)(unaff_EBP + -0x15c);
        iStack_2ac = *(undefined4 *)(unaff_EBP + -0x158);
        puStack_2a8 = *(undefined4 **)(unaff_EBP + -0x154);
        uStack_2c4 = *(undefined4 *)(unaff_EBP + -0x1b0);
        uStack_2c0 = *(undefined4 *)(unaff_EBP + -0x1ac);
        uStack_2bc = *(undefined4 *)(unaff_EBP + -0x1a8);
        uStack_2d0 = *(undefined4 *)(unaff_EBP + 0xc);
        *(int **)(unaff_EBP + -0x18) = piVar7;
        uStack_2b8 = *(undefined4 *)(unaff_EBP + -0x1a4);
        puStack_2d4 = (undefined *)0x407b9b;
        iVar5 = (**(code **)(*piVar7 + 0x2c))();
        if (iVar5 < 0) {
          puStack_2d4 = &DAT_00963cc8;
          uStack_2d8 = *(undefined4 *)(unaff_EBP + -0x18);
          uStack_2e0 = 0x407bad;
          iStack_2dc = iVar5;
          FUN_00878e09();
        }
        puStack_2d4 = (undefined *)(unaff_EBP + -0x1b0);
        *(undefined1 *)(unaff_EBP + -4) = 0x42;
        uStack_2d8 = 0x407bbd;
        puStack_2d4 = (undefined *)FUN_00402bc3();
        if ((int)puStack_2d4 < 0) {
          uStack_2d8 = 0x407bc8;
          FUN_00878dfb();
        }
        puStack_2d4 = (undefined *)(unaff_EBP + -0x160);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        uStack_2d8 = 0x407bd8;
        puStack_2d4 = (undefined *)FUN_00402bc3();
        if ((int)puStack_2d4 < 0) {
          uStack_2d8 = 0x407be3;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x20) < *(int *)(unaff_EBP + -0x88)) {
          puStack_2d4 = (undefined *)0x3;
          uStack_2d8 = 0xff;
          iStack_2dc = 0x407d17;
          FUN_004031b7();
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          if (piVar7 == (int *)0x0) {
            puStack_2d4 = (undefined *)0x80004003;
            uStack_2d8 = 0x407d2c;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iStack_2e8 = *(int *)(unaff_EBP + -0x124) - *(int *)(unaff_EBP + -0x7c);
          iStack_2ec = *(int *)(unaff_EBP + -0x128) - *(int *)(unaff_EBP + -0x80);
          uStack_2e4 = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_2e0 = *(undefined4 *)(unaff_EBP + -0x170);
          iStack_2dc = *(int *)(unaff_EBP + -0x16c);
          uStack_2d8 = *(undefined4 *)(unaff_EBP + -0x168);
          uStack_2f0 = *(undefined4 *)(unaff_EBP + 0xc);
          *(int **)(unaff_EBP + -0x20) = piVar7;
          puStack_2d4 = *(undefined **)(unaff_EBP + -0x164);
          piStack_2f4 = (int *)0x407d63;
          iVar5 = (**(code **)(*piVar7 + 0x80))();
          if (iVar5 < 0) {
            piStack_2f4 = (int *)&DAT_00963cc8;
            piStack_2f8 = *(int **)(unaff_EBP + -0x20);
            FUN_00878e09(iVar5);
          }
          piStack_2f4 = (int *)(unaff_EBP + -0x170);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          piStack_2f8 = (int *)0x407d85;
          piStack_2f4 = (int *)FUN_00402bc3();
          if ((int)piStack_2f4 < 0) {
            piStack_2f8 = (int *)0x407d90;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            piStack_2f4 = (int *)0x3;
            piStack_2f8 = (int *)0xff;
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 0xc);
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            if (piVar7 == (int *)0x0) {
              piStack_2f4 = (int *)0x80004003;
              piStack_2f8 = (int *)0x407dc0;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 0xc);
            }
            piStack_2f8 = *(int **)(unaff_EBP + -0x188);
            *(int **)(unaff_EBP + -0x20) = piVar7;
            piStack_2f4 = *(int **)(unaff_EBP + -0x184);
            iVar5 = (**(code **)(*piVar7 + 0x80))
                              (*(undefined4 *)(unaff_EBP + 0xc),
                               *(int *)(unaff_EBP + -0xf4) - *(int *)(unaff_EBP + -0x80),
                               *(int *)(unaff_EBP + -0xf0) - *(int *)(unaff_EBP + -0x7c),
                               *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -400),
                               *(undefined4 *)(unaff_EBP + -0x18c));
            if (iVar5 < 0) {
              piStack_2f4 = (int *)&DAT_00963cc8;
              piStack_2f8 = *(int **)(unaff_EBP + -0x20);
              FUN_00878e09(iVar5);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            piStack_2f4 = (int *)(unaff_EBP + -400);
            goto LAB_00407e13;
          }
        }
        else {
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            puStack_2d4 = (undefined *)0x3;
            uStack_2d8 = 0xff;
            iStack_2dc = 0x407c0d;
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 0xc);
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            if (piVar7 == (int *)0x0) {
              puStack_2d4 = (undefined *)0x80004003;
              uStack_2d8 = 0x407c22;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 0xc);
            }
            iStack_2e8 = *(int *)(unaff_EBP + -0xf0) - *(int *)(unaff_EBP + -0x7c);
            iStack_2ec = *(int *)(unaff_EBP + -0xf4) - *(int *)(unaff_EBP + -0x80);
            uStack_2e4 = *(undefined4 *)(unaff_EBP + -0x14);
            uStack_2e0 = *(undefined4 *)(unaff_EBP + -0x180);
            iStack_2dc = *(int *)(unaff_EBP + -0x17c);
            uStack_2d8 = *(undefined4 *)(unaff_EBP + -0x178);
            uStack_2f0 = *(undefined4 *)(unaff_EBP + 0xc);
            *(int **)(unaff_EBP + -0x20) = piVar7;
            puStack_2d4 = *(undefined **)(unaff_EBP + -0x174);
            piStack_2f4 = (int *)0x407c59;
            iVar5 = (**(code **)(*piVar7 + 0x80))();
            if (iVar5 < 0) {
              puStack_2d4 = &DAT_00963cc8;
              uStack_2d8 = *(undefined4 *)(unaff_EBP + -0x20);
              uStack_2e0 = 0x407c6b;
              iStack_2dc = iVar5;
              FUN_00878e09();
            }
            puStack_2d4 = (undefined *)(unaff_EBP + -0x180);
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            uStack_2d8 = 0x407c7b;
            puStack_2d4 = (undefined *)FUN_00402bc3();
            if ((int)puStack_2d4 < 0) {
              uStack_2d8 = 0x407c86;
              FUN_00878dfb();
            }
          }
          puStack_2d4 = (undefined *)0x3;
          uStack_2d8 = 0xff;
          iStack_2dc = 0x407c98;
          FUN_004031b7();
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          if (piVar7 == (int *)0x0) {
            puStack_2d4 = (undefined *)0x80004003;
            uStack_2d8 = 0x407cad;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iStack_2e8 = *(int *)(unaff_EBP + -0x124) - *(int *)(unaff_EBP + -0x7c);
          iStack_2ec = *(int *)(unaff_EBP + -0x128) - *(int *)(unaff_EBP + -0x80);
          uStack_2e4 = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_2e0 = *(undefined4 *)(unaff_EBP + -0x1a0);
          iStack_2dc = *(int *)(unaff_EBP + -0x19c);
          uStack_2d8 = *(undefined4 *)(unaff_EBP + -0x198);
          uStack_2f0 = *(undefined4 *)(unaff_EBP + 0xc);
          *(int **)(unaff_EBP + -0x20) = piVar7;
          puStack_2d4 = *(undefined **)(unaff_EBP + -0x194);
          piStack_2f4 = (int *)0x407ce4;
          iVar5 = (**(code **)(*piVar7 + 0x80))();
          if (iVar5 < 0) {
            piStack_2f4 = (int *)&DAT_00963cc8;
            piStack_2f8 = *(int **)(unaff_EBP + -0x20);
            FUN_00878e09(iVar5);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          piStack_2f4 = (int *)(unaff_EBP + -0x1a0);
LAB_00407e13:
          piStack_2f8 = (int *)0x407e19;
          piStack_2f4 = (int *)FUN_00402bc3();
          if ((int)piStack_2f4 < 0) {
            piStack_2f8 = (int *)0x407e24;
            FUN_00878dfb();
          }
        }
        piStack_2f4 = (int *)0x3;
        piStack_2f8 = *(int **)(unaff_EBP + -0x34);
        FUN_004031b7();
        piStack_2f4 = (int *)(unaff_EBP + -0x104);
        *(int ***)(unaff_EBP + -0x34) = &piStack_2f8;
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        FUN_00679e4e(&piStack_2f8,0x474);
        iVar5 = unaff_EBP + -0xb4;
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        FUN_004115d9(iVar5);
        FUN_00404e7f(iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        FUN_0040263d();
        FUN_0040bfd0();
        piStack_2f4 = *(int **)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        if (piStack_2f4 != (int *)0x0) {
          piStack_2f8 = (int *)0x407e95;
          (**(code **)(*piStack_2f4 + 8))();
        }
        piStack_2f4 = (int *)(unaff_EBP + -0x104);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_2f8 = (int *)0x407ea5;
        piStack_2f4 = (int *)FUN_00402bc3();
        if ((int)piStack_2f4 < 0) {
          piStack_2f8 = (int *)0x407eb0;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          piStack_2f4 = (int *)0x80004003;
          piStack_2f8 = (int *)0x407ebf;
          FUN_00878dfb();
        }
        piVar7 = *(int **)(unaff_EBP + 0xc);
        piStack_2f4 = (int *)-*(int *)(unaff_EBP + -0x80);
        piStack_2f8 = piVar7;
        iVar5 = (**(code **)(*piVar7 + 0x70))();
        if (iVar5 < 0) {
          FUN_00878e09(iVar5,piVar7,&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = *(int **)(unaff_EBP + 0xc);
        puVar8 = (undefined1 *)(**(code **)(*piVar7 + 0x78))(piVar7,-*(int *)(unaff_EBP + -0x7c));
        if ((int)puVar8 < 0) {
          piStack_280 = (int *)0x407f0c;
          puStack_27c = puVar8;
          piStack_278 = piVar7;
          FUN_00878e09();
        }
        this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004136ab();
        piStack_278 = (int *)0x407f1e;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  (this,*(IBinding **)(unaff_EBP + 0xc));
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
          piStack_278 = (int *)0x407f2f;
          (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
          piStack_278 = (int *)0x407f40;
          (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
          piStack_278 = (int *)0x407f51;
          (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
          piStack_278 = (int *)0x407f62;
          (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          piStack_278 = (int *)0x407f73;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          piStack_278 = (int *)0x407f84;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          piStack_278 = (int *)0x407f95;
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_278 = (int *)0x407fa5;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_278 = (int *)0x407fb0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
        }
      }
    }
    piStack_278 = (int *)0x407fd8;
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0040812b();
    }
    *(int *)(unaff_EBP + -0x3c) = iVar5;
    if (iVar5 != 0) {
      piStack_278 = (int *)0x407fff;
      InterlockedIncrement((LONG *)(iVar5 + 4));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_004136e9();
    piStack_278 = (int *)0x40801a;
    FUN_0041262c();
    iVar5 = *(int *)(unaff_EBP + -0x3c);
    piStack_278 = (int *)0x40802f;
    uVar4 = FUN_00411756();
    *(undefined4 *)(iVar5 + 0x2c) = uVar4;
    iVar5 = *(int *)(unaff_EBP + -0x3c);
    piStack_278 = (int *)(unaff_EBP + -0x110);
    puStack_27c = (undefined1 *)0x408048;
    uVar4 = FUN_00413fc6();
    *(undefined4 *)(iVar5 + 0x28) = uVar4;
    iVar5 = *(int *)(unaff_EBP + -0x3c);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar5 + 0x24) = uVar4;
    uVar4 = *(undefined4 *)(unaff_EBP + -0x8c);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x3c) + 0x20) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      piStack_278 = (int *)0x408075;
      FUN_00412f45();
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
      piStack_278 = (int *)0x408089;
      (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_278 = (int *)0x408099;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_278 = (int *)0x4080a4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      piStack_278 = (int *)0x4080b5;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_278 = (int *)0x4080c6;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      piStack_278 = (int *)0x4080d8;
      FUN_00412f17();
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x90) != 0) {
      piStack_278 = (int *)0x4080f3;
      FUN_00412f17();
    }
  }
LAB_004080f5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}



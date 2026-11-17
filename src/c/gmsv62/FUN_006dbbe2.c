/* FUN_006dbbe2 - 0x006dbbe2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006dbbe2(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  undefined **extraout_ECX_00;
  undefined **extraout_ECX_01;
  undefined **extraout_ECX_02;
  undefined **extraout_ECX_03;
  undefined **ppuVar7;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  int unaff_EBP;
  undefined **ppuStack_dc;
  undefined *puStack_d8;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x5b4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    puStack_d8 = (undefined *)0x6dbc10;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5b4),
               (IBinding *)0x0);
  }
  FUN_0045f536();
  FUN_006df0c9();
  puStack_d8 = (undefined *)0x6dbc34;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x61c),
             *(IBinding **)(unaff_EBP + 8));
  puStack_d8 = (undefined *)0x0;
  *(undefined4 *)(extraout_ECX + 0x62c) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x638) = 1;
  *(undefined4 *)(unaff_EBP + 0xc) = DAT_00978368;
  *(undefined ****)(unaff_EBP + -0x1c) = &ppuStack_dc;
  FUN_00679e4e(&ppuStack_dc,0x3b4);
  iVar3 = unaff_EBP + -0xc0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  ppuStack_dc = (undefined **)0x6dbc8d;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x4c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar3 != 0) {
    puStack_d8 = (undefined *)0x6dbca3;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_d8 = (undefined *)0x6dbcb4;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_d8 = (undefined *)0x6dbcc4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_d8 = (undefined *)0x6dbccf;
    FUN_00878dfb();
  }
  uVar4 = FUN_0045e4b8();
  if ((uVar4 & 1) == 0) {
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
    ppuStack_dc = (undefined **)0x753;
    FUN_00679e4e(&puStack_d8);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d();
    puStack_d8 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    ppuStack_dc = (undefined **)0x6dbd16;
    iVar3 = FUN_00412550();
    ppuStack_dc = (undefined **)(unaff_EBP + -0x60);
    *(bool *)(unaff_EBP + 0xf) = iVar3 != 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3();
    ppuVar7 = extraout_ECX_00;
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbd36;
      FUN_00878dfb();
      ppuVar7 = extraout_ECX_01;
    }
    if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_006dbd3b;
  }
  else {
LAB_006dbd3b:
    ppuStack_dc = (undefined **)&stack0xffffff2c;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff2c;
    puStack_d8 = (undefined *)0x752;
    FUN_00679e4e();
    puStack_d8 = (undefined *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    ppuStack_dc = (undefined **)0x6dbd5e;
    FUN_0040263d();
    ppuStack_dc = (undefined **)0x6dbd65;
    FUN_004048a4();
    puStack_d8 = (undefined *)0x6dbd71;
    uVar2 = FUN_006dc517();
    *(undefined1 *)(unaff_EBP + 0xf) = uVar2;
    ppuVar7 = (undefined **)(unaff_EBP + -0x60);
    puStack_d8 = (undefined *)0x6dbd7d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbd88;
      FUN_00878dfb();
      ppuVar7 = extraout_ECX_02;
    }
    if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_006dbd93;
  }
  *(undefined4 *)(extraout_ECX + 0x638) = 0;
LAB_006dbd93:
  if (*(int *)(extraout_ECX + 0x638) != 0) {
    puStack_d8 = (undefined *)0x0;
    *(undefined ****)(unaff_EBP + 0xc) = &ppuStack_dc;
    ppuStack_dc = ppuVar7;
    FUN_00679e4e(&ppuStack_dc,0x752);
    iVar3 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    ppuStack_dc = (undefined **)0x6dbdd6;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      puStack_d8 = (undefined *)0x6dbdec;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_d8 = (undefined *)0x6dbdfd;
        FUN_00878dfb();
      }
    }
    ppuVar7 = (undefined **)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d8 = (undefined *)0x6dbe0a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbe15;
      FUN_00878dfb();
      ppuVar7 = extraout_ECX_03;
    }
    puStack_d8 = (undefined *)0x0;
    *(undefined ****)(unaff_EBP + -0x1c) = &ppuStack_dc;
    ppuStack_dc = ppuVar7;
    FUN_00679e4e(&ppuStack_dc,0x754);
    iVar3 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    ppuStack_dc = (undefined **)0x6dbe4c;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    puStack_d8 = (undefined *)0x6dbe5e;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_d8 = (undefined *)0x6dbe6f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d8 = (undefined *)0x6dbe7c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbe87;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x5b4) == 0) {
      puStack_d8 = (undefined *)0x6dbe99;
      FUN_00878dfb();
    }
    uVar5 = FUN_0040e48b();
    *(undefined4 *)(extraout_ECX + 0x580) = uVar5;
    if (*(int *)(extraout_ECX + 0x5b4) == 0) {
      puStack_d8 = (undefined *)0x6dbebc;
      FUN_00878dfb();
    }
    iVar3 = FUN_0040e53d();
    puStack_d8 = *(undefined **)(extraout_ECX + 0x580);
    *(int *)(extraout_ECX + 0x584) = iVar3;
    if (0x117 < (int)puStack_d8) {
      puStack_d8 = (undefined *)0xd2;
    }
    *(undefined **)(extraout_ECX + 0x578) = puStack_d8;
    if (0x95 < iVar3) {
      iVar3 = 0x70;
    }
    *(int *)(extraout_ECX + 0x57c) = iVar3;
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
    ppuStack_dc = (undefined **)0x6de;
    FUN_00679e4e(&puStack_d8);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d8 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    ppuStack_dc = (undefined **)0x6dbf2b;
    uVar5 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x588) = uVar5;
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbf4b;
      FUN_00878dfb();
    }
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
    ppuStack_dc = (undefined **)0x6df;
    FUN_00679e4e(&puStack_d8);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d8 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    ppuStack_dc = (undefined **)0x6dbf80;
    uVar5 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x58c) = uVar5;
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbfa0;
      FUN_00878dfb();
    }
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
    ppuStack_dc = (undefined **)0x755;
    FUN_00679e4e(&puStack_d8);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d8 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    ppuStack_dc = (undefined **)0x6dbfd5;
    uVar5 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x590) = uVar5;
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dbff5;
      FUN_00878dfb();
    }
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
    ppuStack_dc = (undefined **)0x756;
    FUN_00679e4e(&puStack_d8);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d8 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    ppuStack_dc = (undefined **)0x6dc02a;
    uVar5 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x594) = uVar5;
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dc04a;
      FUN_00878dfb();
    }
    *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
    ppuStack_dc = (undefined **)0x757;
    FUN_00679e4e(&puStack_d8);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d8 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    ppuStack_dc = (undefined **)0x6dc07f;
    uVar5 = FUN_00412550();
    *(undefined4 *)(extraout_ECX + 0x598) = uVar5;
    ppuStack_dc = (undefined **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dc09f;
      FUN_00878dfb();
    }
    puStack_d8 = (undefined *)0x0;
    *(undefined ****)(unaff_EBP + 0xc) = &ppuStack_dc;
    FUN_00679e4e(&ppuStack_dc,0x758);
    iVar3 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    ppuStack_dc = (undefined **)0x6dc0d6;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x40) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar3 != 0) {
      puStack_d8 = (undefined *)0x6dc0ec;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_d8 = (undefined *)0x6dc0fd;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_d8 = (undefined *)0x6dc10a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_d8 = (undefined *)0x6dc115;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_0045f536();
    FUN_006df0c9();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_d8 = (undefined *)0x6dc144;
        FUN_00878dfb();
      }
      uVar4 = FUN_0040cf4d();
      if (uVar4 <= *(uint *)(unaff_EBP + -0x20)) break;
      FUN_0087a1b0();
      puStack_d8 = (undefined *)0x0;
      ppuStack_dc = (undefined **)&stack0xffffff30;
      uVar5 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
      *(undefined ****)(unaff_EBP + 0xc) = &ppuStack_dc;
      FUN_004033a1(uVar5);
      iVar3 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      ppuStack_dc = (undefined **)0x6dc198;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x44) = uVar5;
      puStack_d8 = (undefined *)0x6dc1a7;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_d8 = (undefined *)0x6dc1b8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_d8 = (undefined *)0x6dc1c5;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_d8 = (undefined *)0x6dc1d0;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        puStack_d8 = (undefined *)(unaff_EBP + -0x3c);
        ppuStack_dc = (undefined **)0x6dc1e9;
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_d8 = &DAT_0097812c;
        *(undefined ****)(unaff_EBP + 0xc) = &ppuStack_dc;
        FUN_00679e4e(&ppuStack_dc,0x5ed);
        iVar3 = unaff_EBP + -0xa0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        FUN_0040263d(iVar3);
        ppuStack_dc = (undefined **)FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_d8 = (undefined *)FUN_004343c5();
        ppuStack_dc = (undefined **)0x6dc233;
        iVar3 = FUN_0087c71f();
        ppuStack_dc = (undefined **)(unaff_EBP + -0xa0);
        *(bool *)(unaff_EBP + 0xf) = iVar3 != 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_d8 = (undefined *)0x6dc256;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00402676();
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
          ppuStack_dc = (undefined **)0xbdc;
          FUN_00679e4e(&puStack_d8);
          ppuStack_dc = (undefined **)(unaff_EBP + -0x80);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_0040263d();
          puStack_d8 = (undefined *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          ppuStack_dc = (undefined **)0x6dc2a0;
          uVar5 = FUN_00412550();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
          ppuStack_dc = (undefined **)(unaff_EBP + -0x80);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_d8 = (undefined *)0x6dc2bd;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            if (*(int *)(extraout_ECX + 0x5b8) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(extraout_ECX + 0x5b8) + -4);
            }
            puStack_d8 = (undefined *)0x0;
            ppuStack_dc = (undefined **)(iVar3 + 1);
            FUN_00495dce();
            *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
            ppuStack_dc = (undefined **)0x3ca;
            FUN_00679e4e(&puStack_d8);
            ppuStack_dc = (undefined **)(unaff_EBP + -0x90);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_0040263d();
            puStack_d8 = (undefined *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            ppuStack_dc = (undefined **)0x6dc321;
            uVar5 = FUN_00412550();
            FUN_006def0e();
            puStack_d8 = (undefined *)0x6dc33d;
            puVar6 = (undefined4 *)FUN_006df374();
            *puVar6 = uVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            puStack_d8 = (undefined *)0x6dc34f;
            puVar1 = (undefined *)(unaff_EBP + -0x90);
            iVar3 = FUN_00402bc3();
            puStack_d8 = puVar1;
            if (iVar3 < 0) {
              puStack_d8 = (undefined *)0x6dc35a;
              FUN_00878dfb();
              puStack_d8 = extraout_ECX_04;
            }
            *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
            ppuStack_dc = (undefined **)0x3cb;
            FUN_00679e4e(&puStack_d8);
            ppuStack_dc = (undefined **)(unaff_EBP + -0xb0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_0040263d();
            puStack_d8 = (undefined *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            ppuStack_dc = (undefined **)0x6dc393;
            uVar5 = FUN_00412550();
            FUN_006def0e();
            puStack_d8 = (undefined *)0x6dc3af;
            iVar3 = FUN_006df374();
            *(undefined4 *)(iVar3 + 4) = uVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            puStack_d8 = (undefined *)0x6dc3c2;
            puVar1 = (undefined *)(unaff_EBP + -0xb0);
            iVar3 = FUN_00402bc3();
            puStack_d8 = puVar1;
            if (iVar3 < 0) {
              puStack_d8 = (undefined *)0x6dc3cf;
              FUN_00878dfb();
              puStack_d8 = extraout_ECX_05;
            }
            *(undefined ***)(unaff_EBP + 0xc) = &puStack_d8;
            ppuStack_dc = &PTR_LAB_00964f64;
            FUN_004033a1();
            ppuStack_dc = (undefined **)(unaff_EBP + -0xd0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_0040263d();
            puStack_d8 = (undefined *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            ppuStack_dc = (undefined **)0x6dc404;
            uVar5 = FUN_00412550();
            *(undefined4 *)(unaff_EBP + -0x50) = uVar5;
            ppuStack_dc = (undefined **)(unaff_EBP + -0xd0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              puStack_d8 = (undefined *)0x6dc424;
              FUN_00878dfb();
            }
            if (*(int *)(extraout_ECX + 0x5b8) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(extraout_ECX + 0x5b8) + -4);
            }
            *(int *)(unaff_EBP + -0x1c) = iVar3 + -1;
            puStack_d8 = (undefined *)(unaff_EBP + -0x1c);
            ppuStack_dc = (undefined **)0x6dc44c;
            FUN_006deffb();
          }
        }
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      puStack_d8 = (undefined *)0x6dc465;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      puStack_d8 = (undefined *)0x6dc476;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      puStack_d8 = (undefined *)0x6dc487;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  if (*(int *)(extraout_ECX + 0x634) == 0) {
    puStack_d8 = (undefined *)(unaff_EBP + 0xc);
    ppuStack_dc = (undefined **)(unaff_EBP + -0x1c);
    FUN_0047c974(4);
    iVar3 = *(int *)(extraout_ECX + 0x570);
    if ((iVar3 < 0) || (2 < iVar3)) {
      *(int *)(extraout_ECX + 0x570) = 0;
    }
    puStack_d8 = (undefined *)0x0;
    ppuStack_dc = (undefined **)0x1;
    FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),0,0,10);
    *(undefined4 *)(extraout_ECX + 0x634) = 1;
  }
  FUN_006dc63c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    puStack_d8 = (undefined *)0x6dc4ec;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    puStack_d8 = (undefined *)0x6dc4fd;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}



/* FUN_005ae214 - 0x005ae214 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ae214(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *puVar9;
  int unaff_EBP;
  uint uStack_98;
  uint uStack_94;
  undefined1 *puStack_90;
  uint uStack_8c;
  
  FUN_00879bb8();
  uStack_8c = unaff_EBP + -0x2c;
  puStack_90 = (undefined1 *)0x5ae23b;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_90 = (undefined1 *)*puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_8c = extraout_ECX + 0xa0;
  uStack_94 = 0x5ae250;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    uStack_8c = 0x5ae267;
    FUN_00403384();
  }
  uStack_8c = 0x5ae276;
  FUN_00403191();
  uStack_8c = 0xffccffff;
  puStack_90 = (undefined1 *)0x9;
  *(uint **)(unaff_EBP + -0x44) = &uStack_94;
  uStack_98 = 0xc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_94);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_98 = 0x5ae2a7;
  FUN_0044974c();
  uStack_98 = 0x5ae2ae;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae2bb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae2c6;
    FUN_00878dfb();
  }
  uStack_8c = unaff_EBP + -0x2c;
  puStack_90 = (undefined1 *)0x5ae2d6;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_90 = (undefined1 *)*puVar2;
  uStack_8c = extraout_ECX + 0xa4;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uStack_94 = 0x5ae2ee;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    uStack_8c = 0x5ae305;
    FUN_00403384();
  }
  uStack_8c = unaff_EBP + -0x2c;
  puStack_90 = (undefined1 *)0x5ae316;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  uStack_8c = 0x5ae326;
  FUN_0044f5f6();
  uStack_8c = 0xffccffff;
  puStack_90 = (undefined1 *)0x9;
  *(uint **)(unaff_EBP + -0x44) = &uStack_94;
  uStack_98 = 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&uStack_94);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_98 = 0x5ae354;
  FUN_0044974c();
  uStack_98 = 0x5ae35b;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_8c = 0x5ae368;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae373;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402fa6();
  uStack_8c = unaff_EBP + -0x2c;
  puStack_90 = (undefined1 *)0x5ae38f;
  puVar2 = (undefined4 *)FUN_00679d86();
  puStack_90 = (undefined1 *)*puVar2;
  uStack_8c = extraout_ECX + 0xa8;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  uStack_94 = 0x5ae3a7;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  uStack_8c = 0x5ae3bf;
  FUN_00403191();
  uStack_8c = 0xff24476b;
  puStack_90 = (undefined1 *)0xc;
  *(uint **)(unaff_EBP + -0x44) = &uStack_94;
  uStack_98 = 10;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_00679e4e(&uStack_94);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_98 = 0x5ae3f0;
  FUN_0044974c();
  uStack_98 = 0x5ae3f7;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae404;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae40f;
    FUN_00878dfb();
  }
  uStack_8c = unaff_EBP + -0x2c;
  puStack_90 = (undefined1 *)0x5ae41a;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  uStack_8c = 0x5ae429;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xac),
             (IBinding *)*puVar2);
  FUN_004497b5();
  uStack_8c = unaff_EBP + -0x2c;
  puStack_90 = (undefined1 *)0x5ae43c;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  uStack_8c = 0x5ae44b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb0),
             (IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    uStack_8c = 0x5ae458;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  uStack_8c = 0x5ae461;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 10;
  uStack_8c = 0x5ae471;
  FUN_00403191();
  uStack_8c = 0;
  puStack_90 = (undefined1 *)(unaff_EBP + -100);
  uStack_94 = unaff_EBP - 0x74;
  *(uint **)(unaff_EBP + -0x44) = &uStack_98;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_98 = extraout_ECX_00;
  FUN_00679e4e(&uStack_98,0xa15);
  iVar3 = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_90 = (undefined1 *)0x5ae4bd;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
  uStack_8c = 0x5ae4d1;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_8c = 0x5ae4e2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_8c = 0x5ae4f2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae4fd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_8c = 0x5ae50a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae515;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae522;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae52d;
    FUN_00878dfb();
  }
  puStack_90 = &stack0xffffff78;
  *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff78;
  uStack_8c = 0xa16;
  uStack_94 = 0x5ae540;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = unaff_EBP + -0x84;
  puStack_90 = (undefined1 *)0x5ae552;
  FUN_0040263d();
  puStack_90 = (undefined1 *)0x5ae559;
  FUN_004048a4();
  uStack_8c = unaff_EBP + -0x2c;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  puStack_90 = (undefined1 *)0x5ae56a;
  FUN_00412348();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_8c = 0x5ae57c;
  iVar3 = FUN_0041a485();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_8c = 0x5ae58d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    uStack_8c = 0x5ae59e;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae5ae;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae5b9;
    FUN_00878dfb();
  }
  puStack_90 = &stack0xffffff78;
  *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff78;
  uStack_8c = 0xa17;
  uStack_94 = 0x5ae5cc;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = unaff_EBP + -0x84;
  puStack_90 = (undefined1 *)0x5ae5de;
  FUN_0040263d();
  puStack_90 = (undefined1 *)0x5ae5e5;
  FUN_004048a4();
  uStack_8c = unaff_EBP + -0x2c;
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  puStack_90 = (undefined1 *)0x5ae5f6;
  FUN_00412348();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_8c = 0x5ae608;
  iVar3 = FUN_0041a485();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_8c = 0x5ae619;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    uStack_8c = 0x5ae62a;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae63a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae645;
    FUN_00878dfb();
  }
  puStack_90 = &stack0xffffff78;
  *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff78;
  uStack_8c = 0xa18;
  uStack_94 = 0x5ae658;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = unaff_EBP + -0x84;
  puStack_90 = (undefined1 *)0x5ae66a;
  FUN_0040263d();
  puStack_90 = (undefined1 *)0x5ae671;
  FUN_004048a4();
  uStack_8c = unaff_EBP + -0x2c;
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  puStack_90 = (undefined1 *)0x5ae682;
  FUN_00412348();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_8c = 0x5ae694;
  iVar3 = FUN_0041a485();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_8c = 0x5ae6a5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    uStack_8c = 0x5ae6b6;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae6c6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae6d1;
    FUN_00878dfb();
  }
  puStack_90 = &stack0xffffff78;
  *(undefined1 **)(unaff_EBP + -0x44) = &stack0xffffff78;
  uStack_8c = 0xa19;
  uStack_94 = 0x5ae6e4;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = unaff_EBP + -0x84;
  puStack_90 = (undefined1 *)0x5ae6f6;
  FUN_0040263d();
  puStack_90 = (undefined1 *)0x5ae6fd;
  FUN_004048a4();
  uStack_8c = unaff_EBP + -0x2c;
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  puStack_90 = (undefined1 *)0x5ae70e;
  FUN_00412348();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_8c = 0x5ae720;
  iVar3 = FUN_0041a485();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    uStack_8c = 0x5ae731;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    uStack_8c = 0x5ae742;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5ae752;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_8c = 0x5ae75d;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  uStack_8c = *(undefined4 *)(iVar3 + 8);
  *(uint *)(unaff_EBP + -0x2c) = uStack_8c;
  puStack_90 = (undefined1 *)0x5ae776;
  FUN_005aff55();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puVar2 = *(undefined4 **)(iVar3 + 0xc);
  if (0 < *(int *)(unaff_EBP + -0x2c)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c);
    while( true ) {
      iVar3 = *(int *)((-(uint)(puVar2 != (undefined4 *)0x0) & (uint)(puVar2 + -4)) + 4);
      puVar9 = (undefined4 *)(*(int *)(unaff_EBP + 8) + *(int *)(extraout_ECX + 0xb4));
      uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
      *puVar9 = 0;
      *(undefined4 **)(unaff_EBP + -0x28) = puVar2;
      puVar9[1] = uVar4;
      uVar4 = *puVar2;
      *(uint *)(unaff_EBP + -0x30) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(undefined4 **)(unaff_EBP + -0x44) = puVar9;
      puVar9[2] = uVar4;
      uStack_8c = 0x5ae7db;
      FUN_00432cfc();
      *(undefined4 **)(unaff_EBP + -0x24) = puVar9 + 3;
      FUN_00408b49();
      FUN_00402fa6();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      **(int **)(unaff_EBP + -0x24) = iVar3;
      if (iVar3 != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      iVar3 = *(int *)(unaff_EBP + -0x28);
      puVar9[6] = *(undefined4 *)(iVar3 + 0xe2);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uStack_8c = iVar3 + 0x11;
      puStack_90 = (undefined1 *)0x5ae824;
      FUN_00470891();
      iVar3 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(*(int *)(unaff_EBP + -0x10) + -4) >> 1;
        }
        if ((int)uVar5 <= iVar3) break;
        uStack_8c = 0x5ae856;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
        uStack_8c = unaff_EBP + -0x74;
        puStack_90 = (undefined1 *)0x5ae864;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          uStack_8c = 0x5ae870;
          FUN_00878dfb();
        }
        uStack_8c = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_90 = (undefined1 *)0x5ae887;
        FUN_004115d9();
        puStack_90 = (undefined1 *)0x5ae88e;
        iVar6 = FUN_0040e48b();
        puStack_90 = (undefined1 *)(iVar6 + -0x10);
        uStack_94 = 0x5ae89a;
        iVar6 = FUN_00411641();
        uStack_98 = iVar6 + iVar3 * 2;
        *(uint **)(unaff_EBP + -0x40) = &uStack_94;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        uStack_98 = 0x5ae8b8;
        FUN_0044974c();
        uStack_98 = 0x5ae8bf;
        uVar4 = FUN_005afeaa();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        uStack_8c = 0x5ae8cf;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          uStack_8c = 0x5ae8da;
          FUN_00878dfb();
        }
        puStack_90 = (undefined1 *)(unaff_EBP + -0x34);
        uStack_94 = 0x5ae8ed;
        uStack_8c = iVar3;
        FUN_0046fd34();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        uStack_8c = 0x5ae8fa;
        FUN_00419192();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00402676();
        iVar3 = iVar3 + *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x24);
        uStack_8c = 0x5ae91b;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_8c = 0x5ae933;
        FUN_004d6cfb();
        uStack_8c = 0x5ae93e;
        FUN_00402f41();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        FUN_00419015();
      }
      uStack_8c = *(int *)(unaff_EBP + -0x28) + 0xda;
      puStack_90 = (undefined1 *)0x5ae972;
      (*DAT_0097b4b0)();
      uStack_8c = unaff_EBP + -0x3c;
      puStack_90 = (undefined1 *)0x5ae982;
      puVar2 = (undefined4 *)FUN_00679d22();
      uVar4 = *puVar2;
      uStack_8c = (uint)*(ushort *)(unaff_EBP + -0x5c);
      puStack_90 = (undefined1 *)(uint)*(ushort *)(unaff_EBP + -100);
      uStack_94 = (uint)*(ushort *)(unaff_EBP + -0x5e);
      uStack_98 = (uint)*(ushort *)(unaff_EBP + -0x62);
      iVar3 = *(int *)(extraout_ECX + 0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_00434e21(*(int *)(unaff_EBP + 8) + 0x10 + iVar3,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00414ebb();
      if (*(int *)(extraout_ECX + 0x90) == 0) {
        uStack_8c = 0x5ae9dd;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(extraout_ECX + 0x90);
      iVar3 = *(int *)(*(int *)(unaff_EBP + 8) + *(int *)(extraout_ECX + 0xb4) + 0x14);
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar3 + -4);
      }
      if (*(int *)(extraout_ECX + 0x94) == 0) {
        uStack_8c = 0x5aea16;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(extraout_ECX + 0x98);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x94);
      if (iVar3 == 0) {
        uStack_8c = 0x5aea34;
        FUN_00878dfb();
      }
      iVar6 = FUN_0040e53d();
      iVar3 = *(int *)(unaff_EBP + -0x28);
      iVar7 = FUN_0040e53d();
      iVar8 = FUN_0040e53d();
      iVar3 = iVar8 + *(int *)(unaff_EBP + -0x14) + 7 + iVar6 * iVar3 + iVar7;
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x44) + 0x18);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      if (iVar6 == 1) {
        if (*(int *)(extraout_ECX + 0x94) == 0) {
          uStack_8c = 0x5aea7d;
          FUN_00878dfb();
        }
        iVar6 = FUN_0040e53d();
        *(int *)(unaff_EBP + -0x14) = iVar6 * 3 + iVar3;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x1c;
      piVar1 = (int *)(unaff_EBP + -0x2c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) break;
      puVar2 = *(undefined4 **)(unaff_EBP + -0x30);
    }
  }
  uStack_8c = 0x5aeac2;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0x21;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_8c = 0x5aeae8;
  FUN_0048b9e9();
  uStack_8c = 0x8a;
  puStack_90 = (undefined1 *)0x42;
  uStack_94 = 0x111;
  uStack_98 = 3;
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))(extraout_ECX,1000,1);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x34) = 0x104;
  iVar3 = *(int *)(unaff_EBP + -0x14) / 10 + -0xc;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  FUN_004ad003(iVar3);
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 1;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0x22;
  uVar4 = FUN_00679d86(unaff_EBP + 8,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))(extraout_ECX,2,0x114,6,0,unaff_EBP + -0x54);
  uVar4 = FUN_00679d86(unaff_EBP + -0x40,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))
            (extraout_ECX,1,0xf1,0xd8,0,unaff_EBP + -0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



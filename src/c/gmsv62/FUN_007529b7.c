/* FUN_007529b7 - 0x007529b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007529b7(void)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  size_t sVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar14;
  int unaff_EBP;
  int iStack_84;
  undefined1 *puStack_80;
  undefined *puStack_7c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_7c = (undefined *)0x7529dd;
  cVar4 = FUN_00433bfa();
  if (((cVar4 != '\0') || (*(int *)(extraout_ECX + 0x14) != *(int *)(unaff_EBP + 8))) ||
     (*(int *)(extraout_ECX + 0x18) != *(int *)(unaff_EBP + 0xc))) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_7c = (undefined *)0x752a0a;
    iVar5 = FUN_0055416a();
    if (iVar5 != 0) {
      puStack_7c = (undefined *)(unaff_EBP + -0x40);
      puStack_80 = (undefined1 *)0x752a23;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_7c = (undefined *)0x752a30;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        puStack_7c = (undefined *)0x752a44;
        FUN_00434e38();
      }
    }
    puStack_7c = (undefined *)0x752a53;
    iVar5 = FUN_0055443a();
    if (iVar5 != 0) {
      if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0')
         ) {
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        puStack_7c = &DAT_00965738;
        puStack_80 = (undefined1 *)0x752a91;
        FUN_00414edd();
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 4;
      }
      puStack_7c = (undefined *)(unaff_EBP + -0x48);
      puStack_80 = (undefined1 *)0x752aae;
      FUN_00679d22();
      puStack_7c = (undefined *)(unaff_EBP + -0x44);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      puStack_80 = (undefined1 *)0x752ac1;
      puVar6 = (undefined4 *)FUN_0045e02d();
      puStack_7c = (undefined *)*puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_80 = (undefined1 *)0x752adc;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        puStack_7c = (undefined *)0x752af0;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        puStack_7c = (undefined *)0x752b05;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
         *(int *)(unaff_EBP + -0x38) != 0)) {
        puStack_7c = (undefined *)0x752b27;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
         *(int *)(unaff_EBP + -0x40) != 0)) {
        puStack_7c = (undefined *)0x752b49;
        FUN_00434e38();
      }
    }
    puStack_7c = (undefined *)0x752b58;
    iVar5 = FUN_005544ee();
    if (iVar5 != 0) {
      if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0')
         ) {
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
        *(undefined1 *)(unaff_EBP + -4) = 7;
      }
      else {
        puStack_7c = &DAT_00965738;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        puStack_80 = (undefined1 *)0x752b95;
        FUN_00414edd();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
        *(undefined4 *)(unaff_EBP + -4) = 8;
      }
      puStack_7c = (undefined *)(unaff_EBP + -0x44);
      puStack_80 = (undefined1 *)0x752bb1;
      FUN_00679d22();
      puStack_7c = (undefined *)(unaff_EBP + -0x48);
      *(undefined4 *)(unaff_EBP + -4) = 9;
      puStack_80 = (undefined1 *)0x752bc4;
      puVar6 = (undefined4 *)FUN_0045e02d();
      puStack_7c = (undefined *)*puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_80 = (undefined1 *)0x752bdf;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        puStack_7c = (undefined *)0x752bf3;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        puStack_7c = (undefined *)0x752c07;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 7;
      if (((*(byte *)(unaff_EBP + -0x10) & 8) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7,
         *(int *)(unaff_EBP + -0x38) != 0)) {
        puStack_7c = (undefined *)0x752c28;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 4) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb,
         *(int *)(unaff_EBP + -0x40) != 0)) {
        puStack_7c = (undefined *)0x752c4a;
        FUN_00434e38();
      }
    }
    puVar1 = *(undefined **)(unaff_EBP + 0x10);
    puStack_7c = (undefined *)0x752c5e;
    iVar5 = FUN_005542d2();
    if (iVar5 != 0) {
      if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0')
         ) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
      }
      else {
        puStack_7c = &DAT_00965738;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        puStack_80 = (undefined1 *)0x752c94;
        FUN_00414edd();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
      }
      puStack_7c = (undefined *)(unaff_EBP + -0x44);
      puStack_80 = (undefined1 *)0x752cb5;
      FUN_00679d22();
      puStack_7c = (undefined *)(unaff_EBP + -0x48);
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      puStack_80 = (undefined1 *)0x752cc8;
      puVar6 = (undefined4 *)FUN_0045e02d();
      puStack_7c = (undefined *)*puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_80 = (undefined1 *)0x752ce3;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        puStack_7c = (undefined *)0x752cf7;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        puStack_7c = (undefined *)0x752d0c;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xb;
      if (((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf,
         *(int *)(unaff_EBP + -0x38) != 0)) {
        puStack_7c = (undefined *)0x752d2e;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) && (*(int *)(unaff_EBP + -0x40) != 0)) {
        puStack_7c = (undefined *)0x752d4c;
        FUN_00434e38();
      }
    }
    if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0'))
    {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    *(uint *)(unaff_EBP + -0x38) = (-(uint)bVar2 & 0xffffffed) + 0x13;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_80 = (undefined1 *)0x752d9b;
    puStack_7c = puVar1;
    puStack_7c = (undefined *)FUN_005540b6();
    puStack_80 = (undefined1 *)(unaff_EBP + -0x24);
    iStack_84 = *(int *)(unaff_EBP + 0x1c);
    FUN_007511e2(*(undefined4 *)(unaff_EBP + 0x14));
    if ((*(char **)(unaff_EBP + -0x24) == (char *)0x0) || (**(char **)(unaff_EBP + -0x24) == '\0'))
    {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    if (((((puVar1 == (undefined *)0x3d837d) || (puVar1 == (undefined *)0x3d837e)) ||
         (puVar1 == (undefined *)0x3d837f)) ||
        ((puVar1 == (undefined *)0x3d8380 || (puVar1 == (undefined *)0x3d8381)))) ||
       ((puVar1 == (undefined *)0x3d8382 ||
        ((puVar1 == (undefined *)0x3d8383 || (puVar1 == (undefined *)0x3d8384)))))) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    *(uint *)(unaff_EBP + 0x1c) =
         (-(uint)bVar2 & 0xffffffec) + 0x14 + *(int *)(unaff_EBP + -0x38) + (-(uint)bVar3 & 0x10);
    if (*(int *)(unaff_EBP + 0x20) != 0) {
      puStack_7c = (undefined *)0x752e30;
      sVar7 = _strlen(*(char **)(unaff_EBP + 0x20));
      if (sVar7 != 0) {
        puStack_7c = (undefined *)(unaff_EBP + 0x14);
        puStack_80 = (undefined1 *)0x752e48;
        puVar6 = (undefined4 *)FUN_00679d22();
        puStack_7c = (undefined *)*puVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_80 = (undefined1 *)(unaff_EBP + -0x28);
        iStack_84 = 0x752e5b;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + 0x14) != 0) {
          puStack_7c = (undefined *)0x752e72;
          FUN_00434e38();
        }
        *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 0x10;
      }
    }
    if (*(int *)(unaff_EBP + 0x24) != 0) {
      puStack_7c = (undefined *)0x752e84;
      sVar7 = _strlen(*(char **)(unaff_EBP + 0x24));
      if (((sVar7 != 0) && (puVar1 != (undefined *)0x3d83ae)) && (puVar1 != (undefined *)0x3d83af))
      {
        *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 0x10;
      }
    }
    puStack_7c = (undefined *)(unaff_EBP + -0x34);
    puStack_80 = (undefined1 *)0x752ead;
    FUN_0045a1d8();
    puStack_7c = (undefined *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_80 = (undefined1 *)0x752ec1;
    FUN_0075572d();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_7c = (undefined *)0x752ed1;
    uVar8 = FUN_00554db7();
    *(undefined4 *)(unaff_EBP + 0x14) = uVar8;
    pcVar9 = *(char **)(unaff_EBP + -0x34);
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      puStack_7c = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + 0x20) = &puStack_80;
      iStack_84 = 7;
      FUN_00756efd(&puStack_80);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_84 = 0x752f79;
      iStack_84 = FUN_00449713();
      FUN_00757d85(0x5c,0x10e,0);
      if ((*(int *)(unaff_EBP + 0x28) == 0) ||
         (*(int *)(unaff_EBP + 0x28) == *(int *)(unaff_EBP + 0x2c))) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0x23;
      }
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      iVar5 = iVar5 + (-(uint)(*(int *)(unaff_EBP + 0x34) != 0) & 0x23);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int *)(unaff_EBP + 0x3c) != 0) {
        puStack_7c = *(undefined **)(unaff_EBP + 0x3c);
        puStack_80 = (undefined1 *)0x752fcd;
        FUN_00414edd();
        puStack_7c = (undefined *)(unaff_EBP + 0x20);
        puStack_80 = (undefined1 *)0x752fd8;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_7c = (undefined *)0x752fe7;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_7c = (undefined *)0x752ff7;
        puStack_80 = (undefined1 *)FUN_00449713();
        *(undefined ***)(unaff_EBP + -0x48) = &puStack_7c;
        iStack_84 = 0x753003;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_80 = (undefined1 *)0x75300f;
        FUN_0044974c();
        puStack_80 = (undefined1 *)0x753016;
        iVar10 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_7c = (undefined *)0x753025;
        iVar11 = FUN_00402bc3();
        if (iVar11 < 0) {
          puStack_7c = (undefined *)0x753030;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar5 = iVar5 + (iVar10 / 0x113) * 0x10;
        FUN_004497b5();
      }
      if ((*(int *)(unaff_EBP + 0x44) != 0) && (0 < *(int *)(*(int *)(unaff_EBP + 0x44) + 0x10))) {
        iVar5 = iVar5 + 0x40;
      }
      puStack_7c = (undefined *)(unaff_EBP + -0x30);
      puStack_80 = (undefined1 *)0x753069;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_7c = (undefined *)0x753076;
      FUN_00403191();
      puStack_7c = (undefined *)0xb2;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_80 = (undefined1 *)0x75308b;
      iStack_84 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + 0x20) = &puStack_80;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_84 = 0x7530a3;
      FUN_0044974c();
      iStack_84 = 0x7530aa;
      iVar10 = FUN_007538c7();
      iVar10 = iVar10 + -4;
      if (iVar10 < 1) {
        iVar10 = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_7c = (undefined *)0x7530c4;
      iVar11 = FUN_00402bc3();
      if (iVar11 < 0) {
        puStack_7c = (undefined *)0x7530cf;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        puStack_7c = (undefined *)0x7530df;
        FUN_00878dfb();
      }
      puStack_7c = (undefined *)0x7530e9;
      iVar11 = FUN_004a2734();
      puStack_7c = (undefined *)((iVar11 + 4) * iVar10 + iVar5 + 0x74 + *(int *)(unaff_EBP + 0x1c));
      puStack_80 = (undefined1 *)0x122;
      iStack_84 = 5;
      FUN_0074d72a();
      iVar5 = *(int *)(unaff_EBP + 0x10);
      if ((((iVar5 == 0x3d837d) || (iVar5 == 0x3d837e)) || (iVar5 == 0x3d837f)) ||
         (((iVar5 == 0x3d8380 || (iVar5 == 0x3d8381)) ||
          ((iVar5 == 0x3d8382 || ((iVar5 == 0x3d8383 || (iVar5 == 0x3d8384)))))))) {
        puStack_7c = (undefined *)0x753158;
        iVar5 = FUN_00455c59();
        iVar5 = *(int *)(iVar5 + 4);
        if (*(int *)(unaff_EBP + -0x48) != 0) {
          puStack_7c = (undefined *)0x75316b;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0x48) = 0;
        }
        if (*(int *)(iVar5 + 0x4a7) != 0) {
          *(undefined4 *)(unaff_EBP + 0x20) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          puStack_7c = (undefined *)(unaff_EBP + -0x48);
          puStack_80 = (undefined1 *)0x7531aa;
          puVar6 = (undefined4 *)FUN_00679d22();
          puStack_7c = (undefined *)*puVar6;
          puStack_80 = (undefined1 *)(unaff_EBP + 0x20);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_84 = 0x7531bb;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_00414ebb();
          puStack_7c = (undefined *)0x7531d5;
          _strlen(&DAT_00964314);
          puStack_7c = &DAT_00964314;
          puStack_80 = (undefined1 *)0x7531e0;
          FUN_0045efbb();
          puStack_7c = *(undefined **)(unaff_EBP + 0x20);
          puStack_80 = (undefined1 *)0x7531f8;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_00414ebb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      iVar5 = *(int *)(unaff_EBP + -0x14);
      puStack_7c = (undefined *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      puStack_80 = (undefined1 *)0x753220;
      FUN_00750398();
      puStack_7c = (undefined *)0x0;
      puStack_80 = (undefined1 *)0x1;
      iStack_84 = *(int *)(unaff_EBP + 0xc);
      FUN_0075699b(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 8));
      if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
        puStack_7c = (undefined *)0x753242;
        (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
      }
      puStack_7c = (undefined *)0x0;
      puStack_80 = (undefined1 *)0x75324d;
      FUN_004031b7();
      iVar5 = *(int *)(iVar5 + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar5 == 0) {
        puStack_7c = (undefined *)0x753260;
        FUN_00878dfb();
      }
      puStack_7c = (undefined *)(unaff_EBP + -0x20);
      puStack_80 = (undefined1 *)0x753270;
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_7c = (undefined *)0x75327d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_7c = (undefined *)0x753288;
        FUN_00878dfb();
      }
      puStack_80 = &stack0xffffff88;
      *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff88;
      puStack_7c = (undefined *)0x1;
      iStack_84 = 0x753298;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_7c = (undefined *)0x7532a4;
      puStack_7c = (undefined *)FUN_00449713();
      puStack_80 = (undefined1 *)0xa;
      iStack_84 = 0x7532ae;
      FUN_00758757();
      if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0')
         ) {
        *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff88;
        puStack_7c = (undefined *)0xb;
        iStack_84 = 0x7532ca;
        puStack_80 = &stack0xffffff88;
        FUN_00756efd();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_7c = (undefined *)0x7532d6;
        puStack_7c = (undefined *)FUN_00449713();
        puStack_80 = (undefined1 *)0x1f;
        iStack_84 = 0x7532e0;
        FUN_007585ac();
      }
      iVar5 = *(int *)(unaff_EBP + -0x38);
      puVar14 = (undefined1 *)(iVar5 + 0x1f);
      iVar10 = *(int *)(unaff_EBP + 0x10);
      if ((((((iVar10 == 0x3d837d) || (iVar10 == 0x3d837e)) || (iVar10 == 0x3d837f)) ||
           ((iVar10 == 0x3d8380 || (iVar10 == 0x3d8381)))) || (iVar10 == 0x3d8382)) ||
         ((iVar10 == 0x3d8383 || (iVar10 == 0x3d8384)))) {
        puStack_7c = (undefined *)0x753336;
        iVar10 = FUN_00455c59();
        iVar10 = *(int *)(iVar10 + 4);
        if (*(int *)(unaff_EBP + -0x48) != 0) {
          puStack_7c = (undefined *)0x753349;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0x48) = 0;
        }
        if (*(int *)(iVar10 + 0x4a7) != 0) {
          *(undefined4 *)(unaff_EBP + 0x20) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          puStack_7c = (undefined *)(unaff_EBP + 0xc);
          puStack_80 = (undefined1 *)0x75338b;
          puVar6 = (undefined4 *)FUN_00679d22();
          puStack_7c = (undefined *)*puVar6;
          puStack_80 = (undefined1 *)(unaff_EBP + 0x20);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_84 = 0x75339c;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00414ebb();
          puStack_80 = &stack0xffffff88;
          *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff88;
          puStack_7c = (undefined *)0xb;
          iStack_84 = 0x7533bc;
          FUN_00756efd();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          puStack_7c = (undefined *)0x7533c8;
          puStack_7c = (undefined *)FUN_00449713();
          iStack_84 = 0x7533d2;
          puStack_80 = puVar14;
          FUN_007585ac();
          puVar14 = (undefined1 *)(iVar5 + 0x32);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          FUN_00414ebb();
        }
      }
      if ((*(char **)(unaff_EBP + -0x24) != (char *)0x0) && (**(char **)(unaff_EBP + -0x24) != '\0')
         ) {
        puStack_7c = (undefined *)0xff;
        puStack_80 = (undefined1 *)0x753404;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4dc);
        piVar13 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        if (piVar13 == (int *)0x0) {
          puStack_7c = (undefined *)0x753425;
          FUN_00878dfb();
          piVar13 = *(int **)(unaff_EBP + -0x20);
        }
        iVar5 = *piVar13;
        iStack_84 = *(int *)(unaff_EBP + -100);
        puStack_80 = *(undefined1 **)(unaff_EBP + -0x60);
        puStack_7c = *(undefined **)(unaff_EBP + -0x5c);
        *(int **)(unaff_EBP + 0xc) = piVar13;
        puVar12 = (undefined1 *)
                  (**(code **)(iVar5 + 0x80))
                            (piVar13,10,puVar14 + 2,*(undefined4 *)(unaff_EBP + 0x20));
        if ((int)puVar12 < 0) {
          puStack_7c = *(undefined **)(unaff_EBP + 0xc);
          iStack_84 = 0x75345b;
          puStack_80 = puVar12;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_7c = (undefined *)0x753468;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x753473;
          FUN_00878dfb();
        }
        puStack_7c = (undefined *)0x75347f;
        VariantInit((VARIANTARG *)(unaff_EBP + -100));
        puStack_7c = (undefined *)(unaff_EBP + -100);
        puStack_80 = (undefined1 *)0x75348e;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x75349a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_7c = (undefined *)0x7534a4;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        puStack_7c = (undefined *)(unaff_EBP + -0x54);
        puStack_80 = (undefined1 *)0x7534ae;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x7534ba;
          FUN_00878dfb();
        }
        puStack_7c = (undefined *)(unaff_EBP + -0x54);
        puStack_80 = (undefined1 *)0xe;
        iStack_84 = unaff_EBP + 0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_00756efd();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        puStack_80 = (undefined1 *)0x7534df;
        puStack_80 = (undefined1 *)FUN_00449749();
        iStack_84 = 0x7534e8;
        uVar8 = FUN_00449713();
        *(int **)(unaff_EBP + 0xc) = &iStack_84;
        iStack_84 = extraout_ECX_00;
        FUN_00448a17(uVar8);
        puVar12 = puVar14 + -2;
        uVar8 = 0x10;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_004115d9(0x10,puVar12);
        FUN_00448e3a(uVar8,puVar12);
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
          puStack_7c = (undefined *)0x75351e;
          (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_7c = (undefined *)0x75352b;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x753536;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_7c = (undefined *)0x753543;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x75354e;
          FUN_00878dfb();
        }
        puVar14 = puVar14 + 0x10;
      }
      if (*(int *)(unaff_EBP + 0x24) != 0) {
        puStack_7c = (undefined *)0x75355f;
        sVar7 = _strlen(*(char **)(unaff_EBP + 0x24));
        if (((sVar7 != 0) && (*(int *)(unaff_EBP + 0x10) != 0x3d83ae)) &&
           (*(int *)(unaff_EBP + 0x10) != 0x3d83af)) {
          puStack_7c = *(undefined **)(unaff_EBP + 0x24);
          iStack_84 = 0x753584;
          puStack_80 = puVar14;
          FUN_007588fb();
          puVar14 = puVar14 + 0x10;
        }
      }
      if ((*(char **)(unaff_EBP + -0x28) != (char *)0x0) && (**(char **)(unaff_EBP + -0x28) != '\0')
         ) {
        puStack_7c = (undefined *)0xff;
        puStack_80 = (undefined1 *)0x7535aa;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4dc);
        piVar13 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (piVar13 == (int *)0x0) {
          puStack_7c = (undefined *)0x7535cb;
          FUN_00878dfb();
          piVar13 = *(int **)(unaff_EBP + -0x20);
        }
        iVar5 = *piVar13;
        iStack_84 = *(int *)(unaff_EBP + -100);
        puStack_80 = *(undefined1 **)(unaff_EBP + -0x60);
        puStack_7c = *(undefined **)(unaff_EBP + -0x5c);
        *(int **)(unaff_EBP + 0x20) = piVar13;
        puVar12 = (undefined1 *)
                  (**(code **)(iVar5 + 0x80))
                            (piVar13,10,puVar14 + 2,*(undefined4 *)(unaff_EBP + 0x24));
        if ((int)puVar12 < 0) {
          puStack_7c = *(undefined **)(unaff_EBP + 0x20);
          iStack_84 = 0x753601;
          puStack_80 = puVar12;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_7c = (undefined *)0x75360e;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x753619;
          FUN_00878dfb();
        }
        puStack_7c = (undefined *)0x753625;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        puStack_7c = (undefined *)(unaff_EBP + -0x54);
        puStack_80 = (undefined1 *)0x753634;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x753640;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        puStack_7c = (undefined *)0x75364a;
        VariantInit((VARIANTARG *)(unaff_EBP + -100));
        puStack_7c = (undefined *)(unaff_EBP + -100);
        puStack_80 = (undefined1 *)0x753654;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x753660;
          FUN_00878dfb();
        }
        puStack_7c = (undefined *)(unaff_EBP + -100);
        puStack_80 = (undefined1 *)0xe;
        iStack_84 = unaff_EBP + 0x24;
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        FUN_00756efd();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        puStack_80 = (undefined1 *)0x753685;
        puStack_80 = (undefined1 *)FUN_00449749();
        iStack_84 = 0x75368e;
        uVar8 = FUN_00449713();
        *(int **)(unaff_EBP + 0x20) = &iStack_84;
        FUN_00448a17(uVar8);
        puVar14 = puVar14 + -2;
        uVar8 = 0x10;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_004115d9(0x10,puVar14);
        FUN_00448e3a(uVar8,puVar14);
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        if (*(int **)(unaff_EBP + 0x24) != (int *)0x0) {
          puStack_7c = (undefined *)0x7536c4;
          (**(code **)(**(int **)(unaff_EBP + 0x24) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        puStack_7c = (undefined *)0x7536d1;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x7536dc;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_7c = (undefined *)0x7536e9;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          puStack_7c = (undefined *)0x7536f4;
          FUN_00878dfb();
        }
      }
      iVar5 = *(int *)(unaff_EBP + 0x1c);
      iVar10 = *(int *)(unaff_EBP + -0x14);
      puStack_7c = *(undefined **)(unaff_EBP + 0x18);
      puStack_80 = *(undefined1 **)(unaff_EBP + 0x10);
      iStack_84 = iVar5 + 0x20;
      FUN_00757a6e(10);
      if ((*(int *)(unaff_EBP + 0x10) / 10000 == 0x12d) || (*(int *)(unaff_EBP + 0x14) != 0)) {
        puStack_7c = (undefined *)(DAT_00978368 + 0x20a8);
        puStack_80 = (undefined1 *)0x753771;
        uVar8 = FUN_00413367();
        puStack_7c = (undefined *)0x0;
        puStack_80 = *(undefined1 **)(unaff_EBP + -0x38);
        iStack_84 = 0;
        FUN_00758f91(*(undefined4 *)(unaff_EBP + 0x14),uVar8);
        puStack_7c = (undefined1 *)0x1;
        *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_80;
        iStack_84 = 7;
        puStack_80 = extraout_ECX_01;
        FUN_00756efd(&puStack_80);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        iStack_84 = 0x7537a6;
        iStack_84 = FUN_00449713();
        iVar11 = FUN_00757d85(0x5c,0x10e,iVar5 + 0x2c);
      }
      else {
        puStack_7c = (undefined1 *)0x1;
        puStack_80 = (undefined1 *)0x2710;
        *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_80;
        iStack_84 = 7;
        FUN_00756efd(&puStack_80);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        iStack_84 = 0x753747;
        iStack_84 = FUN_00449713();
        iVar11 = FUN_00757d85(0x5c,0x10e,iVar5 + 0x20);
      }
      puVar14 = *(undefined1 **)(unaff_EBP + 0x28);
      if ((puVar14 != (undefined1 *)0x0) && (puVar14 != *(undefined1 **)(unaff_EBP + 0x2c))) {
        if (iVar11 < 0x44) {
          iVar11 = 0x44;
        }
        puStack_80 = (undefined1 *)(iVar11 + 0x28 + iVar5);
        iStack_84 = 0x7537dd;
        puStack_7c = puVar14;
        FUN_00759249();
        puVar14 = extraout_ECX_02;
      }
      if (*(int *)(unaff_EBP + 0x30) != 0) {
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(unaff_EBP + -0x2c) + -4);
        }
        puStack_7c = (undefined *)(*(int *)(iVar10 + 8) + iVar5 * -0x10);
        puStack_80 = (undefined1 *)0x753804;
        FUN_007509d5();
        puVar14 = extraout_ECX_03;
      }
      if (*(int *)(unaff_EBP + 0x34) != 0) {
        iStack_84 = unaff_EBP + 0x40;
        *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_80;
        puStack_80 = puVar14;
        puStack_7c = puVar14;
        FUN_0052e0fe();
        iStack_84 = *(int *)(unaff_EBP + 0x3c);
        FUN_0075a959(0x76,*(undefined4 *)(unaff_EBP + 0x34),*(undefined4 *)(unaff_EBP + 0x38));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        puStack_7c = (undefined1 *)0x75383f;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_0045f10c();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        puStack_7c = (undefined1 *)0x75385c;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 0x44) != 0) {
        puStack_7c = (undefined *)0x7538b6;
        FUN_0048ba7b();
      }
      goto LAB_007538b6;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_7c = (undefined *)0x752ef4;
      FUN_00434e38();
      pcVar9 = *(char **)(unaff_EBP + -0x34);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (pcVar9 != (char *)0x0) {
      puStack_7c = (undefined *)0x752f09;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      puStack_7c = (undefined *)0x752f1e;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_7c = (undefined *)0x752f33;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_7c = (undefined *)0x752f48;
      FUN_00434e38();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0052e143();
LAB_007538b6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



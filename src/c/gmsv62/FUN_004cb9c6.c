/* FUN_004cb9c6 - 0x004cb9c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004cb9c6(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_004cb762(uVar1);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x38);
  FUN_00424ed4();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004031b7(0xfffffffe,3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + -0x18,unaff_EBP + -0x54);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (-1 < iVar3) {
    if (iVar3 < 2) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004031b7(0x50,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x20,uVar1,0);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x4c4,uVar1,unaff_EBP + -0x104,unaff_EBP + -0x124,unaff_EBP + -0x144
                   ,unaff_EBP + -0x164,unaff_EBP + -0x184);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4c4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x104);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x124);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x144);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x164);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x184);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004031b7(0x50,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x24,uVar1,1);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x4e4,uVar1,unaff_EBP + -0x1a4,unaff_EBP + -0x1c4,unaff_EBP + -0x1e4
                   ,unaff_EBP + -0x204,unaff_EBP + -0x224);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4e4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1a4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1c4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1e4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x204);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x224);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_004031b7(0x50,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x2c,uVar1,2);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x504,uVar1,unaff_EBP + -0x244,unaff_EBP + -0x264,unaff_EBP + -0x284
                   ,unaff_EBP + -0x2a4,unaff_EBP + -0x2c4);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x504);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x244);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x264);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x284);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2a4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2c4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_004031b7(0x50,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x34,uVar1,3);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x524,uVar1,unaff_EBP + -0x2e4,unaff_EBP + -0x304,unaff_EBP + -0x324
                   ,unaff_EBP + -0x344,unaff_EBP + -0x364);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x524);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2e4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x304);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x324);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x344);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x364);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      iVar3 = (**(code **)(*piVar2 + 0x110))
                        (piVar2,0x20,*(undefined4 *)(unaff_EBP + -900),
                         *(undefined4 *)(unaff_EBP + -0x380),*(undefined4 *)(unaff_EBP + -0x37c),
                         *(undefined4 *)(unaff_EBP + -0x378),*(undefined4 *)(unaff_EBP + -0x3a4),
                         *(undefined4 *)(unaff_EBP + -0x3a0),*(undefined4 *)(unaff_EBP + -0x39c),
                         *(undefined4 *)(unaff_EBP + -0x398));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iVar3 = FUN_00402bc3(unaff_EBP + -900);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = unaff_EBP + -0x3a4;
    }
    else if (iVar3 == 2) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_004031b7(200,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x44,uVar1,0);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x4f4,uVar1,unaff_EBP + -0x374,unaff_EBP + -0x1d4,unaff_EBP + -0x424
                   ,unaff_EBP + -500,unaff_EBP + -0x394);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4f4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x374);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1d4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x424);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iVar3 = FUN_00402bc3(unaff_EBP + -500);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x394);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_004031b7(200,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x30,uVar1,1);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x4d4,uVar1,unaff_EBP + -0x214,unaff_EBP + -0x444,unaff_EBP + -0x234
                   ,unaff_EBP + -0x3b4,unaff_EBP + -0x94);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4d4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x214);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x444);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x234);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x3b4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x94);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_004031b7(200,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x1c,uVar1,2);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x484,uVar1,unaff_EBP + -0x464,unaff_EBP + -0x274,unaff_EBP + -0x3d4
                   ,unaff_EBP + -0x294,unaff_EBP + -0x454);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x484);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x464);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x274);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x3d4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x294);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x454);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_004031b7(200,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x38,uVar1,3);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x4a4,uVar1,unaff_EBP + -0x2b4,unaff_EBP + -0x3f4,unaff_EBP + -0x2d4
                   ,unaff_EBP + -0x434,unaff_EBP + -0xa4);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4a4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2b4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x3f4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2d4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x434);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0xa4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      iVar3 = (**(code **)(*piVar2 + 0x110))
                        (piVar2,0x20,*(undefined4 *)(unaff_EBP + -0xc4),
                         *(undefined4 *)(unaff_EBP + -0xc0),*(undefined4 *)(unaff_EBP + -0xbc),
                         *(undefined4 *)(unaff_EBP + -0xb8),*(undefined4 *)(unaff_EBP + -0xe4),
                         *(undefined4 *)(unaff_EBP + -0xe0),*(undefined4 *)(unaff_EBP + -0xdc),
                         *(undefined4 *)(unaff_EBP + -0xd8));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      iVar3 = FUN_00402bc3(unaff_EBP + -0xc4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = unaff_EBP + -0xe4;
    }
    else {
      if (iVar3 != 3) goto LAB_004ccca3;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      FUN_004031b7(4000,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x18,uVar1,0);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x474,uVar1,unaff_EBP + -0x254,unaff_EBP + -0xb4,unaff_EBP + -0x2f4,
                   unaff_EBP + -0xd4,unaff_EBP + -0x414);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x474);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x254);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      iVar3 = FUN_00402bc3(unaff_EBP + -0xb4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2f4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iVar3 = FUN_00402bc3(unaff_EBP + -0xd4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x414);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      FUN_004031b7(0x78,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x3c,uVar1,1);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x494,uVar1,unaff_EBP + -0xf4,unaff_EBP + -0x314,unaff_EBP + -0x114,
                   unaff_EBP + -0x3c4,unaff_EBP + -0x134);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x494);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      iVar3 = FUN_00402bc3(unaff_EBP + -0xf4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x314);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x114);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x3c4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x134);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      FUN_004031b7(0x78,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x40,uVar1,2);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x514,uVar1,unaff_EBP + -0x334,unaff_EBP + -0x154,unaff_EBP + -0x3e4
                   ,unaff_EBP + -0x174,unaff_EBP + -0x354);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x514);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      piVar2 = *(int **)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x334);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x154);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x3e4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x174);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x354);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
      iVar3 = FUN_00402e32(unaff_EBP + -0x84,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      VariantInit((VARIANTARG *)(unaff_EBP + -100));
      iVar3 = FUN_00402e32(unaff_EBP + -100,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      FUN_004031b7(0x78,3);
      uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      puVar5 = (undefined4 *)FUN_004cb78a(unaff_EBP + -0x28,uVar1,3);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x4b4,uVar1,unaff_EBP + -0x194,unaff_EBP + -0x404,unaff_EBP + -0x1b4
                   ,unaff_EBP + -100,unaff_EBP + -0x84);
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4b4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      piVar2 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x194);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x404);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x1b4);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      iVar3 = FUN_00402bc3(unaff_EBP + -100);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x84);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      iVar3 = FUN_00402e32(unaff_EBP + -0x54,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
      iVar3 = FUN_00402e32(unaff_EBP + -0x74,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      iVar3 = (**(code **)(*piVar2 + 0x110))
                        (piVar2,0x20,*(undefined4 *)(unaff_EBP + -0x74),
                         *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                         *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x74);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = unaff_EBP + -0x54;
    }
    iVar3 = FUN_00402bc3(iVar3);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
LAB_004ccca3:
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004cd5da(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_007305de - 0x007305de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007305de(void)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puStack_64;
  uint uStack_60;
  undefined *puStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  puStack_5c = (undefined *)0x7305f9;
  FUN_0081622a();
  puStack_5c = (undefined *)0x730605;
  FUN_00448dc6();
  iVar1 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_5c = (undefined *)0x73061a;
  iVar4 = FUN_00455c59();
  iVar4 = *(int *)(iVar4 + 4);
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_5c = (undefined *)0x730641;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_5c = (undefined *)0x73064e;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_60 = 0x730668;
  uStack_60 = FUN_00449749();
  *(undefined1 ***)(unaff_EBP + 8) = &puStack_64;
  FUN_00448a17(iVar4 + 4);
  uVar8 = 0x21;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004115d9(0x3d,0x21);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_5c = (undefined *)0x73069c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x7306a7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_5c = (undefined *)0x7306b4;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x7306bf;
    FUN_00878dfb();
  }
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffa8;
  puStack_5c = (undefined *)0x7306cf;
  FUN_004125f3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_5c = (undefined *)0x7306da;
  puStack_5c = (undefined *)FUN_004bf848();
  uStack_60 = 0x37;
  puStack_64 = (undefined1 *)0x3e;
  FUN_0073293c();
  puStack_5c = (undefined *)(iVar4 + 0x33);
  uStack_60 = 0x7306f3;
  uVar2 = FUN_0045f03e();
  *(undefined1 *)(unaff_EBP + 0xb) = uVar2;
  puStack_5c = (undefined *)(unaff_EBP + -0x20);
  uStack_60 = 0x73070b;
  puVar6 = (undefined4 *)FUN_00679d22();
  puStack_5c = (undefined *)*puVar6;
  uStack_60 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_64 = (undefined1 *)0x730720;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_5c = (undefined *)0x730737;
    FUN_00434e38();
  }
  puStack_5c = (undefined *)0x730741;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_5c = (undefined *)0x73074e;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_60 = 0x730768;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730771;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + 8) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0x4f;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004115d9(0x3d,0x4f);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_5c = (undefined *)0x7307a1;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x7307ac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_5c = (undefined *)0x7307b9;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x7307c4;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)0x7307d3;
  FUN_004dee9b();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if ((*(char **)(unaff_EBP + -0x1c) == (char *)0x0) || (**(char **)(unaff_EBP + -0x1c) == '\0')) {
    puStack_5c = &DAT_009645ac;
    uStack_60 = 0x7307f2;
    FUN_00414edd();
  }
  puStack_5c = (undefined *)0x7307fb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_5c = (undefined *)0x730808;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_60 = 0x730822;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x73082b;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + 8) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0x60;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004115d9(0x3d,0x60);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_5c = (undefined *)0x73085b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730866;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x730873;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x73087e;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar4 + 0x33);
  uStack_60 = 0x73088a;
  uStack_60 = FUN_0045f03e();
  uStack_60 = uStack_60 & 0xff;
  puStack_64 = (undefined1 *)0x730893;
  uVar7 = FUN_0066ba5e();
  puStack_64 = *(undefined1 **)(iVar1 + 0x2104);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
  uVar8 = FUN_00413367(iVar1 + 0x20fc);
  uVar7 = *(undefined4 *)(iVar4 + 0x65);
  *(undefined4 *)(unaff_EBP + 8) = uVar8;
  uVar7 = FUN_0045f084(iVar4 + 0x61,uVar7);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
  puStack_5c = (undefined *)(unaff_EBP + -0x28);
  uStack_60 = 0x7308ca;
  puVar6 = (undefined4 *)FUN_00679d22();
  puStack_5c = (undefined *)(int)*(short *)(unaff_EBP + -0x24);
  uStack_60 = *puVar6;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_5c = (undefined *)0x7308f9;
    FUN_00434e38();
  }
  puStack_5c = (undefined *)0x730903;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_5c = (undefined *)0x730910;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x18) + 0x5bc;
  uStack_60 = 0x73092d;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730936;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0x73;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004115d9(0x3d,0x73);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_5c = (undefined *)0x730966;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730971;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x73097e;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730989;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar1 + 0x2108);
  uStack_60 = 0x730995;
  uVar7 = FUN_00413367();
  uStack_60 = *(undefined4 *)(iVar4 + 0x75);
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  puStack_64 = (undefined1 *)(iVar4 + 0x71);
  uVar7 = FUN_0045f084();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
  puStack_5c = (undefined *)(unaff_EBP + -0x18);
  uStack_60 = 0x7309bd;
  puVar6 = (undefined4 *)FUN_00679d22();
  puStack_5c = (undefined *)(int)*(short *)(unaff_EBP + -0x24);
  uStack_60 = *puVar6;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_5c = (undefined *)0x7309ec;
    FUN_00434e38();
  }
  puStack_5c = (undefined *)0x7309f6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_5c = (undefined *)0x730a03;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_60 = 0x730a17;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730a20;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0x85;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_004115d9(0x3d,0x85);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_5c = (undefined *)0x730a53;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730a5e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x730a6b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730a76;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) < 1) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    puStack_5c = (undefined *)(iVar4 + 0x91);
    uStack_60 = 0x730a8e;
    uVar7 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    uVar7 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
  }
  puStack_5c = (undefined *)(iVar4 + 0x91);
  uStack_60 = 0x730abf;
  uVar7 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  puStack_5c = (undefined *)(unaff_EBP + -0x24);
  uStack_60 = 0x730ad7;
  puVar6 = (undefined4 *)FUN_00679d22();
  uStack_60 = *puVar6;
  puStack_5c = *(undefined **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_64 = (undefined1 *)(unaff_EBP + -0x10);
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puStack_5c = (undefined *)0x730b04;
    FUN_00434e38();
  }
  puStack_5c = (undefined *)0x730b0e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_5c = (undefined *)0x730b1b;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_60 = 0x730b2f;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730b38;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0x97;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_004115d9(0x3d,0x97);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_5c = (undefined *)0x730b6b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730b76;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x730b83;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730b8e;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar4 + 0x9d);
  uStack_60 = 0x730ba0;
  uVar7 = FUN_0045f084();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  puStack_5c = (undefined *)(unaff_EBP + -0x24);
  uStack_60 = 0x730bb8;
  puVar6 = (undefined4 *)FUN_00679d22();
  puStack_5c = (undefined *)*puVar6;
  uStack_60 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_64 = (undefined1 *)0x730bcd;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puStack_5c = (undefined *)0x730be4;
    FUN_00434e38();
  }
  puStack_5c = (undefined *)0x730bee;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_5c = (undefined *)0x730bfb;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uStack_60 = 0x730c0f;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730c18;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0xa9;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004115d9(0x3d,0xa9);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_5c = (undefined *)0x730c4b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730c56;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x730c63;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730c6e;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar1 + 0x20c0);
  uStack_60 = 0x730c7a;
  uVar7 = FUN_00413367();
  uStack_60 = *(undefined4 *)(iVar4 + 0x45);
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  puStack_64 = (undefined1 *)(iVar4 + 0x41);
  sVar3 = FUN_0045f084();
  if (*(int *)(unaff_EBP + -0x28) == (int)sVar3) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffac;
    puStack_5c = (undefined *)(iVar1 + 0x20c0);
    uStack_60 = 0x730d34;
    uVar7 = FUN_00413367();
    uStack_60 = 10;
    puStack_64 = *(undefined1 **)(unaff_EBP + -0x2c);
    puStack_5c = (undefined *)FUN_0087b818(uVar7);
    uStack_60 = 0x730d4d;
    FUN_00414edd();
  }
  else {
    puStack_5c = (undefined *)(iVar1 + 0x20c0);
    uStack_60 = 0x730ca4;
    uVar7 = FUN_00413367();
    uStack_60 = *(undefined4 *)(iVar4 + 0x45);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
    puStack_64 = (undefined1 *)(iVar4 + 0x41);
    uVar8 = FUN_0045f084();
    uVar7 = *(undefined4 *)(iVar4 + 0x45);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar8;
    uVar8 = FUN_0045f084(iVar4 + 0x41,uVar7);
    uVar7 = *(undefined4 *)(iVar1 + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
    uVar7 = FUN_00413367(iVar1 + 0x20c0,uVar7);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
    puStack_5c = (undefined *)(unaff_EBP + -0x2c);
    uStack_60 = 0x730cea;
    puVar6 = (undefined4 *)FUN_00679d22();
    puStack_64 = (undefined1 *)*puVar6;
    puStack_5c = (undefined *)(int)*(short *)(unaff_EBP + -0x20);
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00414ebb();
  }
  puStack_5c = (undefined *)0x730d56;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_5c = (undefined *)0x730d63;
  FUN_00403191();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_60 = 0x730d77;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730d80;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0xc1;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_004115d9(0x3d,0xc1);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_5c = (undefined *)0x730db3;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730dbe;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x730dcb;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730dd6;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar1 + 0x20cc);
  uStack_60 = 0x730de2;
  uVar7 = FUN_00413367();
  uStack_60 = *(undefined4 *)(iVar4 + 0x4d);
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  puStack_64 = (undefined1 *)(iVar4 + 0x49);
  sVar3 = FUN_0045f084();
  if (*(int *)(unaff_EBP + -0x2c) == (int)sVar3) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffac;
    puStack_5c = (undefined *)(iVar1 + 0x20cc);
    uStack_60 = 0x730e9c;
    uVar7 = FUN_00413367();
    uStack_60 = 10;
    puStack_64 = *(undefined1 **)(unaff_EBP + -0x2c);
    puStack_5c = (undefined *)FUN_0087b818(uVar7);
    uStack_60 = 0x730eb5;
    FUN_00414edd();
  }
  else {
    puStack_5c = (undefined *)(iVar1 + 0x20cc);
    uStack_60 = 0x730e0c;
    uVar7 = FUN_00413367();
    uStack_60 = *(undefined4 *)(iVar4 + 0x4d);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    puStack_64 = (undefined1 *)(iVar4 + 0x49);
    uVar8 = FUN_0045f084();
    uVar7 = *(undefined4 *)(iVar4 + 0x4d);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar8;
    uVar8 = FUN_0045f084(iVar4 + 0x49,uVar7);
    uVar7 = *(undefined4 *)(iVar1 + 0x20d4);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    uVar7 = FUN_00413367(iVar1 + 0x20cc,uVar7);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
    puStack_5c = (undefined *)(unaff_EBP + -0x18);
    uStack_60 = 0x730e52;
    puVar6 = (undefined4 *)FUN_00679d22();
    puStack_64 = (undefined1 *)*puVar6;
    puStack_5c = (undefined *)(int)*(short *)(unaff_EBP + -0x24);
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00414ebb();
  }
  puStack_5c = (undefined *)0x730ebf;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  uStack_60 = 0x730ec9;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730ed5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  puStack_5c = (undefined *)0x730ee3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puStack_5c = (undefined *)(unaff_EBP + -0x44);
  uStack_60 = 0x730eed;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730ef9;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_60 = 0x730f0d;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x730f16;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0xd3;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_004115d9(0x3d,0xd3);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  puStack_5c = (undefined *)0x730f49;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730f54;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x730f61;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x730f6c;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar1 + 0x20d8);
  uStack_60 = 0x730f78;
  uVar7 = FUN_00413367();
  uStack_60 = *(undefined4 *)(iVar4 + 0x55);
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  puStack_64 = (undefined1 *)(iVar4 + 0x51);
  sVar3 = FUN_0045f084();
  if (*(int *)(unaff_EBP + -0x2c) == (int)sVar3) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffac;
    puStack_5c = (undefined *)(iVar1 + 0x20d8);
    uStack_60 = 0x731032;
    uVar7 = FUN_00413367();
    uStack_60 = 10;
    puStack_64 = *(undefined1 **)(unaff_EBP + -0x2c);
    puStack_5c = (undefined *)FUN_0087b818(uVar7);
    uStack_60 = 0x73104b;
    FUN_00414edd();
  }
  else {
    puStack_5c = (undefined *)(iVar1 + 0x20d8);
    uStack_60 = 0x730fa2;
    uVar7 = FUN_00413367();
    uStack_60 = *(undefined4 *)(iVar4 + 0x55);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    puStack_64 = (undefined1 *)(iVar4 + 0x51);
    uVar8 = FUN_0045f084();
    uVar7 = *(undefined4 *)(iVar4 + 0x55);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar8;
    uVar8 = FUN_0045f084(iVar4 + 0x51,uVar7);
    uVar7 = *(undefined4 *)(iVar1 + 0x20e0);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    uVar7 = FUN_00413367(iVar1 + 0x20d8,uVar7);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
    puStack_5c = (undefined *)(unaff_EBP + -0x18);
    uStack_60 = 0x730fe8;
    puVar6 = (undefined4 *)FUN_00679d22();
    puStack_64 = (undefined1 *)*puVar6;
    puStack_5c = (undefined *)(int)*(short *)(unaff_EBP + -0x24);
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00414ebb();
  }
  puStack_5c = (undefined *)0x731055;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puStack_5c = (undefined *)(unaff_EBP + -0x44);
  uStack_60 = 0x73105f;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x73106b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  puStack_5c = (undefined *)0x731079;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  uStack_60 = 0x731083;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x73108f;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  uStack_60 = 0x7310a3;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x7310ac;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0xe5;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_004115d9(0x3d,0xe5);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  puStack_5c = (undefined *)0x7310df;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x7310ea;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x7310f7;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_5c = (undefined *)0x731102;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(iVar1 + 0x20e4);
  *(undefined **)(unaff_EBP + -0x18) = puStack_5c;
  uStack_60 = 0x731111;
  uVar7 = FUN_00413367();
  uStack_60 = *(undefined4 *)(iVar4 + 0x5d);
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  puStack_64 = (undefined1 *)(iVar4 + 0x59);
  sVar3 = FUN_0045f084();
  if (*(int *)(unaff_EBP + -0x2c) == (int)sVar3) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffac;
    puStack_5c = *(undefined **)(unaff_EBP + -0x18);
    uStack_60 = 0x7311c5;
    uVar7 = FUN_00413367();
    uStack_60 = 10;
    puStack_64 = *(undefined1 **)(unaff_EBP + -0x2c);
    puStack_5c = (undefined *)FUN_0087b818(uVar7);
    uStack_60 = 0x7311de;
    FUN_00414edd();
  }
  else {
    puStack_5c = *(undefined **)(unaff_EBP + -0x18);
    uStack_60 = 0x73113a;
    uVar7 = FUN_00413367();
    uStack_60 = *(undefined4 *)(iVar4 + 0x5d);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    puStack_64 = (undefined1 *)(iVar4 + 0x59);
    uVar8 = FUN_0045f084();
    uVar7 = *(undefined4 *)(iVar4 + 0x5d);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar8;
    uVar8 = FUN_0045f084(iVar4 + 0x59,uVar7);
    uVar7 = *(undefined4 *)(iVar1 + 0x20ec);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    uVar7 = FUN_00413367(*(undefined4 *)(unaff_EBP + -0x18),uVar7);
    puStack_5c = (undefined *)(unaff_EBP + -0x20);
    uStack_60 = 0x73117e;
    puVar6 = (undefined4 *)FUN_00679d22();
    puStack_64 = (undefined1 *)*puVar6;
    puStack_5c = (undefined *)(int)*(short *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    uStack_60 = uVar7;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00414ebb();
  }
  puStack_5c = (undefined *)0x7311ea;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puStack_5c = (undefined *)(unaff_EBP + -0x44);
  uStack_60 = 0x7311f4;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x731200;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  puStack_5c = (undefined *)0x73120a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  uStack_60 = 0x731214;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x731220;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  uStack_60 = 0x731234;
  uStack_60 = FUN_00449749();
  puStack_64 = (undefined1 *)0x73123d;
  uVar7 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar8 = 0xf7;
  uVar7 = 0x3d;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_004115d9(0x3d,0xf7);
  FUN_00448e3a(uVar7,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  puStack_5c = (undefined *)0x731270;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x73127b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x731288;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x731293;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)0x731299;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  uStack_60 = 0x7312a3;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x7312af;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_0087a1b0();
  uStack_60 = 0x7312c9;
  puStack_5c = &stack0xffffffac;
  sVar3 = FUN_00732fbb();
  uStack_60 = (uint)sVar3;
  puStack_64 = (undefined1 *)0x7312d2;
  uStack_60 = FUN_0048b981();
  *(undefined ***)(unaff_EBP + -0x2c) = &puStack_5c;
  puStack_64 = (undefined1 *)0x7312de;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  uStack_60 = 0x7312ea;
  FUN_0044974c();
  uStack_60 = 0x7312f1;
  uVar7 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x731301;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x73130c;
    FUN_00878dfb();
  }
  puStack_5c = (undefined *)0x731312;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  puStack_5c = (undefined *)(unaff_EBP + -0x44);
  uStack_60 = 0x73131c;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x731328;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_5c = (undefined *)0x731332;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  uStack_60 = 0x73133c;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x731348;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_0087a1b0();
  puStack_5c = (undefined *)(unaff_EBP + -0x54);
  uStack_60 = 0x731366;
  uStack_60 = FUN_00449749();
  puStack_64 = &stack0xffffffac;
  sVar3 = FUN_00732fbb();
  uVar7 = FUN_0048b981((int)sVar3);
  *(undefined1 ***)(unaff_EBP + 8) = &puStack_64;
  FUN_00448a17(uVar7);
  uVar7 = 0x114;
  iVar4 = 0x71 - *(int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_004115d9(iVar4,0x114);
  FUN_00448e3a(iVar4,uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_5c = (undefined *)0x7313b0;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x7313bb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_5c = (undefined *)0x7313c8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_5c = (undefined *)0x7313d3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    puStack_5c = (undefined *)0x7313fc;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



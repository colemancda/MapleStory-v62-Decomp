/* FUN_00573528 - 0x00573528 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00573528(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  int iVar8;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  int *piStack_114;
  int *piStack_10c;
  undefined4 uStack_108;
  undefined1 *puStack_104;
  uint uStack_100;
  int iStack_fc;
  undefined1 *puStack_f8;
  int *piStack_f4;
  int *piStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  
  FUN_00879bb8();
  iStack_d8 = unaff_EBP + -0x10;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  uStack_dc = 0x573549;
  FUN_00448dc6();
  iVar8 = *(int *)(*(int *)(extraout_ECX + 0xcc) + 0x160) * 0x280 +
          *(int *)(*(int *)(extraout_ECX + 0xcc) + 0x10c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x4c) = iVar8;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_d8 = 0x80004003;
    uStack_dc = 0x573578;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iStack_d8 = 0;
  uStack_dc = 0xd2;
  uStack_e0 = 0xaa;
  uStack_e4 = 0;
  uStack_e8 = 0;
  piStack_ec = piVar1;
  puStack_f8 = (undefined1 *)(**(code **)(*piVar1 + 0x8c))();
  if ((int)puStack_f8 < 0) {
    iStack_fc = 0x5735a1;
    piStack_f4 = piVar1;
    FUN_00878e09();
  }
  piStack_f4 = (int *)(unaff_EBP + -0x1c);
  puStack_f8 = (undefined1 *)0x5735ac;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_f4 = (int *)0x5735c0;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_f4 = (int *)0x5735cd;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_f8 = (undefined1 *)0x5735e1;
  puStack_f8 = (undefined1 *)FUN_00449749();
  iStack_fc = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xd0);
  uStack_100 = unaff_EBP - 0x18;
  puStack_104 = (undefined1 *)0x5735fa;
  FUN_0056a28a();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_fc = 0x573605;
  uStack_100 = FUN_00449713();
  *(int **)(unaff_EBP + -0x50) = &iStack_fc;
  puStack_104 = (undefined1 *)0x573611;
  FUN_00448a17();
  uStack_100 = 0x40;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_108 = 0x573623;
  FUN_004115d9();
  uStack_108 = 0x57362a;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_f4 = (int *)0x57363e;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_f4 = (int *)0x57364c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573657;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_f4 = (int *)0x573664;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x57366f;
    FUN_00878dfb();
  }
  piStack_f4 = (int *)(iVar8 + 0x39);
  *(int **)(unaff_EBP + -0x50) = piStack_f4;
  puStack_f8 = (undefined1 *)0x57367e;
  sVar2 = FUN_0045f084();
  puStack_f8 = (undefined1 *)(int)sVar2;
  iStack_fc = 0x573687;
  piStack_f4 = (int *)FUN_00482a39();
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  puStack_f8 = (undefined1 *)0x573699;
  FUN_00414edd();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x5736a6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_f4 = (int *)0x5736b3;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_f8 = (undefined1 *)0x5736c7;
  puStack_f8 = (undefined1 *)FUN_00449749();
  iStack_fc = 0x5736d0;
  uStack_100 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  puStack_104 = (undefined1 *)0x5736dc;
  FUN_00448a17();
  uStack_100 = 0x52;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_108 = 0x5736eb;
  FUN_004115d9();
  uStack_108 = 0x5736f2;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_f4 = (int *)0x5736ff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x57370a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x573717;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573722;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_ec;
  piStack_f4 = (int *)(iVar8 + 0x33);
  puStack_f8 = (undefined1 *)0x573739;
  uStack_100 = FUN_0045f03e();
  puStack_f8 = (undefined1 *)0xa;
  iStack_fc = *(int *)(unaff_EBP + -0x18);
  uStack_100 = uStack_100 & 0xff;
  puStack_104 = (undefined1 *)0x573747;
  uVar4 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  piStack_f4 = (int *)0x573756;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_f4 = (int *)0x573763;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_f8 = (undefined1 *)0x573777;
  puStack_f8 = (undefined1 *)FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  uStack_100 = *(uint *)(unaff_EBP + -0x28);
  puStack_104 = (undefined1 *)0x573786;
  FUN_004033a1();
  uStack_100 = 100;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_108 = 0x573795;
  FUN_004115d9();
  uStack_108 = 0x57379c;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_f4 = (int *)0x5737a9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x5737b4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x5737c1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x5737cc;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_ec;
  piStack_f4 = (int *)(iVar8 + 0x9d);
  puStack_f8 = (undefined1 *)0x5737e9;
  sVar2 = FUN_0045f084();
  puStack_f8 = (undefined1 *)0xa;
  iStack_fc = *(int *)(unaff_EBP + -0x18);
  uStack_100 = (uint)sVar2;
  puStack_104 = (undefined1 *)0x5737f7;
  uVar4 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  piStack_f4 = (int *)0x573806;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_f4 = (int *)0x573813;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_f8 = (undefined1 *)0x573827;
  puStack_f8 = (undefined1 *)FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  uStack_100 = *(uint *)(unaff_EBP + -0x28);
  puStack_104 = (undefined1 *)0x573836;
  FUN_004033a1();
  uStack_100 = 0x76;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_108 = 0x573845;
  FUN_004115d9();
  uStack_108 = 0x57384c;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_f4 = (int *)0x573859;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573864;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x573871;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x57387c;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_ec;
  piStack_f4 = (int *)(iVar8 + 0x41);
  puStack_f8 = (undefined1 *)0x573893;
  sVar2 = FUN_0045f084();
  puStack_f8 = (undefined1 *)0xa;
  iStack_fc = *(int *)(unaff_EBP + -0x18);
  uStack_100 = (uint)sVar2;
  puStack_104 = (undefined1 *)0x5738a1;
  uVar4 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  piStack_f4 = (int *)0x5738b0;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_f4 = (int *)0x5738bd;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_f8 = (undefined1 *)0x5738d1;
  puStack_f8 = (undefined1 *)FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  uStack_100 = *(uint *)(unaff_EBP + -0x28);
  puStack_104 = (undefined1 *)0x5738e0;
  FUN_004033a1();
  uStack_100 = 0x88;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_108 = 0x5738f2;
  FUN_004115d9();
  uStack_108 = 0x5738f9;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_f4 = (int *)0x573906;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573911;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x57391e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573929;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_ec;
  piStack_f4 = (int *)(iVar8 + 0x49);
  puStack_f8 = (undefined1 *)0x573940;
  sVar2 = FUN_0045f084();
  puStack_f8 = (undefined1 *)0xa;
  iStack_fc = *(int *)(unaff_EBP + -0x18);
  uStack_100 = (uint)sVar2;
  puStack_104 = (undefined1 *)0x57394e;
  uVar4 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  piStack_f4 = (int *)0x57395d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_f4 = (int *)0x57396a;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_f8 = (undefined1 *)0x57397e;
  puStack_f8 = (undefined1 *)FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  uStack_100 = *(uint *)(unaff_EBP + -0x28);
  puStack_104 = (undefined1 *)0x57398d;
  FUN_004033a1();
  uStack_100 = 0x9a;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_108 = 0x57399f;
  FUN_004115d9();
  uStack_108 = 0x5739a6;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_f4 = (int *)0x5739b3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x5739be;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x5739cb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x5739d6;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_ec;
  piStack_f4 = (int *)(iVar8 + 0x51);
  puStack_f8 = (undefined1 *)0x5739ed;
  sVar2 = FUN_0045f084();
  puStack_f8 = (undefined1 *)0xa;
  iStack_fc = *(int *)(unaff_EBP + -0x18);
  uStack_100 = (uint)sVar2;
  puStack_104 = (undefined1 *)0x5739fb;
  uVar4 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  piStack_f4 = (int *)0x573a0a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_f4 = (int *)0x573a17;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_f8 = (undefined1 *)0x573a2b;
  puStack_f8 = (undefined1 *)FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  uStack_100 = *(uint *)(unaff_EBP + -0x28);
  puStack_104 = (undefined1 *)0x573a3a;
  FUN_004033a1();
  uStack_100 = 0xac;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_108 = 0x573a4c;
  FUN_004115d9();
  uStack_108 = 0x573a53;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_f4 = (int *)0x573a60;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573a6b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x573a78;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x573a83;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x18) = &piStack_ec;
  piStack_f4 = (int *)(iVar8 + 0x59);
  puStack_f8 = (undefined1 *)0x573a9a;
  sVar2 = FUN_0045f084();
  puStack_f8 = (undefined1 *)0xa;
  iStack_fc = *(int *)(unaff_EBP + -0x18);
  uStack_100 = (uint)sVar2;
  puStack_104 = (undefined1 *)0x573aa8;
  uVar5 = FUN_0087a25a();
  piStack_f4 = (int *)0x573ab6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_f4 = (int *)0x573ac3;
  FUN_00403191();
  piStack_f4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_f8 = (undefined1 *)0x573ad7;
  puStack_f8 = (undefined1 *)FUN_00449749();
  *(int **)(unaff_EBP + -0x20) = &iStack_fc;
  puStack_104 = (undefined1 *)0x573ae4;
  uStack_100 = uVar5;
  FUN_004033a1();
  uStack_100 = 0xbe;
  puStack_104 = (undefined1 *)0x27;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_108 = 0x573af6;
  FUN_004115d9();
  uStack_108 = 0x573afd;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_f4 = (int *)0x573b0a;
  iVar8 = FUN_00402bc3();
  if (iVar8 < 0) {
    piStack_f4 = (int *)0x573b15;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x573b22;
  iVar8 = FUN_00402bc3();
  if (iVar8 < 0) {
    piStack_f4 = (int *)0x573b2f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  iVar8 = *(int *)(unaff_EBP + -0x14);
  iVar3 = *(int *)(iVar8 + 0xd8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar3 == 0) {
    piStack_f4 = (int *)0x573b4e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    piStack_f4 = (int *)0x573b5b;
    FUN_00403191();
    piStack_f4 = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    puStack_f8 = (undefined1 *)0x573b6f;
    puStack_f8 = (undefined1 *)FUN_00449749();
    puStack_104 = (undefined1 *)&iStack_fc;
    *(int **)(unaff_EBP + -0x50) = &iStack_fc;
    uStack_100 = 0xb5b;
    uStack_108 = 0x573b89;
    FUN_00679e4e();
    uStack_100 = 0;
    puStack_104 = (undefined1 *)0x1a;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uStack_108 = 0x573b99;
    FUN_004115d9();
    uStack_108 = 0x573ba0;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    piStack_f4 = (int *)0x573bad;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573bb8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_f4 = (int *)0x573bc5;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573bd0;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)0x573bd9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_f4 = (int *)0x573be6;
    FUN_00403191();
    piStack_f4 = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_f8 = (undefined1 *)0x573bfa;
    puStack_f8 = (undefined1 *)FUN_00449749();
    puStack_104 = (undefined1 *)&iStack_fc;
    *(int **)(unaff_EBP + -0x50) = &iStack_fc;
    uStack_100 = 0xb5b;
    uStack_108 = 0x573c0a;
    FUN_00679e4e();
    uStack_100 = 0x24;
    puStack_104 = (undefined1 *)0x1a;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uStack_108 = 0x573c1a;
    FUN_004115d9();
    uStack_108 = 0x573c21;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_f4 = (int *)0x573c2e;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573c3b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_f4 = (int *)0x573c48;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573c53;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)(unaff_EBP + -0x80);
    puStack_f8 = (undefined1 *)0x573c61;
    FUN_00434e21();
    piStack_f4 = (int *)0x573c6c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_f4 = (int *)0x573c79;
    FUN_00403191();
    piStack_f4 = (int *)0x0;
    puStack_f8 = (undefined1 *)(unaff_EBP + -0x48);
    iStack_fc = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    uStack_100 = 0x573c8f;
    puStack_104 = (undefined1 *)FUN_00449713();
    *(uint **)(unaff_EBP + -0x50) = &uStack_100;
    uStack_108 = 0x573c9b;
    FUN_00448a17();
    puStack_104 = (undefined1 *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    uStack_108 = 0x573ca8;
    FUN_00405a1d();
    uStack_108 = 0x573caf;
    FUN_00402660();
    uStack_108 = 0x573cb6;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    puStack_f8 = (undefined1 *)0x573cc1;
    iVar8 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar8;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar8 != 0) {
      piStack_f4 = (int *)0x573cd7;
      iVar8 = FUN_0041a581();
      if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
        piStack_f4 = (int *)0x573ce8;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    piStack_f4 = (int *)0x573cf5;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573d00;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_f4 = (int *)0x573d0d;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573d18;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_f4 = (int *)0x573d25;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573d30;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)0xff;
    puStack_f8 = (undefined1 *)0x573d3f;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_f4 = (int *)0x573d52;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    uStack_100 = *(uint *)(unaff_EBP + -0x18);
    iStack_fc = *(int *)(unaff_EBP + -0x68);
    puStack_f8 = *(undefined1 **)(unaff_EBP + -100);
    puStack_104 = (undefined1 *)0x15;
    piStack_f4 = *(int **)(unaff_EBP + -0x60);
    uStack_108 = 0x34;
    piStack_10c = piVar1;
    iVar8 = (**(code **)(*piVar1 + 0x80))();
    if (iVar8 < 0) {
      iStack_11c = 0x573d81;
      iStack_118 = iVar8;
      piStack_114 = piVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_114 = (int *)0x573d8e;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x573d99;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_114 = (int *)0x573dae;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
  }
  else {
    iVar3 = *(int *)(iVar8 + 0xd0);
    iVar8 = *(int *)(*(int *)(iVar8 + 0xcc) + 0x110);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(int *)(unaff_EBP + -0x58) = iVar3 * 0x10 + iVar8;
    piStack_f4 = (int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_f8 = (undefined1 *)0x573de5;
    puVar6 = (undefined4 *)FUN_00679d86();
    piStack_f4 = (int *)*puVar6;
    puStack_f8 = (undefined1 *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_fc = 0x573df7;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    FUN_00402676();
    piStack_f4 = (int *)0x573e0f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_f4 = (int *)0x573e1f;
    puStack_f8 = (undefined1 *)FUN_00411641();
    *(int ***)(unaff_EBP + -0x20) = &piStack_f4;
    iStack_fc = 0x573e2b;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    puStack_f8 = (undefined1 *)0x573e37;
    FUN_0044974c();
    puStack_f8 = (undefined1 *)0x573e3e;
    FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_f4 = (int *)0x573e4b;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573e56;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)0x573e5f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_f4 = (int *)0x573e6c;
    FUN_00403191();
    piStack_f4 = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    puStack_f8 = (undefined1 *)0x573e80;
    puStack_f8 = (undefined1 *)FUN_00449749();
    iStack_fc = 0x573e89;
    uStack_100 = FUN_00411641();
    *(int **)(unaff_EBP + -0x20) = &iStack_fc;
    puStack_104 = (undefined1 *)0x573e95;
    FUN_004033a1();
    uStack_100 = 0;
    puStack_104 = (undefined1 *)0x5;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    uStack_108 = 0x573ea4;
    FUN_004115d9();
    uStack_108 = 0x573eab;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_f4 = (int *)0x573eb8;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573ec3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_f4 = (int *)0x573ed0;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573edb;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    piStack_f4 = (int *)0x573eed;
    iStack_fc = FUN_0087a90a();
    piStack_f4 = (int *)0xa;
    uStack_100 = 0x573ef6;
    puStack_f8 = (undefined1 *)&piStack_ec;
    uVar4 = FUN_0087a25a();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    piStack_f4 = (int *)0x573f0b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    piStack_f4 = (int *)(unaff_EBP + -0x90);
    puStack_f8 = (undefined1 *)0x573f18;
    piVar1 = &DAT_00980690;
    iVar8 = FUN_00402e32();
    piStack_f4 = piVar1;
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573f24;
      FUN_00878dfb();
      piStack_f4 = extraout_ECX_00;
    }
    *(int ***)(unaff_EBP + -0x20) = &piStack_f4;
    puStack_f8 = *(undefined1 **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_fc = 0x573f3d;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    puStack_f8 = (undefined1 *)0x573f49;
    FUN_0044974c();
    puStack_f8 = (undefined1 *)0x573f50;
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_f4 = (int *)0x573f63;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573f6e;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)0x573f77;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
    piStack_f4 = (int *)(unaff_EBP + -0xa4);
    puStack_f8 = (undefined1 *)0x573f84;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573f90;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_f4 = (int *)0x573f9d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    piStack_f4 = (int *)(unaff_EBP + -0x90);
    puStack_f8 = (undefined1 *)0x573faa;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x573fb6;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    puStack_f8 = (undefined1 *)0x573fd0;
    puStack_f8 = (undefined1 *)FUN_00449749();
    *(int **)(unaff_EBP + -0x20) = &iStack_fc;
    uStack_100 = *(uint *)(unaff_EBP + -0x28);
    puStack_104 = (undefined1 *)0x573fdf;
    FUN_004033a1();
    puStack_104 = (undefined1 *)(0x9f - *(int *)(unaff_EBP + -0x14));
    uStack_100 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    uStack_108 = 0x573ff6;
    FUN_004115d9();
    uStack_108 = 0x573ffd;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_f4 = (int *)0x57400d;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x574018;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_f4 = (int *)0x574028;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x574033;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)(unaff_EBP + -0x14);
    puStack_f8 = (undefined1 *)0x574060;
    puVar6 = (undefined4 *)FUN_00679d86();
    piStack_f4 = (int *)*puVar6;
    puStack_f8 = (undefined1 *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_fc = 0x574071;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    FUN_00402676();
    piStack_f4 = (int *)0x574089;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    piStack_f4 = (int *)(unaff_EBP + -0x90);
    puStack_f8 = (undefined1 *)0x574096;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x5740a4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    piStack_f4 = (int *)0x5740b1;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
    piStack_f4 = (int *)(unaff_EBP + -0xa4);
    puStack_f8 = (undefined1 *)0x5740be;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x5740ca;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)0x0;
    puStack_f8 = (undefined1 *)(unaff_EBP + -0x90);
    iStack_fc = unaff_EBP + -0xa4;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    uStack_100 = 0x5740e6;
    puStack_104 = (undefined1 *)FUN_00411641();
    *(uint **)(unaff_EBP + -0x20) = &uStack_100;
    uStack_108 = 0x5740f2;
    FUN_004033a1();
    puStack_104 = (undefined1 *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    uStack_108 = 0x574102;
    FUN_00405a1d();
    uStack_108 = 0x574109;
    FUN_00402660();
    uStack_108 = 0x574110;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    puStack_f8 = (undefined1 *)0x57411b;
    iVar8 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar8;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    if (iVar8 != 0) {
      piStack_f4 = (int *)0x574131;
      iVar8 = FUN_0041a581();
      if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
        piStack_f4 = (int *)0x574142;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    piStack_f4 = (int *)0x574152;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x57415d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_f4 = (int *)0x57416d;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x574178;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_f4 = (int *)0x574188;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_f4 = (int *)0x574193;
      FUN_00878dfb();
    }
    piStack_f4 = (int *)0xff;
    puStack_f8 = (undefined1 *)0x5741a2;
    FUN_004031b7();
    piStack_10c = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    if (piStack_10c == (int *)0x0) {
      piStack_f4 = (int *)0x5741b7;
      FUN_00878dfb();
      piStack_10c = *(int **)(unaff_EBP + -0x10);
    }
    iVar8 = *piStack_10c;
    uStack_100 = *(uint *)(unaff_EBP + -0x54);
    iStack_fc = *(int *)(unaff_EBP + -0x38);
    puStack_f8 = *(undefined1 **)(unaff_EBP + -0x34);
    puStack_104 = (undefined1 *)
                  ((-(uint)(*(int *)(*(int *)(unaff_EBP + -0x58) + 4) != 0) & 0xfffffffc) + 6);
    piStack_f4 = *(int **)(unaff_EBP + -0x30);
    uStack_108 = 0xa0;
    *(int **)(unaff_EBP + -0x14) = piStack_10c;
    iVar8 = (**(code **)(iVar8 + 0x80))();
    if (iVar8 < 0) {
      piStack_114 = *(int **)(unaff_EBP + -0x14);
      iStack_11c = 0x5741fd;
      iStack_118 = iVar8;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_114 = (int *)0x57420a;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574215;
      FUN_00878dfb();
    }
    piStack_114 = (int *)(unaff_EBP + -0x14);
    iStack_118 = 0x574228;
    puVar6 = (undefined4 *)FUN_00679d86();
    piStack_114 = (int *)*puVar6;
    iStack_118 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iStack_11c = 0x57423e;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
    piStack_114 = (int *)0x574259;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    piStack_114 = (int *)(unaff_EBP + -0x78);
    iStack_118 = 0x574263;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x57426f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_114 = (int *)0x57427f;
    iStack_118 = FUN_00411641();
    *(int ***)(unaff_EBP + -0x20) = &piStack_114;
    iStack_11c = 0x57428b;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    iStack_118 = 0x574297;
    FUN_0044974c();
    iStack_118 = 0x57429e;
    FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_114 = (int *)0x5742ab;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x5742b6;
      FUN_00878dfb();
    }
    piStack_114 = (int *)0x5742bc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    piStack_114 = (int *)(unaff_EBP + -0x68);
    iStack_118 = 0x5742c6;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x5742d2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_114 = (int *)0x5742dc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    piStack_114 = (int *)(unaff_EBP + -0x78);
    iStack_118 = 0x5742e6;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x5742f2;
      FUN_00878dfb();
    }
    piStack_114 = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    iStack_118 = 0x574306;
    iStack_118 = FUN_00449749();
    iStack_11c = 0x57430f;
    uStack_120 = FUN_00411641();
    *(int **)(unaff_EBP + -0x20) = &iStack_11c;
    FUN_004033a1();
    uStack_120 = 0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_114 = (int *)0x57433f;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x57434a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_114 = (int *)0x574357;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574362;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    *(int ***)(unaff_EBP + -0x14) = &piStack_10c;
    piStack_114 = (int *)0x574375;
    iStack_11c = FUN_0087a90a();
    piStack_114 = (int *)0xa;
    iStack_118 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_120 = 0x574380;
    uVar4 = FUN_0087a25a();
    piStack_114 = (int *)0x57438b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    piStack_114 = (int *)(unaff_EBP + -0x68);
    iStack_118 = 0x574395;
    piVar1 = &DAT_00980690;
    iVar8 = FUN_00402e32();
    piStack_114 = piVar1;
    if (iVar8 < 0) {
      piStack_114 = (int *)0x5743a1;
      FUN_00878dfb();
      piStack_114 = extraout_ECX_01;
    }
    *(int ***)(unaff_EBP + -0x20) = &piStack_114;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    iStack_11c = 0x5743b5;
    iStack_118 = uVar4;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    iStack_118 = 0x5743c1;
    FUN_0044974c();
    iStack_118 = 0x5743c8;
    uVar7 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_114 = (int *)0x5743d8;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x5743e3;
      FUN_00878dfb();
    }
    piStack_114 = (int *)0x5743e9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    piStack_114 = (int *)(unaff_EBP + -0x78);
    iStack_118 = 0x5743f3;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x5743ff;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    piStack_114 = (int *)0x574409;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    piStack_114 = (int *)(unaff_EBP + -0x68);
    iStack_118 = 0x574413;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x57441f;
      FUN_00878dfb();
    }
    piStack_114 = (int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iStack_118 = 0x574433;
    iStack_118 = FUN_00449749();
    *(int **)(unaff_EBP + -0x20) = &iStack_11c;
    uStack_120 = uVar4;
    FUN_004033a1();
    uStack_120 = 0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    piStack_114 = (int *)0x57446b;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574478;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_114 = (int *)0x574485;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574490;
      FUN_00878dfb();
    }
    piStack_114 = (int *)&DAT_009657e0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_118 = 0x5744a2;
    FUN_004184ca();
    piStack_114 = (int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    iStack_118 = 0x5744b9;
    FUN_00679d86();
    piStack_114 = (int *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    iStack_118 = 0x5744cf;
    FUN_0046fc68();
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    piStack_114 = (int *)0x5744dc;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
    piStack_114 = *(int **)(unaff_EBP + -0x50);
    iStack_118 = 0x574511;
    FUN_0045f084();
    piStack_114 = (int *)&DAT_009657d8;
    iStack_118 = *(undefined4 *)(unaff_EBP + -0x24);
    iStack_11c = unaff_EBP + -0x24;
    uStack_120 = 0x574539;
    FUN_0041354c();
    piStack_114 = (int *)0x574542;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    piStack_114 = (int *)(unaff_EBP + -0x78);
    iStack_118 = 0x57454c;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574558;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    piStack_114 = (int *)0x574562;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    piStack_114 = (int *)(unaff_EBP + -0x68);
    iStack_118 = 0x57456c;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574578;
      FUN_00878dfb();
    }
    piStack_114 = (int *)0x0;
    iStack_118 = unaff_EBP + -0x78;
    iStack_11c = unaff_EBP + -0x68;
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    uStack_120 = 0x57458e;
    FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x4c) = &uStack_120;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    iStack_118 = 0x5745c3;
    iVar8 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar8;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar8 != 0) {
      piStack_114 = (int *)0x5745d9;
      iVar8 = FUN_0041a581();
      if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
        piStack_114 = (int *)0x5745ea;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    piStack_114 = (int *)0x5745fa;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574605;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x56;
    piStack_114 = (int *)0x574612;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x57461d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    piStack_114 = (int *)0x57462a;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574635;
      FUN_00878dfb();
    }
    piStack_114 = (int *)0xff;
    iStack_118 = 0x574644;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x58;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      piStack_114 = (int *)0x574657;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_114 = (int *)0x574666;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x14) = piVar1;
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x18);
    FUN_0040e48b();
    uStack_120 = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_11c = *(int *)(unaff_EBP + -0x38);
    iStack_118 = *(int *)(unaff_EBP + -0x34);
    piStack_114 = *(int **)(unaff_EBP + -0x30);
    iVar8 = (**(code **)(*piVar1 + 0x80))();
    if (iVar8 < 0) {
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_13c = 0x5746ab;
      iStack_138 = iVar8;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    iStack_134 = 0x5746b8;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      iStack_134 = 0x5746c5;
      FUN_00878dfb();
    }
    iStack_134 = unaff_EBP + -0x4c;
    iStack_138 = 0x5746f5;
    puVar6 = (undefined4 *)FUN_00679d86();
    iStack_134 = *puVar6;
    iStack_138 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    iStack_13c = 0x574706;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    FUN_00402676();
    iStack_134 = 0x574721;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_134 = unaff_EBP + -0x38;
    iStack_138 = 0x57472b;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      iStack_134 = 0x574737;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    iStack_134 = 0x574741;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_134 = unaff_EBP + -0x48;
    iStack_138 = 0x57474b;
    iVar8 = FUN_00402e32();
    if (iVar8 < 0) {
      iStack_134 = 0x574757;
      FUN_00878dfb();
    }
    iStack_134 = 0;
    iStack_138 = unaff_EBP + -0x38;
    iStack_13c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    uStack_140 = 0x57476d;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_140;
    FUN_004033a1(uVar4);
    iVar8 = unaff_EBP + -0xd4;
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_00405a1d(iVar8);
    FUN_00402660();
    FUN_00404a02(iVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    iStack_138 = 0x5747a2;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
    iStack_134 = 0x5747b1;
    iVar8 = FUN_0041a581();
    if ((iVar8 < 0) && (iVar8 != -0x7fffbffe)) {
      iStack_134 = 0x5747c2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    iStack_134 = 0x5747d2;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      iStack_134 = 0x5747dd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    iStack_134 = 0x5747ea;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      iStack_134 = 0x5747f5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    iStack_134 = 0x574802;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      iStack_134 = 0x57480d;
      FUN_00878dfb();
    }
    iStack_134 = 0xff;
    iStack_138 = 0x57481c;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_134 = 0x57482f;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    uStack_140 = *(undefined4 *)(unaff_EBP + -0x54);
    iStack_13c = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_138 = *(int *)(unaff_EBP + -0x34);
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x30);
    iVar8 = (**(code **)(*piVar1 + 0x80))
                      (piVar1,0xa0,
                       (-(uint)(*(int *)(*(int *)(unaff_EBP + -0x58) + 0xc) != 0) & 0xfffffffc) +
                       0x2a);
    if (iVar8 < 0) {
      iStack_11c = 0x574870;
      iStack_118 = iVar8;
      piStack_114 = piVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    piStack_114 = (int *)0x57487d;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_114 = (int *)0x574888;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_114 = (int *)0x574899;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
      piStack_114 = (int *)0x5748aa;
      (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_114 = (int *)0x5748df;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_114 = (int *)0x5748f0;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



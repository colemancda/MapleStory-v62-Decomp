/* FUN_00763858 - 0x00763858 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00763858(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined1 *extraout_ECX_07;
  undefined4 *extraout_ECX_08;
  undefined4 *extraout_ECX_09;
  int unaff_EBP;
  undefined4 uStack_100;
  int iStack_fc;
  int *piStack_f8;
  undefined1 *puStack_f4;
  int iStack_f0;
  undefined4 *puStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  int *piStack_e0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x78) = extraout_ECX;
  piStack_e0 = (int *)0x763878;
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_e0 = (int *)0x76388b;
  FUN_00448dc6();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e0 = (int *)0x76389d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_e0 = (int *)0x7638aa;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_e0 = (int *)0x7638b7;
  FUN_00403191();
  piStack_e0 = (int *)(unaff_EBP + -0x74);
  puStack_e8 = (undefined1 *)(unaff_EBP + -0x50);
  iStack_e4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_ec = (undefined4 *)0x7638cd;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_e4 = 0x7638da;
  iStack_e4 = FUN_00449749();
  puStack_e8 = (undefined1 *)0x7638e6;
  puStack_ec = (undefined4 *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
  iStack_f0 = 0x7638f2;
  FUN_00448a17();
  puStack_ec = (undefined4 *)0x90;
  iStack_f0 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_f4 = (undefined1 *)0x76390a;
  piStack_f8 = (int *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_f4;
  iStack_fc = 0x763916;
  FUN_00448a17();
  iStack_fc = unaff_EBP + 8;
  piStack_f8 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_100 = 0x763924;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_f8 = (int *)0x763931;
  FUN_0044974c();
  piStack_f8 = (int *)0x763938;
  uVar1 = FUN_00448ebb();
  iStack_f0 = 0x34 - (uVar1 >> 1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_f4 = (undefined1 *)0x76394c;
  FUN_004115d9();
  puStack_f4 = (undefined1 *)0x763953;
  FUN_00448e3a();
  FUN_004497b5();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_e0 = (int *)0x763970;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x76397b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_e0 = (int *)0x763988;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763993;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e0 = (int *)0x7639a0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x7639ab;
    FUN_00878dfb();
  }
  piStack_e0 = (int *)(unaff_EBP + 8);
  iStack_e4 = 0x7639be;
  puVar3 = (undefined4 *)FUN_00679d22();
  piStack_e0 = (int *)*puVar3;
  iStack_e4 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_e8 = (undefined1 *)0x7639d6;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_e0 = (int *)0x7639ed;
    FUN_00434e38();
  }
  piStack_e0 = (int *)0x7639f7;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_e0 = (int *)0x763a04;
  FUN_00403191();
  piStack_e0 = (int *)(unaff_EBP + -100);
  puStack_e8 = (undefined1 *)(unaff_EBP + 8);
  iStack_e4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_ec = (undefined4 *)0x763a1b;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_e4 = 0x763a28;
  iStack_e4 = FUN_00449749();
  puStack_e8 = (undefined1 *)0x763a31;
  puStack_ec = (undefined4 *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
  iStack_f0 = 0x763a3d;
  FUN_00448a17();
  puStack_ec = (undefined4 *)0x4d;
  iStack_f0 = 0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_f4 = (undefined1 *)0x763a50;
  FUN_004115d9();
  puStack_f4 = (undefined1 *)0x763a57;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_e0 = (int *)0x763a6c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763a77;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e0 = (int *)0x763a84;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763a8f;
    FUN_00878dfb();
  }
  piStack_e0 = (int *)0x763a9c;
  piStack_e0 = (int *)FUN_00482a39();
  iStack_e4 = 0x763aa8;
  FUN_00414edd();
  FUN_006543b6();
  piStack_e0 = (int *)0x763ab9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_e0 = (int *)0x763ac6;
  FUN_00403191();
  piStack_e0 = (int *)(unaff_EBP + -100);
  puStack_e8 = (undefined1 *)(unaff_EBP + 8);
  iStack_e4 = 0x26;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_ec = (undefined4 *)0x763add;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e4 = 0x763aea;
  iStack_e4 = FUN_00449749();
  puStack_e8 = (undefined1 *)0x763af3;
  puStack_ec = (undefined4 *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
  iStack_f0 = 0x763aff;
  FUN_00448a17();
  puStack_ec = (undefined4 *)0x60;
  iStack_f0 = 0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_f4 = (undefined1 *)0x763b12;
  FUN_004115d9();
  puStack_f4 = (undefined1 *)0x763b19;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_e0 = (int *)0x763b2e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763b39;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e0 = (int *)0x763b46;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763b51;
    FUN_00878dfb();
  }
  piStack_e0 = (int *)(unaff_EBP + 8);
  iStack_e4 = 0x763b64;
  puVar3 = (undefined4 *)FUN_00679d22();
  piStack_e0 = (int *)*puVar3;
  iStack_e4 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_e8 = (undefined1 *)0x763b7c;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_e0 = (int *)0x763b93;
    FUN_00434e38();
  }
  piStack_e0 = (int *)0x763b9d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_e0 = (int *)0x763baa;
  FUN_00403191();
  piStack_e0 = (int *)(unaff_EBP + -100);
  puStack_e8 = (undefined1 *)(unaff_EBP + 8);
  iStack_e4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_ec = (undefined4 *)0x763bc1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_e4 = 0x763bce;
  iStack_e4 = FUN_00449749();
  puStack_e8 = (undefined1 *)0x763bd7;
  puStack_ec = (undefined4 *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
  iStack_f0 = 0x763be3;
  FUN_00448a17();
  puStack_ec = (undefined4 *)0x71;
  iStack_f0 = 0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_f4 = (undefined1 *)0x763bf6;
  FUN_004115d9();
  puStack_f4 = (undefined1 *)0x763bfd;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_e0 = (int *)0x763c12;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763c1d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e0 = (int *)0x763c2a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763c35;
    FUN_00878dfb();
  }
  piStack_e0 = (int *)0x763c44;
  FUN_00414f8b();
  puStack_e8 = (undefined1 *)&piStack_e0;
  *(int ***)(unaff_EBP + 8) = &piStack_e0;
  iStack_e4 = 1;
  puStack_ec = (undefined4 *)0x763c54;
  FUN_007d4a9a();
  iStack_e4 = unaff_EBP + -0x28;
  puStack_e8 = (undefined1 *)0x763c5f;
  FUN_007d3a22();
  piStack_e0 = (int *)0x763c6b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_e0 = (int *)0x763c78;
  FUN_00403191();
  piStack_e0 = (int *)(unaff_EBP + -100);
  puStack_e8 = (undefined1 *)(unaff_EBP + 8);
  iStack_e4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_ec = (undefined4 *)0x763c8f;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_e4 = 0x763c9c;
  iStack_e4 = FUN_00449749();
  puStack_e8 = (undefined1 *)0x763ca5;
  puStack_ec = (undefined4 *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
  iStack_f0 = 0x763cb1;
  puStack_e8 = extraout_ECX_00;
  FUN_00448a17();
  puStack_ec = (undefined4 *)0x83;
  iStack_f0 = 0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_f4 = (undefined1 *)0x763cc7;
  FUN_004115d9();
  puStack_f4 = (undefined1 *)0x763cce;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_e0 = (int *)0x763ce3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763cee;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_e0 = (int *)0x763cfb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x763d06;
    FUN_00878dfb();
  }
  iVar2 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x618) == 1) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    piStack_e0 = (int *)0x763d27;
    FUN_00448dc6();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_e0 = (int *)0x763d34;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    piStack_e0 = (int *)0x763d41;
    FUN_00403191();
    piStack_e0 = (int *)0x0;
    iStack_e4 = unaff_EBP + -0x74;
    puStack_e8 = (undefined1 *)(unaff_EBP + -100);
    puStack_f4 = (undefined1 *)&puStack_ec;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_ec;
    iStack_f0 = 0x9d4;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_f8 = (int *)0x763d65;
    FUN_00679e4e();
    iStack_f0 = unaff_EBP + -0xd8;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    puStack_f4 = (undefined1 *)0x763d75;
    FUN_00405a1d();
    puStack_f4 = (undefined1 *)0x763d7c;
    FUN_00402660();
    puStack_f4 = (undefined1 *)0x763d83;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_e4 = 0x763d8e;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x84) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    if (iVar4 != 0) {
      piStack_e0 = (int *)0x763daa;
      iVar4 = FUN_0041a581();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        piStack_e0 = (int *)0x763dbb;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    piStack_e0 = (int *)0x763dcb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763dd6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_e0 = (int *)0x763de3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763dee;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_e0 = (int *)0x763dfb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763e06;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)0x763e12;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_e0 = (int *)0x763e1f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_e0 = (int *)0x763e2c;
    FUN_00403191();
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x18);
    iStack_e4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_ec = (undefined4 *)0x763e45;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_e4 = 0x763e52;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x763e65;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
    iStack_f0 = 0x763e71;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x132;
    iStack_f0 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    puStack_f4 = (undefined1 *)0x763e90;
    piStack_f8 = (int *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_f4;
    iStack_fc = 0x763e9c;
    FUN_00448a17();
    iStack_fc = unaff_EBP + -0x14;
    piStack_f8 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    uStack_100 = 0x763eaa;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_f8 = (int *)0x763eb7;
    FUN_0044974c();
    piStack_f8 = (int *)0x763ebe;
    uVar1 = FUN_00448ebb();
    iStack_f0 = 0x34 - (uVar1 >> 1);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_f4 = (undefined1 *)0x763ed2;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x763ed9;
    FUN_00448e3a();
    FUN_004497b5();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_e0 = (int *)0x763ef6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763f01;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_e0 = (int *)0x763f0e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763f19;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_e0 = (int *)0x763f29;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763f34;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)0x763f4d;
    FUN_00414f8b();
    FUN_006543b6();
    piStack_e0 = (int *)0x763f5e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_e0 = (int *)0x763f6b;
    FUN_00403191();
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x14);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    puStack_ec = (undefined4 *)0x763f82;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_e4 = 0x763f8f;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x763fa5;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
    iStack_f0 = 0x763fb1;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x14b;
    iStack_f0 = 0x3a;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    puStack_f4 = (undefined1 *)0x763fc4;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x763fcb;
    FUN_00448e3a();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_e0 = (int *)0x763fe0;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x763feb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_e0 = (int *)0x763ff8;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764003;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x14);
    iStack_e4 = 0x764016;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_e0 = (int *)*puVar3;
    iStack_e4 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    puStack_e8 = (undefined1 *)0x764035;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_e0 = (int *)0x76404c;
      FUN_00434e38();
    }
    piStack_e0 = (int *)0x764056;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_e0 = (int *)0x764063;
    FUN_00403191();
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x14);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    puStack_ec = (undefined4 *)0x76407a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_e4 = 0x764087;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x764090;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
    iStack_f0 = 0x76409c;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x15c;
    iStack_f0 = 0x3a;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_f4 = (undefined1 *)0x7640af;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x7640b6;
    FUN_00448e3a();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_e0 = (int *)0x7640cb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7640d6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_e0 = (int *)0x7640e3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7640ee;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x14);
    iStack_e4 = 0x764101;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_e0 = (int *)*puVar3;
    iStack_e4 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    puStack_e8 = (undefined1 *)0x764120;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_e0 = (int *)0x764137;
      FUN_00434e38();
    }
    piStack_e0 = (int *)0x764141;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    piStack_e0 = (int *)0x76414e;
    FUN_00403191();
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x14);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    puStack_ec = (undefined4 *)0x764165;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    iStack_e4 = 0x764172;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x76417b;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
    iStack_f0 = 0x764187;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x14a;
    iStack_f0 = 0xbd;
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    puStack_f4 = (undefined1 *)0x76419d;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x7641a4;
    FUN_00448e3a();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    piStack_e0 = (int *)0x7641b9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7641c4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_e0 = (int *)0x7641d1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7641dc;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x14);
    iStack_e4 = 0x7641ef;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_e0 = (int *)*puVar3;
    iStack_e4 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_e8 = (undefined1 *)0x76420e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00414ebb();
    piStack_e0 = (int *)0x764226;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_e0 = (int *)0x764233;
    FUN_00403191();
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x14);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    puStack_ec = (undefined4 *)0x76424a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    iStack_e4 = 0x764257;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x764260;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e8;
    iStack_f0 = 0x76426c;
    puStack_e8 = extraout_ECX_01;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x15c;
    iStack_f0 = 0xbd;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    puStack_f4 = (undefined1 *)0x764282;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x764289;
    FUN_00448e3a();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_e0 = (int *)0x76429e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7642a9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_e0 = (int *)0x7642b6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7642c1;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(extraout_ECX + 0x5f8 + *(int *)(extraout_ECX + 0x63c) * 4);
    if ((iVar4 != 0) && (*(int *)(iVar4 + -4) != 0)) {
      uVar1 = *(uint *)(*(int *)(extraout_ECX + 0x5dc) + 0x38);
      *(uint *)(unaff_EBP + -0x18) = uVar1;
      while (((iVar4 = *(int *)(iVar2 + 0x5f8 + *(int *)(iVar2 + 0x63c) * 4), iVar4 != 0 &&
              (uVar1 < *(uint *)(iVar4 + -4))) &&
             ((int)uVar1 < *(int *)(*(int *)(iVar2 + 0x5dc) + 0x38) + 3))) {
        piStack_e0 = (int *)0x0;
        iStack_e4 = 0;
        puStack_e8 = (undefined1 *)0x0;
        puStack_ec = (undefined4 *)0x0;
        iStack_f0 = 0;
        puStack_f4 = (undefined1 *)0x764332;
        FUN_005afea1();
        puStack_f4 = (undefined1 *)0x764339;
        iVar4 = FUN_005af3ee();
        puStack_f4 = (undefined1 *)((*(int *)(unaff_EBP + -0x18) - iVar4) * 0x26 + 0xf8);
        piStack_f8 = (int *)0x6a;
        iStack_fc = *(undefined4 *)(unaff_EBP + -0x18);
        uStack_100 = 0x76435f;
        puVar3 = (undefined4 *)FUN_00537b54();
        iStack_fc = *puVar3;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_100;
        uStack_100 = extraout_ECX_02;
        FUN_0046fc23(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_0048b97b();
        FUN_005558b0();
        piStack_e0 = (int *)(unaff_EBP + -0x88);
        iStack_e4 = 0x7643a5;
        FUN_0045a1d8();
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        piStack_e0 = (int *)0x7643b2;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00414ebb();
        puStack_e8 = (undefined1 *)&piStack_e0;
        *(int ***)(unaff_EBP + -0x24) = &piStack_e0;
        iStack_e4 = 1;
        puStack_ec = (undefined4 *)0x7643d1;
        FUN_007d4a9a();
        iStack_e4 = unaff_EBP + 8;
        puStack_e8 = (undefined1 *)0x7643dc;
        FUN_007d3a22();
        piStack_e0 = (int *)0x7643e8;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        piStack_e0 = (int *)0x7643f5;
        FUN_00403191();
        piStack_e0 = (int *)(unaff_EBP + -0x38);
        puStack_e8 = (undefined1 *)(unaff_EBP + -0x7c);
        iStack_e4 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        puStack_ec = (undefined4 *)0x76440c;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_e4 = 0x764419;
        iStack_e4 = FUN_00449749();
        puStack_e8 = (undefined1 *)0x764422;
        puStack_ec = (undefined4 *)FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
        iStack_f0 = 0x76442e;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        puStack_ec = (undefined4 *)0x76443d;
        FUN_005afea1();
        puStack_ec = (undefined4 *)0x764444;
        iVar4 = FUN_005af3ee();
        puStack_ec = (undefined4 *)((*(int *)(unaff_EBP + -0x18) - iVar4) * 0x26 + 0xd9);
        iStack_f0 = 0x93;
        puStack_f4 = (undefined1 *)0x764460;
        FUN_004115d9();
        puStack_f4 = (undefined1 *)0x764467;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        if (*(int **)(unaff_EBP + -0x7c) != (int *)0x0) {
          piStack_e0 = (int *)0x764478;
          (**(code **)(**(int **)(unaff_EBP + -0x7c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        piStack_e0 = (int *)0x764485;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_e0 = (int *)0x764490;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        piStack_e0 = (int *)0x76449d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_e0 = (int *)0x7644a8;
          FUN_00878dfb();
        }
        piStack_e0 = (int *)0x7644b4;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(*(int *)(iVar2 + 0x5dc) + 0x38);
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        if (piVar5 == (int *)0x0) {
          piStack_e0 = (int *)0x7644d5;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = *piVar5;
        puStack_ec = *(undefined4 **)(unaff_EBP + -0x50);
        puStack_e8 = *(undefined1 **)(unaff_EBP + -0x98);
        iStack_e4 = *(int *)(unaff_EBP + -0x94);
        iStack_f0 = (*(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x4c)) * 0x26 + 0xec;
        piStack_e0 = *(int **)(unaff_EBP + -0x90);
        puStack_f4 = (undefined1 *)0x93;
        *(int **)(unaff_EBP + -0x24) = piVar5;
        iStack_fc = 0x76450b;
        piStack_f8 = piVar5;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          piStack_e0 = *(int **)(unaff_EBP + -0x24);
          puStack_e8 = (undefined1 *)0x76451d;
          iStack_e4 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        piStack_e0 = (int *)0x76452d;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e0 = (int *)0x764538;
          FUN_00878dfb();
        }
        piStack_e0 = (int *)(unaff_EBP + -0x14);
        iStack_e4 = 0x76455d;
        FUN_004497f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
        }
        else {
          puStack_e8 = (undefined1 *)&piStack_e0;
          *(int ***)(unaff_EBP + -0x24) = &piStack_e0;
          iStack_e4 = 0x75e;
          puStack_ec = (undefined4 *)0x76458a;
          FUN_00679e4e();
          iStack_e4 = unaff_EBP + -0xb8;
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          puStack_e8 = (undefined1 *)0x76459d;
          FUN_0040263d();
          puStack_e8 = (undefined1 *)0x7645a4;
          piVar5 = (int *)FUN_004048a4();
          piStack_e0 = (int *)0x3bc;
          iStack_e4 = unaff_EBP + -0x1c;
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          puStack_e8 = (undefined1 *)0x7645ba;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x4d;
          iStack_e4 = 0x7645c6;
          piStack_e0 = piVar5;
          FUN_00412550();
          piStack_e0 = (int *)0x7645d0;
          piStack_e0 = (int *)FUN_00449713();
          iStack_e4 = unaff_EBP + 8;
          puStack_e8 = (undefined1 *)0x7645da;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          piStack_e0 = (int *)0x7645f9;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_e0 = (int *)0x764604;
            FUN_00878dfb();
          }
          piStack_e0 = (int *)0x764613;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
          piStack_e0 = (int *)(unaff_EBP + -0xa8);
          iStack_e4 = 0x764620;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            piStack_e0 = (int *)0x76462c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          piStack_e0 = (int *)0x764639;
          VariantInit((VARIANTARG *)(unaff_EBP + -200));
          piStack_e0 = (int *)(unaff_EBP + -200);
          iStack_e4 = 0x764646;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            piStack_e0 = (int *)0x764652;
            FUN_00878dfb();
          }
          piStack_e0 = (int *)(unaff_EBP + -200);
          puStack_e8 = (undefined1 *)(unaff_EBP + -0x20);
          iStack_e4 = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          puStack_ec = (undefined4 *)0x76466f;
          FUN_007d4a9a();
          *(undefined1 *)(unaff_EBP + -4) = 0x50;
          iStack_e4 = 0x76467c;
          iStack_e4 = FUN_00449749();
          puStack_e8 = (undefined1 *)0x764685;
          puStack_ec = (undefined4 *)FUN_00449713();
          *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
          iStack_f0 = 0x764691;
          puStack_e8 = extraout_ECX_03;
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x50;
          puStack_ec = (undefined4 *)0x7646a3;
          FUN_005afea1();
          puStack_ec = (undefined4 *)0x7646aa;
          iVar2 = FUN_005af3ee();
          puStack_ec = (undefined4 *)((*(int *)(unaff_EBP + -0x18) - iVar2) * 0x26 + 0xeb);
          iStack_f0 = 0xb7;
          puStack_f4 = (undefined1 *)0x7646c6;
          FUN_004115d9();
          puStack_f4 = (undefined1 *)0x7646cd;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
            piStack_e0 = (int *)0x7646de;
            (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          piStack_e0 = (int *)0x7646ee;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_e0 = (int *)0x7646f9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          piStack_e0 = (int *)0x764709;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_e0 = (int *)0x764714;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            piStack_e0 = (int *)0x764725;
            (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
          }
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        iVar2 = *(int *)(unaff_EBP + -0x78);
        uVar1 = *(uint *)(unaff_EBP + -0x18);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
      piStack_e0 = (int *)0x764746;
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_e0 = (int *)0x764757;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_00765309:
    FUN_00414ebb();
  }
  else if (*(int *)(extraout_ECX + 0x618) == 2) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x52;
    piStack_e0 = (int *)0x76477e;
    FUN_00448dc6();
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    piStack_e0 = (int *)0x76478f;
    VariantInit((VARIANTARG *)(unaff_EBP + -200));
    piStack_e0 = (int *)(unaff_EBP + -200);
    iStack_e4 = 0x76479c;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7647a8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x54;
    piStack_e0 = (int *)0x7647b9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
    piStack_e0 = (int *)(unaff_EBP + -0xa8);
    puVar3 = &DAT_00980690;
    iStack_e4 = 0x7647c6;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7647d2;
      FUN_00878dfb();
      puVar3 = extraout_ECX_04;
    }
    piStack_e0 = (int *)0x0;
    iStack_e4 = unaff_EBP + -200;
    puStack_e8 = (undefined1 *)(unaff_EBP + -0xa8);
    puStack_f4 = (undefined1 *)&puStack_ec;
    *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_ec;
    iStack_f0 = 0x9d4;
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    piStack_f8 = (int *)0x7647fc;
    puStack_ec = puVar3;
    FUN_00679e4e();
    iStack_f0 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    puStack_f4 = (undefined1 *)0x76480c;
    FUN_00405a1d();
    puStack_f4 = (undefined1 *)0x764813;
    FUN_00402660();
    puStack_f4 = (undefined1 *)0x76481a;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    iStack_e4 = 0x764825;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar4 != 0) {
      piStack_e0 = (int *)0x76483b;
      iVar4 = FUN_0041a581();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        piStack_e0 = (int *)0x76484c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    piStack_e0 = (int *)0x76485c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764867;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    piStack_e0 = (int *)0x764877;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764882;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x764892;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x76489d;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)0x7648a7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    iStack_e4 = 0x7648b1;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7648bd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    piStack_e0 = (int *)0x7648cb;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    iStack_e4 = 0x7648d5;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7648e1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    piStack_e0 = (int *)0x7648f2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
    piStack_e0 = (int *)(unaff_EBP + -0x98);
    iStack_e4 = 0x7648ff;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x76490b;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x24);
    iStack_e4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    puStack_ec = (undefined4 *)0x764921;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iStack_e4 = 0x76492e;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x76493a;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x4c) = &puStack_e8;
    iStack_f0 = 0x764946;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x10d;
    iStack_f0 = unaff_EBP + -0x98;
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    puStack_f4 = (undefined1 *)0x764961;
    piStack_f8 = (int *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x7c) = &puStack_f4;
    iStack_fc = 0x76496d;
    FUN_00448a17();
    iStack_fc = unaff_EBP + -0x1c;
    piStack_f8 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    uStack_100 = 0x76497b;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 99;
    piStack_f8 = (int *)0x764988;
    FUN_0044974c();
    piStack_f8 = (int *)0x76498f;
    uVar1 = FUN_00448ebb();
    iStack_f0 = 0x34 - (uVar1 >> 1);
    *(undefined1 *)(unaff_EBP + -4) = 100;
    puStack_f4 = (undefined1 *)0x7649a3;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x7649aa;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_e0 = (int *)0x7649bb;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_e0 = (int *)0x7649cc;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    piStack_e0 = (int *)0x7649dc;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7649e7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    piStack_e0 = (int *)0x7649f4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x7649ff;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x764a0c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764a17;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)0x764a21;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    iStack_e4 = 0x764a2b;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764a37;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    piStack_e0 = (int *)0x764a45;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    iStack_e4 = 0x764a4f;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764a5b;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x1c);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    puStack_ec = (undefined4 *)0x764a72;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    iStack_e4 = 0x764a7f;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x764a8b;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    iStack_f0 = 0x764a97;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x125;
    iStack_f0 = 0x3a;
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    puStack_f4 = (undefined1 *)0x764aaa;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x764ab1;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_e0 = (int *)0x764ac2;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    piStack_e0 = (int *)0x764acf;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764ada;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x764ae7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764af2;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x1c);
    iStack_e4 = 0x764b05;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_e0 = (int *)*puVar3;
    iStack_e4 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x69;
    puStack_e8 = (undefined1 *)0x764b1b;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    FUN_00414ebb();
    piStack_e0 = (int *)0x764b34;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    iStack_e4 = 0x764b3e;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764b4a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    piStack_e0 = (int *)0x764b58;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    iStack_e4 = 0x764b62;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764b6e;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x1c);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    puStack_ec = (undefined4 *)0x764b85;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    iStack_e4 = 0x764b92;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x764b9b;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    iStack_f0 = 0x764ba7;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x137;
    iStack_f0 = 0x3a;
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    puStack_f4 = (undefined1 *)0x764bba;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x764bc1;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_e0 = (int *)0x764bd2;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    piStack_e0 = (int *)0x764bdf;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764bea;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x764bf7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764c02;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x1c);
    iStack_e4 = 0x764c15;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_e0 = (int *)*puVar3;
    iStack_e4 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    puStack_e8 = (undefined1 *)0x764c2b;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    FUN_00414ebb();
    piStack_e0 = (int *)0x764c44;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    iStack_e4 = 0x764c4e;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764c5a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_e0 = (int *)0x764c68;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    iStack_e4 = 0x764c72;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764c7e;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x1c);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x70;
    puStack_ec = (undefined4 *)0x764c95;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    iStack_e4 = 0x764ca2;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x764cab;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    iStack_f0 = 0x764cb7;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x125;
    iStack_f0 = 0xbd;
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    puStack_f4 = (undefined1 *)0x764ccd;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x764cd4;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x70;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_e0 = (int *)0x764ce5;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_e0 = (int *)0x764cf2;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764cfd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x764d0a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764d15;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x1c);
    iStack_e4 = 0x764d28;
    puVar3 = (undefined4 *)FUN_00679d22();
    piStack_e0 = (int *)*puVar3;
    iStack_e4 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    puStack_e8 = (undefined1 *)0x764d3e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    FUN_00414ebb();
    piStack_e0 = (int *)0x764d57;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_e0 = (int *)(unaff_EBP + -0x48);
    iStack_e4 = 0x764d61;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764d6d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x74;
    piStack_e0 = (int *)0x764d7b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    iStack_e4 = 0x764d85;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764d91;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)(unaff_EBP + -0x38);
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x1c);
    iStack_e4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    puStack_ec = (undefined4 *)0x764da8;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x76;
    iStack_e4 = 0x764db5;
    iStack_e4 = FUN_00449749();
    puStack_e8 = (undefined1 *)0x764dbe;
    puStack_ec = (undefined4 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e8;
    iStack_f0 = 0x764dca;
    puStack_e8 = extraout_ECX_05;
    FUN_00448a17();
    puStack_ec = (undefined4 *)0x137;
    iStack_f0 = 0xbd;
    *(undefined1 *)(unaff_EBP + -4) = 0x76;
    puStack_f4 = (undefined1 *)0x764de0;
    FUN_004115d9();
    puStack_f4 = (undefined1 *)0x764de7;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_e0 = (int *)0x764df8;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x74;
    piStack_e0 = (int *)0x764e05;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764e10;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x764e1d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e0 = (int *)0x764e28;
      FUN_00878dfb();
    }
    if ((*(int *)(extraout_ECX + 0x604) == 0) ||
       (*(int *)(*(int *)(extraout_ECX + 0x604) + -4) == 0)) {
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_e0 = (int *)0x764e48;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_e0 = (int *)0x764e59;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      piVar5 = *(int **)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0076558c;
    }
    uVar1 = *(uint *)(*(int *)(extraout_ECX + 0x5dc) + 0x38);
    *(uint *)(unaff_EBP + -0x18) = uVar1;
    while (((*(int *)(iVar2 + 0x604) != 0 && (uVar1 < *(uint *)(*(int *)(iVar2 + 0x604) + -4))) &&
           ((int)uVar1 < *(int *)(*(int *)(iVar2 + 0x5dc) + 0x38) + 3))) {
      piStack_e0 = (int *)0x0;
      iStack_e4 = 0;
      puStack_e8 = (undefined1 *)0x0;
      puStack_ec = (undefined4 *)0x0;
      iStack_f0 = 0;
      puStack_f4 = (undefined1 *)0x764ebb;
      FUN_005afea1();
      puStack_f4 = (undefined1 *)0x764ec2;
      iVar4 = FUN_005af3ee();
      puStack_f4 = (undefined1 *)((*(int *)(unaff_EBP + -0x18) - iVar4) * 0x26 + 0xd4);
      piStack_f8 = (int *)0x6a;
      iStack_fc = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_100 = 0x764ee1;
      puVar3 = (undefined4 *)FUN_00537b54();
      iStack_fc = *puVar3;
      *(undefined4 **)(unaff_EBP + -0x4c) = &uStack_100;
      uStack_100 = extraout_ECX_06;
      FUN_0046fc23(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      FUN_0048b97b();
      FUN_005558b0();
      piStack_e0 = (int *)(unaff_EBP + -0x1c);
      iStack_e4 = 0x764f1d;
      FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 0x79;
      piStack_e0 = (int *)0x764f2a;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      FUN_00414ebb();
      puStack_e8 = (undefined1 *)&piStack_e0;
      *(int ***)(unaff_EBP + -0x4c) = &piStack_e0;
      iStack_e4 = 1;
      puStack_ec = (undefined4 *)0x764f46;
      FUN_007d4a9a();
      iStack_e4 = unaff_EBP + 8;
      puStack_e8 = (undefined1 *)0x764f51;
      FUN_007d3a22();
      piStack_e0 = (int *)0x764f5e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_e0 = (int *)(unaff_EBP + -0x48);
      iStack_e4 = 0x764f68;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_e0 = (int *)0x764f74;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x7a;
      piStack_e0 = (int *)0x764f82;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      piStack_e0 = (int *)(unaff_EBP + -0x38);
      iStack_e4 = 0x764f8c;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_e0 = (int *)0x764f98;
        FUN_00878dfb();
      }
      piStack_e0 = (int *)(unaff_EBP + -0x38);
      puStack_e8 = (undefined1 *)(unaff_EBP + -0x24);
      iStack_e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x7b;
      puStack_ec = (undefined4 *)0x764faf;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x7c;
      iStack_e4 = 0x764fbc;
      iStack_e4 = FUN_00449749();
      puStack_e8 = (undefined1 *)0x764fc5;
      puStack_ec = (undefined4 *)FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x4c) = &puStack_e8;
      iStack_f0 = 0x764fd1;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x7c;
      puStack_ec = (undefined4 *)0x764fe0;
      FUN_005afea1();
      puStack_ec = (undefined4 *)0x764fe7;
      iVar4 = FUN_005af3ee();
      puStack_ec = (undefined4 *)((*(int *)(unaff_EBP + -0x18) - iVar4) * 0x26 + 0xb3);
      iStack_f0 = 0x93;
      puStack_f4 = (undefined1 *)0x765003;
      FUN_004115d9();
      puStack_f4 = (undefined1 *)0x76500a;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x7b;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        piStack_e0 = (int *)0x76501b;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x7a;
      piStack_e0 = (int *)0x765028;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_e0 = (int *)0x765033;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      piStack_e0 = (int *)0x765040;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_e0 = (int *)0x76504b;
        FUN_00878dfb();
      }
      piStack_e0 = (int *)0x765058;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
      piStack_e0 = (int *)(unaff_EBP + -0x98);
      iStack_e4 = 0x765065;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_e0 = (int *)0x765071;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(*(int *)(iVar2 + 0x5dc) + 0x38);
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x7e;
      if (piVar5 == (int *)0x0) {
        piStack_e0 = (int *)0x765092;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar5;
      puStack_ec = *(undefined4 **)(unaff_EBP + -0x14);
      puStack_e8 = *(undefined1 **)(unaff_EBP + -0x98);
      iStack_e4 = *(int *)(unaff_EBP + -0x94);
      iStack_f0 = (*(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x4c)) * 0x26 + 200;
      piStack_e0 = *(int **)(unaff_EBP + -0x90);
      puStack_f4 = (undefined1 *)0x93;
      *(int **)(unaff_EBP + -0x7c) = piVar5;
      iStack_fc = 0x7650c8;
      piStack_f8 = piVar5;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        piStack_e0 = *(int **)(unaff_EBP + -0x7c);
        puStack_e8 = (undefined1 *)0x7650da;
        iStack_e4 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      piStack_e0 = (int *)0x7650ea;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_e0 = (int *)0x7650f5;
        FUN_00878dfb();
      }
      piStack_e0 = (int *)(unaff_EBP + -0x50);
      iStack_e4 = 0x765114;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x7f;
      if (*(int *)(unaff_EBP + -0x50) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
      }
      else {
        puStack_e8 = (undefined1 *)&piStack_e0;
        *(int ***)(unaff_EBP + -0x4c) = &piStack_e0;
        iStack_e4 = 0x75e;
        puStack_ec = (undefined4 *)0x765141;
        FUN_00679e4e();
        iStack_e4 = unaff_EBP + -0xd8;
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        puStack_e8 = (undefined1 *)0x765154;
        FUN_0040263d();
        puStack_e8 = (undefined1 *)0x76515b;
        piVar5 = (int *)FUN_004048a4();
        piStack_e0 = (int *)0x3bc;
        iStack_e4 = unaff_EBP + -0x88;
        *(undefined1 *)(unaff_EBP + -4) = 0x81;
        puStack_e8 = (undefined1 *)0x765174;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x82;
        iStack_e4 = 0x765180;
        piStack_e0 = piVar5;
        FUN_00412550();
        piStack_e0 = (int *)0x76518a;
        piStack_e0 = (int *)FUN_00449713();
        iStack_e4 = unaff_EBP + 8;
        puStack_e8 = (undefined1 *)0x765194;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x81;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        piStack_e0 = (int *)0x7651b6;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e0 = (int *)0x7651c1;
          FUN_00878dfb();
        }
        piStack_e0 = (int *)0x7651cd;
        VariantInit((VARIANTARG *)(unaff_EBP + -100));
        piStack_e0 = (int *)(unaff_EBP + -100);
        iStack_e4 = 0x7651d7;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_e0 = (int *)0x7651e3;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x83;
        piStack_e0 = (int *)0x7651ed;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
        piStack_e0 = (int *)(unaff_EBP + -0x74);
        iStack_e4 = 0x7651f7;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_e0 = (int *)0x765203;
          FUN_00878dfb();
        }
        piStack_e0 = (int *)(unaff_EBP + -0x74);
        puStack_e8 = (undefined1 *)(unaff_EBP + -0x84);
        iStack_e4 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x84;
        puStack_ec = (undefined4 *)0x76521d;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x85;
        iStack_e4 = 0x76522a;
        iStack_e4 = FUN_00449749();
        puStack_e8 = (undefined1 *)0x765233;
        puStack_ec = (undefined4 *)FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x4c) = &puStack_e8;
        iStack_f0 = 0x76523f;
        puStack_e8 = extraout_ECX_07;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x85;
        puStack_ec = (undefined4 *)0x765251;
        FUN_005afea1();
        puStack_ec = (undefined4 *)0x765258;
        iVar2 = FUN_005af3ee();
        puStack_ec = (undefined4 *)((*(int *)(unaff_EBP + -0x18) - iVar2) * 0x26 + 0xc5);
        iStack_f0 = 0xb7;
        puStack_f4 = (undefined1 *)0x765274;
        FUN_004115d9();
        puStack_f4 = (undefined1 *)0x76527b;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x84;
        if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
          piStack_e0 = (int *)0x76528f;
          (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x83;
        piStack_e0 = (int *)0x76529c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e0 = (int *)0x7652a7;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        piStack_e0 = (int *)0x7652b4;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e0 = (int *)0x7652bf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
          piStack_e0 = (int *)0x7652d0;
          (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
        }
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar2 = *(int *)(unaff_EBP + -0x78);
      uVar1 = *(uint *)(unaff_EBP + -0x18);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_e0 = (int *)0x7652f1;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x52;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_e0 = (int *)0x765302;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_00765309;
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  iVar2 = *(int *)(iVar2 + 0x638);
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  if (iVar2 == 0) {
    piStack_e0 = (int *)0x76541b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
    piStack_e0 = (int *)(unaff_EBP + -0x74);
    iStack_e4 = 0x765425;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x765431;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    piStack_e0 = (int *)0x76543b;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    piStack_e0 = (int *)(unaff_EBP + -100);
    puVar3 = &DAT_00980690;
    iStack_e4 = 0x765445;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x765451;
      FUN_00878dfb();
      puVar3 = extraout_ECX_09;
    }
    piStack_e0 = (int *)0x0;
    iStack_e4 = unaff_EBP + -0x74;
    puStack_e8 = (undefined1 *)(unaff_EBP + -100);
    puStack_f4 = (undefined1 *)&puStack_ec;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_ec;
    iStack_f0 = 0x9e1;
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    piStack_f8 = (int *)0x765475;
    puStack_ec = puVar3;
    FUN_00679e4e();
    iStack_f0 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    puStack_f4 = (undefined1 *)0x765485;
    FUN_00405a1d();
    puStack_f4 = (undefined1 *)0x76548c;
    FUN_00402660();
    puStack_f4 = (undefined1 *)0x765493;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x8f;
    iStack_e4 = 0x76549e;
    uVar6 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    piStack_e0 = (int *)0x7654ad;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_e0 = (int *)0x7654be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    piStack_e0 = (int *)0x7654ce;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x7654d9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    piStack_e0 = (int *)0x7654e6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x7654f1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
  }
  else {
    piStack_e0 = (int *)0x76532d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
    piStack_e0 = (int *)(unaff_EBP + -0x74);
    iStack_e4 = 0x765337;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x765343;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    piStack_e0 = (int *)0x76534d;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    piStack_e0 = (int *)(unaff_EBP + -100);
    puVar3 = &DAT_00980690;
    iStack_e4 = 0x765357;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x765363;
      FUN_00878dfb();
      puVar3 = extraout_ECX_08;
    }
    piStack_e0 = (int *)0x0;
    iStack_e4 = unaff_EBP + -0x74;
    puStack_e8 = (undefined1 *)(unaff_EBP + -100);
    puStack_f4 = (undefined1 *)&puStack_ec;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_ec;
    iStack_f0 = 0x9e0;
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    piStack_f8 = (int *)0x765387;
    puStack_ec = puVar3;
    FUN_00679e4e();
    iStack_f0 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    puStack_f4 = (undefined1 *)0x765397;
    FUN_00405a1d();
    puStack_f4 = (undefined1 *)0x76539e;
    FUN_00402660();
    puStack_f4 = (undefined1 *)0x7653a5;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_e4 = 0x7653b0;
    uVar6 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    piStack_e0 = (int *)0x7653bf;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_e0 = (int *)0x7653d0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    piStack_e0 = (int *)0x7653e0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x7653eb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    piStack_e0 = (int *)0x7653f8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_e0 = (int *)0x765403;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
  }
  piStack_e0 = (int *)0x7654fe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x765509;
    FUN_00878dfb();
  }
  piStack_e0 = (int *)0xff;
  iStack_e4 = 0x765518;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x90;
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    piStack_e0 = (int *)0x76552b;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x54);
  puStack_ec = *(undefined4 **)(unaff_EBP + -0x80);
  puStack_e8 = *(undefined1 **)(unaff_EBP + -100);
  iStack_e4 = *(int *)(unaff_EBP + -0x60);
  iStack_f0 = 0x1e;
  piStack_e0 = *(int **)(unaff_EBP + -0x5c);
  puStack_f4 = (undefined1 *)0xa;
  iStack_fc = 0x76554a;
  piStack_f8 = piVar5;
  iVar2 = (**(code **)(*piVar5 + 0x80))();
  if (iVar2 < 0) {
    puStack_e8 = (undefined1 *)0x76555a;
    iStack_e4 = iVar2;
    piStack_e0 = piVar5;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  piStack_e0 = (int *)0x765567;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x765572;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x80) != (int *)0x0) {
    piStack_e0 = (int *)0x765583;
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
  }
  piVar5 = *(int **)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0076558c:
  if (piVar5 != (int *)0x0) {
    piStack_e0 = (int *)0x765594;
    (**(code **)(*piVar5 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



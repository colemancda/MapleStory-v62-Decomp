/* FUN_00716130 - 0x00716130 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00716130(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar5;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 *puStack_9c;
  
  FUN_00879bb8();
  puStack_9c = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  iStack_a0 = 0x716150;
  FUN_0081622a();
  puStack_9c = (undefined4 *)(unaff_EBP + 8);
  iStack_a0 = 0x71615b;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x80);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 1) {
    *(undefined4 *)(unaff_EBP + -0x50) = 0xb;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(unaff_EBP + -0x50) = 5;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(unaff_EBP + -0x50) = 4;
  }
  else if (iVar2 == 4) {
    *(undefined4 *)(unaff_EBP + -0x50) = 7;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x50) = 0xb;
    if (iVar2 != 5) {
      *(undefined4 *)(unaff_EBP + -0x50) = 0;
    }
  }
  if (iVar2 == 1) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xb;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(unaff_EBP + -0x18) = 5;
  }
  else if (iVar2 == 4) {
    *(undefined4 *)(unaff_EBP + -0x18) = 7;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xb;
    if (iVar2 != 5) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
  }
  if (iVar2 == 1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0xb;
  }
  else if (iVar2 == 4) {
    *(undefined4 *)(unaff_EBP + -0x10) = 7;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0xb;
    if (iVar2 != 5) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
  puStack_9c = &DAT_00980690;
  iStack_a0 = 0x7161fc;
  FUN_00403191();
  puStack_9c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a0 = 0x71620c;
  FUN_00403191();
  puStack_9c = (undefined4 *)0x0;
  iStack_a0 = 0;
  iStack_a4 = unaff_EBP + -0x78;
  iStack_a8 = unaff_EBP + -0x88;
  *(int **)(unaff_EBP + -0x14) = &iStack_ac;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a4 = 0x71625e;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 != 0) {
    puStack_9c = (undefined4 *)(unaff_EBP + -0x68);
    iStack_a0 = 0x716274;
    puStack_9c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_9c < 0) && (puStack_9c != (undefined4 *)0x80004002)) {
      iStack_a0 = 0x716285;
      FUN_00878dfb();
    }
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_a0 = 0x716295;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x7162a0;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_a0 = 0x7162b0;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x7162bb;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_a0 = 0x7162c8;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x7162d3;
    FUN_00878dfb();
  }
  puStack_9c = &DAT_00980690;
  iStack_a0 = 0x7162dc;
  FUN_00403191();
  puStack_9c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_a0 = 0x7162e9;
  FUN_00403191();
  puStack_9c = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_a0 = unaff_EBP + -0x34;
  iStack_a8 = unaff_EBP + -0x14;
  iStack_a4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_ac = 0x716300;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_a4 = 0x71630d;
  iStack_a4 = FUN_00449749();
  iStack_a8 = 0xf;
  iStack_ac = unaff_EBP + -0x1c;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_a8 = 0x716329;
  iVar2 = FUN_00483ba7();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_a8 = 0x716336;
  iStack_a8 = FUN_00449713();
  iStack_ac = iVar2;
  FUN_00434e21();
  iStack_a8 = 0x716346;
  iStack_ac = FUN_00449713();
  *(int **)(unaff_EBP + -0x38) = &iStack_a8;
  FUN_00448a17();
  iStack_ac = 0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_9c = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    iStack_a0 = 0x71637d;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_9c = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_a0 = 0x716392;
    FUN_00434e38();
  }
  puStack_9c = (undefined4 *)0x71639b;
  FUN_004497b5();
  puStack_9c = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_a0 = 0x7163a8;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x7163b3;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_a0 = 0x7163c0;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    iStack_a0 = 0x7163cb;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)0x3;
  iStack_a0 = 0xff;
  iStack_a4 = 0x7163da;
  FUN_004031b7();
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar4 == (int *)0x0) {
    puStack_9c = (undefined4 *)0x80004003;
    iStack_a0 = 0x7163ef;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar4;
  iStack_ac = *(int *)(unaff_EBP + -0x24);
  iStack_a8 = *(int *)(unaff_EBP + -0x34);
  iStack_a4 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_a0 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(int **)(unaff_EBP + -0x14) = piVar4;
  puStack_9c = *(undefined4 **)(unaff_EBP + -0x28);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_c8 = 0x716423;
    iStack_c4 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_c0 = 0x716430;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c0 = 0x71643b;
    FUN_00878dfb();
  }
  iStack_c0 = 0x716449;
  iVar2 = FUN_0071402b();
  if (iVar2 == 0) {
    iStack_c0 = 0x71645b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_c0 = 0x716468;
    FUN_00403191();
    iStack_c0 = unaff_EBP + -0x34;
    iStack_c8 = unaff_EBP + -0x20;
    iStack_c4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_c4 = 0x71648c;
    iStack_c4 = FUN_00449749();
    iStack_c8 = 0x10;
    FUN_00679d22(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_c8 = 0x7164ab;
    uVar3 = FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_c8 = 0x7164b8;
    iStack_c8 = FUN_00449713();
    FUN_00434e21(uVar3);
    iStack_c8 = 0x7164c8;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_c8;
    iStack_c8 = extraout_ECX_00;
    FUN_00448a17(uVar3);
    iVar2 = *(int *)(unaff_EBP + -0x10) * 0xd + 0x35;
    uVar3 = 0x1e;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_004115d9(0x1e,iVar2);
    FUN_00448e3a(uVar3,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_c0 = 0x716507;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_c0 = 0x71651c;
      FUN_00434e38();
    }
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_c0 = 0x716532;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x71653d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x71654a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x716555;
      FUN_00878dfb();
    }
  }
  iStack_c0 = 0x716563;
  iVar2 = FUN_0071402b();
  if (iVar2 == 0) {
    iStack_c0 = 0xff;
    iStack_c4 = 0x716577;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (piVar4 == (int *)0x0) {
      iStack_c0 = 0x71658c;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar4;
    iStack_c8 = *(int *)(unaff_EBP + -0x34);
    iStack_c4 = *(int *)(unaff_EBP + -0x30);
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,0xf,*(int *)(unaff_EBP + -0x10) * 0xd + 0x35,
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c8 = 0x7165c8;
      iStack_c4 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x7165d5;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x7165e0;
      FUN_00878dfb();
    }
  }
  iStack_c0 = 0x7165ee;
  iVar2 = FUN_0071402b();
  if (iVar2 == 0) {
    iStack_c0 = 0x716600;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_c0 = 0x71660d;
    FUN_00403191();
    iStack_c0 = unaff_EBP + -0x34;
    iStack_c8 = unaff_EBP + -0x20;
    iStack_c4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_c4 = 0x716631;
    iStack_c4 = FUN_00449749();
    iStack_c8 = 0x12;
    FUN_00679d22(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_c8 = 0x716650;
    uVar3 = FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_c8 = 0x71665d;
    iStack_c8 = FUN_00449713();
    FUN_00434e21(uVar3);
    iStack_c8 = 0x71666d;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_c8;
    iStack_c8 = extraout_ECX_01;
    FUN_00448a17(uVar3);
    iVar2 = *(int *)(unaff_EBP + -0x18) * 0xd + 0x42;
    uVar3 = 0x1e;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004115d9(0x1e,iVar2);
    FUN_00448e3a(uVar3,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_c0 = 0x7166ac;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_c0 = 0x7166c1;
      FUN_00434e38();
    }
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_c0 = 0x7166d7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x7166e2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x7166ef;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x7166fa;
      FUN_00878dfb();
    }
  }
  iStack_c0 = 0x716708;
  iVar2 = FUN_0071402b();
  if (iVar2 == 0) {
    iStack_c0 = 0xff;
    iStack_c4 = 0x71671c;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (piVar4 == (int *)0x0) {
      iStack_c0 = 0x716731;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar4;
    iStack_c8 = *(int *)(unaff_EBP + -0x34);
    iStack_c4 = *(int *)(unaff_EBP + -0x30);
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,0xf,*(int *)(unaff_EBP + -0x18) * 0xd + 0x42,
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c8 = 0x71676d;
      iStack_c4 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x71677a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x716785;
      FUN_00878dfb();
    }
  }
  iStack_c0 = 0x716793;
  iVar2 = FUN_0071402b();
  if (iVar2 == 0) {
    iStack_c0 = 0x7167a5;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_c0 = 0x7167b2;
    FUN_00403191();
    iStack_c0 = unaff_EBP + -0x34;
    iStack_c8 = unaff_EBP + -0x20;
    iStack_c4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_c4 = 0x7167d6;
    iStack_c4 = FUN_00449749();
    iStack_c8 = 0x11;
    FUN_00679d22(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_c8 = 0x7167f5;
    uVar3 = FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_c8 = 0x716802;
    iStack_c8 = FUN_00449713();
    FUN_00434e21(uVar3);
    iStack_c8 = 0x716812;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_c8;
    iStack_c8 = extraout_ECX_02;
    FUN_00448a17(uVar3);
    iVar2 = *(int *)(unaff_EBP + -0x50) * 0xd + 0x4f;
    uVar3 = 0x1e;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_004115d9(0x1e,iVar2);
    FUN_00448e3a(uVar3,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_c0 = 0x716851;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_c0 = 0x716866;
      FUN_00434e38();
    }
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_c0 = 0x71687c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x716887;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x716894;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x71689f;
      FUN_00878dfb();
    }
  }
  iStack_c0 = 0x7168ad;
  iVar2 = FUN_0071402b();
  if (iVar2 == 0) {
    iStack_c0 = 0xff;
    iStack_c4 = 0x7168c1;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    if (piVar4 == (int *)0x0) {
      iStack_c0 = 0x7168d6;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar4;
    iStack_c8 = *(int *)(unaff_EBP + -0x34);
    iStack_c4 = *(int *)(unaff_EBP + -0x30);
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,0xf,*(int *)(unaff_EBP + -0x50) * 0xd + 0x4f,
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c8 = 0x716912;
      iStack_c4 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x71691f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x71692a;
      FUN_00878dfb();
    }
  }
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  iVar1 = *(int *)(iVar2 + 0x80);
  if (iVar1 == 1) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar2 + 0x6c;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x35;
    do {
      iStack_c0 = 0x716956;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_c0 = 0x716963;
      FUN_00403191();
      iStack_c0 = unaff_EBP + -0x34;
      iStack_c8 = unaff_EBP + -0x1c;
      iStack_c4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iStack_c4 = 0x716987;
      iStack_c4 = FUN_00449749();
      iStack_c8 = *(int *)(unaff_EBP + -0x18);
      FUN_004726fc();
      iStack_c8 = 0x71699a;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x38) = &iStack_c8;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar5 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_004115d9(0x32,uVar3);
      FUN_00448e3a(uVar5,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_c0 = 0x7169cf;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_c0 = 0x7169dc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x7169e7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x7169f4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x7169ff;
        FUN_00878dfb();
      }
      iStack_c0 = 0xff;
      iStack_c4 = 0x716a0e;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (piVar4 == (int *)0x0) {
        iStack_c0 = 0x716a23;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_c8 = *(int *)(unaff_EBP + -0x60);
      iStack_c4 = *(int *)(unaff_EBP + -0x5c);
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar4,0x23,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        iStack_c0 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_c8 = 0x716a58;
        iStack_c4 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716a65;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716a70;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xd;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 0xc4);
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar2 + 0x70;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x42;
    do {
      iStack_c0 = 0x716aac;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_c0 = 0x716ab9;
      FUN_00403191();
      iStack_c0 = unaff_EBP + -0x60;
      iStack_c8 = unaff_EBP + -0x1c;
      iStack_c4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_c4 = 0x716add;
      iStack_c4 = FUN_00449749();
      iStack_c8 = *(int *)(unaff_EBP + -0x18);
      FUN_004726fc();
      iStack_c8 = 0x716af0;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x38) = &iStack_c8;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar5 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_004115d9(0x32,uVar3);
      FUN_00448e3a(uVar5,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_c0 = 0x716b25;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_c0 = 0x716b32;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716b3d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716b4a;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716b55;
        FUN_00878dfb();
      }
      iStack_c0 = 0xff;
      iStack_c4 = 0x716b64;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (piVar4 == (int *)0x0) {
        iStack_c0 = 0x716b79;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_c8 = *(int *)(unaff_EBP + -0x4c);
      iStack_c4 = *(int *)(unaff_EBP + -0x48);
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar4,0x23,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        iStack_c0 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_c8 = 0x716bae;
        iStack_c4 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716bbb;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716bc6;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xd;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 0x83);
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar2 + 0x74;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x4f;
    do {
      iStack_c0 = 0x716c03;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_c0 = unaff_EBP + -0x4c;
      iStack_c4 = 0x716c0d;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_c0 = 0x716c19;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_c0 = 0x716c26;
      FUN_00403191();
      iStack_c0 = unaff_EBP + -0x60;
      iStack_c8 = unaff_EBP + -0x1c;
      iStack_c4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iStack_c4 = 0x716c4a;
      iStack_c4 = FUN_00449749();
      iStack_c8 = *(int *)(unaff_EBP + -0x18);
      FUN_004726fc();
      iStack_c8 = 0x716c5d;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x38) = &iStack_c8;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar5 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_004115d9(0x32,uVar3);
      FUN_00448e3a(uVar5,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_c0 = 0x716c92;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_c0 = 0x716c9f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716caa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716cb7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716cc2;
        FUN_00878dfb();
      }
      iStack_c0 = 0xff;
      iStack_c4 = 0x716cd1;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (piVar4 == (int *)0x0) {
        iStack_c0 = 0x716ce6;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_c8 = *(int *)(unaff_EBP + -0x34);
      iStack_c4 = *(int *)(unaff_EBP + -0x30);
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar4,0x23,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        iStack_c0 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_c8 = 0x716d1b;
        iStack_c4 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716d28;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716d33;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xd;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 0x83);
  }
  else if (iVar1 == 4) {
    iStack_c0 = 0x716d61;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_c0 = unaff_EBP + -0x34;
    iStack_c4 = 0x716d6b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_c0 = 0x716d77;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_c0 = 0x716d81;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iStack_c0 = unaff_EBP + -0x4c;
    iStack_c4 = 0x716d8b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_c0 = 0x716d97;
      FUN_00878dfb();
    }
    iStack_c0 = unaff_EBP + -0x4c;
    iStack_c8 = unaff_EBP + -0x14;
    iStack_c4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_c4 = 0x716dbb;
    iStack_c4 = FUN_00449749();
    iStack_c8 = 9;
    FUN_0071be3f();
    iStack_c8 = 0x716dcd;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_c8;
    FUN_00448a17(uVar3);
    uVar5 = 0x35;
    uVar3 = 0x32;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_004115d9(0x32,0x35);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_c0 = 0x716e01;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_c0 = 0x716e0e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x716e19;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x716e26;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x716e31;
      FUN_00878dfb();
    }
    iStack_c0 = 0xff;
    iStack_c4 = 0x716e40;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    if (piVar4 == (int *)0x0) {
      iStack_c0 = 0x716e55;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar4;
    iStack_c8 = *(int *)(unaff_EBP + -0x60);
    iStack_c4 = *(int *)(unaff_EBP + -0x5c);
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))(piVar4,0x23,0x35,*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c8 = 0x716e89;
      iStack_c4 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x716e96;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x716ea1;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x3c) + 0x78;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x35;
    do {
      iStack_c0 = 0x716ec1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_c0 = unaff_EBP + -0x4c;
      iStack_c4 = 0x716ecb;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_c0 = 0x716ed7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iStack_c0 = 0x716ee1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iStack_c0 = unaff_EBP + -0x34;
      iStack_c4 = 0x716eeb;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_c0 = 0x716ef7;
        FUN_00878dfb();
      }
      iStack_c0 = unaff_EBP + -0x34;
      iStack_c8 = unaff_EBP + -0x1c;
      iStack_c4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      iStack_c4 = 0x716f1b;
      iStack_c4 = FUN_00449749();
      iStack_c8 = *(int *)(unaff_EBP + -0x18);
      FUN_004726fc();
      iStack_c8 = 0x716f2e;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x38) = &iStack_c8;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar5 = 0x7d;
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      FUN_004115d9(0x7d,uVar3);
      FUN_00448e3a(uVar5,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_c0 = 0x716f63;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iStack_c0 = 0x716f70;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716f7b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716f88;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x716f93;
        FUN_00878dfb();
      }
      iStack_c0 = 0xff;
      iStack_c4 = 0x716fa2;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      if (piVar4 == (int *)0x0) {
        iStack_c0 = 0x716fb7;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_c8 = *(int *)(unaff_EBP + -0x60);
      iStack_c4 = *(int *)(unaff_EBP + -0x5c);
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar4,0x6e,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        iStack_c0 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_c8 = 0x716fec;
        iStack_c4 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x716ff9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x717004;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xd;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 0x83);
  }
  else if (iVar1 == 5) {
    iStack_c0 = 0x717032;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iStack_c0 = unaff_EBP + -0x4c;
    iStack_c4 = 0x71703c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_c0 = 0x717048;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_c0 = 0x717052;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_c0 = unaff_EBP + -0x34;
    iStack_c4 = 0x71705c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_c0 = 0x717068;
      FUN_00878dfb();
    }
    iStack_c0 = unaff_EBP + -0x34;
    iStack_c8 = unaff_EBP + -0x14;
    iStack_c4 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    iStack_c4 = 0x71708c;
    iStack_c4 = FUN_00449749();
    iStack_c8 = 10;
    FUN_0071be3f();
    iStack_c8 = 0x71709e;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x38) = &iStack_c8;
    FUN_00448a17(uVar3);
    uVar5 = 0x35;
    uVar3 = 0x32;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    FUN_004115d9(0x32,0x35);
    FUN_00448e3a(uVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_c0 = 0x7170d2;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_c0 = 0x7170df;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x7170ea;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x7170f7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x717102;
      FUN_00878dfb();
    }
    iStack_c0 = 0xff;
    iStack_c4 = 0x717111;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    if (piVar4 == (int *)0x0) {
      iStack_c0 = 0x717126;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar4;
    iStack_c8 = *(int *)(unaff_EBP + -0x60);
    iStack_c4 = *(int *)(unaff_EBP + -0x5c);
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))(piVar4,0x23,0x35,*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c8 = 0x71715a;
      iStack_c4 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c0 = 0x717167;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c0 = 0x717172;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x3c) + 0x7c;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x35;
    do {
      iStack_c0 = 0x717192;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_c0 = unaff_EBP + -0x4c;
      iStack_c4 = 0x71719c;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_c0 = 0x7171a8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_c0 = 0x7171b2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iStack_c0 = unaff_EBP + -0x34;
      iStack_c4 = 0x7171bc;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_c0 = 0x7171c8;
        FUN_00878dfb();
      }
      iStack_c0 = unaff_EBP + -0x34;
      iStack_c8 = unaff_EBP + -0x1c;
      iStack_c4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iStack_c4 = 0x7171ec;
      iStack_c4 = FUN_00449749();
      iStack_c8 = *(int *)(unaff_EBP + -0x18);
      FUN_004726fc();
      iStack_c8 = 0x7171ff;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + -0x38) = &iStack_c8;
      FUN_00448a17(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar5 = 0x7d;
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      FUN_004115d9(0x7d,uVar3);
      FUN_00448e3a(uVar5,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_c0 = 0x717234;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_c0 = 0x717241;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x71724c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x717259;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x717264;
        FUN_00878dfb();
      }
      iStack_c0 = 0xff;
      iStack_c4 = 0x717273;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (piVar4 == (int *)0x0) {
        iStack_c0 = 0x717288;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar4;
      iStack_c8 = *(int *)(unaff_EBP + -0x60);
      iStack_c4 = *(int *)(unaff_EBP + -0x5c);
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar4,0x6e,*(undefined4 *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        iStack_c0 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_c8 = 0x7172bd;
        iStack_c4 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_c0 = 0x7172ca;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c0 = 0x7172d5;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xd;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < 0xb7);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_c0 = 0x7172fa;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_c0 = 0x717317;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



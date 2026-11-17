/* FUN_00719470 - 0x00719470 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00719470(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar8;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  undefined4 *puStack_1f0;
  int *piStack_1ec;
  undefined1 *puStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined1 *puStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x68) = extraout_ECX;
  iStack_1d4 = 0x719494;
  FUN_0081622a();
  iStack_1d4 = 0x71949f;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_1d4 = 0x7194b1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_1d4 = 0x7194be;
  FUN_00403191();
  iStack_1d4 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x5c);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_1e0 = 0x7194d5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_1d8 = 0x7194e2;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x80f;
  iStack_1e0 = unaff_EBP + -100;
  iStack_1e4 = 0x7194f8;
  uVar2 = FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x58) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_1dc = (undefined1 *)0x719507;
  uVar2 = FUN_00483ba7();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  puStack_1dc = *(undefined1 **)(extraout_ECX + 0x5e0);
  iStack_1e0 = *(int *)(extraout_ECX + 0x5dc) + 1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_1e4 = 0x719524;
  iStack_1e4 = FUN_00449713();
  puStack_1e8 = *(undefined1 **)(unaff_EBP + -0x18);
  piStack_1ec = (int *)0x71952d;
  FUN_00434e21();
  puStack_1dc = (undefined1 *)0x719537;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x6c) = &puStack_1dc;
  iStack_1e4 = 0x719543;
  FUN_00448a17();
  iStack_1e0 = 0x171;
  iStack_1e4 = 0xcd;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_1e8 = (undefined1 *)0x719559;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x719560;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    iStack_1d4 = 0x719574;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -100) != 0) {
    iStack_1d4 = 0x719589;
    FUN_00434e38();
  }
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_1d4 = 0x71959f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x7195aa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_1d4 = 0x7195b7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x7195c2;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x7195ce;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_1d4 = 0x7195de;
  FUN_00403191();
  iStack_1d4 = 0;
  iStack_1d8 = unaff_EBP + -0x15c;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0xcc);
  puStack_1e8 = (undefined1 *)&iStack_1e0;
  *(int **)(unaff_EBP + -0x6c) = &iStack_1e0;
  iStack_1e4 = 0xdf6;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_1ec = (int *)0x719607;
  iStack_1e0 = extraout_ECX_00;
  FUN_00679e4e();
  iStack_1e4 = unaff_EBP + -0x1cc;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_1e8 = (undefined1 *)0x719617;
  FUN_00405a1d();
  puStack_1e8 = (undefined1 *)0x71961e;
  FUN_00402660();
  puStack_1e8 = (undefined1 *)0x719625;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_1d8 = 0x719630;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(int *)(unaff_EBP + -0x94) = iVar3;
  if (iVar3 != 0) {
    iStack_1d4 = 0x71964d;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_1d4 = 0x71965e;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_1d4 = 0x71966e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x719679;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_1d4 = 0x719689;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x719694;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_1d4 = 0x7196a4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x7196af;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x90) = *(undefined4 *)(DAT_00978368 + 0x204c);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xb0;
  uVar4 = 0;
  iVar3 = extraout_ECX;
  while ((iVar3 = *(int *)(iVar3 + 0xe4), iVar3 != 0 && (uVar4 < *(uint *)(iVar3 + -4)))) {
    iStack_1d4 = unaff_EBP + -0x54;
    *(uint *)(unaff_EBP + -0x70) = iVar3 + uVar4 * 8;
    iStack_1d8 = 0x7196f4;
    FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_1d4 = 0x71970d;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_1d4 = 0x719724;
    FUN_00414f8b();
    *(int **)(unaff_EBP + -0x24) = &iStack_1d4;
    iStack_1d8 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1e0 = 0x719738;
    puStack_1dc = (undefined1 *)&iStack_1d4;
    FUN_007d4a9a();
    iStack_1d8 = unaff_EBP + -0x60;
    puStack_1dc = (undefined1 *)0x719743;
    FUN_007d3a22();
    puStack_1dc = (undefined1 *)&iStack_1d4;
    *(int **)(unaff_EBP + -0x24) = &iStack_1d4;
    iStack_1d8 = 1;
    iStack_1e0 = 0x719756;
    FUN_007d4a9a();
    iStack_1d8 = unaff_EBP + -100;
    puStack_1dc = (undefined1 *)0x719761;
    FUN_007d3a22();
    iStack_1d4 = 0x71976d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_1d4 = 0x71977a;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_1d8 = 0x71978e;
    iStack_1d8 = FUN_00449749();
    puStack_1dc = (undefined1 *)0x719797;
    iStack_1e0 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_1dc;
    iStack_1e4 = 0x7197a3;
    FUN_00448a17();
    iStack_1e0 = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_1e4 = 0x15;
    puStack_1e8 = (undefined1 *)0x7197b4;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x7197bb;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_1d4 = 0x7197c8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x7197d3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x7197e0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x7197eb;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x7197f7;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_1d4 = 0x719807;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0xfc;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_1d8 = 0x719821;
    iStack_1d8 = FUN_00449749();
    puStack_1dc = (undefined1 *)0x71982a;
    iStack_1e0 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_1dc;
    iStack_1e4 = 0x719836;
    FUN_00448a17();
    iStack_1e0 = *(int *)(unaff_EBP + -0x3c);
    iStack_1e4 = 0x57;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_1e8 = (undefined1 *)0x719847;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x71984e;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_1d4 = 0x71985e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719869;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x719879;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719884;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x719890;
    FUN_00403191();
    iStack_1d4 = 0x3bc;
    iStack_1d8 = unaff_EBP + -0x98;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_1dc = (undefined1 *)0x7198ae;
    uVar2 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x78) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_1d4 = 0x7198c0;
    uVar2 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_1d4 = 0x7198ce;
    iVar3 = FUN_0071b931();
    iStack_1d4 = *(int *)(iVar3 + 4);
    iStack_1d8 = 0x7198d9;
    iStack_1d8 = FUN_00449713();
    puStack_1dc = *(undefined1 **)(unaff_EBP + -0x40);
    iStack_1e0 = 0x7198e2;
    FUN_00434e21();
    iStack_1d4 = 0x7198ec;
    iStack_1d8 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_1d4;
    puStack_1dc = (undefined1 *)0x7198f8;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_1d8 = 0x719904;
    FUN_0044974c();
    iStack_1d8 = 0x71990b;
    iVar3 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x24) = 0xb4 - iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (*(int *)(unaff_EBP + -0xb0) != 0) {
      iStack_1d4 = 0x71992c;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x98) != 0) {
      iStack_1d4 = 0x719944;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x719955;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719960;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x71996c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_1d4 = 0x71997c;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0x17c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_1d8 = 0x719996;
    iStack_1d8 = FUN_00449749();
    puStack_1dc = (undefined1 *)0x3bc;
    iStack_1e0 = unaff_EBP + -0xa4;
    iStack_1e4 = 0x7199aa;
    uVar2 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    puStack_1dc = (undefined1 *)0x7199bc;
    uVar2 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x78) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_1dc = (undefined1 *)0x7199ca;
    iVar3 = FUN_0071b931();
    puStack_1dc = *(undefined1 **)(iVar3 + 4);
    iStack_1e0 = 0x7199d5;
    iStack_1e0 = FUN_00449713();
    iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x78);
    puStack_1e8 = (undefined1 *)0x7199de;
    FUN_00434e21();
    puStack_1dc = (undefined1 *)0x7199e8;
    iStack_1e0 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x40) = &puStack_1dc;
    iStack_1e4 = 0x7199f4;
    FUN_00448a17();
    iStack_1e0 = *(int *)(unaff_EBP + -0x3c);
    iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_1e8 = (undefined1 *)0x719a06;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x719a0d;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (*(int *)(unaff_EBP + -0x9c) != 0) {
      iStack_1d4 = 0x719a24;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (*(int *)(unaff_EBP + -0xa4) != 0) {
      iStack_1d4 = 0x719a3c;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_1d4 = 0x719a4d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719a58;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x719a68;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719a73;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x719a7f;
    FUN_00403191();
    iStack_1d4 = 0x3bc;
    iStack_1d8 = unaff_EBP + -0xb4;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_1dc = (undefined1 *)0x719a9d;
    uVar2 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_1d4 = 0x719aaf;
    uVar2 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_1d4 = 0x719abd;
    piVar5 = (int *)FUN_0071b931();
    iStack_1d4 = *piVar5;
    iStack_1d8 = 0x719ac7;
    iStack_1d8 = FUN_00449713();
    puStack_1dc = *(undefined1 **)(unaff_EBP + -0x40);
    iStack_1e0 = 0x719ad0;
    FUN_00434e21();
    iStack_1d4 = 0x719ada;
    iStack_1d8 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_1d4;
    puStack_1dc = (undefined1 *)0x719ae6;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_1d8 = 0x719af2;
    FUN_0044974c();
    iStack_1d8 = 0x719af9;
    iVar3 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x40) = 0x11f - iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (*(int *)(unaff_EBP + -0xac) != 0) {
      iStack_1d4 = 0x719b1a;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int *)(unaff_EBP + -0xb4) != 0) {
      iStack_1d4 = 0x719b32;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x719b43;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719b4e;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x719b5a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_1d4 = 0x719b6a;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0xdc;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_1d8 = 0x719b84;
    iStack_1d8 = FUN_00449749();
    puStack_1dc = (undefined1 *)0x3bc;
    iStack_1e0 = unaff_EBP + -0x88;
    iStack_1e4 = 0x719b98;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_1dc = (undefined1 *)0x719ba9;
    uVar2 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_1dc = (undefined1 *)0x719bb7;
    puVar6 = (undefined4 *)FUN_0071b931();
    puStack_1dc = (undefined1 *)*puVar6;
    iStack_1e0 = 0x719bc0;
    iStack_1e0 = FUN_00449713();
    iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x24);
    puStack_1e8 = (undefined1 *)0x719bc9;
    FUN_00434e21();
    puStack_1dc = (undefined1 *)0x719bd3;
    iStack_1e0 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_1dc;
    iStack_1e4 = 0x719bdf;
    FUN_00448a17();
    iStack_1e0 = *(int *)(unaff_EBP + -0x3c);
    iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_1e8 = (undefined1 *)0x719bf1;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x719bf8;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int *)(unaff_EBP + -0xbc) != 0) {
      iStack_1d4 = 0x719c0f;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*(int *)(unaff_EBP + -0x88) != 0) {
      iStack_1d4 = 0x719c27;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_1d4 = 0x719c38;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719c43;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x719c53;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x719c5e;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x719c6a;
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (piVar5 == (int *)0x0) {
      iStack_1d4 = 0x719c7f;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x1c);
    }
    iVar3 = *piVar5;
    iStack_1e0 = *(int *)(unaff_EBP + -0x74);
    iStack_1e4 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_1dc = *(undefined1 **)(unaff_EBP + -0x10c);
    iStack_1d8 = *(undefined4 *)(unaff_EBP + -0x108);
    iStack_1d4 = *(int *)(unaff_EBP + -0x104);
    puStack_1e8 = (undefined1 *)0x130;
    *(int **)(unaff_EBP + -0x24) = piVar5;
    puStack_1f0 = (undefined4 *)0x719ca8;
    piStack_1ec = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_1f0 = (undefined4 *)&DAT_00963cc8;
      iStack_1f4 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_1fc = 0x719cba;
      iStack_1f8 = iVar3;
      FUN_00878e09();
    }
    puStack_1f0 = (undefined4 *)(unaff_EBP + -0x10c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1f4 = 0x719cca;
    puStack_1f0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f0 < 0) {
      iStack_1f4 = 0x719cd5;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x70);
    if ((int)*(char *)(*(int *)(iVar3 + 4) + 0x20) != *(int *)(unaff_EBP + -0x90)) {
      puStack_1f0 = &DAT_00980690;
      iStack_1f4 = 0x719cf7;
      FUN_00403191();
      puStack_1f0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_1f4 = 0x719d07;
      FUN_00403191();
      cVar1 = *(char *)(*(int *)(iVar3 + 4) + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (cVar1 < '\0') {
        puStack_1f0 = (undefined4 *)0xdeb;
        iStack_1f4 = unaff_EBP + -0xb8;
        iStack_1f8 = 0x719d2a;
        puVar6 = (undefined4 *)FUN_00679d22();
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      }
      else {
        puStack_1f0 = (undefined4 *)0xdec;
        iStack_1f4 = unaff_EBP + -0x80;
        iStack_1f8 = 0x719d47;
        puVar6 = (undefined4 *)FUN_00679d22();
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 2;
        *(undefined4 *)(unaff_EBP + -4) = 0x2e;
      }
      uVar2 = *puVar6;
      puStack_1f0 = (undefined4 *)(unaff_EBP + -0x14c);
      iStack_1f4 = unaff_EBP + -300;
      iStack_1fc = unaff_EBP + -0xa8;
      iStack_1f8 = 6;
      FUN_007d4a9a();
      *(undefined4 *)(unaff_EBP + -4) = 0x2f;
      iStack_1f8 = 0x719d80;
      iStack_1f8 = FUN_00449749();
      *(int **)(unaff_EBP + -0x70) = &iStack_1fc;
      iStack_1fc = extraout_ECX_01;
      FUN_00448a17(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x3c);
      uVar8 = 0x175;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_004115d9(0x175,uVar2);
      FUN_00448e3a(uVar8,uVar2);
      puStack_1f0 = (undefined4 *)0x719db3;
      FUN_004497b5();
      *(undefined4 *)(unaff_EBP + -4) = 0x2d;
      if ((*(byte *)(unaff_EBP + -0x14) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
        puStack_1f0 = (undefined4 *)0x719dcc;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x2c;
      if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
        puStack_1f0 = (undefined4 *)0x719de8;
        FUN_00414ebb();
      }
      puStack_1f0 = (undefined4 *)(unaff_EBP + -300);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_1f4 = 0x719df8;
      puStack_1f0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1f0 < 0) {
        iStack_1f4 = 0x719e03;
        FUN_00878dfb();
      }
      puStack_1f0 = (undefined4 *)(unaff_EBP + -0x14c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1f4 = 0x719e13;
      puStack_1f0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1f0 < 0) {
        iStack_1f4 = 0x719e1e;
        FUN_00878dfb();
      }
    }
    iVar7 = *(int *)(iVar3 + 4);
    puStack_1f0 = (undefined4 *)0x3bc;
    iStack_1f4 = unaff_EBP + -0xa0;
    iStack_1f8 = 0x719e37;
    puVar6 = (undefined4 *)FUN_00679d22();
    iStack_1f4 = *puVar6;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    puStack_1f0 = *(undefined4 **)(iVar7 + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_1f8 = unaff_EBP + -0x58;
    iStack_1fc = 0x719e4e;
    puStack_1f0 = (undefined4 *)FUN_00434e21();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    iStack_1f4 = 0x719e5e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_1f0 = (undefined4 *)0x719e6a;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    puStack_1f0 = (undefined4 *)0x719e79;
    FUN_00414ebb();
    puStack_1f0 = (undefined4 *)0x1;
    iStack_1f4 = *(undefined4 *)(*(int *)(iVar3 + 4) + 8);
    iStack_1f8 = unaff_EBP + -0x5c;
    iStack_1fc = 0x719e8a;
    FUN_007d3546();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    iVar3 = *(int *)(iVar3 + 4);
    iVar7 = *(int *)(iVar3 + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (iVar7 < 100000) {
      iStack_1f4 = unaff_EBP + -0x84;
      puStack_1f0 = (undefined4 *)0x2c;
      iStack_1f8 = 0x719eaf;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_1d4 = 0x719ebb;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 (IBinding *)*puVar6);
      piVar5 = *(int **)(unaff_EBP + -0x84);
    }
    else if (*(int *)(iVar3 + 8) < 1000000) {
      iStack_1f4 = unaff_EBP + -0x8c;
      puStack_1f0 = (undefined4 *)0x2d;
      iStack_1f8 = 0x719edd;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_1d4 = 0x719ee9;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 (IBinding *)*puVar6);
      piVar5 = *(int **)(unaff_EBP + -0x8c);
    }
    else if (*(int *)(iVar3 + 8) < 10000000) {
      iStack_1f4 = unaff_EBP + -0x7c;
      puStack_1f0 = (undefined4 *)0x2e;
      iStack_1f8 = 0x719f08;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_1d4 = 0x719f14;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 (IBinding *)*puVar6);
      piVar5 = *(int **)(unaff_EBP + -0x7c);
    }
    else if (*(int *)(iVar3 + 8) < 100000000) {
      iStack_1f4 = unaff_EBP + -0x20;
      puStack_1f0 = (undefined4 *)0x2f;
      iStack_1f8 = 0x719f2d;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_1d4 = 0x719f39;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 (IBinding *)*puVar6);
      piVar5 = *(int **)(unaff_EBP + -0x20);
    }
    else if (*(int *)(iVar3 + 8) < 1000000000) {
      iStack_1f4 = unaff_EBP + -0x10;
      puStack_1f0 = (undefined4 *)0x30;
      iStack_1f8 = 0x719f52;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_1d4 = 0x719f5e;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 (IBinding *)*puVar6);
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    else {
      iStack_1f4 = unaff_EBP + -0x6c;
      puStack_1f0 = (undefined4 *)0x31;
      iStack_1f8 = 0x719f6e;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_1d4 = 0x719f7a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 (IBinding *)*puVar6);
      piVar5 = *(int **)(unaff_EBP + -0x6c);
    }
    if (piVar5 != (int *)0x0) {
      iStack_1d4 = 0x719f87;
      (**(code **)(*piVar5 + 8))();
    }
    iStack_1d4 = 0x719f93;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_1d4 = 0x719fa6;
    iStack_1d8 = FUN_00449713();
    *(int **)(unaff_EBP + -0x70) = &iStack_1d4;
    puStack_1dc = (undefined1 *)0x719fb2;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_1d8 = 0x719fbe;
    FUN_0044974c();
    iStack_1d8 = 0x719fc5;
    iVar3 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_1d4 = 0x719fde;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_1d4 = 0x719fe9;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x719ff5;
    FUN_00403191();
    iStack_1d4 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_1d8 = 0x71a007;
    FUN_004031b7();
    iStack_1d4 = unaff_EBP + -0x18c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    iStack_1d8 = 0x71a021;
    iStack_1d8 = FUN_00449749();
    puStack_1dc = (undefined1 *)0x71a02a;
    iStack_1e0 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x70) = &puStack_1dc;
    iStack_1e4 = 0x71a036;
    puStack_1dc = extraout_ECX_02;
    FUN_00448a17();
    iStack_1e0 = *(int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    puStack_1e8 = (undefined1 *)0x71a046;
    iStack_1e4 = 0xff - iVar3;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x71a04d;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_1d4 = 0x71a05d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x71a068;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_1d4 = 0x71a078;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x71a083;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      iStack_1d4 = 0x71a094;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
      iStack_1d4 = 0x71a0c9;
      (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 0x16;
    iVar3 = *(int *)(unaff_EBP + -0x68);
    uVar4 = *(uint *)(unaff_EBP + -0x18);
  }
  iStack_1d4 = unaff_EBP + -0x6c;
  iStack_1d8 = 0x71a0f0;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  iStack_1d4 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_1d8 = 0x71a104;
  FUN_00434e21();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_1d4 = 0x71a113;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71a137;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a141;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a14d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_1d4 = 0x71a157;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71a161;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a16d;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x50;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_1e0 = 0x71a184;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  iStack_1d8 = 0x71a191;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71a19a;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1dc;
  iStack_1e4 = 0x71a1a6;
  FUN_00448a17();
  iStack_1e0 = 0x55;
  iStack_1e4 = 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  puStack_1e8 = (undefined1 *)0x71a1b6;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71a1bd;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a1ce;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_1d4 = 0x71a1db;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a1e6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a1f3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a1fe;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x71a204;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a20e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a21a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_1d4 = 0x71a22a;
  iStack_1d8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_1d4;
  puStack_1dc = (undefined1 *)0x71a236;
  FUN_00448a17();
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  iStack_1e0 = 0x71a245;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  iStack_1d8 = 0x71a252;
  FUN_0044974c();
  iStack_1d8 = 0x71a259;
  uVar2 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a26d;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a27a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a285;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 3;
  iStack_1d4 = unaff_EBP + -0x7c;
  iStack_1d8 = 0x71a2a1;
  uVar2 = FUN_0045a1d8();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_1d4 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  iStack_1d8 = 0x71a2b8;
  piVar5 = (int *)FUN_00679d22();
  iStack_1d4 = *piVar5;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  iStack_1d8 = unaff_EBP + -0x18;
  puStack_1dc = (undefined1 *)0x71a2d1;
  FUN_00434e21();
  iStack_1d4 = 0x71a2dd;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71a307;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71a311;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a31d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  iStack_1d4 = 0x71a327;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a331;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a33d;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  iStack_1d8 = 0x71a357;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71a360;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1dc;
  iStack_1e4 = 0x71a36c;
  FUN_00448a17();
  iStack_1e0 = 0x55;
  iStack_1e4 = *(int *)(unaff_EBP + -0x14) + 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  puStack_1e8 = (undefined1 *)0x71a381;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71a388;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  iStack_1d4 = 0x71a395;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a3a0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a3ad;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a3b8;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x71a3be;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a3c8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a3d4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  iStack_1d4 = 0x71a3e4;
  iStack_1d8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x10) = &iStack_1d4;
  puStack_1dc = (undefined1 *)0x71a3f0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  iStack_1d8 = 0x71a402;
  FUN_0044974c();
  iStack_1d8 = 0x71a409;
  iVar3 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a419;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a424;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 3;
  iStack_1d4 = unaff_EBP + -0x10;
  iStack_1d8 = 0x71a438;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_1d4 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  iStack_1d8 = 0x71a44c;
  FUN_00434e21();
  iStack_1d4 = 0x71a457;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71a475;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71a47f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a48b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iStack_1d4 = 0x71a495;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a49f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a4ab;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iStack_1e0 = 0x71a4c2;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  iStack_1d8 = 0x71a4cf;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71a4d8;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1dc;
  iStack_1e4 = 0x71a4e4;
  FUN_00448a17();
  iStack_1e0 = 0x55;
  iStack_1e4 = *(int *)(unaff_EBP + -0x14) + 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  puStack_1e8 = (undefined1 *)0x71a4f9;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71a500;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a511;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iStack_1d4 = 0x71a51e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a529;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a536;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a541;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x10;
  iStack_1d8 = 0x71a551;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_1d4 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iStack_1d8 = 0x71a565;
  FUN_00434e21();
  iStack_1d4 = 0x71a570;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71a58e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71a598;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a5a4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  iStack_1d4 = 0x71a5ae;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a5b8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a5c4;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  iStack_1e0 = 0x71a5db;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  iStack_1d8 = 0x71a5e8;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71a5f1;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1dc;
  iStack_1e4 = 0x71a5fd;
  FUN_00448a17();
  iStack_1e0 = 99;
  iStack_1e4 = 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  puStack_1e8 = (undefined1 *)0x71a60d;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71a614;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a625;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  iStack_1d4 = 0x71a632;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a63d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a64a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a655;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x71a65b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a665;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a671;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  iStack_1d4 = 0x71a681;
  iStack_1d8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_1d4;
  puStack_1dc = (undefined1 *)0x71a68d;
  FUN_00448a17();
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  iStack_1e0 = 0x71a69c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x60;
  iStack_1d8 = 0x71a6a9;
  FUN_0044974c();
  iStack_1d8 = 0x71a6b0;
  uVar2 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a6c4;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a6d1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a6dc;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x68) + 0xd8);
  iStack_1d4 = unaff_EBP + -0x20;
  iStack_1d8 = 0x71a6f8;
  piVar5 = (int *)FUN_00679d22();
  iStack_1d4 = *piVar5;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  iStack_1d8 = unaff_EBP + -0x18;
  puStack_1dc = (undefined1 *)0x71a70f;
  FUN_00434e21();
  iStack_1d4 = 0x71a71b;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x61;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71a739;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71a743;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a74f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 99;
  iStack_1d4 = 0x71a759;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a763;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a76f;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 6;
  *(undefined1 *)(unaff_EBP + -4) = 100;
  iStack_1e0 = 0x71a786;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  iStack_1d8 = 0x71a793;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71a79c;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1dc;
  iStack_1e4 = 0x71a7a8;
  FUN_00448a17();
  iStack_1e0 = 99;
  iStack_1e4 = *(int *)(unaff_EBP + -0x14) + 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  puStack_1e8 = (undefined1 *)0x71a7bd;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71a7c4;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 100;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a7d5;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 99;
  iStack_1d4 = 0x71a7e2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a7ed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a7fa;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a805;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x71a80b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a815;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a821;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  iStack_1d4 = 0x71a831;
  iStack_1d8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_1d4;
  puStack_1dc = (undefined1 *)0x71a83d;
  FUN_00448a17();
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  iStack_1e0 = 0x71a84c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  iStack_1d8 = 0x71a859;
  FUN_0044974c();
  iStack_1d8 = 0x71a860;
  iVar3 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a874;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a881;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a88c;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x10;
  iStack_1d8 = 0x71a89c;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_1d4 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x6c;
  iStack_1d8 = 0x71a8b0;
  FUN_00434e21();
  iStack_1d4 = 0x71a8bb;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x6b;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71a8d9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71a8e3;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a8ef;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
  iStack_1d4 = 0x71a8f9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a903;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a90f;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  iStack_1e0 = 0x71a926;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x6f;
  iStack_1d8 = 0x71a933;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71a93c;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1dc;
  iStack_1e4 = 0x71a948;
  FUN_00448a17();
  iStack_1e0 = 99;
  iStack_1e4 = *(int *)(unaff_EBP + -0x14) + 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x6f;
  puStack_1e8 = (undefined1 *)0x71a95d;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71a964;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71a975;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
  iStack_1d4 = 0x71a982;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a98d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71a99a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a9a5;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x71a9ab;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71a9b5;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71a9c1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x71;
  iStack_1d4 = 0x71a9d1;
  iStack_1d8 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_1d4;
  puStack_1dc = (undefined1 *)0x71a9dd;
  FUN_00448a17();
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x72;
  iStack_1e0 = 0x71a9ec;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x74;
  iStack_1d8 = 0x71a9f9;
  FUN_0044974c();
  iStack_1d8 = 0x71aa00;
  FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x71;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71aa11;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71aa1e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71aa29;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x10;
  iStack_1d8 = 0x71aa39;
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_1d4 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x76;
  iStack_1d8 = 0x71aa4d;
  FUN_00434e21();
  iStack_1d4 = 0x71aa58;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x75;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  iStack_1d4 = 0x71aa76;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_1d4 = unaff_EBP + -0x50;
  iStack_1d8 = 0x71aa80;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71aa8c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  iStack_1d4 = 0x71aa96;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1d4 = unaff_EBP + -0x34;
  iStack_1d8 = 0x71aaa0;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71aaac;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)(unaff_EBP + -0x10);
  iStack_1d8 = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  iStack_1e0 = 0x71aac3;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  iStack_1d8 = 0x71aad0;
  iStack_1d8 = FUN_00449749();
  puStack_1dc = (undefined1 *)0x71aad9;
  iStack_1e0 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1dc;
  iStack_1e4 = 0x71aae5;
  FUN_00448a17();
  iStack_1e0 = 0x71;
  iStack_1e4 = 0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x79;
  puStack_1e8 = (undefined1 *)0x71aaf5;
  FUN_004115d9();
  puStack_1e8 = (undefined1 *)0x71aafc;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x78;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1d4 = 0x71ab0d;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x77;
  iStack_1d4 = 0x71ab1a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71ab25;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_1d4 = 0x71ab32;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x71ab3d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x74) != (int *)0x0) {
    iStack_1d4 = 0x71ab5a;
    (**(code **)(**(int **)(unaff_EBP + -0x74) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_1d4 = 0x71ab6b;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



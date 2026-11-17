/* FUN_0071e7d1 - 0x0071e7d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071e7d1(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int *piStack_1b0;
  undefined1 *puStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int *piStack_198;
  undefined4 uStack_184;
  int iStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 *puStack_174;
  
  FUN_00879bb8();
  puStack_174 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -100) = extraout_ECX;
  uStack_178 = 0x71e7f1;
  FUN_0081622a();
  puStack_174 = (undefined4 *)(unaff_EBP + 8);
  uStack_178 = 0x71e7fc;
  FUN_00448dc6();
  iVar1 = *(int *)(extraout_ECX + 0x570);
  iVar5 = *(int *)(*(int *)(extraout_ECX + 0x70) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar5 = iVar1 - iVar5;
  *(int *)(unaff_EBP + -0x18) = iVar5;
  if (((iVar1 != -1) && (-1 < iVar5)) && (iVar5 < 3)) {
    puStack_174 = &DAT_00980690;
    uStack_178 = 0x71e842;
    FUN_00403191();
    puStack_174 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_178 = 0x71e84f;
    FUN_00403191();
    puStack_174 = (undefined4 *)0x0;
    uStack_178 = 0;
    iStack_17c = unaff_EBP + -0x60;
    iStack_180 = unaff_EBP + -0x3c;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_184;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_17c = 0x71e896;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      puStack_174 = (undefined4 *)(unaff_EBP + -0x14);
      uStack_178 = 0x71e8ac;
      puStack_174 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
        uStack_178 = 0x71e8bd;
        FUN_00878dfb();
      }
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_178 = 0x71e8ca;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      uStack_178 = 0x71e8d5;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_178 = 0x71e8e2;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      uStack_178 = 0x71e8ed;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_178 = 0x71e8fa;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      uStack_178 = 0x71e905;
      FUN_00878dfb();
    }
    puStack_174 = (undefined4 *)0x3;
    uStack_178 = 0xff;
    iStack_17c = 0x71e917;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar4 == (int *)0x0) {
      puStack_174 = (undefined4 *)0x80004003;
      uStack_178 = 0x71e92c;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    uStack_184 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_180 = *(undefined4 *)(unaff_EBP + -0xa0);
    iStack_17c = *(int *)(unaff_EBP + -0x9c);
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x98);
    *(int **)(unaff_EBP + -0x24) = piVar4;
    puStack_174 = *(undefined4 **)(unaff_EBP + -0x94);
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_174 = (undefined4 *)&DAT_00963cc8;
      uStack_178 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_180 = 0x71e96b;
      iStack_17c = iVar1;
      FUN_00878e09();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_178 = 0x71e97b;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      uStack_178 = 0x71e986;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_174 = (undefined4 *)0x71e992;
    FUN_004125e6();
  }
  puStack_174 = &DAT_00980690;
  uStack_178 = 0x71e9a5;
  FUN_00403191();
  puStack_174 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_178 = 0x71e9b5;
  FUN_00403191();
  puStack_174 = (undefined4 *)0x0;
  uStack_178 = 0;
  iStack_17c = unaff_EBP + -0x110;
  iStack_180 = unaff_EBP + -0xa0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_184;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_17c = 0x71ea05;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x88) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  if (iVar1 != 0) {
    puStack_174 = (undefined4 *)(unaff_EBP + -0x88);
    uStack_178 = 0x71ea21;
    puStack_174 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
      uStack_178 = 0x71ea32;
      FUN_00878dfb();
    }
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x140);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_178 = 0x71ea42;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ea4d;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_178 = 0x71ea5d;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ea68;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x110);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_178 = 0x71ea78;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ea83;
    FUN_00878dfb();
  }
  puStack_174 = &DAT_00980690;
  uStack_178 = 0x71ea8f;
  FUN_00403191();
  puStack_174 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_178 = 0x71ea9f;
  FUN_00403191();
  puStack_174 = (undefined4 *)0x0;
  uStack_178 = 0;
  iStack_17c = unaff_EBP + -0xf0;
  iStack_180 = unaff_EBP + -0xe0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_184;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_17c = 0x71eaef;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x8c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (iVar1 != 0) {
    puStack_174 = (undefined4 *)(unaff_EBP + -0x8c);
    uStack_178 = 0x71eb0b;
    puStack_174 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
      uStack_178 = 0x71eb1c;
      FUN_00878dfb();
    }
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x170);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_178 = 0x71eb2c;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71eb37;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_178 = 0x71eb47;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71eb52;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_178 = 0x71eb62;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71eb6d;
    FUN_00878dfb();
  }
  puStack_174 = &DAT_00980690;
  uStack_178 = 0x71eb79;
  FUN_00403191();
  puStack_174 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_178 = 0x71eb89;
  FUN_00403191();
  puStack_174 = (undefined4 *)0x0;
  uStack_178 = 0;
  iStack_17c = unaff_EBP + -0x100;
  iStack_180 = unaff_EBP + -0x130;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_184;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_184 = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_17c = 0x71ebd9;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x84) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar1 != 0) {
    puStack_174 = (undefined4 *)(unaff_EBP + -0x84);
    uStack_178 = 0x71ebf5;
    puStack_174 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
      uStack_178 = 0x71ec06;
      FUN_00878dfb();
    }
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x160);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_178 = 0x71ec16;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ec21;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x130);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_178 = 0x71ec31;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ec3c;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_178 = 0x71ec4c;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ec57;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  do {
    if (*(int *)(DAT_0097be0c + 0x5f0) == 2) {
      puStack_174 = (undefined4 *)0x3;
      uStack_178 = 0xff;
      iStack_17c = 0x71ec77;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      if (piVar4 == (int *)0x0) {
        puStack_174 = (undefined4 *)0x80004003;
        uStack_178 = 0x71ec8c;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      uStack_184 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_180 = *(int *)(unaff_EBP + -0x3c);
      iStack_17c = *(int *)(unaff_EBP + -0x38);
      uStack_178 = *(undefined4 *)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + -0x14) = piVar4;
      puStack_174 = *(undefined4 **)(unaff_EBP + -0x30);
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_174 = (undefined4 *)&DAT_00963cc8;
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_180 = 0x71ecc8;
        iStack_17c = iVar1;
        FUN_00878e09();
      }
      puStack_174 = (undefined4 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      uStack_178 = 0x71ecd5;
      puStack_174 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_174 < 0) {
        uStack_178 = 0x71ece0;
        FUN_00878dfb();
      }
    }
    puStack_174 = (undefined4 *)0x3;
    uStack_178 = 0xff;
    iStack_17c = 0x71ecef;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (piVar4 == (int *)0x0) {
      puStack_174 = (undefined4 *)0x80004003;
      uStack_178 = 0x71ed04;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    uStack_184 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_180 = *(int *)(unaff_EBP + -0x60);
    iStack_17c = *(int *)(unaff_EBP + -0x5c);
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    puStack_174 = *(undefined4 **)(unaff_EBP + -0x54);
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_174 = (undefined4 *)&DAT_00963cc8;
      uStack_178 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_180 = 0x71ed43;
      iStack_17c = iVar1;
      FUN_00878e09();
    }
    puStack_174 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    uStack_178 = 0x71ed50;
    puStack_174 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_174 < 0) {
      uStack_178 = 0x71ed5b;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_174 = (undefined4 *)0x3;
      uStack_178 = 0xff;
      iStack_17c = 0x71ed73;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piVar4 == (int *)0x0) {
        puStack_174 = (undefined4 *)0x80004003;
        uStack_178 = 0x71ed88;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      uStack_184 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_180 = *(int *)(unaff_EBP + -0xc0);
      iStack_17c = *(int *)(unaff_EBP + -0xbc);
      uStack_178 = *(undefined4 *)(unaff_EBP + -0xb8);
      *(int **)(unaff_EBP + -0x14) = piVar4;
      puStack_174 = *(undefined4 **)(unaff_EBP + -0xb4);
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_174 = (undefined4 *)&DAT_00963cc8;
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_180 = 0x71edbf;
        iStack_17c = iVar1;
        FUN_00878e09();
      }
      puStack_174 = (undefined4 *)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      uStack_178 = 0x71edcf;
      puStack_174 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_174 < 0) {
        uStack_178 = 0x71edda;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
  } while (*(int *)(unaff_EBP + -0x20) < 3);
  puStack_174 = &DAT_00980690;
  uStack_178 = 0x71edf3;
  FUN_00403191();
  puStack_174 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_178 = 0x71ee03;
  FUN_00403191();
  puStack_174 = (undefined4 *)0x0;
  uStack_178 = 0;
  iStack_17c = unaff_EBP + -0x120;
  iStack_180 = unaff_EBP + -0xc0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_184;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_17c = 0x71ee58;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x7c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar1 != 0) {
    puStack_174 = (undefined4 *)(unaff_EBP + -0x7c);
    uStack_178 = 0x71ee6e;
    puStack_174 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
      uStack_178 = 0x71ee7f;
      FUN_00878dfb();
    }
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x150);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  uStack_178 = 0x71ee8f;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71ee9a;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  uStack_178 = 0x71eeaa;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71eeb5;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x120);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  uStack_178 = 0x71eec5;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x71eed0;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)0x3;
  uStack_178 = 0xff;
  iStack_17c = 0x71eedf;
  FUN_004031b7();
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (piVar4 == (int *)0x0) {
    puStack_174 = (undefined4 *)0x80004003;
    uStack_178 = 0x71eef4;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar4;
  uStack_184 = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_180 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_17c = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_178 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = piVar4;
  puStack_174 = *(undefined4 **)(unaff_EBP + -0x30);
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    piStack_198 = *(int **)(unaff_EBP + -0x14);
    iStack_1a0 = 0x71ef2b;
    iStack_19c = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_198 = (int *)0x71ef38;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_198 = (int *)0x71ef45;
    FUN_00878dfb();
  }
  if (*(int *)(DAT_0097be0c + 0x5f0) == 2) {
    piStack_198 = (int *)0x71ef60;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_198 = (int *)0x71ef6d;
    FUN_00403191();
    piStack_198 = (int *)0x0;
    iStack_19c = unaff_EBP + -0x60;
    iStack_1a0 = unaff_EBP + -0x3c;
    puStack_1ac = (undefined1 *)&uStack_1a4;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_1a4;
    iStack_1a8 = 0xff4;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_1b0 = (int *)0x71ef91;
    FUN_00679e4e();
    iStack_1a8 = unaff_EBP + -0x74;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_1ac = (undefined1 *)0x71ef9e;
    FUN_00405a1d();
    puStack_1ac = (undefined1 *)0x71efa5;
    FUN_00402660();
    puStack_1ac = (undefined1 *)0x71efac;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_19c = 0x71efb7;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      piStack_198 = (int *)0x71efcd;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        piStack_198 = (int *)0x71efde;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_198 = (int *)0x71efeb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71eff6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    piStack_198 = (int *)0x71f003;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f00e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    piStack_198 = (int *)0x71f01b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f026;
      FUN_00878dfb();
    }
    piStack_198 = (int *)0xff;
    iStack_19c = 0x71f038;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (piVar4 == (int *)0x0) {
      piStack_198 = (int *)0x71f04d;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar4;
    uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_1a0 = *(undefined4 *)(unaff_EBP + -0xb0);
    iStack_19c = *(int *)(unaff_EBP + -0xac);
    iStack_1a8 = 0xc3;
    piStack_198 = *(int **)(unaff_EBP + -0xa8);
    puStack_1ac = (undefined1 *)0x11;
    *(int **)(unaff_EBP + -0x18) = piVar4;
    iStack_1b4 = 0x71f075;
    piStack_1b0 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      piStack_198 = *(int **)(unaff_EBP + -0x18);
      iStack_1a0 = 0x71f087;
      iStack_19c = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    piStack_198 = (int *)0x71f097;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f0a2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_004125e6();
  }
  *(undefined4 *)(unaff_EBP + -0x80) =
       *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -100) + 0x70) + 0x38);
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978354;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0x38;
  do {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x80) + *(int *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    do {
      if (*(int *)(unaff_EBP + -0x2c) == 3) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        piStack_198 = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        iStack_19c = 0x71f108;
        puVar2 = (undefined4 *)FUN_00679d22();
        piStack_198 = (int *)*puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_19c = unaff_EBP + -0x10;
        iStack_1a0 = 0x71f11b;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        FUN_00414ebb();
        piStack_198 = (int *)0xff;
        iStack_19c = 0x71f139;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        piStack_198 = (int *)0x71f146;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        piStack_198 = (int *)0x71f156;
        FUN_00403191();
        piStack_198 = (int *)0x0;
        iStack_19c = -1;
        iStack_1a0 = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        uStack_1a4 = 0;
        iStack_1a8 = 0;
        puStack_1ac = (undefined1 *)0x71f169;
        (*DAT_0097b4c8)();
        puStack_1ac = (undefined1 *)0x71f176;
        FUN_0087a1b0();
        puStack_1ac = (undefined1 *)0x0;
        piStack_1b0 = (int *)0x0;
        iStack_1b4 = unaff_EBP + -0x3c;
        iStack_1b8 = unaff_EBP + -0xb0;
        uStack_1bc = 0xffffffff;
        uVar3 = FUN_00449713(&iStack_1a8);
        uVar3 = FUN_00456ad5(uVar3);
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_1bc;
        FUN_004033a1(uVar3);
        iVar1 = unaff_EBP + -0xd0;
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        FUN_00405a1d(iVar1);
        FUN_00402660();
        FUN_00404a02(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        iStack_1b4 = 0x71f1cc;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x90) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar1 != 0) {
          puStack_1ac = (undefined1 *)(unaff_EBP + -0x90);
          piStack_1b0 = (int *)0x71f1e8;
          puStack_1ac = (undefined1 *)FUN_0041a581();
          if (((int)puStack_1ac < 0) && (puStack_1ac != (undefined1 *)0x80004002)) {
            piStack_1b0 = (int *)0x71f1f9;
            FUN_00878dfb();
          }
        }
        *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x18);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        if (piVar4 == (int *)0x0) {
          puStack_1ac = (undefined1 *)0x80004003;
          piStack_1b0 = (int *)0x71f214;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar1 = *piVar4;
        uStack_1bc = *(undefined4 *)(unaff_EBP + -0x40);
        iStack_1b8 = *(undefined4 *)(unaff_EBP + -0x60);
        iStack_1b4 = *(undefined4 *)(unaff_EBP + -0x5c);
        piStack_1b0 = *(int **)(unaff_EBP + -0x58);
        *(int **)(unaff_EBP + -0x28) = piVar4;
        puStack_1ac = *(undefined1 **)(unaff_EBP + -0x54);
        iVar1 = (**(code **)(iVar1 + 0x80))(piVar4,0x92,*(undefined4 *)(unaff_EBP + -0x24));
        if (iVar1 < 0) {
          piStack_198 = *(int **)(unaff_EBP + -0x28);
          iStack_1a0 = 0x71f24c;
          iStack_19c = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_198 = (int *)0x71f25d;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        piStack_198 = (int *)0x71f26d;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_198 = (int *)0x71f278;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        piStack_198 = (int *)0x71f288;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_198 = (int *)0x71f293;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        piStack_198 = (int *)0x71f2a0;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_198 = (int *)0x71f2ab;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        piStack_198 = (int *)0x71f2b8;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_198 = (int *)0x71f2c3;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_00414ebb();
      }
      else {
        piStack_198 = *(int **)(unaff_EBP + -0x14);
        iStack_19c = 0x71f2e2;
        iVar1 = FUN_00598e2f();
        if (iVar1 != 0) {
          piStack_198 = (int *)0x71f2f6;
          iVar1 = FUN_0064d61f();
          if (iVar1 != 0) {
            piStack_198 = (int *)0xff;
            iStack_19c = 0x71f30f;
            FUN_004031b7();
            *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar1 + 0x90);
            piVar4 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0x3f;
            if (piVar4 == (int *)0x0) {
              piStack_198 = (int *)0x71f32d;
              FUN_00878dfb();
              piVar4 = *(int **)(unaff_EBP + 8);
            }
            iVar1 = *piVar4;
            uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x28);
            iStack_1a8 = *(int *)(unaff_EBP + -0x24);
            iStack_1a0 = *(undefined4 *)(unaff_EBP + -0x74);
            iStack_19c = *(int *)(unaff_EBP + -0x70);
            piStack_198 = *(int **)(unaff_EBP + -0x6c);
            puStack_1ac = (undefined1 *)(*(int *)(unaff_EBP + -0x2c) * 0x25 + 0x14);
            *(int **)(unaff_EBP + -0x40) = piVar4;
            iStack_1b4 = 0x71f358;
            piStack_1b0 = piVar4;
            iVar1 = (**(code **)(iVar1 + 0x80))();
            if (iVar1 < 0) {
              piStack_198 = *(int **)(unaff_EBP + -0x40);
              iStack_1a0 = 0x71f36a;
              iStack_19c = iVar1;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            piStack_198 = (int *)0x71f377;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_198 = (int *)0x71f382;
              FUN_00878dfb();
            }
          }
        }
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    } while (*(int *)(unaff_EBP + -0x2c) < 4);
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x2d;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
  } while (*(int *)(unaff_EBP + -0x24) < 0xbf);
  if (*(int *)(*(int *)(unaff_EBP + -100) + 0x570) != -1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_198 = (int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iStack_19c = 0x71f3cf;
    puVar2 = (undefined4 *)FUN_00679d22();
    piStack_198 = (int *)*puVar2;
    iStack_19c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    iStack_1a0 = 0x71f3e5;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    FUN_00414ebb();
    piStack_198 = (int *)0xff;
    iStack_19c = 0x71f403;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    piStack_198 = (int *)0x71f413;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_198 = (int *)(unaff_EBP + -0x3c);
    iStack_19c = 0x71f41d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f429;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_198 = (int *)0x71f433;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    piStack_198 = (int *)(unaff_EBP + -0x60);
    iStack_19c = 0x71f43d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f449;
      FUN_00878dfb();
    }
    piStack_198 = (int *)0x0;
    iStack_19c = -1;
    iStack_1a0 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    uStack_1a4 = 0;
    iStack_1a8 = 0;
    puStack_1ac = (undefined1 *)0x71f45c;
    (*DAT_0097b4c8)();
    puStack_1ac = (undefined1 *)0x71f469;
    FUN_0087a1b0();
    puStack_1ac = (undefined1 *)0x0;
    piStack_1b0 = (int *)0x0;
    iStack_1b4 = unaff_EBP + -0x3c;
    iStack_1b8 = unaff_EBP + -0x60;
    uStack_1bc = 0xffffffff;
    uVar3 = FUN_00449713(&iStack_1a8);
    uVar3 = FUN_00456ad5(uVar3);
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_1bc;
    FUN_004033a1(uVar3);
    iVar1 = unaff_EBP + -0xd0;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    iStack_1b4 = 0x71f4bc;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar1 != 0) {
      puStack_1ac = (undefined1 *)(unaff_EBP + -0x1c);
      piStack_1b0 = (int *)0x71f4d2;
      puStack_1ac = (undefined1 *)FUN_0041a581();
      if (((int)puStack_1ac < 0) && (puStack_1ac != (undefined1 *)0x80004002)) {
        piStack_1b0 = (int *)0x71f4e3;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
    if (*(int *)(unaff_EBP + 8) == 0) {
      puStack_1ac = (undefined1 *)0x80004003;
      piStack_1b0 = (int *)0x71f4fc;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + 8);
    uStack_1bc = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_1b8 = *(undefined4 *)(unaff_EBP + -0x74);
    iStack_1b4 = *(undefined4 *)(unaff_EBP + -0x70);
    piStack_1b0 = *(int **)(unaff_EBP + -0x6c);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x68);
    iVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,0x16,200);
    if (iVar1 < 0) {
      iStack_1a0 = 0x71f52e;
      iStack_19c = iVar1;
      piStack_198 = piVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_198 = (int *)0x71f53f;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    piStack_198 = (int *)0x71f54f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f55a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_198 = (int *)0x71f567;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f572;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    piStack_198 = (int *)0x71f57f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f58a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    piStack_198 = (int *)0x71f597;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_198 = (int *)0x71f5a2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    piStack_198 = (int *)0x71f5bf;
    (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    piStack_198 = (int *)0x71f5d0;
    (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    piStack_198 = (int *)0x71f5e1;
    (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    piStack_198 = (int *)0x71f5f2;
    (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_198 = (int *)0x71f603;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



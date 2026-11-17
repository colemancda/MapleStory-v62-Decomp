/* FUN_007e3c88 - 0x007e3c88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined1 * FUN_007e3c88(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  short *psVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  int iVar12;
  undefined1 *puVar13;
  int unaff_EBP;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004505d7();
  *(undefined4 *)(unaff_EBP + -0x58) = 0xffffffff;
  uVar5 = -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & 4;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(uint *)(unaff_EBP + -0x11c) = uVar5;
  *(uint *)(unaff_EBP + -0x2c) = uVar5;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  puStack_2e4 = (undefined1 *)0x7e3cdc;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_2e4 = (undefined1 *)0x7e3cec;
  FUN_00403191();
  puStack_2e4 = (undefined1 *)0x0;
  puStack_2e8 = (undefined1 *)(unaff_EBP + -0x1dc);
  iStack_2ec = unaff_EBP + -0x13c;
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_2f0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&uStack_2f0,0x8a2);
  iVar6 = unaff_EBP + -0x25c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar6);
  FUN_00402660();
  FUN_00404a02(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_2e8 = (undefined1 *)0x7e3d41;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xe0) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar6 != 0) {
    puStack_2e4 = (undefined1 *)0x7e3d5d;
    iVar6 = FUN_00404b30();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      puStack_2e4 = (undefined1 *)0x7e3d6e;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2e4 = (undefined1 *)0x7e3d7e;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3d89;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_2e4 = (undefined1 *)0x7e3d99;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3da4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_2e4 = (undefined1 *)0x7e3db4;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3dbf;
    FUN_00878dfb();
  }
  puStack_2e4 = (undefined1 *)0x7e3dcb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_2e4 = (undefined1 *)0x7e3ddb;
  FUN_00403191();
  puStack_2e4 = (undefined1 *)0x0;
  puStack_2e8 = (undefined1 *)(unaff_EBP + -0x1ec);
  iStack_2ec = unaff_EBP + -0x16c;
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_2f0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00679e4e(&uStack_2f0,0x684);
  iVar6 = unaff_EBP + -0x2ac;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d(iVar6);
  FUN_00402660();
  FUN_00404a02(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_2e8 = (undefined1 *)0x7e3e2b;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xf8) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (iVar6 != 0) {
    puStack_2e4 = (undefined1 *)0x7e3e47;
    iVar6 = FUN_00404b30();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      puStack_2e4 = (undefined1 *)0x7e3e58;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_2e4 = (undefined1 *)0x7e3e68;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3e73;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_2e4 = (undefined1 *)0x7e3e83;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3e8e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_2e4 = (undefined1 *)0x7e3e9e;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3ea9;
    FUN_00878dfb();
  }
  puStack_2e4 = (undefined1 *)0x7e3eb5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_2e4 = (undefined1 *)0x7e3ec5;
  FUN_00403191();
  puStack_2e4 = (undefined1 *)0x0;
  puStack_2e8 = (undefined1 *)(unaff_EBP + -0x20c);
  iStack_2ec = unaff_EBP + -0x18c;
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_2f0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e(&uStack_2f0,0x8a3);
  iVar6 = unaff_EBP + -0x28c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar6);
  FUN_00402660();
  FUN_00404a02(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_2e8 = (undefined1 *)0x7e3f15;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x104) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  if (iVar6 != 0) {
    puStack_2e4 = (undefined1 *)0x7e3f31;
    iVar6 = FUN_00404b30();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      puStack_2e4 = (undefined1 *)0x7e3f42;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_2e4 = (undefined1 *)0x7e3f52;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3f5d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_2e4 = (undefined1 *)0x7e3f6d;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3f78;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_2e4 = (undefined1 *)0x7e3f88;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e3f93;
    FUN_00878dfb();
  }
  puStack_2e4 = (undefined1 *)0x7e3f9f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_2e4 = (undefined1 *)0x7e3faf;
  FUN_00403191();
  puStack_2e4 = (undefined1 *)0x0;
  puStack_2e8 = (undefined1 *)(unaff_EBP + -0x22c);
  iStack_2ec = unaff_EBP + -0x1ac;
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_2f0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_2f0 = extraout_ECX_00;
  FUN_00679e4e(&uStack_2f0,0xc52);
  iVar6 = unaff_EBP + -0x2cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00405a1d(iVar6);
  FUN_00402660();
  FUN_00404a02(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_2e8 = (undefined1 *)0x7e3fff;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10c) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar6 != 0) {
    puStack_2e4 = (undefined1 *)0x7e401b;
    iVar6 = FUN_00404b30();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      puStack_2e4 = (undefined1 *)0x7e402c;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_2e4 = (undefined1 *)0x7e403c;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e4047;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_2e4 = (undefined1 *)0x7e4057;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e4062;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_2e4 = (undefined1 *)0x7e4072;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    puStack_2e4 = (undefined1 *)0x7e407d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
switchD_007e4378_caseD_6:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      puVar13 = (undefined1 *)0x0;
                      puStack_2e4 = (undefined1 *)(unaff_EBP + 8);
                      puStack_2e8 = (undefined1 *)0x7e4094;
                      FUN_007e58c3();
                      if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) ||
                         (cVar1 = **(char **)(unaff_EBP + -0x10), cVar1 == '\0')) goto LAB_007e541c;
                      if ((cVar1 != '\r') && (cVar1 != '\\')) break;
                      iVar6 = **(int **)(unaff_EBP + 0xc);
                      if ((iVar6 != 0) && (*(int *)(iVar6 + -4) != 0)) {
                        *(undefined4 *)(*(int *)(iVar6 + -4) * 0x3c + -0xc + iVar6) = 1;
                      }
                      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
                    }
                    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x114);
                    puStack_2e8 = (undefined1 *)0x7e40cc;
                    FUN_00679d22();
                    *(undefined1 *)(unaff_EBP + -4) = 0x22;
                    puStack_2e4 = (undefined1 *)0x7e40d9;
                    iVar6 = FUN_0045ec92();
                    *(undefined1 *)(unaff_EBP + -4) = 0x21;
                    FUN_00414ebb();
                    if (iVar6 == 0) break;
                    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x11c);
                  }
                  puStack_2e4 = (undefined1 *)(unaff_EBP + -0x124);
                  puStack_2e8 = (undefined1 *)0x7e410c;
                  FUN_00679d22();
                  *(undefined1 *)(unaff_EBP + -4) = 0x23;
                  puStack_2e4 = (undefined1 *)0x7e4119;
                  iVar6 = FUN_0045ec92();
                  *(undefined1 *)(unaff_EBP + -4) = 0x21;
                  if (*(int *)(unaff_EBP + -0x124) != 0) {
                    puStack_2e4 = (undefined1 *)0x7e4132;
                    FUN_00434e38();
                  }
                  if (iVar6 == 0) break;
                  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
                }
                puStack_2e4 = (undefined1 *)(unaff_EBP + -0xc4);
                puStack_2e8 = (undefined1 *)0x7e4156;
                FUN_00679d22();
                *(undefined1 *)(unaff_EBP + -4) = 0x24;
                puStack_2e4 = (undefined1 *)0x7e4163;
                iVar6 = FUN_0045ec92();
                *(undefined1 *)(unaff_EBP + -4) = 0x21;
                if (*(int *)(unaff_EBP + -0xc4) != 0) {
                  puStack_2e4 = (undefined1 *)0x7e417c;
                  FUN_00434e38();
                }
                if (iVar6 == 0) break;
                *(undefined4 *)(unaff_EBP + -0x2c) = 2;
              }
              puStack_2e4 = (undefined1 *)(unaff_EBP + -300);
              puStack_2e8 = (undefined1 *)0x7e41a0;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 0x25;
              puStack_2e4 = (undefined1 *)0x7e41ad;
              iVar6 = FUN_0045ec92();
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (*(int *)(unaff_EBP + -300) != 0) {
                puStack_2e4 = (undefined1 *)0x7e41c6;
                FUN_00434e38();
              }
              if (iVar6 == 0) break;
              *(undefined4 *)(unaff_EBP + -0x2c) = 3;
            }
            puStack_2e4 = (undefined1 *)(unaff_EBP + -0x120);
            puStack_2e8 = (undefined1 *)0x7e41ea;
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            puStack_2e4 = (undefined1 *)0x7e41f7;
            iVar6 = FUN_0045ec92();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            if (*(int *)(unaff_EBP + -0x120) != 0) {
              puStack_2e4 = (undefined1 *)0x7e4210;
              FUN_00434e38();
            }
            if (iVar6 == 0) break;
            *(undefined4 *)(unaff_EBP + -0x2c) = 5;
          }
          puStack_2e4 = (undefined1 *)(unaff_EBP + -0xd0);
          puStack_2e8 = (undefined1 *)0x7e4234;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          puStack_2e4 = (undefined1 *)0x7e4241;
          iVar6 = FUN_0045ec92();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (*(int *)(unaff_EBP + -0xd0) != 0) {
            puStack_2e4 = (undefined1 *)0x7e425a;
            FUN_00434e38();
          }
          if (iVar6 == 0) break;
          *(undefined4 *)(unaff_EBP + -0x6c) = 1;
        }
        puStack_2e4 = (undefined1 *)(unaff_EBP + -0x100);
        puStack_2e8 = (undefined1 *)0x7e427e;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_2e4 = (undefined1 *)0x7e428b;
        iVar6 = FUN_0045ec92();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (*(int *)(unaff_EBP + -0x100) != 0) {
          puStack_2e4 = (undefined1 *)0x7e42a4;
          FUN_00434e38();
        }
        if (iVar6 == 0) break;
        *(undefined4 *)(unaff_EBP + -0x6c) = 0;
      }
      puStack_2e4 = (undefined1 *)(unaff_EBP + -0xd8);
      puStack_2e8 = (undefined1 *)0x7e42c4;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_2e4 = (undefined1 *)0x7e42d1;
      iVar6 = FUN_0045ec92();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int *)(unaff_EBP + -0xd8) != 0) {
        puStack_2e4 = (undefined1 *)0x7e42ea;
        FUN_00434e38();
      }
      if (iVar6 == 0) break;
      *(undefined4 *)(unaff_EBP + -0x58) = 0xffffffff;
    }
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
    puStack_2e8 = (undefined1 *)0x7e4309;
    FUN_00414f8b();
    puStack_2e4 = (undefined1 *)0x7e4311;
    iVar6 = FUN_007e5f64();
    *(int *)(unaff_EBP + -0x14) = iVar6;
    if (iVar6 != 6) break;
    *(uint *)(unaff_EBP + -0x38) = (uint)(*(int *)(unaff_EBP + -0x38) != 1);
  }
  piVar10 = *(int **)(unaff_EBP + 0xc);
  iVar6 = *piVar10;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + -4);
  }
  puStack_2e4 = (undefined1 *)0x0;
  puStack_2e8 = (undefined1 *)(iVar6 + 1);
  iStack_2ec = 0x7e4348;
  FUN_007eed16();
  iVar6 = *piVar10;
  if (iVar6 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(iVar6 + -4);
  }
  puVar11 = (undefined4 *)(iVar12 * 0x3c + -0x3c + iVar6);
  puVar11[2] = *(undefined4 *)(unaff_EBP + -0x34);
  puVar11[10] = *(undefined4 *)(unaff_EBP + -0x58);
  puVar11[0xc] = 0;
  switch(*(undefined4 *)(unaff_EBP + -0x14)) {
  case 0:
  case 0xd:
    if (*(int *)(unaff_EBP + -0x14) == 0xd) {
      puStack_2e4 = (undefined1 *)(unaff_EBP + -0x10);
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
      puStack_2e8 = (undefined *)0x7e4c8d;
      FUN_00414f8b();
      puStack_2e4 = (undefined1 *)0x7e4c95;
      uVar8 = FUN_007e58a3();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
      cVar1 = *(char *)(*(int *)(unaff_EBP + -0x10) + 1);
      if (cVar1 < 'q') {
        if (cVar1 == 'p') {
          puStack_2e8 = &stack0xfffffd20;
          *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
          puStack_2e4 = (undefined1 *)0x64b;
          iStack_2ec = 0x7e4e4a;
          FUN_00679e4e();
          puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x14);
          iStack_2ec = unaff_EBP + -0x44;
          *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_2e8;
          uStack_2f0 = 0x7e4e5c;
          puStack_2e8 = extraout_ECX_02;
          FUN_00424dbc();
          iStack_2ec = unaff_EBP + -0xec;
          uStack_2f0 = 0x7e4e68;
          FUN_007d6c55();
          *(undefined1 *)(unaff_EBP + -4) = 0x54;
          puStack_2e4 = (undefined1 *)0x7e4e78;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
        }
        else if (cVar1 == 'M') {
          puStack_2e4 = (undefined1 *)(unaff_EBP + -0xe4);
          puStack_2e8 = (undefined *)0x7e4e1b;
          FUN_0084cbe4();
          *(undefined1 *)(unaff_EBP + -4) = 0x5d;
          puStack_2e4 = (undefined1 *)0x7e4e28;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
        }
        else {
          if (cVar1 != 'a') {
            if (cVar1 == 'c') {
              FUN_0087a1b0();
              puStack_2e4 = (undefined1 *)0x7e4dc7;
              puStack_2e8 = (undefined1 *)FUN_0084c94e();
              iStack_2ec = 0x7e4dd0;
              puStack_2e4 = &stack0xfffffd24;
              puStack_2e4 = (undefined1 *)FUN_0087b818();
            }
            else {
              if (cVar1 != 'h') {
                if (cVar1 == 'm') {
                  puStack_2e4 = (undefined1 *)(unaff_EBP + -0xd4);
                  puStack_2e8 = (undefined1 *)0x7e4d46;
                  FUN_00679d22();
                  puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x14);
                  puStack_2e8 = (undefined1 *)(unaff_EBP + -0xcc);
                  *(undefined1 *)(unaff_EBP + -4) = 0x55;
                  iStack_2ec = 0x7e4d61;
                  FUN_00550c58();
                  *(undefined1 *)(unaff_EBP + -4) = 0x56;
                  puStack_2e4 = (undefined1 *)0x7e4d6e;
                  FUN_00414f8b();
                  *(undefined1 *)(unaff_EBP + -4) = 0x55;
                  FUN_00414ebb();
                  *(undefined1 *)(unaff_EBP + -4) = 0x21;
                }
                else {
                  if (cVar1 != 'o') goto LAB_007e531f;
                  puStack_2e8 = &stack0xfffffd20;
                  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
                  puStack_2e4 = (undefined1 *)0x64b;
                  iStack_2ec = 0x7e4cf1;
                  FUN_00679e4e();
                  puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x14);
                  iStack_2ec = unaff_EBP + -0x40;
                  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_2e8;
                  uStack_2f0 = 0x7e4d03;
                  puStack_2e8 = extraout_ECX_01;
                  FUN_00424dbc();
                  iStack_2ec = unaff_EBP + -200;
                  uStack_2f0 = 0x7e4d0f;
                  FUN_007d6c55();
                  *(undefined1 *)(unaff_EBP + -4) = 0x51;
                  puStack_2e4 = (undefined1 *)0x7e4d1f;
                  FUN_00414f8b();
                  *(undefined1 *)(unaff_EBP + -4) = 0x21;
                }
                goto LAB_007e4d29;
              }
              if (*(int *)(DAT_00978368 + 0x2098) == 0) {
                puStack_2e4 = (undefined1 *)0x0;
              }
              else {
                puStack_2e4 = (undefined1 *)(*(int *)(DAT_00978368 + 0x2098) + 4);
              }
            }
            puStack_2e8 = (undefined *)0x7e4daa;
            FUN_00414edd();
            goto LAB_007e531f;
          }
          puStack_2e4 = (undefined1 *)(unaff_EBP + -0xdc);
          puStack_2e8 = (undefined *)0x7e4dea;
          FUN_0084ca7b();
          *(undefined1 *)(unaff_EBP + -4) = 0x5c;
          puStack_2e4 = (undefined1 *)0x7e4df7;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
        }
      }
      else {
        if (cVar1 != 'q') {
          if (cVar1 == 't') {
            puStack_2e4 = (undefined1 *)(unaff_EBP + -0x5c);
            puStack_2e8 = (undefined1 *)0x7e5236;
            FUN_0045a1d8();
            *(undefined1 *)(unaff_EBP + -4) = 0x52;
            puStack_2e4 = (undefined1 *)0x7e5243;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_00414ebb();
            puStack_2e4 = (undefined1 *)0x0;
            puStack_2e8 = &DAT_00964ec8;
            iStack_2ec = 0x7e525e;
            iVar6 = FUN_004538dc();
            if (iVar6 < 0) {
              uVar8 = 0;
            }
            else {
LAB_007e4eee:
              uVar8 = *(undefined4 *)(unaff_EBP + -0x14);
            }
            puVar11[1] = uVar8;
          }
          else if (cVar1 == 'u') {
            puStack_2e4 = (undefined1 *)0x7e504b;
            iVar6 = FUN_00455c59();
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar6 + 4);
            if (*(int *)(unaff_EBP + -0xac) != 0) {
              puStack_2e4 = (undefined1 *)0x7e5065;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0xac) = 0;
            }
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
            puStack_2e4 = (undefined1 *)0x7e5083;
            iVar6 = FUN_005ee726();
            if (iVar6 == 0) {
              *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x14);
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x70);
              puStack_2e8 = (undefined *)0x7e50a5;
              iVar6 = FUN_005ee6cd();
              bVar4 = -(iVar6 != 0) & 2;
            }
            else {
              bVar4 = 1;
            }
            if (bVar4 == 0) {
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x88);
              puStack_2e8 = (undefined1 *)0x7e51be;
              piVar10 = (int *)FUN_00679e4e();
              iVar6 = *piVar10;
              *(undefined1 *)(unaff_EBP + -4) = 0x65;
              if (iVar6 != 0) {
                FUN_00409205();
              }
              *(undefined4 *)(unaff_EBP + -0xa0) = 0;
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0xa0);
              *(undefined1 *)(unaff_EBP + -4) = 0x66;
              puStack_2e8 = (undefined *)0x7e51e8;
              FUN_00434e21();
              puStack_2e4 = (undefined1 *)0x7e51f3;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x65;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (*(int *)(unaff_EBP + -0x88) != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x88) = 0;
              }
            }
            else if (bVar4 == 1) {
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x74);
              puStack_2e8 = (undefined1 *)0x7e514b;
              piVar10 = (int *)FUN_00679e4e();
              iVar6 = *piVar10;
              *(undefined1 *)(unaff_EBP + -4) = 0x67;
              if (iVar6 != 0) {
                FUN_00409205();
              }
              *(undefined4 *)(unaff_EBP + -0x90) = 0;
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x90);
              *(undefined1 *)(unaff_EBP + -4) = 0x68;
              puStack_2e8 = (undefined *)0x7e5175;
              FUN_00434e21();
              puStack_2e4 = (undefined1 *)0x7e5180;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x67;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (*(int *)(unaff_EBP + -0x74) != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x74) = 0;
              }
            }
            else if (bVar4 == 2) {
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0xa4);
              puStack_2e8 = (undefined1 *)0x7e50d5;
              piVar10 = (int *)FUN_00679e4e();
              iVar6 = *piVar10;
              *(undefined1 *)(unaff_EBP + -4) = 0x69;
              if (iVar6 != 0) {
                FUN_00409205();
              }
              *(undefined4 *)(unaff_EBP + -0x9c) = 0;
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x9c);
              *(undefined1 *)(unaff_EBP + -4) = 0x6a;
              puStack_2e8 = (undefined *)0x7e50ff;
              FUN_00434e21();
              puStack_2e4 = (undefined1 *)0x7e510a;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x69;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (*(int *)(unaff_EBP + -0xa4) != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0xa4) = 0;
              }
            }
          }
          else {
            if (cVar1 == 'x') {
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x94);
              puStack_2e8 = (undefined *)0x7e501d;
              FUN_007e5849();
              *(undefined1 *)(unaff_EBP + -4) = 0x5e;
              puStack_2e4 = (undefined1 *)0x7e502a;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              goto LAB_007e4d29;
            }
            if (cVar1 == 'y') {
              FUN_0087a1b0();
              puStack_2e4 = (undefined1 *)0x0;
              iStack_2ec = *(undefined4 *)(unaff_EBP + -0x14);
              uStack_2f0 = 0x7e4f0e;
              puStack_2e8 = &stack0xfffffd24;
              iStack_2ec = FUN_00412335();
              *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_2e8;
              uStack_2f0 = 0x7e4f1a;
              FUN_004033a1();
              iStack_2ec = unaff_EBP + -700;
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              uStack_2f0 = 0x7e4f2d;
              FUN_0040263d();
              uStack_2f0 = 0x7e4f34;
              FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x60;
              puStack_2e8 = (undefined1 *)0x7e4f3f;
              iVar6 = FUN_004032b4();
              *(int *)(unaff_EBP + -0xfc) = iVar6;
              *(undefined4 *)(unaff_EBP + -0x68) = 0;
              if (iVar6 != 0) {
                puStack_2e4 = (undefined1 *)0x7e4f5b;
                iVar6 = FUN_00404b30();
                if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
                  puStack_2e4 = (undefined1 *)0x7e4f6c;
                  FUN_00878dfb();
                }
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x62;
              puStack_2e4 = (undefined1 *)0x7e4f7c;
              iVar6 = FUN_00402bc3();
              if (iVar6 < 0) {
                puStack_2e4 = (undefined1 *)0x7e4f87;
                FUN_00878dfb();
              }
              puStack_2e8 = &stack0xfffffd20;
              *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
              puStack_2e4 = (undefined1 *)0x64b;
              iStack_2ec = 0x7e4f9a;
              FUN_00679e4e();
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0x2dc);
              *(undefined1 *)(unaff_EBP + -4) = 0x62;
              puStack_2e8 = (undefined1 *)0x7e4fad;
              FUN_0040263d();
              puStack_2e8 = (undefined1 *)0x7e4fb4;
              psVar9 = (short *)FUN_004048a4();
              sVar2 = *psVar9;
              *(undefined1 *)(unaff_EBP + -4) = 100;
              if (sVar2 == 8) {
                puStack_2e4 = *(undefined1 **)(psVar9 + 4);
              }
              else {
                puStack_2e4 = &DAT_0097812c;
              }
              puStack_2e8 = (undefined *)0x7e4fd3;
              FUN_00454081();
              *(undefined1 *)(unaff_EBP + -4) = 0x62;
              puStack_2e4 = (undefined1 *)0x7e4fe3;
              iVar6 = FUN_00402bc3();
              if (iVar6 < 0) {
                puStack_2e4 = (undefined1 *)0x7e4fee;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (*(int **)(unaff_EBP + -0x68) != (int *)0x0) {
                puStack_2e4 = (undefined1 *)0x7e5003;
                (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
              }
            }
            else if (cVar1 == 'z') {
              puStack_2e4 = (undefined1 *)(unaff_EBP + -0xf4);
              puStack_2e8 = (undefined *)0x7e4ec8;
              FUN_0045a1d8();
              *(undefined1 *)(unaff_EBP + -4) = 0x53;
              puStack_2e4 = (undefined1 *)0x7e4ed7;
              FUN_00414f8b();
              puStack_2e4 = (undefined1 *)0x7e4edf;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              FUN_00414ebb();
              goto LAB_007e4eee;
            }
          }
          goto LAB_007e531f;
        }
        *(undefined4 *)(unaff_EBP + -0x98) = 0;
        puStack_2e8 = (undefined1 *)(unaff_EBP + -0x98);
        puStack_2e4 = &DAT_00968958;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        iStack_2ec = 0x7e528b;
        FUN_00434e21();
        *(undefined4 *)(unaff_EBP + -0x54) = 0;
        puStack_2e4 = (undefined1 *)0x7e529a;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        FUN_00414ebb();
        puStack_2e8 = &stack0xfffffd20;
        *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
        puStack_2e4 = (undefined1 *)0x64b;
        iStack_2ec = 0x7e52bc;
        FUN_00679e4e();
        puStack_2e8 = (undefined1 *)(unaff_EBP + -0x54);
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_2e4;
        *(undefined1 *)(unaff_EBP + -4) = 0x5a;
        iStack_2ec = 0x7e52cf;
        FUN_00450368();
        iStack_2ec = unaff_EBP + -0x4c;
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_2e8;
        uStack_2f0 = 0x7e52de;
        puStack_2e8 = extraout_ECX_03;
        FUN_00424dbc();
        iStack_2ec = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        uStack_2f0 = 0x7e52eb;
        FUN_007d6dc4();
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        puStack_2e4 = (undefined1 *)0x7e52fb;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
      }
LAB_007e4d29:
      FUN_00414ebb();
    }
    else {
      puStack_2e4 = (undefined1 *)0x7e531f;
      FUN_00414f8b();
    }
LAB_007e531f:
    iVar6 = *(int *)(unaff_EBP + -0x2c);
    iVar12 = *(int *)(unaff_EBP + -0x6c);
    piVar10 = *(int **)(unaff_EBP + 0x10);
    *puVar11 = 0;
    iVar3 = puVar11[3];
    iVar6 = *(int *)(*piVar10 + (iVar12 + iVar6 * 2) * 4);
    *(int *)(unaff_EBP + -0x24) = iVar3;
    if (iVar3 != iVar6) {
      puVar11[3] = iVar6;
      FUN_0045e787();
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_2e4 = (undefined1 *)0x7e5358;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
    }
    puStack_2e4 = (undefined1 *)0x7e5365;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0xc0);
    puStack_2e8 = (undefined1 *)0x7e5376;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e5382;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    puStack_2e4 = (undefined1 *)0x7e5395;
    puStack_2e8 = (undefined1 *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_2e4;
    iStack_2ec = 0x7e53a1;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    puStack_2e8 = (undefined1 *)0x7e53ac;
    FUN_0044974c();
    puStack_2e8 = (undefined1 *)0x7e53b3;
    uVar8 = FUN_00448ebb();
    puVar11[8] = uVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_2e4 = (undefined1 *)0x7e53c6;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e53d1;
      FUN_00878dfb();
    }
    if (puVar11[3] == 0) {
      puStack_2e4 = (undefined1 *)0x7e53df;
      FUN_00878dfb();
    }
    uVar8 = FUN_004a2734();
    puVar11[9] = uVar8;
    puVar11[0xe] = *(undefined4 *)(unaff_EBP + -0x38);
    goto switchD_007e4378_caseD_6;
  case 1:
    puVar7 = *(undefined4 **)(unaff_EBP + 0x10);
    *puVar11 = 4;
    puVar11[8] = 0x12;
    iVar6 = *(int *)*puVar7;
    *(int **)(unaff_EBP + -0x24) = (int *)*puVar7;
    if (iVar6 == 0) {
      puStack_2e4 = (undefined1 *)0x7e43a2;
      FUN_00878dfb();
    }
    uVar8 = FUN_004a2734();
    puVar11[9] = uVar8;
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
    puStack_2e8 = (undefined1 *)0x7e43c0;
    FUN_00414f8b();
    puStack_2e4 = (undefined1 *)0x7e43c8;
    uVar8 = FUN_007e58a3();
    *(undefined4 *)(unaff_EBP + -0x58) = uVar8;
    puVar11[10] = uVar8;
    goto switchD_007e4378_caseD_6;
  case 2:
    *puVar11 = 3;
    puVar11[0xd] = 0;
    goto switchD_007e4378_caseD_6;
  case 3:
    *puVar11 = 3;
    puVar11[0xd] = 1;
    goto switchD_007e4378_caseD_6;
  case 4:
    *puVar11 = 3;
    puVar11[0xd] = 2;
    goto switchD_007e4378_caseD_6;
  case 5:
    *puVar11 = 3;
    puVar11[0xd] = 3;
  default:
    goto switchD_007e4378_caseD_6;
  case 7:
  case 8:
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
    *puVar11 = 1;
    puStack_2e8 = (undefined1 *)0x7e4429;
    FUN_00414f8b();
    puStack_2e4 = (undefined1 *)0x7e4431;
    uVar8 = FUN_007e58a3();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
    puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x10);
    if (puStack_2e4 == (undefined1 *)0x0) {
LAB_007e445d:
      uVar8 = 0;
    }
    else {
      *(undefined1 **)(unaff_EBP + -0x24) = puStack_2e4;
      puStack_2e8 = (undefined1 *)0x7e4446;
      iVar6 = FUN_0087b4c0();
      if (iVar6 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = iVar6 - *(int *)(unaff_EBP + -0x24);
      }
      if (iVar6 < 0) goto LAB_007e445d;
      uVar8 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    puVar11[1] = uVar8;
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x118);
    puStack_2e8 = (undefined1 *)0x7e4477;
    FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    puStack_2e4 = (undefined1 *)0x7e4484;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int *)(unaff_EBP + -0x118) != 0) {
      puStack_2e4 = (undefined1 *)0x7e449b;
      FUN_00434e38();
    }
    puStack_2e4 = (undefined1 *)0x1;
    puStack_2e8 = *(undefined1 **)(unaff_EBP + -0x14);
    iStack_2ec = unaff_EBP + -0x8c;
    uStack_2f0 = 0x7e44b4;
    FUN_005536ce();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    puStack_2e4 = (undefined1 *)0x7e44c6;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar11 + 5),
               *(IBinding **)(unaff_EBP + -0x8c));
    if (puVar11[5] == 0) {
      puStack_2e4 = (undefined1 *)0x7e44d5;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e48b();
    puVar11[8] = uVar8;
    if (puVar11[5] == 0) {
      puStack_2e4 = (undefined1 *)0x7e44ef;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e53d();
    puVar11[9] = uVar8;
    puVar11[0xe] = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    break;
  case 9:
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
    puStack_2e8 = (undefined1 *)0x7e4520;
    FUN_00414f8b();
    puStack_2e4 = (undefined1 *)0x7e4528;
    FUN_007e58a3();
    puStack_2e4 = (undefined1 *)0x7e4534;
    uVar8 = FUN_0064d61f();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    *puVar11 = 1;
    puStack_2e4 = (undefined1 *)0x7e4549;
    FUN_00414f8b();
    puStack_2e4 = (undefined1 *)0x7e455a;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar11 + 5),
               *(IBinding **)(*(int *)(unaff_EBP + -0x24) + 0x90));
    if (puVar11[5] == 0) {
      puStack_2e4 = (undefined1 *)0x7e4569;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e48b();
    puVar11[8] = uVar8;
    if (puVar11[5] == 0) {
      puStack_2e4 = (undefined1 *)0x7e4583;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e53d();
    puVar11[9] = uVar8;
    goto switchD_007e4378_caseD_6;
  case 10:
  case 0xb:
    *puVar11 = 2;
    puStack_2e4 = (undefined1 *)0x7e45a9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_2e4 = (undefined1 *)0x7e45bd;
    FUN_00403191();
    puStack_2e4 = (undefined1 *)0x0;
    puStack_2e8 = (undefined1 *)0xffffffff;
    iStack_2ec = *(int *)(unaff_EBP + -0x10) + 2;
    uStack_2f0 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    (*DAT_0097b4c8)(0);
    FUN_0087a1b0();
    puStack_2e4 = (undefined1 *)0x0;
    puStack_2e8 = (undefined1 *)(unaff_EBP + -0x24c);
    iStack_2ec = unaff_EBP + -0x1cc;
    uStack_2f0 = 0xffffffff;
    iVar6 = FUN_00449713(&stack0xfffffd24);
    uVar8 = FUN_00456ad5(iVar6 + 2);
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2f0;
    FUN_004033a1(uVar8);
    iVar6 = unaff_EBP + -0x26c;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    FUN_00404a02(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_2e8 = (undefined1 *)0x7e463c;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xa8) = iVar6;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    if (iVar6 != 0) {
      puStack_2e4 = (undefined1 *)0x7e4658;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        puStack_2e4 = (undefined1 *)0x7e4669;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    puStack_2e4 = (undefined1 *)0x7e4679;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e4684;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    puStack_2e4 = (undefined1 *)0x7e4694;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e469f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    puStack_2e4 = (undefined1 *)0x7e46af;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e46ba;
      FUN_00878dfb();
    }
    puStack_2e4 = (undefined1 *)0x7e46c5;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar11 + 5),
               *(IBinding **)(unaff_EBP + -100));
    if (puVar11[5] == 0) {
      puStack_2e4 = (undefined1 *)0x7e46d4;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e48b();
    puVar11[8] = uVar8;
    if (puVar11[5] == 0) {
      puStack_2e4 = (undefined1 *)0x7e46ee;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e53d();
    puVar11[9] = uVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    break;
  case 0xc:
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd20;
    *puVar11 = 2;
    puStack_2e8 = (undefined1 *)0x7e4721;
    FUN_00414f8b();
    puStack_2e4 = (undefined1 *)0x7e4729;
    iVar6 = FUN_007e58a3();
    *(int *)(unaff_EBP + -0x14) = iVar6;
    if (iVar6 < 10) {
      *(undefined4 *)(unaff_EBP + -0x14) = 10;
    }
    else if (100 < *(int *)(unaff_EBP + -0x14)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 100;
    }
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x108);
    puStack_2e8 = (undefined1 *)0x7e4758;
    puVar7 = (undefined4 *)FUN_00679d22();
    puStack_2e4 = (undefined1 *)*puVar7;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    puStack_2e8 = (undefined1 *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_2ec = 0x7e476d;
    FUN_00434e21();
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    puStack_2e4 = (undefined1 *)0x7e477c;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00414ebb();
    puStack_2e4 = (undefined1 *)0x7e47a8;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    puStack_2e4 = (undefined1 *)0x7e47b8;
    FUN_00403191();
    puStack_2e4 = (undefined1 *)0x0;
    puStack_2e8 = (undefined1 *)(unaff_EBP + -0x1fc);
    iStack_2ec = unaff_EBP + -0x21c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    uStack_2f0 = 0x7e47d4;
    uVar8 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2f0;
    FUN_00448a17(uVar8);
    iVar6 = unaff_EBP + -0x27c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    FUN_00404a02(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    puStack_2e8 = (undefined1 *)0x7e4809;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xe8) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    if (iVar6 != 0) {
      puStack_2e4 = (undefined1 *)0x7e4825;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        puStack_2e4 = (undefined1 *)0x7e4836;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    puStack_2e4 = (undefined1 *)0x7e4846;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e4851;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    puStack_2e4 = (undefined1 *)0x7e4861;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e486c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_2e4 = (undefined1 *)0x7e487c;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e4887;
      FUN_00878dfb();
    }
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x128);
    puStack_2e8 = (undefined1 *)0x7e48a9;
    puVar7 = (undefined4 *)FUN_00679d22();
    puStack_2e4 = (undefined1 *)*puVar7;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    puStack_2e8 = (undefined1 *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iStack_2ec = 0x7e48c3;
    FUN_00434e21();
    puStack_2e4 = (undefined1 *)0x7e48cf;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00414ebb();
    puStack_2e4 = (undefined1 *)0x7e48fe;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    puStack_2e4 = (undefined1 *)0x7e490e;
    FUN_00403191();
    puStack_2e4 = (undefined1 *)0x0;
    puStack_2e8 = (undefined1 *)(unaff_EBP + -0x14c);
    iStack_2ec = unaff_EBP + -0x23c;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    uStack_2f0 = 0x7e492a;
    uVar8 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2f0;
    FUN_00448a17(uVar8);
    iVar6 = unaff_EBP + -0x29c;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    FUN_00404a02(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    puStack_2e8 = (undefined1 *)0x7e495f;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xf0) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (iVar6 != 0) {
      puStack_2e4 = (undefined1 *)0x7e497b;
      iVar6 = FUN_0041a581();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        puStack_2e4 = (undefined1 *)0x7e498c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    puStack_2e4 = (undefined1 *)0x7e499c;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e49a7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    puStack_2e4 = (undefined1 *)0x7e49b7;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e49c2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    puStack_2e4 = (undefined1 *)0x7e49d2;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e49dd;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x110);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    puStack_2e8 = (undefined1 *)0x7e49fa;
    puVar7 = (undefined4 *)FUN_00679d86();
    puStack_2e8 = (undefined1 *)*puVar7;
    puStack_2e4 = (undefined1 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    iStack_2ec = 0x7e4a0b;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    FUN_00402676();
    puStack_2e4 = (undefined1 *)0x7e4a2e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    puStack_2e4 = (undefined1 *)0x7e4a3e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      puStack_2e4 = (undefined1 *)0x7e4a52;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        puStack_2e4 = (undefined1 *)0x7e4a5d;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_2e4 = (undefined1 *)0x7e4a6e;
      FUN_00878dfb();
    }
    piVar10 = *(int **)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + -0x14) = piVar10;
    uVar8 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar8;
    uVar8 = FUN_0040e48b();
    iStack_2ec = *(int *)(unaff_EBP + -0x17c);
    puStack_2e8 = *(undefined1 **)(unaff_EBP + -0x178);
    puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x174);
    uStack_2f0 = *(undefined4 *)(unaff_EBP + -0x150);
    iVar6 = (**(code **)(*piVar10 + 0x2c))
                      (*(undefined4 *)(unaff_EBP + -0x14),uVar8,*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x15c),*(undefined4 *)(unaff_EBP + -0x158),
                       *(undefined4 *)(unaff_EBP + -0x154));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x15c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x17c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_004031b7(0xff,3);
    piVar10 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    if (piVar10 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar10 = *(int **)(unaff_EBP + -0x20);
    }
    iVar6 = *piVar10;
    *(int **)(unaff_EBP + -0x18) = piVar10;
    iVar6 = (**(code **)(iVar6 + 0x80))
                      (piVar10,0,0,*(undefined4 *)(unaff_EBP + -0x60),
                       *(undefined4 *)(unaff_EBP + -0x19c),*(undefined4 *)(unaff_EBP + -0x198),
                       *(undefined4 *)(unaff_EBP + -0x194),*(undefined4 *)(unaff_EBP + -400));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x19c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_004031b7(0xff,3);
    piVar10 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    if (piVar10 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar10 = *(int **)(unaff_EBP + -0x20);
    }
    iVar6 = *piVar10;
    *(int **)(unaff_EBP + -0x18) = piVar10;
    puVar13 = (undefined1 *)
              (**(code **)(iVar6 + 0x80))
                        (piVar10,0,0,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x1bc),*(undefined4 *)(unaff_EBP + -0x1b8),
                         *(undefined4 *)(unaff_EBP + -0x1b4),*(undefined4 *)(unaff_EBP + -0x1b0));
    if ((int)puVar13 < 0) {
      puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_2ec = 0x7e4bd0;
      puStack_2e8 = puVar13;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    puStack_2e4 = (undefined1 *)0x7e4be0;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_2e4 = (undefined1 *)0x7e4beb;
      FUN_00878dfb();
    }
    puStack_2e4 = (undefined1 *)0x7e4bf6;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar11 + 5),
               *(IBinding **)(unaff_EBP + -0x20));
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_2e4 = (undefined1 *)0x7e4c06;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e48b();
    iVar6 = *(int *)(unaff_EBP + -0x20);
    puVar11[8] = uVar8;
    if (iVar6 == 0) {
      puStack_2e4 = (undefined1 *)0x7e4c21;
      FUN_00878dfb();
    }
    uVar8 = FUN_0040e53d();
    puVar11[9] = uVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e4c3d;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e4c4e;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (*(int **)(unaff_EBP + -0x60) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e4c5f;
      (**(code **)(**(int **)(unaff_EBP + -0x60) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00414ebb();
    goto switchD_007e4378_caseD_6;
  }
  FUN_004125e6();
  goto switchD_007e4378_caseD_6;
LAB_007e541c:
  piVar10 = *(int **)(unaff_EBP + 0xc);
  iVar6 = *piVar10;
  if ((iVar6 != 0) && (*(int *)(iVar6 + -4) != 0)) {
    *(undefined4 *)(*(int *)(iVar6 + -4) * 0x3c + -0xc + iVar6) = 1;
  }
  iVar6 = *piVar10;
  if ((iVar6 == 0) || (*(int *)(iVar6 + -4) == 0)) {
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e545f;
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e5470;
      (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e5481;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e5496;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
  }
  else {
    iVar12 = *(int *)(unaff_EBP + -0x1c);
    uVar8 = *(undefined4 *)(iVar6 + 8);
    iVar6 = *(int *)(iVar12 + 0xc);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = uVar8;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while ((iVar3 = **(int **)(unaff_EBP + 0xc), iVar3 != 0 &&
           (*(uint *)(unaff_EBP + -0x28) < *(uint *)(iVar3 + -4)))) {
      piVar10 = (int *)(iVar3 + *(int *)(unaff_EBP + -0x20));
      if (*(int *)(unaff_EBP + -0x34) != piVar10[2]) {
        iVar6 = *(int *)(iVar12 + 0xc);
        *(int *)(unaff_EBP + -0x34) = piVar10[2];
      }
      iVar3 = *piVar10;
      if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 4)) {
        if (iVar6 + piVar10[8] + *(int *)(iVar12 + 0xc) <= *(int *)(iVar12 + 0x10)) {
          piVar10[6] = iVar6;
          iVar6 = iVar6 + piVar10[8];
          goto LAB_007e550c;
        }
        puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x28);
        puStack_2e8 = (undefined1 *)0x7e5505;
        FUN_007e5e5a();
      }
      else {
LAB_007e550c:
        piVar10 = (int *)(*(int *)(unaff_EBP + -0x20) + **(int **)(unaff_EBP + 0xc));
        if (*piVar10 == 0) {
          if (iVar6 + piVar10[8] + *(int *)(*(int *)(unaff_EBP + -0x1c) + 0xc) <=
              *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x10)) {
            piVar10[6] = iVar6;
            iVar6 = iVar6 + piVar10[8];
            goto LAB_007e56fd;
          }
          puStack_2e4 = (undefined1 *)piVar10[4];
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          puStack_2e8 = (undefined1 *)0x7e5548;
          FUN_00470891();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x70;
          puStack_2e4 = (undefined1 *)0x7e5562;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
          puStack_2e4 = (undefined1 *)(unaff_EBP + -0xc0);
          puStack_2e8 = (undefined1 *)0x7e5573;
          iVar12 = FUN_00402e32();
          if (iVar12 < 0) {
            puStack_2e4 = (undefined1 *)0x7e557f;
            FUN_00878dfb();
          }
          iVar12 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x10);
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x71;
          puStack_2e4 = (undefined1 *)(((iVar12 - iVar6) - iVar3) + -10);
          puStack_2e8 = (undefined1 *)0x7e55a1;
          iStack_2ec = FUN_00411641();
          *(undefined1 ***)(unaff_EBP + -0x70) = &puStack_2e8;
          uStack_2f0 = 0x7e55ad;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x71;
          iStack_2ec = 0x7e55b9;
          FUN_0044974c();
          iStack_2ec = 0x7e55c0;
          FUN_004707e6();
          *(undefined1 *)(unaff_EBP + -4) = 0x70;
          puStack_2e4 = (undefined1 *)0x7e55d2;
          iVar12 = FUN_00402bc3();
          if (iVar12 < 0) {
            puStack_2e4 = (undefined1 *)0x7e55dd;
            FUN_00878dfb();
          }
          puStack_2e4 = (undefined1 *)(unaff_EBP + -0x3c);
          puStack_2e8 = (undefined1 *)0x7e55ea;
          FUN_0046fcad();
          *(undefined1 *)(unaff_EBP + -4) = 0x73;
          puStack_2e4 = (undefined1 *)0x7e55f7;
          FUN_00419192();
          *(undefined1 *)(unaff_EBP + -4) = 0x70;
          FUN_00402676();
          puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x2c);
          puStack_2e8 = (undefined1 *)0x7e5610;
          FUN_00454081();
          if (*(int *)(unaff_EBP + -0x2c) == 0) {
            puStack_2e4 = (undefined1 *)0x0;
          }
          else {
            puStack_2e4 = (undefined1 *)(*(uint *)(*(int *)(unaff_EBP + -0x2c) + -4) >> 1);
          }
          puStack_2e8 = (undefined1 *)(unaff_EBP + -0x5c);
          iStack_2ec = 0x7e562f;
          puVar11 = (undefined4 *)FUN_0046fc90();
          puStack_2e4 = (undefined1 *)*puVar11;
          *(undefined1 *)(unaff_EBP + -4) = 0x74;
          puStack_2e8 = (undefined1 *)0x7e5640;
          FUN_00454081();
          *(undefined1 *)(unaff_EBP + -4) = 0x70;
          FUN_00402676();
          piVar10 = *(int **)(unaff_EBP + 0xc);
          puStack_2e8 = (undefined1 *)(unaff_EBP + -0x38);
          *(undefined1 ***)(unaff_EBP + -0x70) = &puStack_2e4;
          iStack_2ec = 0x7e565f;
          FUN_00450368();
          iStack_2ec = unaff_EBP + -0x30;
          *(undefined1 ***)(unaff_EBP + -0x94) = &puStack_2e8;
          *(undefined1 *)(unaff_EBP + -4) = 0x75;
          uStack_2f0 = 0x7e5675;
          FUN_00450368();
          iStack_2ec = *(int *)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0x70;
          uStack_2f0 = 0x7e5684;
          FUN_007e5c57();
          iVar12 = *(int *)(unaff_EBP + -0x20) + *piVar10;
          *(int *)(iVar12 + 0x18) = iVar6;
          iVar6 = iVar6 + *(int *)(iVar12 + 0x20);
          if ((*(char **)(unaff_EBP + -0x30) != (char *)0x0) &&
             (**(char **)(unaff_EBP + -0x30) != '\0')) {
            *(undefined1 *)(unaff_EBP + -4) = 0x6f;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x6e;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x6d;
            FUN_00402676();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_00402676();
            goto LAB_007e56fd;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x6f;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x6e;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x6d;
          FUN_00402676();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          FUN_00402676();
        }
        else {
LAB_007e56fd:
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x3c;
        }
        iVar12 = *(int *)(unaff_EBP + -0x1c);
      }
    }
    puVar13 = *(undefined1 **)(iVar12 + 0xc);
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    do {
      do {
        puStack_2e4 = (undefined1 *)(unaff_EBP + -0x7c);
        puStack_2e8 = (undefined1 *)(unaff_EBP + -0x48);
        iStack_2ec = unaff_EBP + -0x78;
        uStack_2f0 = *(undefined4 *)(unaff_EBP + -0x34);
        FUN_007e5e85();
        if ((*(int *)(unaff_EBP + -0x78) == -1) || (*(int *)(unaff_EBP + -0x48) == -1)) {
          iVar6 = *(int *)**(undefined4 **)(unaff_EBP + 0x10);
          *(int **)(unaff_EBP + -0x3c) = (int *)**(undefined4 **)(unaff_EBP + 0x10);
          if (iVar6 == 0) {
            puStack_2e4 = (undefined1 *)0x7e5766;
            FUN_00878dfb();
          }
          iVar6 = FUN_004a2734();
        }
        else {
          puStack_2e4 = *(undefined1 **)(unaff_EBP + -0x7c);
          iStack_2ec = *(int *)(unaff_EBP + -0x48);
          uStack_2f0 = *(undefined4 *)(unaff_EBP + -0x78);
          puStack_2e8 = puVar13;
          FUN_007e5f19();
          iVar6 = *(int *)(unaff_EBP + -0x7c);
        }
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
        puVar13 = puVar13 + iVar6 + 2;
      } while (*(int *)(unaff_EBP + -0x48) == -1);
      if (**(int **)(unaff_EBP + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(**(int **)(unaff_EBP + 0xc) + -4);
      }
    } while (*(uint *)(unaff_EBP + -0x48) < iVar6 - 1U);
    puVar13 = puVar13 + *(int *)(iVar12 + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e57b7;
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e57c8;
      (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e57d9;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      puStack_2e4 = (undefined1 *)0x7e57ea;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar13;
}



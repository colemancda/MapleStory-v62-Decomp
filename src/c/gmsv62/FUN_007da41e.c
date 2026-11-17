/* FUN_007da41e - 0x007da41e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007da41e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x74);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 == 1000) {
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0040381b();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x4c) != 0) {
      FUN_00403384();
    }
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00403191();
    iVar1 = *(int *)(extraout_ECX + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    iVar1 = **(int **)(extraout_ECX + 0x60);
    *(int **)(unaff_EBP + -0x18) = *(int **)(extraout_ECX + 0x60);
    iVar1 = (**(code **)(iVar1 + 0x2c))();
    if (iVar1 < 0) {
      iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_2bc = 0x7dae2b;
      iStack_2b8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_2b4 = 0x7dae3b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7dae46;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_2b4 = 0x7dae56;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7dae61;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7dae72;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_2b4 = 0x7dae85;
    FUN_00403191();
    iStack_2b4 = 0;
    iStack_2b8 = unaff_EBP + -0x120;
    iStack_2bc = unaff_EBP + -0x1e0;
    *(int **)(unaff_EBP + -0x18) = &iStack_2c0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00679e4e(&iStack_2c0,0xa45);
    iVar1 = unaff_EBP + -0x270;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_2b8 = 0x7daedc;
    iVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(int *)(unaff_EBP + -0x54) = iVar1;
    if (iVar1 != 0) {
      iStack_2b4 = 0x7daef3;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_2b4 = 0x7daf04;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_2b4 = 0x7daf14;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7daf1f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_2b4 = 0x7daf2f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7daf3a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_2b4 = 0x7daf4a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7daf55;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7daf61;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_2b4 = 0x7daf71;
    FUN_00403191();
    iStack_2b4 = 0;
    iStack_2b8 = unaff_EBP + -0x220;
    iStack_2bc = unaff_EBP + -0x200;
    *(int **)(unaff_EBP + -0x18) = &iStack_2c0;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00679e4e(&iStack_2c0,0xa46);
    iVar1 = unaff_EBP + -0x240;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_2b8 = 0x7dafc3;
    iVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(int *)(unaff_EBP + -0x5c) = iVar1;
    if (iVar1 != 0) {
      iStack_2b4 = 0x7dafda;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_2b4 = 0x7dafeb;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_2b4 = 0x7daffb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7db006;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_2b4 = 0x7db016;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7db021;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_2b4 = 0x7db031;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7db03c;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7db048;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_2b4 = 0x7db058;
    FUN_00403191();
    iStack_2b4 = 0;
    iStack_2b8 = unaff_EBP + -0x140;
    iStack_2bc = unaff_EBP + -0x130;
    *(int **)(unaff_EBP + -0x18) = &iStack_2c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00679e4e(&iStack_2c0,0xa47);
    iVar1 = unaff_EBP + -0x260;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_2b8 = 0x7db0aa;
    iVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(int *)(unaff_EBP + -100) = iVar1;
    if (iVar1 != 0) {
      iStack_2b4 = 0x7db0c1;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_2b4 = 0x7db0d2;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_2b4 = 0x7db0e2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7db0ed;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_2b4 = 0x7db0fd;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7db108;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_2b4 = 0x7db118;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7db123;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7db12f;
    FUN_00403191();
    iVar1 = *(int *)(extraout_ECX + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (iVar1 == 0) {
      iStack_2b4 = 0x7db143;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(extraout_ECX + 0x60);
    iVar1 = *piVar4;
    iStack_2c0 = *(int *)(unaff_EBP + -0x14);
    iStack_2bc = *(undefined4 *)(unaff_EBP + -0x160);
    iStack_2b8 = *(undefined4 *)(unaff_EBP + -0x15c);
    iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x158);
    *(int **)(unaff_EBP + -0x18) = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar4,0,0);
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x160);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    iVar1 = *(int *)(extraout_ECX + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x15;
    if (0x15 < iVar1 + -0x37) {
      do {
        FUN_00403191(&DAT_00980690);
        iVar1 = *(int *)(extraout_ECX + 0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = *(int **)(extraout_ECX + 0x60);
        iVar1 = *piVar4;
        *(int **)(unaff_EBP + -0x18) = piVar4;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar4,0,*(undefined4 *)(unaff_EBP + -0x10),
                           *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x180),
                           *(undefined4 *)(unaff_EBP + -0x17c),*(undefined4 *)(unaff_EBP + -0x178),
                           *(undefined4 *)(unaff_EBP + -0x174));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x180);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        iVar1 = *(int *)(extraout_ECX + 0x20);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
      } while (*(int *)(unaff_EBP + -0x10) < iVar1 + -0x37);
    }
    FUN_00403191(&DAT_00980690);
    iVar1 = *(int *)(extraout_ECX + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(extraout_ECX + 0x60);
    iVar1 = *piVar4;
    *(int **)(unaff_EBP + -0x18) = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar4,0,*(undefined4 *)(unaff_EBP + -0x10),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x1a0),
                       *(undefined4 *)(unaff_EBP + -0x19c),*(undefined4 *)(unaff_EBP + -0x198),
                       *(undefined4 *)(unaff_EBP + -0x194));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x1a0);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x88) = 1;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uVar2 = FUN_00679d86(unaff_EBP + -0x6c,0x4ed);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00402676();
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00450382(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))
              (extraout_ECX,1,0xcd,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x88);
    FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x94));
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x7c) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x7c) + -0xc);
    }
    piVar4 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if ((iVar1 < 0x3e9) || (0x3eb < iVar1)) goto LAB_007db39c;
    if ((iVar1 == 0x3e9) || (*(undefined4 *)(unaff_EBP + -0x1c) = 0x4e, iVar1 == 0x3eb)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x37;
    }
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -4) = 0x21;
    FUN_0040381b();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0x22;
    FUN_00403191();
    iVar1 = *(int *)(extraout_ECX + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    iVar1 = **(int **)(extraout_ECX + 0x60);
    *(int **)(unaff_EBP + -0x14) = *(int **)(extraout_ECX + 0x60);
    iVar1 = (**(code **)(iVar1 + 0x2c))();
    if (iVar1 < 0) {
      iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_2bc = 0x7da522;
      iStack_2b8 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_2b4 = 0x7da532;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da53d;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_2b4 = 0x7da54d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da558;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7da569;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0x24;
    iStack_2b4 = 0x7da57c;
    FUN_00403191();
    iStack_2b4 = 0;
    iStack_2b8 = unaff_EBP + -0x150;
    iStack_2bc = unaff_EBP + -0x210;
    *(int **)(unaff_EBP + -0x14) = &iStack_2c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00679e4e(&iStack_2c0,0xa49);
    iVar1 = unaff_EBP + -0x230;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_2b8 = 0x7da5d3;
    iVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x74) = iVar1;
    if (iVar1 != 0) {
      iStack_2b4 = 0x7da5ea;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_2b4 = 0x7da5fb;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_2b4 = 0x7da60b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da616;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_2b4 = 0x7da626;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da631;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_2b4 = 0x7da641;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da64c;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7da658;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_2b4 = 0x7da668;
    FUN_00403191();
    iStack_2b4 = 0;
    iStack_2b8 = unaff_EBP + -0x170;
    iStack_2bc = unaff_EBP + -0x1f0;
    *(int **)(unaff_EBP + -0x14) = &iStack_2c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00679e4e(&iStack_2c0,0xa4a);
    iVar1 = unaff_EBP + -0x280;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_2b8 = 0x7da6ba;
    iVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(int *)(unaff_EBP + -0x48) = iVar1;
    if (iVar1 != 0) {
      iStack_2b4 = 0x7da6d1;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_2b4 = 0x7da6e2;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_2b4 = 0x7da6f2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da6fd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_2b4 = 0x7da70d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da718;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_2b4 = 0x7da728;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da733;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7da740;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
    iStack_2b4 = unaff_EBP + -0x98;
    iStack_2b8 = 0x7da74d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da759;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_2b4 = 0x7da76a;
    VariantInit((VARIANTARG *)(unaff_EBP + -200));
    iStack_2b4 = unaff_EBP + -200;
    iStack_2b8 = 0x7da777;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da783;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(extraout_ECX + 0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if ((iVar1 == 0x3e9) || (iVar1 == 0x3eb)) {
      iStack_2b4 = unaff_EBP + -0x2c;
      iStack_2b8 = 0x7da7c5;
      uVar2 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 0x37;
    }
    else {
      iStack_2b4 = unaff_EBP + -0x34;
      iStack_2b8 = 0x7da7a8;
      uVar2 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
    }
    iStack_2b4 = 0;
    iStack_2b8 = unaff_EBP + -0x98;
    iStack_2c0 = unaff_EBP + -200;
    *(int **)(unaff_EBP + -0x14) = &iStack_2c0;
    iStack_2bc = iStack_2c0;
    FUN_004059fd(uVar2);
    iVar1 = unaff_EBP + -0x250;
    *(undefined4 *)(unaff_EBP + -4) = 0x37;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0x39;
    iStack_2b8 = 0x7da820;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar1 != 0) {
      iStack_2b4 = 0x7da836;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_2b4 = 0x7da847;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_2b4 = 0x7da857;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da862;
      FUN_00878dfb();
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
       (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
       *(int *)(unaff_EBP + -0x2c) != 0)) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x34) != 0)) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x3c;
    iStack_2b4 = 0x7da8a3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da8ae;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_2b4 = 0x7da8be;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da8c9;
      FUN_00878dfb();
    }
    iStack_2b4 = 0x7da8d6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
    iStack_2b4 = unaff_EBP + -0xb8;
    iStack_2b8 = 0x7da8e3;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_2b4 = 0x7da8ef;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(extraout_ECX + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (iVar1 == 0) {
      iStack_2b4 = 0x7da902;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(extraout_ECX + 0x60);
    iVar1 = *piVar4;
    iStack_2c0 = *(int *)(unaff_EBP + -0x18);
    iStack_2bc = *(undefined4 *)(unaff_EBP + -0xb8);
    iStack_2b8 = *(undefined4 *)(unaff_EBP + -0xb4);
    iStack_2b4 = *(undefined4 *)(unaff_EBP + -0xb0);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar4,0,0);
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iVar1 = FUN_00402bc3(unaff_EBP + -0xb8);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    iVar1 = *(int *)(extraout_ECX + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x15;
    if (0x15 < iVar1 - *(int *)(unaff_EBP + -0x1c)) {
      do {
        VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
        iVar1 = FUN_00402e32(unaff_EBP + -0xa8,&DAT_00980690);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        iVar1 = *(int *)(extraout_ECX + 0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = *(int **)(extraout_ECX + 0x60);
        iVar1 = *piVar4;
        *(int **)(unaff_EBP + -0x14) = piVar4;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar4,0,*(undefined4 *)(unaff_EBP + -0x10),
                           *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0xa8),
                           *(undefined4 *)(unaff_EBP + -0xa4),*(undefined4 *)(unaff_EBP + -0xa0),
                           *(undefined4 *)(unaff_EBP + -0x9c));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iVar1 = FUN_00402bc3(unaff_EBP + -0xa8);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        iVar1 = *(int *)(extraout_ECX + 0x20);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
      } while (*(int *)(unaff_EBP + -0x10) < iVar1 - *(int *)(unaff_EBP + -0x1c));
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0xd8));
    iVar1 = FUN_00402e32(unaff_EBP + -0xd8,&DAT_00980690);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    iVar1 = *(int *)(extraout_ECX + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(extraout_ECX + 0x60);
    iVar1 = *piVar4;
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar4,0,*(undefined4 *)(unaff_EBP + -0x10),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0xd8),
                       *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0),
                       *(undefined4 *)(unaff_EBP + -0xcc));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iVar1 = FUN_00402bc3(unaff_EBP + -0xd8);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 1;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    iVar1 = *(int *)(extraout_ECX + 0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    if (iVar1 == 0x3eb) {
      uVar2 = FUN_00679d86(unaff_EBP + -0x58,0xaca);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      FUN_00419192(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
    }
    else {
      uVar2 = FUN_00679d86(unaff_EBP + -0x78,0x4ed);
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      FUN_00419192(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
    }
    FUN_00402676();
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    FUN_00450382(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))
              (extraout_ECX,6,0x9b,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x44);
    if (*(int *)(extraout_ECX + 0x74) == 0x3eb) {
      uVar2 = FUN_00679d86(unaff_EBP + -0x60,0xacb);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_00419192(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
    }
    else {
      uVar2 = FUN_00679d86(unaff_EBP + -0x70,0x4ee);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_00419192(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
    }
    FUN_00402676();
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    FUN_00450382(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))
              (extraout_ECX,7,0xcd,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x44);
    if (*(int *)(extraout_ECX + 0x74) == 0x3ea) {
      FUN_0049f842();
      *(undefined4 *)(unaff_EBP + -0xec) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x10c) = 2;
      *(undefined4 *)(unaff_EBP + -0x108) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      *(undefined4 *)(unaff_EBP + -0x104) = 2;
      *(undefined4 *)(unaff_EBP + -0x100) = 2;
      *(undefined4 *)(unaff_EBP + -0xf4) = 0xff000000;
      puVar3 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x30,10);
      FUN_00408b49();
      FUN_00402fa6();
      *(undefined4 *)(unaff_EBP + -0xfc) = *puVar3;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
      }
      *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(extraout_ECX + 0x78);
      FUN_00414f8b(extraout_ECX + 0x7c);
      iVar1 = FUN_004029b9(0xb8);
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004a0726();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      iVar1 = FUN_0045e196(uVar2);
      (**(code **)(**(int **)(iVar1 + 4) + 8))
                (extraout_ECX,3000,0x13,*(int *)(extraout_ECX + 0x20) + -0x49,0xe2,0xf,
                 unaff_EBP + -0x110);
      FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x84));
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      FUN_0045c14e();
    }
    else {
      FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x9c));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_00402676();
    piVar4 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
LAB_007db39c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



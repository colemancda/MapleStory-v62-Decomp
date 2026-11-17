/* FUN_005215a7 - 0x005215a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005215a7(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_210;
  int iStack_20c;
  int iStack_208;
  int *piStack_204;
  int *piStack_200;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  iVar2 = *(int *)(extraout_ECX + 0xd4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 1) {
    if (*(int *)(extraout_ECX + 0xd0) == 0) {
      piStack_200 = (int *)0x80004003;
      piStack_204 = (int *)0x5220e8;
      FUN_00878dfb();
    }
    piStack_204 = *(int **)(extraout_ECX + 0xd0);
    iStack_208 = 0x5220fa;
    piStack_200 = (int *)(extraout_ECX + 0xd8);
    (**(code **)(*piStack_204 + 0x114))();
    if (*(int *)(extraout_ECX + 0xd8) == 0) {
      *(undefined4 *)(extraout_ECX + 0xd4) = 2;
    }
  }
  else if (iVar2 == 2) {
    *(int *)(extraout_ECX + 0xdc) = *(int *)(extraout_ECX + 0xdc) + -0x1e;
    if (*(int *)(extraout_ECX + 0xdc) < 1) {
      piStack_200 = (int *)(unaff_EBP + -0x14);
      piStack_204 = (int *)0x5216a1;
      FUN_00448dc6();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_204 = (int *)0x5216b6;
      FUN_00403191();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_204 = (int *)0x5216c6;
      FUN_00403191();
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0x0;
      iStack_208 = unaff_EBP + -0x17c;
      iStack_20c = unaff_EBP + -0x19c;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00679e4e(&uStack_210,0xcaf);
      iVar2 = unaff_EBP + -0x1ac;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_208 = 0x52171b;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x48) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar2 != 0) {
        piStack_200 = (int *)(unaff_EBP + -0x48);
        piStack_204 = (int *)0x521731;
        piStack_200 = (int *)FUN_0041a581();
        if (((int)piStack_200 < 0) && (piStack_200 != (int *)0x80004002)) {
          piStack_204 = (int *)0x521742;
          FUN_00878dfb();
        }
      }
      piStack_200 = (int *)(unaff_EBP + -0x1ac);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_204 = (int *)0x521752;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x52175d;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x19c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_204 = (int *)0x52176d;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521778;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x17c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_204 = (int *)0x521788;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521793;
        FUN_00878dfb();
      }
      piStack_200 = &DAT_00980690;
      piStack_204 = (int *)0x52179f;
      FUN_00403191();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_204 = (int *)0x5217af;
      FUN_00403191();
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0x0;
      iStack_208 = unaff_EBP + -0x14c;
      iStack_20c = unaff_EBP + -0x8c;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00679e4e(&uStack_210,0xcb0);
      iVar2 = unaff_EBP + -0x1cc;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_208 = 0x5217ff;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x44) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      if (iVar2 != 0) {
        piStack_200 = (int *)(unaff_EBP + -0x44);
        piStack_204 = (int *)0x521815;
        piStack_200 = (int *)FUN_0041a581();
        if (((int)piStack_200 < 0) && (piStack_200 != (int *)0x80004002)) {
          piStack_204 = (int *)0x521826;
          FUN_00878dfb();
        }
      }
      piStack_200 = (int *)(unaff_EBP + -0x1cc);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_204 = (int *)0x521836;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521841;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_204 = (int *)0x521851;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x52185c;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x14c);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_204 = (int *)0x52186c;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521877;
        FUN_00878dfb();
      }
      piStack_200 = &DAT_00980690;
      piStack_204 = (int *)0x521880;
      FUN_00403191();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_204 = (int *)0x521890;
      FUN_00403191();
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0x0;
      iStack_208 = unaff_EBP + -0x5c;
      iStack_20c = unaff_EBP + -0xac;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00679e4e(&uStack_210,0xcb1);
      iVar2 = unaff_EBP + -0x1ec;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_208 = 0x5218dd;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x34) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      if (iVar2 != 0) {
        piStack_200 = (int *)(unaff_EBP + -0x34);
        piStack_204 = (int *)0x5218f3;
        piStack_200 = (int *)FUN_0041a581();
        if (((int)piStack_200 < 0) && (piStack_200 != (int *)0x80004002)) {
          piStack_204 = (int *)0x521904;
          FUN_00878dfb();
        }
      }
      piStack_200 = (int *)(unaff_EBP + -0x1ec);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_204 = (int *)0x521914;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x52191f;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_204 = (int *)0x52192f;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x52193a;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_204 = (int *)0x521947;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521952;
        FUN_00878dfb();
      }
      piStack_200 = &DAT_00980690;
      piStack_204 = (int *)0x52195e;
      FUN_00403191();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_204 = (int *)0x52196e;
      FUN_00403191();
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0x0;
      iStack_208 = unaff_EBP + -0x16c;
      iStack_20c = unaff_EBP + -0xcc;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00679e4e(&uStack_210,0xcb2);
      iVar2 = unaff_EBP + -0x1bc;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_208 = 0x5219be;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar2 != 0) {
        piStack_200 = (int *)(unaff_EBP + -0x40);
        piStack_204 = (int *)0x5219d4;
        piStack_200 = (int *)FUN_0041a581();
        if (((int)piStack_200 < 0) && (piStack_200 != (int *)0x80004002)) {
          piStack_204 = (int *)0x5219e5;
          FUN_00878dfb();
        }
      }
      piStack_200 = (int *)(unaff_EBP + -0x1bc);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_204 = (int *)0x5219f5;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521a00;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0xcc);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      piStack_204 = (int *)0x521a10;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521a1b;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x16c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_204 = (int *)0x521a2b;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521a36;
        FUN_00878dfb();
      }
      piStack_200 = &DAT_00980690;
      piStack_204 = (int *)0x521a42;
      FUN_00403191();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      piStack_204 = (int *)0x521a52;
      FUN_00403191();
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0x0;
      iStack_208 = unaff_EBP + -0x18c;
      iStack_20c = unaff_EBP + -0xec;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00679e4e(&uStack_210,0xcb3);
      iVar2 = unaff_EBP + -0x1dc;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_208 = 0x521aa2;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x38) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (iVar2 != 0) {
        piStack_200 = (int *)(unaff_EBP + -0x38);
        piStack_204 = (int *)0x521ab8;
        piStack_200 = (int *)FUN_0041a581();
        if (((int)piStack_200 < 0) && (piStack_200 != (int *)0x80004002)) {
          piStack_204 = (int *)0x521ac9;
          FUN_00878dfb();
        }
      }
      piStack_200 = (int *)(unaff_EBP + -0x1dc);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      piStack_204 = (int *)0x521ad9;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521ae4;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0xec);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piStack_204 = (int *)0x521af4;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521aff;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x18c);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_204 = (int *)0x521b0f;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521b1a;
        FUN_00878dfb();
      }
      piStack_200 = &DAT_00980690;
      piStack_204 = (int *)0x521b26;
      FUN_00403191();
      piStack_200 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      piStack_204 = (int *)0x521b36;
      FUN_00403191();
      piStack_200 = (int *)0x0;
      piStack_204 = (int *)0x0;
      iStack_208 = unaff_EBP + -0x15c;
      iStack_20c = unaff_EBP + -0x10c;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_00679e4e(&uStack_210,0xcb4);
      iVar2 = unaff_EBP + -0x1fc;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_208 = 0x521b86;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x3c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        piStack_200 = (int *)(unaff_EBP + -0x3c);
        piStack_204 = (int *)0x521b9c;
        piStack_200 = (int *)FUN_0041a581();
        if (((int)piStack_200 < 0) && (piStack_200 != (int *)0x80004002)) {
          piStack_204 = (int *)0x521bad;
          FUN_00878dfb();
        }
      }
      piStack_200 = (int *)(unaff_EBP + -0x1fc);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      piStack_204 = (int *)0x521bbd;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521bc8;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      piStack_204 = (int *)0x521bd8;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521be3;
        FUN_00878dfb();
      }
      piStack_200 = (int *)(unaff_EBP + -0x15c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      piStack_204 = (int *)0x521bf3;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x521bfe;
        FUN_00878dfb();
      }
      piStack_200 = (int *)0x3;
      piStack_204 = (int *)0xff;
      iStack_208 = 0x521c10;
      FUN_004031b7();
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      if (piVar3 == (int *)0x0) {
        piStack_200 = (int *)0x80004003;
        piStack_204 = (int *)0x521c25;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      uStack_210 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_20c = *(undefined4 *)(unaff_EBP + -300);
      iStack_208 = *(int *)(unaff_EBP + -0x128);
      piStack_204 = *(int **)(unaff_EBP + -0x124);
      *(int **)(unaff_EBP + -0x10) = piVar3;
      piStack_200 = *(int **)(unaff_EBP + -0x120);
      iVar2 = (**(code **)(iVar2 + 0x80))(piVar3,0x4a,0x2c);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -300);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x22,0x97,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                         *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x7f,0x97,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                         *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x7c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x22,0xcf,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x9c),*(undefined4 *)(unaff_EBP + -0x98),
                         *(undefined4 *)(unaff_EBP + -0x94),*(undefined4 *)(unaff_EBP + -0x90));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x9c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x7f,0xcf,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0xbc),*(undefined4 *)(unaff_EBP + -0xb8),
                         *(undefined4 *)(unaff_EBP + -0xb4),*(undefined4 *)(unaff_EBP + -0xb0));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xbc);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x38,0x99,*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(unaff_EBP + -0xd8),
                         *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xdc);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x94,0x99,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0xfc),*(undefined4 *)(unaff_EBP + -0xf8),
                         *(undefined4 *)(unaff_EBP + -0xf4),*(undefined4 *)(unaff_EBP + -0xf0));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xfc);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x38,0xd1,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x11c),*(undefined4 *)(unaff_EBP + -0x118),
                         *(undefined4 *)(unaff_EBP + -0x114),*(undefined4 *)(unaff_EBP + -0x110));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x11c);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_004031b7(0xff,3);
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,0x94,0xd1,*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x13c),*(undefined4 *)(unaff_EBP + -0x138),
                         *(undefined4 *)(unaff_EBP + -0x134),*(undefined4 *)(unaff_EBP + -0x130));
      if (iVar2 < 0) {
        piStack_200 = (int *)&DAT_00963cc8;
        piStack_204 = *(int **)(unaff_EBP + -0x10);
        iStack_20c = 0x522030;
        iStack_208 = iVar2;
        FUN_00878e09();
      }
      piStack_200 = (int *)(unaff_EBP + -0x13c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      piStack_204 = (int *)0x522040;
      piStack_200 = (int *)FUN_00402bc3();
      if ((int)piStack_200 < 0) {
        piStack_204 = (int *)0x52204b;
        FUN_00878dfb();
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xd4) = 3;
      piStack_200 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x522069;
        (**(code **)(*piStack_200 + 8))();
      }
      piStack_200 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x52207a;
        (**(code **)(*piStack_200 + 8))();
      }
      piStack_200 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x52208b;
        (**(code **)(*piStack_200 + 8))();
      }
      piStack_200 = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x52209c;
        (**(code **)(*piStack_200 + 8))();
      }
      piStack_200 = *(int **)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x5220ad;
        (**(code **)(*piStack_200 + 8))();
      }
      piStack_200 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x5220be;
        (**(code **)(*piStack_200 + 8))();
      }
      piStack_200 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_200 != (int *)0x0) {
        piStack_204 = (int *)0x5220ce;
        (**(code **)(*piStack_200 + 8))();
      }
    }
  }
  else if ((iVar2 == 3) &&
          (*(int *)(extraout_ECX + 0xe0) = *(int *)(extraout_ECX + 0xe0) + -0x1e,
          *(int *)(extraout_ECX + 0xe0) < 1)) {
    *(undefined4 *)(extraout_ECX + 0xd4) = 4;
    piStack_200 = (int *)0x1;
    piStack_204 = (int *)0x521614;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x78) + 4) + 0x24))();
    piStack_204 = (int *)0x1;
    iStack_208 = 0x521623;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x24))();
    piVar3 = (int *)(extraout_ECX + 0xb8);
    *(undefined4 *)(unaff_EBP + -0x1c) = 2;
    do {
      iStack_208 = 1;
      iStack_20c = 0x52163c;
      (**(code **)(*(int *)(piVar3[-8] + 4) + 0x24))();
      iStack_20c = 1;
      uStack_210 = 0x521647;
      (**(code **)(*(int *)(*piVar3 + 4) + 0x24))();
      uStack_210 = 1;
      (**(code **)(*(int *)(piVar3[-4] + 4) + 0x24))();
      (**(code **)(*(int *)(piVar3[-0xc] + 4) + 0x24))(1);
      piVar3 = piVar3 + 2;
      piVar1 = (int *)(unaff_EBP + -0x1c);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    iStack_208 = 1;
    iStack_20c = 0x521677;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 200) + 4) + 0x24))();
  }
  piStack_200 = (int *)0x522110;
  FUN_008162ff();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_200 = (int *)0x52211c;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



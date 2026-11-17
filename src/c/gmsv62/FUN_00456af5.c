/* FUN_00456af5 - 0x00456af5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00456af5(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_198;
  int iStack_194;
  undefined4 *puStack_178;
  int iStack_174;
  undefined4 uStack_160;
  undefined *puStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 *puStack_150;
  
  FUN_00879bb8();
  puStack_150 = (undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  uStack_154 = 0x456b14;
  FUN_00448dc6();
  puStack_150 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_154 = 0x456b2a;
  FUN_00403191();
  puStack_150 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_154 = 0x456b3a;
  FUN_00403191();
  puStack_150 = (undefined4 *)0x0;
  uStack_154 = 0;
  iStack_158 = unaff_EBP + -0xcc;
  puStack_15c = (undefined *)(unaff_EBP + -0xbc);
  *(undefined4 **)(unaff_EBP + -0x38) = &uStack_160;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_158 = 0x456b8d;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x60) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    puStack_150 = (undefined4 *)(unaff_EBP + -0x60);
    uStack_154 = 0x456ba8;
    puStack_150 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_150 < 0) && (puStack_150 != (undefined4 *)0x80004002)) {
      uStack_154 = 0x456bb6;
      FUN_00878dfb();
    }
  }
  puStack_150 = (undefined4 *)(unaff_EBP + -0x14c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_154 = 0x456bc6;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    uStack_154 = 0x456bd1;
    FUN_00878dfb();
  }
  puStack_150 = (undefined4 *)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_154 = 0x456be1;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    uStack_154 = 0x456bec;
    FUN_00878dfb();
  }
  puStack_150 = (undefined4 *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_154 = 0x456bfc;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    uStack_154 = 0x456c07;
    FUN_00878dfb();
  }
  puStack_150 = &DAT_00980690;
  uStack_154 = 0x456c10;
  FUN_00403191();
  puStack_150 = (undefined4 *)0x0;
  uStack_154 = 0;
  *(int **)(unaff_EBP + -0x38) = &iStack_158;
  puStack_15c = &DAT_00964310;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_160 = 0x456c26;
  FUN_004033a1();
  puStack_15c = (undefined *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_160 = 0x456c36;
  FUN_0040263d();
  uStack_160 = 0x456c3d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_158 = 0x456c48;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    puStack_150 = (undefined4 *)(unaff_EBP + -0x24);
    uStack_154 = 0x456c5e;
    puStack_150 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_150 < 0) && (puStack_150 != (undefined4 *)0x80004002)) {
      uStack_154 = 0x456c6c;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x14);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar4 == (int *)0x0) {
    puStack_150 = (undefined4 *)0x80004003;
    uStack_154 = 0x456c87;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar4;
  uStack_160 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_15c = *(undefined **)(unaff_EBP + -0x5c);
  iStack_158 = *(int *)(unaff_EBP + -0x58);
  uStack_154 = *(undefined4 *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x30) = piVar4;
  puStack_150 = *(undefined4 **)(unaff_EBP + -0x50);
  puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x80))();
  if ((int)puVar3 < 0) {
    iStack_174 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_178 = puVar3;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_174 = 0x456cce;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_174 = 0x456cd9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_174 = 0x456ce6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_174 = 0x456cf1;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x78);
  if (-1 < iVar2) {
    if (iVar2 < 3) {
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x80);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (0 < iVar2) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0x15;
        do {
          iStack_174 = 0x456f65;
          FUN_00403191();
          iStack_174 = 0;
          *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_178;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_178 = (undefined4 *)0x456fa0;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x68) = iVar2;
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
          if (iVar2 != 0) {
            iStack_174 = 0x456fb6;
            iVar2 = FUN_0041a581();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              iStack_174 = 0x456fc7;
              FUN_00878dfb();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x4c);
          piVar4 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (piVar4 == (int *)0x0) {
            iStack_174 = 0x456fe2;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar2 = *piVar4;
          puStack_178 = *(undefined4 **)(unaff_EBP + -0xe8);
          iStack_174 = *(undefined4 *)(unaff_EBP + -0xe4);
          *(int **)(unaff_EBP + -0x18) = piVar4;
          puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x80))();
          if ((int)puVar3 < 0) {
            iStack_174 = *(undefined4 *)(unaff_EBP + -0x18);
            puStack_178 = puVar3;
            FUN_00878e09();
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_174 = 0x457031;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_174 = 0x45703c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_174 = 0x45704c;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_174 = 0x457057;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x28;
        } while (*(int *)(unaff_EBP + -0x14) < *(int *)(*(int *)(unaff_EBP + -0x28) + 0x80));
      }
      iStack_174 = 0x457080;
      FUN_00403191();
      iStack_174 = 0;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_178;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_178 = (undefined4 *)0x4570bb;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      if (iVar2 != 0) {
        iStack_174 = 0x4570d1;
        iVar2 = FUN_0041a581();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_174 = 0x4570e2;
          FUN_00878dfb();
        }
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
      if (piVar4 == (int *)0x0) {
        iStack_174 = 0x4570fd;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar4;
      puStack_178 = *(undefined4 **)(unaff_EBP + -0xd8);
      iStack_174 = *(undefined4 *)(unaff_EBP + -0xd4);
      *(int **)(unaff_EBP + -0x2c) = piVar4;
      puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x80))();
      if ((int)puVar3 < 0) {
        iStack_194 = *(undefined4 *)(unaff_EBP + -0x2c);
        puStack_198 = puVar3;
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_194 = 0x45715d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_194 = 0x457168;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_194 = 0x457178;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_194 = 0x457183;
        FUN_00878dfb();
      }
      iStack_194 = 0x457193;
      FUN_00403191();
      iStack_194 = 0;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_198;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_004033a1(&DAT_0096430c);
      iVar2 = unaff_EBP + -300;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_198 = (undefined4 *)0x4571ce;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x3c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (iVar2 != 0) {
        iStack_194 = 0x4571e4;
        iVar2 = FUN_0041a581();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_194 = 0x4571f5;
          FUN_00878dfb();
        }
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x34);
      if (piVar4 == (int *)0x0) {
        iStack_194 = 0x457210;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x80);
      iVar1 = *piVar4;
      puStack_198 = *(undefined4 **)(unaff_EBP + -0xa8);
      iStack_194 = *(undefined4 *)(unaff_EBP + -0xa4);
      *(int **)(unaff_EBP + -0x2c) = piVar4;
      puVar3 = (undefined4 *)
               (**(code **)(iVar1 + 0x80))
                         (piVar4,0,iVar2 * 0x28 + 0x1a,*(undefined4 *)(unaff_EBP + -0x18),
                          *(undefined4 *)(unaff_EBP + -0xac));
      if ((int)puVar3 < 0) {
        iStack_174 = *(undefined4 *)(unaff_EBP + -0x2c);
        puStack_178 = puVar3;
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_174 = 0x457270;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x45727b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_174 = 0x45728b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x457296;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x78);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (0 < iVar2) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        do {
          iStack_174 = 0x4572b5;
          FUN_00403191();
          iStack_174 = 0;
          *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_178;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_178 = (undefined4 *)0x4572f0;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x38) = iVar2;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (iVar2 != 0) {
            iStack_174 = 0x457306;
            iVar2 = FUN_0041a581();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              iStack_174 = 0x457317;
              FUN_00878dfb();
            }
          }
          piVar4 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
          if (piVar4 == (int *)0x0) {
            iStack_174 = 0x457332;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          puStack_178 = *(undefined4 **)(unaff_EBP + -0x78);
          iVar2 = *piVar4;
          iStack_174 = *(undefined4 *)(unaff_EBP + -0x74);
          *(int **)(unaff_EBP + -0x2c) = piVar4;
          puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x80))();
          if ((int)puVar3 < 0) {
            iStack_174 = *(undefined4 *)(unaff_EBP + -0x2c);
            puStack_178 = puVar3;
            FUN_00878e09();
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          iStack_174 = 0x45738f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_174 = 0x45739a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_174 = 0x4573a7;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_174 = 0x4573b2;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x13;
        } while (*(int *)(unaff_EBP + -0x14) < *(int *)(*(int *)(unaff_EBP + -0x28) + 0x78));
      }
    }
    else if (iVar2 == 3) {
      iStack_174 = 0x456d21;
      FUN_00403191();
      iStack_174 = 0;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_178;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      puStack_178 = (undefined4 *)0x456d5c;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -100) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      if (iVar2 != 0) {
        iStack_174 = 0x456d72;
        iVar2 = FUN_0041a581();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_174 = 0x456d83;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x44);
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (piVar4 == (int *)0x0) {
        iStack_174 = 0x456d9e;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar4;
      puStack_178 = *(undefined4 **)(unaff_EBP + -0x98);
      iStack_174 = *(undefined4 *)(unaff_EBP + -0x94);
      *(int **)(unaff_EBP + -0x14) = piVar4;
      puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x80))();
      if ((int)puVar3 < 0) {
        iStack_194 = *(undefined4 *)(unaff_EBP + -0x14);
        puStack_198 = puVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
        iStack_194 = 0x456de5;
        (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_194 = 0x456df5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_194 = 0x456e00;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_194 = 0x456e10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_194 = 0x456e1b;
        FUN_00878dfb();
      }
      iStack_194 = 0x456e25;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      iStack_194 = unaff_EBP + -0x5c;
      puVar3 = &DAT_00980690;
      puStack_198 = (undefined4 *)0x456e33;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_194 = 0x456e3f;
        FUN_00878dfb();
        puVar3 = extraout_ECX_00;
      }
      iStack_194 = 0;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_198;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_198 = puVar3;
      FUN_004033a1(&DAT_0096430c);
      iVar2 = unaff_EBP + -0x11c;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      puStack_198 = (undefined4 *)0x456e7a;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x6c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      if (iVar2 != 0) {
        iStack_194 = 0x456e90;
        iVar2 = FUN_0041a581();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_194 = 0x456ea1;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x48);
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piVar4 == (int *)0x0) {
        iStack_194 = 0x456ebc;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar4;
      puStack_198 = *(undefined4 **)(unaff_EBP + -0x58);
      iStack_194 = *(undefined4 *)(unaff_EBP + -0x54);
      *(int **)(unaff_EBP + -0x14) = piVar4;
      puVar3 = (undefined4 *)
               (**(code **)(iVar2 + 0x80))
                         (piVar4,0,0x28,*(undefined4 *)(unaff_EBP + -0x1c),
                          *(undefined4 *)(unaff_EBP + -0x5c));
      if ((int)puVar3 < 0) {
        iStack_174 = *(undefined4 *)(unaff_EBP + -0x14);
        puStack_178 = puVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
        iStack_174 = 0x456f00;
        (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_174 = 0x456f10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x456f1b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_174 = 0x456f28;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_174 = 0x456f37;
        FUN_00878dfb();
      }
    }
  }
  iStack_174 = 0x4573d2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_174 = unaff_EBP + -0x5c;
  puVar3 = &DAT_00980690;
  puStack_178 = (undefined4 *)0x4573e0;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_174 = 0x4573ec;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_174 = 0;
  *(undefined4 ***)(unaff_EBP + -0x3c) = &puStack_178;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  puStack_178 = puVar3;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  puStack_178 = (undefined4 *)0x457427;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 != 0) {
    iStack_174 = 0x45743d;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_174 = 0x45744e;
      FUN_00878dfb();
    }
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x24);
  if (piVar4 == (int *)0x0) {
    iStack_174 = 0x457469;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar4;
  puStack_178 = *(undefined4 **)(unaff_EBP + -0x58);
  iStack_174 = *(undefined4 *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x40) = piVar4;
  puVar3 = (undefined4 *)(**(code **)(iVar2 + 0x80))();
  if ((int)puVar3 < 0) {
    iStack_194 = *(undefined4 *)(unaff_EBP + -0x40);
    puStack_198 = puVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_194 = 0x4574b5;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_194 = 0x4574c5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_194 = 0x4574d0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_194 = 0x4574dd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_194 = 0x4574e8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_194 = 0x4574f8;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_194 = 0x457509;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



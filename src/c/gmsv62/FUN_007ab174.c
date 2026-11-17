/* FUN_007ab174 - 0x007ab174 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ab174(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int extraout_ECX;
  int iVar12;
  int extraout_ECX_00;
  int iVar13;
  int *extraout_ECX_01;
  int extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piStack_c28;
  int iStack_c24;
  int iStack_c20;
  int *piStack_c1c;
  int iStack_c08;
  int iStack_c04;
  int iStack_c00;
  int *piStack_bfc;
  
  FUN_00879bb8();
  iVar5 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x8c) = iVar5;
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x9c) = 1;
  *(int *)(unaff_EBP + -0x98) = iVar5 + 0x3128;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_bfc = (int *)0x7ab1c1;
  uVar1 = FUN_004133f0();
  piStack_bfc = *(int **)(extraout_ECX + 0x4a4);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
  iVar2 = **(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  iStack_c00 = 0x7ab1d7;
  uVar1 = FUN_0044dddc();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
  piStack_bfc = (int *)0x7ab1e0;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x68) = uVar1;
  *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(extraout_ECX + 0x4b0);
  if (iVar2 == 0x205d2e) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x41;
  }
  else if (iVar2 == 0x205d2f) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x40;
  }
  else if (iVar2 == 0x21e3ce) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x49;
  }
  else if (iVar2 == 0x21e3cf) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x42;
  }
  else if (iVar2 == 0x231c4a) {
    piStack_bfc = *(int **)(unaff_EBP + -0x30);
    iStack_c00 = *(int *)(unaff_EBP + 0xc);
    iStack_c04 = *(int *)(unaff_EBP + 8);
    iStack_c08 = *(int *)(unaff_EBP + -0x2c);
    uVar1 = FUN_00654087();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  }
  else if (iVar2 == 0x236a70) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x43;
  }
  else {
    piStack_bfc = (int *)0x7ab235;
    iVar2 = FUN_0043f79a();
    if ((((iVar2 == 0) || (*(int *)(unaff_EBP + 8) != 0)) || (*(int *)(unaff_EBP + -0x2c) == 0x27))
       || (*(int *)(unaff_EBP + -0x2c) == 0x30)) {
      piStack_bfc = *(int **)(unaff_EBP + -0x30);
      iStack_c00 = *(int *)(unaff_EBP + 0xc);
      iStack_c04 = *(int *)(unaff_EBP + 8);
      iStack_c08 = *(int *)(unaff_EBP + -0x2c);
      iVar2 = FUN_00654087();
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      if ((iVar2 < 0) && (*(int *)(unaff_EBP + 8) != 0)) {
        piStack_bfc = *(int **)(unaff_EBP + -0x2c);
        iStack_c00 = 0x7ab2bb;
        iVar2 = FUN_00653f88();
        if (iVar2 != 0) {
          piStack_bfc = (int *)0x10d2;
          iStack_c00 = unaff_EBP + -0x20;
          iStack_c04 = 0x7ab2d2;
          iStack_c00 = FUN_00679d22();
          piStack_bfc = (int *)0xc;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_c04 = 0x7ab2de;
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_bfc = (int *)0x7ab2ec;
          FUN_00414ebb();
        }
      }
    }
    else {
      piStack_bfc = (int *)0x10d2;
      iStack_c00 = unaff_EBP + -0x38;
      iStack_c04 = 0x7ab25e;
      iStack_c00 = FUN_00679d22();
      piStack_bfc = (int *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_c04 = 0x7ab26a;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_bfc = (int *)0x7ab278;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
    }
  }
  piStack_bfc = (int *)(unaff_EBP + -0x30);
  iStack_c00 = 0x7ab343;
  piVar3 = (int *)FUN_00486ada();
  uVar14 = -(uint)(*piVar3 != 0) & *piVar3 - 0xcU;
  piStack_bfc = *(int **)(unaff_EBP + -0x30);
  if (piStack_bfc != (int *)0x0) {
    iStack_c00 = 0x7ab35b;
    (**(code **)(*piStack_bfc + 8))();
  }
  if ((*(uint *)(extraout_ECX + 0x52c) & 0xfffffffe) != 0x12) {
    piStack_bfc = (int *)0x7ab375;
    uVar4 = FUN_0043f6fe();
    if (0x7fffffff < uVar4) {
      if (((*(int *)(uVar14 + 0x110) == 0) && (*(int *)(unaff_EBP + -0x14) != 0x231c4a)) &&
         (*(int *)(unaff_EBP + -0x14) != 0x20361a)) {
        piStack_bfc = (int *)0x7ab3a1;
        iVar2 = FUN_00614c6f();
        if (iVar2 == 0) goto LAB_007ac5eb;
      }
      piStack_bfc = (int *)0x7ab3b0;
      iVar2 = FUN_00614c6f();
      if (iVar2 != 0) {
        piStack_bfc = *(int **)(uVar14 + 0x124);
        iStack_c00 = uVar14 + 0x11c;
        iStack_c04 = 0x7ab3c6;
        iVar2 = FUN_0048bb31();
        if (iVar2 != 0) goto LAB_007ac5eb;
      }
      if (-1 < *(int *)(unaff_EBP + -0x1c)) {
        piStack_bfc = *(int **)(unaff_EBP + 0xc);
        iStack_c00 = 0x7ab3e5;
        iVar2 = FUN_006509a1();
        piStack_bfc = *(int **)(iVar5 + 0x2320);
        iStack_c00 = iVar5 + 0x2318;
        *(uint *)(unaff_EBP + -0x40) = *(uint *)(extraout_ECX + 0x52c) & 1;
        iStack_c04 = 0x7ab405;
        iVar5 = FUN_00413367();
        iVar5 = iVar5 + 6;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *(int *)(unaff_EBP + -0x90) = iVar5;
        if (0xb < iVar5) {
          *(undefined4 *)(unaff_EBP + -0x90) = 0xc;
        }
        piStack_bfc = *(int **)(iVar2 + 0x138);
        iStack_c00 = iVar2 + 0x130;
        iStack_c04 = 0x7ab435;
        iVar5 = FUN_00413367();
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        if (0xe < iVar5) {
          iVar5 = 0xf;
        }
        piStack_bfc = *(int **)(iVar2 + 0x108);
        iStack_c00 = iVar2 + 0x100;
        *(int *)(unaff_EBP + -0x30) = iVar5 - *(int *)(unaff_EBP + 0x10);
        iStack_c04 = 0x7ab460;
        iVar2 = FUN_00413367();
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        *(int *)(unaff_EBP + -0x2c) = iVar2;
        if (0xe < iVar2) {
          *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
        }
        piStack_bfc = *(int **)(unaff_EBP + 0xc);
        iStack_c00 = *(int *)(unaff_EBP + 8);
        iStack_c04 = *(int *)(unaff_EBP + -0x90);
        iStack_c08 = *(int *)(unaff_EBP + -0x1c);
        iVar2 = FUN_0078c1bd();
        if (iVar2 != 0) {
          piStack_bfc = (int *)0x7fffffff;
          iStack_c00 = 0;
          iStack_c04 = *(int *)(unaff_EBP + -0x90);
          iStack_c08 = *(int *)(unaff_EBP + 0xc);
          FUN_00790b31();
          piVar3 = (int *)(extraout_ECX + 4);
          iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
          iVar2 = *(int *)(iVar2 + 4);
          piVar6 = (int *)(**(code **)(*piVar3 + 0x10))();
          iVar5 = *piVar6;
          iVar12 = *(int *)(extraout_ECX + 0x1efc) - iVar5;
          if ((((iVar12 < -5) || (5 < iVar12)) ||
              (iVar12 = *(int *)(extraout_ECX + 0x1f00) - iVar2, iVar12 < -0x95)) || (0x95 < iVar12)
             ) {
            *(undefined4 *)(extraout_ECX + 0x1f04) = 0;
            *(int *)(extraout_ECX + 0x1efc) = iVar5;
            *(int *)(extraout_ECX + 0x1f00) = iVar2;
          }
          else {
            if (99 < *(int *)(extraout_ECX + 0x1f04)) goto LAB_007ac5eb;
            *(int *)(extraout_ECX + 0x1f04) = *(int *)(extraout_ECX + 0x1f04) + 1;
          }
          iVar2 = *(int *)(unaff_EBP + -0x1c);
          piStack_bfc = (int *)0x7ab530;
          uVar14 = FUN_0043f6fe();
          piStack_bfc = *(int **)(unaff_EBP + 0xc);
          iStack_c00 = unaff_EBP + -100;
          *(int *)(unaff_EBP + -0x18) =
               (*(int *)((uint)(uVar14 < 0x80000000) * 0x3f4 + 0x53c + extraout_ECX) *
               (&DAT_00978688)[iVar2 * 6]) / (int)(&DAT_00978684)[iVar2 * 6];
          iStack_c04 = 0x7ab561;
          FUN_007ab103();
          piStack_bfc = (int *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_c00 = 0x7ab574;
          FUN_00793a7d();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if ((*(int **)(unaff_EBP + -0x94) == (int *)0x0) ||
             (iVar2 = **(int **)(unaff_EBP + -0x94), iVar2 == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(iVar2 + -4) >> 1;
          }
          if (uVar14 != 0) {
            piStack_bfc = (int *)0x0;
            iStack_c00 = 0x7ab59f;
            iStack_c00 = FUN_007a9209();
            iStack_c08 = unaff_EBP + -0x94;
            *(int **)(unaff_EBP + -0x74) = &iStack_c04;
            iStack_c04 = extraout_ECX_00;
            FUN_004059fd();
            iStack_c08 = *(int *)(unaff_EBP + -0x1c);
            FUN_0078ceed();
          }
          piStack_bfc = (int *)0x7ab5cc;
          puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x58) = *puVar7;
          piStack_bfc = (int *)0x7ab5d8;
          iVar2 = (**(code **)(*piVar3 + 0x10))();
          iVar2 = *(int *)(iVar2 + 4);
          iVar12 = iVar2 + -0x1c;
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          iVar5 = (-(uint)(*(int *)(unaff_EBP + -0x40) != 0) & 0xffffff9c) + 0x32 +
                  *(int *)(unaff_EBP + -0x58);
          *(int *)(unaff_EBP + -0x54) = iVar12;
          if (((*(int *)(unaff_EBP + -0x14) == 0x2195ad) ||
              (iVar13 = *(int *)(unaff_EBP + -0x14), iVar13 == 0x231c4a)) ||
             ((((iVar13 == 0x20361a ||
                (((((iVar13 == 0x21bcba || (iVar13 == 0x23435c)) || (iVar13 == 0x205d29)) ||
                  ((iVar13 == 0x21e3c9 || (iVar13 == 0x236a69)))) || (iVar13 == 0x3ee1ac)))) ||
               (((iVar13 == 0x40684c || (iVar13 == 0x205d2f)) || (iVar13 == 0x21e3cf)))) ||
              (((iVar13 == 0x236a70 || (iVar13 == 0x205d2b)) || (iVar13 == 0x21e3cb)))))) {
            piStack_bfc = *(int **)(unaff_EBP + 0xc);
            iStack_c00 = 0x7abb10;
            piStack_bfc = (int *)FUN_006509a1();
            iStack_c00 = 0x7abb1c;
            FUN_007a3fab();
            piStack_bfc = (int *)(unaff_EBP + -0x1a4);
            iStack_c00 = unaff_EBP + -0x50;
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iStack_c04 = 0x7abb30;
            FUN_00411537();
            if (*(int *)(unaff_EBP + -0x14) == 0x231c4a) {
              piStack_bfc = (int *)0x7abb4b;
              uVar1 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x4c) = uVar1;
              piStack_bfc = (int *)0x7abb58;
              uVar1 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x50) = uVar1;
              piStack_bfc = (int *)0x7abb65;
              uVar1 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x48) = uVar1;
              piStack_bfc = (int *)0x7abb72;
              uVar1 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x44) = uVar1;
            }
            else {
              if (((*(int *)(unaff_EBP + -0x14) == 0x205d29) ||
                  (*(int *)(unaff_EBP + -0x14) == 0x21e3c9)) ||
                 (*(int *)(unaff_EBP + -0x14) == 0x236a69)) {
                iVar2 = -0x4b - (*(int *)(unaff_EBP + 0x14) * 3) / 200;
                *(int *)(unaff_EBP + -0x4c) = iVar2;
                *(int *)(unaff_EBP + -0x44) = -iVar2;
                iVar2 = -100 - *(int *)(unaff_EBP + 0x14) / 0x32;
                *(int *)(unaff_EBP + -0x50) = iVar2;
                *(int *)(unaff_EBP + -0x48) = -iVar2;
              }
              else {
                iVar2 = *(int *)(unaff_EBP + -0x50);
              }
              if ((*(int *)(unaff_EBP + -0x14) == 0x205d2b) ||
                 (*(int *)(unaff_EBP + -0x14) == 0x21e3cb)) {
                if ((*(int **)(unaff_EBP + -100) == (int *)0x0) ||
                   (iVar5 = **(int **)(unaff_EBP + -100), iVar5 == 0)) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(uint *)(iVar5 + -4) >> 1;
                }
                if (uVar14 != 0) {
                  *(int *)(unaff_EBP + -0x74) = -iVar2;
                  iVar5 = -iVar2;
                  if (*(int *)(unaff_EBP + -0x40) != 0) {
                    iVar5 = iVar2;
                  }
                  iStack_c00 = *(int *)(unaff_EBP + -0x58);
                  piStack_bfc = (int *)0x0;
                  *(int *)(unaff_EBP + -0x58) = iVar5 + iStack_c00;
                  iStack_c04 = unaff_EBP + -100;
                  *(int **)(unaff_EBP + -0x20) = &iStack_c00;
                  iStack_c08 = 0x7abc2b;
                  FUN_004059fd();
                  *(undefined1 *)(unaff_EBP + -4) = 6;
                  iStack_c04 = 0x7abc3d;
                  FUN_00424e27();
                  iStack_c04 = 0x7abc44;
                  iStack_c04 = FUN_004320e3();
                  *(int **)(unaff_EBP + -0x10) = &iStack_c08;
                  iStack_c08 = extraout_ECX_02;
                  FUN_00424dd7();
                  *(int *)(unaff_EBP + -0x38) =
                       *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x68);
                  *(undefined1 *)(unaff_EBP + -4) = 5;
                  piStack_c1c = (int *)0x7abc78;
                  piStack_c1c = (int *)__ftol();
                  iStack_c20 = *(int *)(unaff_EBP + -0x38);
                  iStack_c24 = 0x7abc81;
                  FUN_00424e82();
                  iStack_c24 = 0x7abc88;
                  FUN_00427cd1();
                }
              }
            }
            uVar14 = *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x52c);
            piStack_bfc = (int *)0x7abc98;
            iVar2 = (**(code **)(*piVar3 + 0x10))();
            iVar2 = *(int *)(iVar2 + 4);
            piStack_bfc = (int *)0x7abca2;
            piVar3 = (int *)(**(code **)(*piVar3 + 0x10))();
            iVar5 = *piVar3;
            if ((uVar14 & 1) == 0) {
              *(int *)(unaff_EBP + -0x48) = -*(int *)(unaff_EBP + -0x48);
              *(int *)(unaff_EBP + -0x50) = -*(int *)(unaff_EBP + -0x50);
              piStack_bfc = (int *)(unaff_EBP + -0x48);
              iStack_c00 = unaff_EBP + -0x50;
              iStack_c04 = 0x7abcc6;
              FUN_004459fe();
            }
            iStack_c04 = unaff_EBP + -0x50;
            iStack_c08 = 0x7abcd4;
            iStack_c00 = iVar5;
            piStack_bfc = (int *)iVar2;
            (*DAT_0097b54c)();
            if (*(int *)(unaff_EBP + -0x14) == 0x231c4a) {
              piStack_c1c = (int *)0x7abcf6;
              iVar2 = FUN_005d5575();
            }
            else {
              piStack_c1c = (int *)0x0;
              iStack_c20 = 0;
              iStack_c24 = *(undefined4 *)(unaff_EBP + -0x30);
              piStack_c28 = (int *)(unaff_EBP + -0xfc);
              iVar2 = FUN_005d528b(unaff_EBP + -0x50);
            }
            *(int *)(unaff_EBP + -0x28) = iVar2;
            if (0 < iVar2) {
              *(int *)(unaff_EBP + -0x38) = iVar2;
              do {
                if (iVar2 == 0) {
                  FUN_004133f0();
                }
                else {
                  FUN_004133f0();
                }
                FUN_007b4c0a();
                piVar3 = (int *)(unaff_EBP + -0x38);
                *piVar3 = *piVar3 + -1;
              } while (*piVar3 != 0);
              if (0 < iVar2) {
                *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x18);
                *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0xfc;
                piVar3 = (int *)(unaff_EBP + -0xbf8);
                *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x28);
                do {
                  piStack_c1c = (int *)0x7abd93;
                  _memset(piVar3,0,0x98);
                  *piVar3 = **(int **)(unaff_EBP + -0x30);
                  iVar2 = FUN_005c634c();
                  piVar3[2] = iVar2;
                  iVar2 = FUN_0067d28e();
                  piStack_c1c = *(int **)(unaff_EBP + -0x50);
                  piVar3[3] = iVar2;
                  iStack_c20 = unaff_EBP + -0x58;
                  iStack_c24 = 0x7abdc8;
                  piVar6 = (int *)FUN_005c5bbc();
                  iVar2 = *(int *)(unaff_EBP + -0x14);
                  piVar3[0x24] = *piVar6;
                  piVar3[0x25] = piVar6[1];
                  if (((iVar2 == 0x205d2f) || (*(int *)(unaff_EBP + -0x14) == 0x21e3cf)) ||
                     (*(int *)(unaff_EBP + -0x14) == 0x236a70)) {
                    iVar2 = *(int *)(unaff_EBP + -0x18);
                  }
                  else if (*(int *)(unaff_EBP + -0x14) == 0x205d2b) {
                    (**(code **)(*(int *)(*piVar3 + 4) + 0x10))();
                    (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x24) + 4) + 0x10))();
                    uVar1 = FUN_0087a90a();
                    *(undefined4 *)(unaff_EBP + -0x74) = uVar1;
                    iVar2 = __ftol();
                  }
                  else {
                    iVar2 = *(int *)(unaff_EBP + -0x20);
                  }
                  piVar3[4] = iVar2;
                  iVar2 = FUN_005c9cb2();
                  *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 4;
                  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x32;
                  piVar3[1] = iVar2;
                  piVar3 = piVar3 + 0x26;
                  piVar6 = (int *)(unaff_EBP + -0x38);
                  *piVar6 = *piVar6 + -1;
                } while (*piVar6 != 0);
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
            FUN_006575e6();
          }
          else {
            iStack_c08 = (-(uint)(*(int *)(unaff_EBP + -0x40) != 0) & 0xfffffda8) + 300 +
                         *(int *)(unaff_EBP + -0x58);
            *(int *)(unaff_EBP + -0x6c) = iVar12;
            *(int *)(unaff_EBP + -0x70) = iStack_c08;
            iStack_c00 = iVar5;
            if (iVar5 <= iStack_c08) {
              iStack_c00 = iStack_c08;
            }
            if (iVar5 < iStack_c08) {
              iStack_c08 = iVar5;
            }
            piStack_bfc = (int *)(iVar2 + -0x1b);
            iStack_c04 = iVar12;
            (*DAT_0097b504)();
            piStack_c1c = *(int **)(unaff_EBP + -0x70);
            iStack_c24 = *(undefined4 *)(unaff_EBP + -0x58);
            piStack_c28 = (int *)0x7ab6ef;
            iStack_c20 = iVar5;
            iVar2 = FUN_005d5804();
            *(int *)(unaff_EBP + -0x10) = iVar2;
            if (iVar2 == 0) {
              piStack_c1c = *(int **)(unaff_EBP + -0x70);
              iStack_c24 = *(undefined4 *)(unaff_EBP + -0x58);
              piStack_c28 = (int *)0x7ab70c;
              iStack_c20 = iVar5;
              iVar2 = FUN_005d5804();
              *(int *)(unaff_EBP + -0x10) = iVar2;
              if (iVar2 != 0) goto LAB_007ab717;
            }
            else {
LAB_007ab717:
              piStack_c1c = *(int **)(unaff_EBP + -0x50);
              iStack_c20 = unaff_EBP + -0x78;
              iStack_c24 = 0x7ab72f;
              puVar7 = (undefined4 *)FUN_005c5bbc();
              *(undefined4 *)(unaff_EBP + -0x70) = *puVar7;
              *(undefined4 *)(unaff_EBP + -0x6c) = puVar7[1];
              if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(unaff_EBP + -0x14) == 0x21e3ce)) {
                piStack_c1c = *(int **)(unaff_EBP + -0x10);
                iStack_c20 = 0x7ab76c;
                iVar2 = FUN_005d5682();
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(int *)(unaff_EBP + -0x28) = iVar2;
                if (0 < iVar2) {
                  do {
                    iVar2 = *(int *)(unaff_EBP + -0x10);
                    puVar7 = (undefined4 *)(unaff_EBP + -0xbf8 + iVar2 * 0x98);
                    piStack_c1c = (int *)0x7ab79a;
                    _memset(puVar7,0,0x98);
                    *puVar7 = *(undefined4 *)(unaff_EBP + -0xfc + iVar2 * 4);
                    uVar1 = FUN_005c634c();
                    puVar7[2] = uVar1;
                    uVar1 = FUN_0067d28e();
                    piStack_c1c = *(int **)(unaff_EBP + -0x50);
                    puVar7[3] = uVar1;
                    iStack_c20 = unaff_EBP + -0x34;
                    iStack_c24 = 0x7ab7d1;
                    puVar8 = (undefined4 *)FUN_005c5bbc();
                    puVar7[0x24] = *puVar8;
                    puVar7[0x25] = puVar8[1];
                    puVar7[4] = *(int *)(unaff_EBP + -0x10) * 100 + *(int *)(unaff_EBP + -0x18);
                    uVar1 = FUN_005c9cb2();
                    iVar2 = *(int *)(unaff_EBP + -0x10);
                    puVar7[1] = uVar1;
                    if (iVar2 == 0) {
                      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x54);
                      uVar14 = *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x52c);
                      *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x58);
                      *(uint *)(unaff_EBP + -0x3c) =
                           (-(uint)((uVar14 & 1) != 0) & 0xffffffce) + 0x19 +
                           *(int *)(unaff_EBP + -0x58);
                    }
                    else {
                      FUN_005c5b12();
                      *(int *)(unaff_EBP + -0x3c) =
                           (*(int *)(unaff_EBP + -0xb8) + *(int *)(unaff_EBP + -0xc0)) / 2;
                      *(int *)(unaff_EBP + -0x38) =
                           (*(int *)(unaff_EBP + -0xbc) + *(int *)(unaff_EBP + -0xb4)) / 2;
                    }
                    FUN_005c5b12();
                    iVar5 = *(int *)(unaff_EBP + -0xa8);
                    iVar12 = *(int *)(unaff_EBP + -0xb0);
                    *(undefined1 **)(unaff_EBP + -0x74) = &stack0xfffff3f0;
                    FUN_00408b49();
                    iVar2 = puVar7[4] + *(int *)(unaff_EBP + -0x68);
                    *(undefined1 *)(unaff_EBP + -4) = 4;
                    FUN_00424e27();
                    FUN_004320e3();
                    iStack_c20 = *(undefined4 *)(unaff_EBP + -0x38);
                    piStack_c28 = (int *)(iVar2 + 0x10e);
                    iStack_c24 = *(undefined4 *)(unaff_EBP + -0x3c);
                    piStack_c1c = (int *)((iVar12 + iVar5) / 2);
                    FUN_00424e82(iVar2);
                    FUN_00432a81(iVar2);
                    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                  } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x28));
                }
                goto LAB_007abe70;
              }
            }
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            if ((*(int **)(unaff_EBP + -100) == (int *)0x0) ||
               (iVar2 = **(int **)(unaff_EBP + -100), iVar2 == 0)) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(uint *)(iVar2 + -4) >> 1;
            }
            if (uVar14 == 0) {
              iVar2 = *(int *)(unaff_EBP + -0x10);
              iVar12 = *(int *)(unaff_EBP + -0x18);
            }
            else {
              (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x24) + 4) + 0x18))();
              piStack_c1c = *(int **)(unaff_EBP + -0x54);
              iStack_c20 = *(undefined4 *)(unaff_EBP + -0x58);
              iStack_c24 = 0x7ab95a;
              iVar2 = FUN_0086156f();
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = *(int *)(unaff_EBP + -0x10);
              }
              iVar13 = *(int *)(unaff_EBP + -0x6c) - *(int *)(unaff_EBP + -0x54);
              iVar12 = *(int *)(unaff_EBP + -0x70) - iVar5;
              *(int *)(unaff_EBP + -0x30) = iVar12 * iVar12 + iVar13 * iVar13;
              FUN_0087af44();
              uVar1 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
              if (iVar2 == 0) {
                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                *(undefined4 *)(unaff_EBP + -0x10) = 2;
                piVar3 = (int *)(unaff_EBP + -0x20);
                *(undefined4 *)(unaff_EBP + -4) = 10;
              }
              else {
                piVar3 = (int *)FUN_005cb50c();
                *(undefined4 *)(unaff_EBP + -0x10) = 1;
                *(undefined1 *)(unaff_EBP + -4) = 9;
              }
              piVar3 = (int *)*piVar3;
              *(int **)(unaff_EBP + -0x38) = piVar3;
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 4))();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xd;
              if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
                 (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
                 *(int *)(unaff_EBP + -0x20) != 0)) {
                (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xc;
              if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
                 (*(int **)(unaff_EBP + -0x74) != (int *)0x0)) {
                (**(code **)(**(int **)(unaff_EBP + -0x74) + 8))();
              }
              *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffff3ec;
              piStack_c1c = (int *)0x7aba27;
              FUN_004059fd();
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              FUN_00424e27();
              FUN_004320e3();
              iStack_c20 = unaff_EBP + -0x38;
              *(int ***)(unaff_EBP + -0x10) = &piStack_c1c;
              iStack_c24 = 0x7aba4d;
              piStack_c1c = extraout_ECX_01;
              FUN_00433bdf();
              iStack_c20 = *(int *)(unaff_EBP + -0x6c);
              iVar12 = *(int *)(unaff_EBP + -0x18);
              iStack_c24 = *(undefined4 *)(unaff_EBP + -0x70);
              piStack_c28 = *(int **)(unaff_EBP + -0x54);
              iVar10 = *(int *)(unaff_EBP + -0x30) + iVar12 + *(int *)(unaff_EBP + -0x68);
              iVar13 = *(int *)(unaff_EBP + -0x68) + iVar12;
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              FUN_00424e82(iVar13,iVar10,iVar5);
              FUN_00427cd1(iVar13,iVar10,iVar5);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
                (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
              }
            }
            if (iVar2 != 0) {
              *(undefined4 *)(unaff_EBP + -0xb68) = *(undefined4 *)(unaff_EBP + -0x70);
              *(undefined4 *)(unaff_EBP + -0xb64) = *(undefined4 *)(unaff_EBP + -0x6c);
              *(int *)(unaff_EBP + -0xbf8) = iVar2;
              *(int *)(unaff_EBP + -0xbe8) = *(int *)(unaff_EBP + -0x30) + iVar12;
              uVar1 = FUN_005c634c();
              *(undefined4 *)(unaff_EBP + -0xbf0) = uVar1;
              uVar1 = FUN_0067d28e();
              *(undefined4 *)(unaff_EBP + -0xbec) = uVar1;
              uVar1 = FUN_005c9cb2();
              *(undefined4 *)(unaff_EBP + -0xbf4) = uVar1;
              piStack_c1c = (int *)0x7abaf6;
              _memset((void *)(unaff_EBP + -0xba4),0,0x3c);
              *(undefined4 *)(unaff_EBP + -0x28) = 1;
            }
          }
LAB_007abe70:
          iVar2 = *(int *)(unaff_EBP + -0x28);
          iStack_c20 = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x4a4);
          piVar3 = *(int **)(unaff_EBP + 8);
          piStack_c1c = *(int **)(unaff_EBP + -0x1c);
          iStack_c24 = *(int *)(unaff_EBP + 0xc);
          piStack_c28 = piVar3;
          FUN_0064ba86();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if ((piVar3 == (int *)0x0) || ((*piVar3 != 0x3d0cea && (*piVar3 != 0x4faa91)))) {
            *(undefined4 *)(unaff_EBP + -0x38) = 1;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (0 < iVar2) {
            *(int *)(unaff_EBP + -0x74) = iVar2 + *(int *)(unaff_EBP + 0x10);
            puVar7 = (undefined4 *)(unaff_EBP + -0xb68);
            do {
              uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x4a4);
              uVar9 = FUN_004b8c9b();
              *(undefined4 *)(unaff_EBP + -0x30) = uVar9;
              iVar2 = FUN_00455c59();
              uVar9 = *(undefined4 *)(iVar2 + 4);
              iVar2 = puVar7[-0x24];
              piVar3 = puVar7 + -0x1e;
              iStack_c20 = *(undefined4 *)(unaff_EBP + 0xc);
              iStack_c24 = *(int *)(unaff_EBP + 8);
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              piStack_c28 = *(int **)(unaff_EBP + -0x1c);
              piStack_c1c = piVar3;
              FUN_0066e687(uVar9,*(int *)(unaff_EBP + -0x8c) + 0x209c,
                           *(int *)(unaff_EBP + -0x8c) + 0x2114,*(undefined4 *)(unaff_EBP + -0x30),
                           iVar2 + 0x170,*(undefined4 *)(unaff_EBP + -0x2c),uVar1);
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              if (*(int *)(unaff_EBP + -0x54) != 0) {
                FUN_0045e7c2();
                *(undefined4 *)(unaff_EBP + -0x54) = 0;
              }
              if (*(int *)(unaff_EBP + 8) != 0) {
                iVar2 = *(int *)(unaff_EBP + -0x18);
                piStack_c1c = *(int **)(unaff_EBP + 0xc);
                iStack_c20 = 0x7abf8e;
                iVar5 = FUN_0064cf49();
                if (iVar5 != 0) {
                  *(int *)(unaff_EBP + -0x28) = iVar2 + 1;
                  break;
                }
              }
              iVar2 = *(int *)(unaff_EBP + -0x14);
              *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x40);
              if (((iVar2 == 0x2195ad) || (iVar2 == 0x231c4a)) &&
                 (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x28) / 2)) {
                *(uint *)(unaff_EBP + -0x30) = (uint)(*(int *)(unaff_EBP + -0x40) == 0);
              }
              else if (((iVar2 == 0x205d2f) || (iVar2 == 0x21e3cf)) || (iVar2 == 0x236a70)) {
                *(undefined4 *)(unaff_EBP + -0x30) = 1;
              }
              *(undefined4 *)(unaff_EBP + -0x20) = 0;
              if (0 < *(int *)(unaff_EBP + -0x2c)) {
                iVar2 = *(int *)(unaff_EBP + -0x20);
                do {
                  iVar5 = FUN_00413367();
                  if ((0 < iVar5) && (0 < *piVar3)) {
                    *piVar3 = iVar5;
                  }
                  iVar5 = FUN_005dcae0();
                  if (iVar5 == 0) {
                    *piVar3 = 0;
                  }
                  piStack_c1c = (int *)0x0;
                  iStack_c20 = 1;
                  iStack_c24 = *(int *)(unaff_EBP + -0x38);
                  *(int ***)(unaff_EBP + -0x20) = &piStack_c28;
                  piStack_c28 = extraout_ECX_03;
                  FUN_0067d25d(&piStack_c28,*(undefined4 *)(unaff_EBP + -0x18));
                  uVar1 = puVar7[1];
                  uVar9 = *puVar7;
                  iVar10 = puVar7[-0x20] + *(int *)(unaff_EBP + -0x68);
                  iVar5 = piVar3[0xf];
                  iVar12 = *piVar3;
                  uVar17 = *(undefined4 *)(unaff_EBP + -0x30);
                  uVar16 = puVar7[-0x23];
                  uVar15 = *(undefined4 *)(unaff_EBP + -0x14);
                  iVar13 = iVar2;
                  uVar11 = FUN_0067e5d1(uVar15,iVar10,uVar16,uVar17,iVar12,iVar5,iVar2,uVar9,uVar1);
                  FUN_005cbf42(uVar11,uVar15,iVar10,uVar16,uVar17,iVar12,iVar5,iVar13,uVar9,uVar1);
                  iVar2 = iVar2 + 1;
                  piVar3 = piVar3 + 1;
                } while (iVar2 < *(int *)(unaff_EBP + -0x2c));
              }
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
              puVar7 = puVar7 + 0x26;
            } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x28));
          }
          iVar2 = *(int *)(unaff_EBP + -0x14);
          if (iVar2 == 0x20361a) {
            FUN_006509a1();
            FUN_00411537();
            piVar3 = (int *)(*(int *)(unaff_EBP + -0x24) + 4);
            (**(code **)(*piVar3 + 0x10))();
            (**(code **)(*piVar3 + 0x10))();
            piStack_c1c = (int *)0x7ac293;
            (*DAT_0097b54c)();
            FUN_0040f150();
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00428339();
            iVar2 = *(int *)(unaff_EBP + -0x38);
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
LAB_007ac2c9:
            if (iVar2 != 0) {
              FUN_004030b1();
            }
          }
          else {
            if (iVar2 == 0x205d29) {
LAB_007ac20d:
              *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + -0x28;
              *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + -0x28;
              FUN_0040f150();
              *(undefined1 *)(unaff_EBP + -4) = 0x13;
              FUN_00428339();
              iVar2 = *(int *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              goto LAB_007ac2c9;
            }
            if (iVar2 == 0x205d2f) {
LAB_007ac100:
              if (iVar2 == 0x205d2f) {
                *(undefined4 *)(unaff_EBP + -0x8c) = 3000;
              }
              else if ((iVar2 == 0x21e3cf) || (iVar2 == 0x236a70)) {
                *(undefined4 *)(unaff_EBP + -0x8c) = 0xac8;
              }
              FUN_006509a1();
              FUN_00411537();
              iVar2 = *(int *)(unaff_EBP + -0x24);
              uVar14 = *(uint *)(iVar2 + 0x52c);
              (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
              (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
              if ((uVar14 & 1) == 0) {
                *(int *)(unaff_EBP + -0x58) = -*(int *)(unaff_EBP + -0x58);
                *(int *)(unaff_EBP + -0x60) = -*(int *)(unaff_EBP + -0x60);
                FUN_004459fe();
              }
              piStack_c1c = (int *)0x7ac19a;
              (*DAT_0097b54c)();
              puVar7 = (undefined4 *)FUN_00424619();
              piStack_c28 = (int *)*puVar7;
              *(undefined1 *)(unaff_EBP + -4) = 0x14;
              if (piStack_c28 == (int *)0x0) {
                piStack_c28 = (int *)0x0;
              }
              else {
                piStack_c28 = (int *)*piStack_c28;
              }
              piStack_c1c = *(int **)(unaff_EBP + -0x8c);
              iStack_c24 = unaff_EBP + -0x60;
              iStack_c20 = 0xb4;
              FUN_00428a3e();
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              if (*(int *)(unaff_EBP + 0xc) != 0) {
                FUN_004030b1();
              }
              iVar2 = *(int *)(unaff_EBP + -0x68);
              iVar5 = *(int *)(unaff_EBP + -0x24);
              *(int *)(iVar5 + 0x1ea4) = iVar2;
              *(int *)(iVar5 + 0x1ea8) = iVar2 + 3000;
            }
            else {
              if (iVar2 == 0x21e3c9) goto LAB_007ac20d;
              if (iVar2 == 0x21e3cf) goto LAB_007ac100;
              if (iVar2 == 0x236a69) goto LAB_007ac20d;
              if (iVar2 == 0x236a70) goto LAB_007ac100;
            }
          }
          piStack_c1c = (int *)0x7ac2e3;
          FUN_0060142b();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iVar2 = FUN_00429303();
          *(undefined1 *)(unaff_EBP + 8) = *(undefined1 *)(iVar2 + 0xf8);
          FUN_00457cda();
          FUN_00457cda();
          iVar2 = *(int *)(unaff_EBP + -0x14);
          FUN_00457d37();
          if (((iVar2 == 0x205d29) || (iVar2 == 0x21e3c9)) || (iVar2 == 0x236a69)) {
            FUN_00457d37();
          }
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          FUN_007d1e08();
          FUN_00457d37();
          if (0 < *(int *)(unaff_EBP + -0x28)) {
            piVar3 = (int *)(unaff_EBP + -0xbf8);
            *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x28);
            do {
              FUN_004b8c9b();
              FUN_00457d37();
              FUN_00457cda();
              FUN_005c5474();
              FUN_00457cda();
              FUN_00457cda();
              FUN_00457cda();
              (**(code **)(*(int *)(*piVar3 + 4) + 0x10))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar3 + 4) + 0x10))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar3 + 4) + 0x14))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar3 + 4) + 0x14))();
              FUN_0045d247();
              FUN_0045d247();
              iVar2 = *(int *)(unaff_EBP + -0x2c);
              if (0 < iVar2) {
                do {
                  FUN_00457d37();
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              FUN_005d0a74();
              FUN_00457d37();
              piVar3 = piVar3 + 0x26;
              piVar6 = (int *)(unaff_EBP + 8);
              *piVar6 = *piVar6 + -1;
            } while (*piVar6 != 0);
          }
          iVar2 = *(int *)(unaff_EBP + -0x24);
          (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
          FUN_0045d247();
          (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
          FUN_0045d247();
          FUN_004751b2();
          FUN_007b4235();
          *(undefined4 *)(unaff_EBP + -0x9c) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_0045ebca();
          piStack_c1c = (int *)(unaff_EBP + -0x138);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          iStack_c20 = 0x7ac5ba;
          FUN_0087a0b8();
          *(undefined ***)(unaff_EBP + -0x144) = &PTR_LAB_008e84a0;
          if (*(int *)(unaff_EBP + -0x94) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x94) = 0;
          }
          if (*(int *)(unaff_EBP + -100) != 0) {
            FUN_004030b1();
          }
          uVar1 = 1;
          goto LAB_007ac5fc;
        }
      }
    }
  }
LAB_007ac5eb:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_bfc = (int *)0x7ac5fa;
  FUN_007a934b();
  uVar1 = 0;
LAB_007ac5fc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}



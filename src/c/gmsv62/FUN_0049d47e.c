/* FUN_0049d47e - 0x0049d47e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049d47e(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_164;
  int iStack_160;
  char *pcStack_15c;
  
  FUN_00879bb8();
  pcStack_15c = (char *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_160 = 0x49d4a2;
  FUN_00498b1f();
  iVar7 = *(int *)(extraout_ECX + 0x58);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      pcStack_15c = (char *)0xff;
      iStack_160 = 0x49d4dd;
      FUN_004031b7();
      iVar7 = *(int *)(extraout_ECX + 0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (iVar7 == 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 1;
        pcStack_15c = (char *)0x49d4fc;
        piVar2 = (int *)FUN_0049e1a1();
        iVar7 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (iVar7 == 0) {
          pcStack_15c = (char *)0x49d510;
          FUN_00878dfb();
        }
        iVar7 = FUN_0040e48b();
        *(int *)(unaff_EBP + -0x18) = *(int *)(extraout_ECX + 0x1c) - iVar7;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      pcStack_15c = (char *)0x49d52d;
      puVar6 = (undefined4 *)FUN_0049e1a1();
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar6;
      piVar2 = *(int **)(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0x22;
      if (piVar2 == (int *)0x0) {
        pcStack_15c = (char *)0x49d54a;
        FUN_00878dfb();
        piVar2 = *(int **)(unaff_EBP + -0x20);
      }
      iVar7 = *piVar2;
      uStack_164 = *(undefined4 *)(unaff_EBP + -0x144);
      iStack_160 = *(int *)(unaff_EBP + -0x140);
      pcStack_15c = *(char **)(unaff_EBP + -0x13c);
      *(int **)(unaff_EBP + -0x14) = piVar2;
      iVar7 = (**(code **)(iVar7 + 0x80))
                        (piVar2,*(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + 8),
                         *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x10));
      if (iVar7 < 0) {
        pcStack_15c = *(char **)(unaff_EBP + -0x14);
        uStack_164 = 0x49d589;
        iStack_160 = iVar7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int **)(unaff_EBP + -0x94) != (int *)0x0) {
        pcStack_15c = (char *)0x49d59d;
        (**(code **)(**(int **)(unaff_EBP + -0x94) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x20;
      if (((*(byte *)(unaff_EBP + -0x1c) & 1) != 0) && (*(int **)(unaff_EBP + -0x30) != (int *)0x0))
      {
        pcStack_15c = (char *)0x49d5b7;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      pcStack_15c = (char *)0x49d5c7;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49d5d2;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x3c) == 0) goto LAB_0049e130;
      pcStack_15c = (char *)(unaff_EBP + -0x18);
      iStack_160 = 0x49d5e8;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      pcStack_15c = (char *)0x49d5f9;
      FUN_0049ea6b();
      bVar1 = false;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      pcStack_15c = (char *)0x49d607;
      FUN_00414f8b();
      iVar7 = *(int *)(DAT_00978360 + 0xb2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (iVar7 == 0) {
        pcStack_15c = (char *)(unaff_EBP + -0x50);
        iStack_160 = 0x49d78e;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        pcStack_15c = (char *)0x49d79b;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
LAB_0049d7a2:
        FUN_00414ebb();
      }
      else {
        if (iVar7 == 1) {
          pcStack_15c = (char *)(unaff_EBP + -0x74);
          iStack_160 = 0x49d765;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          pcStack_15c = (char *)0x49d772;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          goto LAB_0049d7a2;
        }
        if (iVar7 == 2) {
          pcStack_15c = (char *)(unaff_EBP + -0x48);
          iStack_160 = 0x49d73c;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          pcStack_15c = (char *)0x49d749;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          goto LAB_0049d7a2;
        }
        if (iVar7 != 3) {
          if (iVar7 == 4) {
            pcStack_15c = (char *)(unaff_EBP + -0x6c);
            iStack_160 = 0x49d6ff;
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            pcStack_15c = (char *)0x49d70c;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
          }
          else if (iVar7 == 5) {
            pcStack_15c = (char *)0x49d682;
            puVar6 = (undefined4 *)FUN_0049e152();
            if (((char *)*puVar6 == (char *)0x0) || (*(char *)*puVar6 == '\0')) {
              bVar1 = true;
            }
            FUN_00414ebb();
            if (bVar1) {
              pcStack_15c = (char *)(unaff_EBP + -0x80);
              iStack_160 = 0x49d6af;
              FUN_00679d22();
              *(undefined1 *)(unaff_EBP + -4) = 0x26;
              pcStack_15c = (char *)0x49d6bc;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x24;
            }
            else {
              pcStack_15c = (char *)0x49d6d3;
              FUN_0049e152();
              *(undefined1 *)(unaff_EBP + -4) = 0x27;
              pcStack_15c = (char *)0x49d6e0;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x24;
            }
          }
          else {
            if (iVar7 != 6) goto LAB_0049d7a7;
            pcStack_15c = (char *)(unaff_EBP + -0x88);
            iStack_160 = 0x49d65b;
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            pcStack_15c = (char *)0x49d668;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
          }
          goto LAB_0049d7a2;
        }
        pcStack_15c = s_To_Alliance_00964d78;
        iStack_160 = 0x49d727;
        FUN_00414edd();
      }
LAB_0049d7a7:
      pcStack_15c = (char *)0x49d7b6;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
      pcStack_15c = (char *)(unaff_EBP + -0xb4);
      iStack_160 = 0x49d7c8;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49d7d4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      pcStack_15c = (char *)0x49d7e1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
      pcStack_15c = (char *)(unaff_EBP + -0xa4);
      iStack_160 = 0x49d7ee;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49d7fa;
        FUN_00878dfb();
      }
      pcStack_15c = (char *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_160 = 0x49d814;
      iStack_160 = FUN_00449749();
      uStack_164 = 0x49d81d;
      uVar8 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_164;
      uStack_164 = extraout_ECX_00;
      FUN_00448a17(uVar8);
      iVar7 = (*(int *)(unaff_EBP + 0xc) - *(int *)(extraout_ECX + 0x98)) + 3;
      iVar3 = *(int *)(unaff_EBP + 8) + 6;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_004115d9(iVar3,iVar7);
      FUN_00448e3a(iVar3,iVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      pcStack_15c = (char *)0x49d860;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49d86b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      pcStack_15c = (char *)0x49d87b;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49d886;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        pcStack_15c = (char *)0x49d8a7;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      goto LAB_0049e130;
    }
    if ((iVar7 < 2) || (4 < iVar7)) goto LAB_0049e130;
  }
  if (*(int *)(extraout_ECX + 0x9c) == 1) {
    pcStack_15c = (char *)0x49dc4e;
    piVar2 = (int *)FUN_0049e247();
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar7 == 0) {
      pcStack_15c = (char *)0x49dc62;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *piVar2;
    pcStack_15c = (char *)0x49dc72;
    piVar2 = (int *)FUN_0049e1a1();
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar7 == 0) {
      pcStack_15c = (char *)0x49dc86;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x1c) = *piVar2;
    pcStack_15c = (char *)0x49dc99;
    piVar2 = (int *)FUN_0049e2c4();
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar7 == 0) {
      pcStack_15c = (char *)0x49dcad;
      FUN_00878dfb();
    }
    iVar3 = FUN_0040e48b();
    iVar7 = *(int *)(extraout_ECX + 0x1c);
    iVar4 = FUN_0040e48b();
    uVar5 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x18) = (((iVar7 - iVar3) - iVar4) - 1U) / uVar5;
    FUN_004125e6();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004125e6();
    pcStack_15c = (char *)0xff;
    iStack_160 = 0x49dd0a;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pcStack_15c = (char *)0x49dd19;
    puVar6 = (undefined4 *)FUN_0049e247();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar6;
    piVar2 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar2 == (int *)0x0) {
      pcStack_15c = (char *)0x49dd33;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x20);
    }
    iVar7 = *piVar2;
    uStack_164 = *(undefined4 *)(unaff_EBP + -0xc4);
    iStack_160 = *(int *)(unaff_EBP + -0xc0);
    pcStack_15c = *(char **)(unaff_EBP + -0xbc);
    *(int **)(unaff_EBP + -0x1c) = piVar2;
    iVar7 = (**(code **)(iVar7 + 0x80))
                      (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14));
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar7 = FUN_00402bc3(unaff_EBP + -0xc4);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    piVar2 = (int *)FUN_0049e247(unaff_EBP + -0x3c);
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar7 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar7 = FUN_0040e48b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + -0x10) = iVar7 + *(int *)(unaff_EBP + 8);
    FUN_004125e6();
    if (0 < *(int *)(unaff_EBP + -0x18)) {
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x18);
      do {
        FUN_004031b7(0xff,3);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puVar6 = (undefined4 *)FUN_0049e2c4(unaff_EBP + -0x44);
        *(undefined4 *)(unaff_EBP + -0x14) = *puVar6;
        piVar2 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar2 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar2 = *(int **)(unaff_EBP + -0x20);
        }
        iVar7 = *piVar2;
        *(int **)(unaff_EBP + -0x18) = piVar2;
        iVar7 = (**(code **)(iVar7 + 0x80))
                          (piVar2,*(undefined4 *)(unaff_EBP + -0x10),
                           *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + -0xd0),
                           *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200));
        if (iVar7 < 0) {
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar7 = FUN_00402bc3(unaff_EBP + -0xd4);
        if (iVar7 < 0) {
          FUN_00878dfb(iVar7);
        }
        piVar2 = (int *)FUN_0049e2c4(unaff_EBP + -0x4c);
        iVar7 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar7 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar7 = FUN_0040e48b();
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004125e6();
        piVar2 = (int *)(unaff_EBP + -0x1c);
        *piVar2 = *piVar2 + -1;
      } while (*piVar2 != 0);
    }
    FUN_004031b7(0xff,3);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puVar6 = (undefined4 *)FUN_0049e1a1(unaff_EBP + -0x54);
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar6;
    piVar2 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar2 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar2 = *(int **)(unaff_EBP + -0x20);
    }
    iVar7 = *piVar2;
    *(int **)(unaff_EBP + -0x1c) = piVar2;
    iVar7 = (**(code **)(iVar7 + 0x80))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0xf4),
                       *(undefined4 *)(unaff_EBP + -0xf0),*(undefined4 *)(unaff_EBP + -0xec),
                       *(undefined4 *)(unaff_EBP + -0xe8));
    if (iVar7 < 0) {
      pcStack_15c = *(char **)(unaff_EBP + -0x1c);
      uStack_164 = 0x49df20;
      iStack_160 = iVar7;
      FUN_00878e09();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pcStack_15c = (char *)0x49df38;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      pcStack_15c = (char *)0x49df43;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x3c) != 0) {
      pcStack_15c = (char *)(unaff_EBP + -0x18);
      iStack_160 = 0x49df59;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      pcStack_15c = (char *)0x49df6a;
      FUN_0049ea6b();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      pcStack_15c = (char *)0x49df77;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pcStack_15c = (char *)0x49df8c;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      pcStack_15c = (char *)0x49df9f;
      iStack_160 = FUN_00449713();
      *(char ***)(unaff_EBP + -0x14) = &pcStack_15c;
      uStack_164 = 0x49dfab;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_160 = 0x49dfb7;
      FUN_0044974c();
      iStack_160 = 0x49dfbe;
      uVar8 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
      pcStack_15c = (char *)0x49dfcc;
      piVar2 = (int *)FUN_0049e1a1();
      iVar7 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (iVar7 == 0) {
        pcStack_15c = (char *)0x49dfe1;
        FUN_00878dfb();
      }
      iVar7 = FUN_0040e48b();
      *(bool *)(unaff_EBP + -0x21) =
           (uint)(*(int *)(extraout_ECX + 0x1c) - iVar7) < *(uint *)(unaff_EBP + -0x14);
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pcStack_15c = (char *)0x49e00c;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49e017;
        FUN_00878dfb();
      }
      if (*(char *)(unaff_EBP + -0x21) != '\0') {
        pcStack_15c = (char *)0x49e028;
        piVar2 = (int *)FUN_0049e1a1();
        iVar7 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (iVar7 == 0) {
          pcStack_15c = (char *)0x49e03d;
          FUN_00878dfb();
        }
        iVar7 = FUN_0040e48b();
        pcStack_15c = (char *)(*(int *)(extraout_ECX + 0x1c) - iVar7);
        iStack_160 = unaff_EBP + -0x18;
        *(char ***)(unaff_EBP + -0x14) = &pcStack_15c;
        uStack_164 = 0x49e059;
        FUN_0046fcc9();
        iStack_160 = unaff_EBP + -0x10;
        uStack_164 = 0x49e062;
        FUN_007d3a22();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004125e6();
      }
      pcStack_15c = (char *)0x49e07d;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      pcStack_15c = (char *)0x49e08d;
      FUN_00403191();
      pcStack_15c = (char *)(unaff_EBP + -0x134);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_160 = 0x49e0a7;
      iStack_160 = FUN_00449749();
      uStack_164 = 0x49e0b0;
      uVar8 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_164;
      uStack_164 = extraout_ECX_01;
      FUN_00448a17(uVar8);
      iVar7 = *(int *)(unaff_EBP + 0xc) + 3;
      iVar3 = *(int *)(unaff_EBP + 8) + 3;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_004115d9(iVar3,iVar7);
      FUN_00448e3a(iVar3,iVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      pcStack_15c = (char *)0x49e0ed;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49e0f8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      pcStack_15c = (char *)0x49e108;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_15c = (char *)0x49e113;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        pcStack_15c = (char *)0x49e127;
        FUN_00434e38();
      }
      FUN_004497b5();
    }
  }
  else if (*(int *)(extraout_ECX + 0x9c) == 2) {
    pcStack_15c = (char *)0x49d8ce;
    piVar2 = (int *)FUN_0049e247();
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar7 == 0) {
      pcStack_15c = (char *)0x49d8e2;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *piVar2;
    pcStack_15c = (char *)0x49d8f2;
    piVar2 = (int *)FUN_0049e1a1();
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (iVar7 == 0) {
      pcStack_15c = (char *)0x49d906;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x1c) = *piVar2;
    pcStack_15c = (char *)0x49d916;
    piVar2 = (int *)FUN_0049e2c4();
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar7 == 0) {
      pcStack_15c = (char *)0x49d92a;
      FUN_00878dfb();
    }
    iVar3 = FUN_0040e48b();
    iVar7 = *(int *)(extraout_ECX + 0x1c);
    iVar4 = FUN_0040e48b();
    uVar5 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x18) = (((iVar7 - iVar3) - iVar4) - 1U) / uVar5;
    FUN_004125e6();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004125e6();
    pcStack_15c = (char *)0xff;
    iStack_160 = 0x49d987;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    pcStack_15c = (char *)0x49d996;
    puVar6 = (undefined4 *)FUN_0049e247();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar6;
    piVar2 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (piVar2 == (int *)0x0) {
      pcStack_15c = (char *)0x49d9b0;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x20);
    }
    iVar7 = *piVar2;
    uStack_164 = *(undefined4 *)(unaff_EBP + -0xe4);
    iStack_160 = *(int *)(unaff_EBP + -0xe0);
    pcStack_15c = *(char **)(unaff_EBP + -0xdc);
    *(int **)(unaff_EBP + -0x1c) = piVar2;
    iVar7 = (**(code **)(iVar7 + 0x80))
                      (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14));
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar7 = FUN_00402bc3(unaff_EBP + -0xe4);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    piVar2 = (int *)FUN_0049e247(unaff_EBP + -0x8c);
    iVar7 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (iVar7 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar7 = FUN_0040e48b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + 8) = iVar7 + *(int *)(unaff_EBP + 8);
    FUN_004125e6();
    if (0 < *(int *)(unaff_EBP + -0x18)) {
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x18);
      do {
        FUN_004031b7(0xff,3);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        puVar6 = (undefined4 *)FUN_0049e2c4(unaff_EBP + -0x68);
        *(undefined4 *)(unaff_EBP + -0x14) = *puVar6;
        piVar2 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (piVar2 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar2 = *(int **)(unaff_EBP + -0x20);
        }
        iVar7 = *piVar2;
        *(int **)(unaff_EBP + -0x18) = piVar2;
        iVar7 = (**(code **)(iVar7 + 0x80))
                          (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                           *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x124),
                           *(undefined4 *)(unaff_EBP + -0x120),*(undefined4 *)(unaff_EBP + -0x11c),
                           *(undefined4 *)(unaff_EBP + -0x118));
        if (iVar7 < 0) {
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar7 = FUN_00402bc3(unaff_EBP + -0x124);
        if (iVar7 < 0) {
          FUN_00878dfb(iVar7);
        }
        piVar2 = (int *)FUN_0049e2c4(unaff_EBP + -0x28);
        iVar7 = *piVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (iVar7 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar7 = FUN_0040e48b();
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004125e6();
        piVar2 = (int *)(unaff_EBP + -0x1c);
        *piVar2 = *piVar2 + -1;
      } while (*piVar2 != 0);
    }
    FUN_004b3b8f(0);
    if ((*(int *)(extraout_ECX + 0xa4) != 0) && (*(int *)(extraout_ECX + 0x4c) == 0)) {
      FUN_00817f6e(-(uint)(*(int *)(extraout_ECX + 0x54) != 0) & *(int *)(extraout_ECX + 0x54) + 4U)
      ;
    }
    if ((*(int *)(extraout_ECX + 0x60) != *(int *)(extraout_ECX + 100)) &&
       (*(int *)(extraout_ECX + 0x3c) != 0)) {
      puVar6 = (undefined4 *)FUN_0049ea6b(*(int *)(extraout_ECX + 0x60));
      FUN_004a2fef(*puVar6);
      iVar7 = *(int *)(extraout_ECX + 0x54);
      *(undefined4 *)(iVar7 + 0x5c) = 0;
      if (*(int *)(iVar7 + 0x34) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(iVar7 + 0x34) + -4);
      }
      *(undefined4 *)(iVar7 + 0x48) = uVar8;
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(extraout_ECX + 0x60);
    }
    FUN_004031b7(0xff,3);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    puVar6 = (undefined4 *)FUN_0049e1a1(unaff_EBP + -0x70);
    uVar8 = *puVar6;
    piVar2 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (piVar2 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar2 = *(int **)(unaff_EBP + -0x20);
    }
    iVar7 = *piVar2;
    *(int **)(unaff_EBP + -0x14) = piVar2;
    iVar7 = (**(code **)(iVar7 + 0x80))
                      (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar8,
                       *(undefined4 *)(unaff_EBP + -0x104),*(undefined4 *)(unaff_EBP + -0x100),
                       *(undefined4 *)(unaff_EBP + -0xfc),*(undefined4 *)(unaff_EBP + -0xf8));
    if (iVar7 < 0) {
      pcStack_15c = *(char **)(unaff_EBP + -0x14);
      uStack_164 = 0x49dc0e;
      iStack_160 = iVar7;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (*(int **)(unaff_EBP + -0x70) != (int *)0x0) {
      pcStack_15c = (char *)0x49dc1f;
      (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pcStack_15c = (char *)0x49dc2f;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      pcStack_15c = (char *)0x49dc3e;
      FUN_00878dfb();
    }
  }
LAB_0049e130:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    pcStack_15c = (char *)0x49e141;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



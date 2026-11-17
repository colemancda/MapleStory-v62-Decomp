/* FUN_006dc67f - 0x006dc67f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006dc67f(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar12;
  int *piStack_234;
  undefined4 *puStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined4 *puStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined *puStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  
  iVar5 = FUN_00879bb8();
  iVar7 = *(int *)(extraout_ECX + 0x14);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar9 = DAT_00978368;
  if ((iVar7 != 0) && (DAT_00978358 != 0)) {
    if ((*(int *)(extraout_ECX + 0x570) == 2) || (*(int *)(extraout_ECX + 0x638) == 0)) {
      iStack_1c8 = 0x6ddd17;
      iVar5 = FUN_008162ff();
    }
    else {
      DAT_0097bd68 = DAT_0097bd68 + 1;
      iVar5 = DAT_0097bd68 / 4;
      if (DAT_0097bd68 % 4 == 0) {
        piVar8 = (int *)(DAT_00978358 + 4);
        *(int *)(unaff_EBP + -0x40) = DAT_00978358;
        *(undefined4 *)(unaff_EBP + -0x30) = uVar9;
        iVar7 = *piVar8;
        *(int **)(unaff_EBP + -0x4c) = piVar8;
        iStack_1c8 = 0x6dc6fa;
        puVar6 = (undefined4 *)(**(code **)(iVar7 + 0x10))();
        *(undefined4 *)(extraout_ECX + 0x59c) = *puVar6;
        iStack_1c8 = 0x6dc709;
        iVar7 = (**(code **)(*piVar8 + 0x10))();
        *(undefined4 *)(extraout_ECX + 0x5a0) = *(undefined4 *)(iVar7 + 4);
        iStack_1c8 = 0x6dc719;
        FUN_006ddeb7();
        iStack_1c8 = unaff_EBP + -0x24;
        uStack_1cc = 0x6dc724;
        FUN_00448dc6();
        iStack_1c8 = 3;
        uStack_1cc = 1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_1d0 = 0x6dc736;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          iStack_1c8 = 0x80004003;
          uStack_1cc = 0x6dc74a;
          FUN_00878dfb();
        }
        iStack_1c8 = unaff_EBP + -0x164;
        uStack_1cc = *(undefined4 *)(extraout_ECX + 0x57c);
        iStack_1dc = unaff_EBP + -0x174;
        uStack_1d0 = *(undefined4 *)(extraout_ECX + 0x578);
        uStack_1d4 = *(undefined4 *)(extraout_ECX + 0x5a8);
        uStack_1d8 = *(undefined4 *)(extraout_ECX + 0x5a4);
        puStack_1e0 = (undefined *)0x6dc778;
        FUN_00545a5c();
        iStack_1c8 = unaff_EBP + -0x164;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_1cc = 0x6dc788;
        iStack_1c8 = FUN_00402bc3();
        if (iStack_1c8 < 0) {
          uStack_1cc = 0x6dc793;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          iStack_1c8 = 0x80004003;
          uStack_1cc = 0x6dc79e;
          FUN_00878dfb();
        }
        uStack_1cc = *(undefined4 *)(extraout_ECX + 0x57c);
        uStack_1d0 = *(undefined4 *)(extraout_ECX + 0x578);
        uStack_1d4 = *(undefined4 *)(extraout_ECX + 0x5a8);
        uStack_1d8 = *(undefined4 *)(extraout_ECX + 0x5a4);
        iStack_1c8 = 0xffffff;
        iStack_1dc = *(undefined4 *)(unaff_EBP + -0x24);
        *(int **)(unaff_EBP + -0x34) = *(int **)(unaff_EBP + -0x24);
        puStack_1e0 = (undefined *)0x6dc7d0;
        iVar7 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x8c))();
        if (iVar7 < 0) {
          puStack_1e0 = &DAT_00963cc8;
          uStack_1e4 = *(undefined4 *)(unaff_EBP + -0x34);
          uStack_1ec = 0x6dc7e2;
          iStack_1e8 = iVar7;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          puStack_1e0 = (undefined *)0x80004003;
          uStack_1e4 = 0x6dc7f2;
          FUN_00878dfb();
        }
        uStack_1e4 = *(undefined4 *)(extraout_ECX + 0x57c);
        iStack_1e8 = *(undefined4 *)(extraout_ECX + 0x578);
        uStack_1ec = *(undefined4 *)(extraout_ECX + 0x5a8);
        uStack_1f0 = *(undefined4 *)(extraout_ECX + 0x5a4);
        puStack_1e0 = (undefined *)0xa0000000;
        uStack_1f4 = *(undefined4 *)(unaff_EBP + -0x24);
        *(int **)(unaff_EBP + -0x34) = *(int **)(unaff_EBP + -0x24);
        puStack_1f8 = (undefined4 *)0x6dc824;
        iVar7 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x8c))();
        if (iVar7 < 0) {
          puStack_1f8 = (undefined4 *)&DAT_00963cc8;
          uStack_1fc = *(undefined4 *)(unaff_EBP + -0x34);
          uStack_204 = 0x6dc836;
          iStack_200 = iVar7;
          FUN_00878e09();
        }
        puStack_1f8 = &DAT_00980690;
        uStack_1fc = 0x6dc843;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(extraout_ECX + 0x5b4);
        puStack_230 = *(undefined4 **)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (puStack_230 == (undefined4 *)0x0) {
          puStack_1f8 = (undefined4 *)0x80004003;
          uStack_1fc = 0x6dc861;
          FUN_00878dfb();
          puStack_230 = *(undefined4 **)(unaff_EBP + -0x24);
        }
        uStack_218 = *(undefined4 *)(extraout_ECX + 0x57c);
        *(undefined4 *)(unaff_EBP + -0x38) = *puStack_230;
        uStack_21c = *(undefined4 *)(extraout_ECX + 0x578);
        uStack_210 = *(undefined4 *)(extraout_ECX + 0x5b0);
        uStack_214 = *(undefined4 *)(extraout_ECX + 0x5ac);
        uStack_204 = *(undefined4 *)(unaff_EBP + -0x60);
        uStack_220 = 0xff;
        uStack_224 = *(undefined4 *)(unaff_EBP + -0x34);
        iStack_200 = *(undefined4 *)(unaff_EBP + -0x5c);
        uStack_228 = *(undefined4 *)(extraout_ECX + 0x5a8);
        uStack_1fc = *(undefined4 *)(unaff_EBP + -0x58);
        uStack_22c = *(undefined4 *)(extraout_ECX + 0x5a4);
        *(undefined4 **)(unaff_EBP + -0x3c) = puStack_230;
        puStack_1f8 = *(undefined4 **)(unaff_EBP + -0x54);
        piStack_234 = (int *)0x6dc8b2;
        uStack_20c = uStack_21c;
        uStack_208 = uStack_218;
        iVar7 = (**(code **)(*(int *)(unaff_EBP + -0x38) + 0x84))();
        if (iVar7 < 0) {
          piStack_234 = (int *)&DAT_00963cc8;
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x3c));
        }
        piStack_234 = (int *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_234 = (int *)FUN_00402bc3();
        if ((int)piStack_234 < 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0xfc) = 0;
        *(undefined4 *)(unaff_EBP + -0xf8) = 0;
        *(undefined4 *)(unaff_EBP + -0xf4) = 0;
        *(undefined ***)(unaff_EBP + -0x104) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0xd4) = 0;
        *(undefined4 *)(unaff_EBP + -0xd0) = 0;
        *(undefined4 *)(unaff_EBP + -0xcc) = 0;
        *(undefined ***)(unaff_EBP + -0xdc) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0xc0) = 0;
        *(undefined4 *)(unaff_EBP + -0xbc) = 0;
        *(undefined4 *)(unaff_EBP + -0xb8) = 0;
        *(undefined ***)(unaff_EBP + -200) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0x110) = 0;
        *(undefined4 *)(unaff_EBP + -0x10c) = 0;
        *(undefined4 *)(unaff_EBP + -0x108) = 0;
        *(undefined ***)(unaff_EBP + -0x118) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0xe8) = 0;
        *(undefined4 *)(unaff_EBP + -0xe4) = 0;
        *(undefined4 *)(unaff_EBP + -0xe0) = 0;
        *(undefined ***)(unaff_EBP + -0xf0) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0xac) = 0;
        *(undefined4 *)(unaff_EBP + -0xa8) = 0;
        *(undefined4 *)(unaff_EBP + -0xa4) = 0;
        *(undefined ***)(unaff_EBP + -0xb4) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0x124) = 0;
        *(undefined4 *)(unaff_EBP + -0x120) = 0;
        *(undefined4 *)(unaff_EBP + -0x11c) = 0;
        *(undefined ***)(unaff_EBP + -300) = &PTR_FUN_008ea2e4;
        iVar7 = *(int *)(DAT_009791f0 + 0x28);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        while (iVar7 != 0) {
          iVar5 = *(int *)(iVar7 + 4);
          piStack_234 = (int *)0x6dc9b0;
          piVar8 = (int *)(**(code **)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10))();
          iVar10 = *piVar8;
          iVar2 = *(int *)(extraout_ECX + 0x590);
          bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
          iVar3 = *(int *)(extraout_ECX + 0x5ac);
          *(int *)(unaff_EBP + -0x18) =
               (piVar8[1] + *(int *)(extraout_ECX + 0x594) >> (bVar11 & 0x1f)) -
               *(int *)(extraout_ECX + 0x5b0);
          iVar4 = *(int *)(*(int *)(unaff_EBP + -0x40) + 0xd78);
          *(int *)(unaff_EBP + -0x1c) = (iVar10 + iVar2 >> (bVar11 & 0x1f)) - iVar3;
          if (iVar4 == *(int *)(*(int *)(iVar7 + 0x10) + 0x78)) {
            piStack_234 = (int *)(unaff_EBP + -0x1c);
            FUN_00503a24();
            iVar7 = iVar5;
          }
          else {
            piStack_234 = *(int **)(extraout_ECX + 0x66c);
            *(int ***)(unaff_EBP + -0x20) = &piStack_234;
            FUN_004125f3();
            FUN_006ddd26(unaff_EBP + -0x1c);
            iVar7 = iVar5;
          }
        }
        iVar7 = *(int *)(DAT_00978140 + 0x30);
        if (iVar7 != 0) {
          do {
            iVar5 = *(int *)((-(uint)(iVar7 != 0) & iVar7 - 0x10U) + 4);
            uVar9 = *(undefined4 *)(iVar7 + 4);
            *(uint *)(unaff_EBP + -0x38) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
            *(undefined4 *)(unaff_EBP + -0x18) = uVar9;
            piStack_234 = (int *)0x6dca66;
            FUN_006def83();
            iVar7 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 4);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_234 = (int *)0x6dca78;
            piVar8 = (int *)(**(code **)(iVar7 + 0x10))();
            iVar5 = *piVar8;
            iVar10 = piVar8[1];
            iVar2 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x2c7c);
            iVar3 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x10);
            iVar7 = *(int *)(iVar3 + 0xd78);
            *(int *)(unaff_EBP + -0x44) = iVar10;
            if (iVar2 == iVar7) {
              iVar7 = *(int *)(extraout_ECX + 0x594);
              bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
              iVar2 = *(int *)(extraout_ECX + 0x5b0);
              *(int *)(unaff_EBP + -0x74) =
                   (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                   *(int *)(extraout_ECX + 0x5ac);
              piStack_234 = (int *)(unaff_EBP + -0x74);
              *(int *)(unaff_EBP + -0x70) = (iVar7 + iVar10 >> (bVar11 & 0x1f)) - iVar2;
              FUN_00503a24();
            }
            else {
              piStack_234 = *(int **)(iVar3 + 0xd78);
              iVar7 = FUN_0085c725();
              if (iVar7 == 0) {
                uVar9 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 0xd78);
                *(int ***)(unaff_EBP + -0x20) = &piStack_234;
                uVar12 = 0xffffffff;
                *(undefined4 *)(unaff_EBP + -0x40) = uVar9;
                FUN_006def33(0xffffffff);
                FUN_006def2f();
                uVar9 = FUN_006ddf78();
                FUN_0045f0f3(uVar9,uVar12);
                iVar7 = FUN_0085692b();
                if (*(int *)(unaff_EBP + -0x40) == iVar7) {
                  piStack_234 = (int *)(unaff_EBP + -0x19c);
                  FUN_0085682d(0,unaff_EBP + -0x34);
                  bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
                  if (*(int *)(unaff_EBP + -0x34) ==
                      *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 0xd78)) {
                    iVar7 = (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                            *(int *)(extraout_ECX + 0x5ac);
                    iVar5 = (*(int *)(extraout_ECX + 0x594) + *(int *)(unaff_EBP + -0x44) >>
                            (bVar11 & 0x1f)) - *(int *)(extraout_ECX + 0x5b0);
                  }
                  else {
                    iVar7 = (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                            *(int *)(extraout_ECX + 0x5ac);
                    iVar5 = (*(int *)(extraout_ECX + 0x594) + *(int *)(unaff_EBP + -0x44) >>
                            (bVar11 & 0x1f)) - *(int *)(extraout_ECX + 0x5b0);
                  }
                }
                else {
                  *(undefined4 *)(unaff_EBP + -100) = 0;
                  piStack_234 = (int *)(unaff_EBP + -100);
                  FUN_0085c756(*(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 0xd78)
                              );
                  bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
                  if (*(int *)(unaff_EBP + -100) == 0) {
                    iVar7 = *(int *)(extraout_ECX + 0x594);
                    iVar10 = *(int *)(extraout_ECX + 0x5b0);
                    *(int *)(unaff_EBP + -0x6c) =
                         (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                         *(int *)(extraout_ECX + 0x5ac);
                    piStack_234 = *(int **)(extraout_ECX + 0x640);
                    *(int *)(unaff_EBP + -0x68) =
                         (iVar7 + *(int *)(unaff_EBP + -0x44) >> (bVar11 & 0x1f)) - iVar10;
                    *(int ***)(unaff_EBP + -0x20) = &piStack_234;
                    if (piStack_234 != (int *)0x0) {
                      (**(code **)(*piStack_234 + 4))(piStack_234);
                    }
                    FUN_006ddd26(unaff_EBP + -0x6c);
                    goto LAB_006dccc4;
                  }
                  iVar7 = (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                          *(int *)(extraout_ECX + 0x5ac);
                  iVar5 = (*(int *)(extraout_ECX + 0x594) + *(int *)(unaff_EBP + -0x44) >>
                          (bVar11 & 0x1f)) - *(int *)(extraout_ECX + 0x5b0);
                }
              }
              else {
                iVar7 = 0;
                if (0 < *(int *)(*(int *)(unaff_EBP + -0x30) + 0x2b40)) {
                  iVar7 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x2bf2);
                }
                bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
                if (iVar7 == *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 0xd78)) {
                  iVar7 = (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                          *(int *)(extraout_ECX + 0x5ac);
                  iVar5 = (*(int *)(extraout_ECX + 0x594) + *(int *)(unaff_EBP + -0x44) >>
                          (bVar11 & 0x1f)) - *(int *)(extraout_ECX + 0x5b0);
                }
                else {
                  iVar7 = (*(int *)(extraout_ECX + 0x590) + iVar5 >> (bVar11 & 0x1f)) -
                          *(int *)(extraout_ECX + 0x5ac);
                  iVar5 = (*(int *)(extraout_ECX + 0x594) + *(int *)(unaff_EBP + -0x44) >>
                          (bVar11 & 0x1f)) - *(int *)(extraout_ECX + 0x5b0);
                }
              }
              piStack_234 = (int *)0x6dcc73;
              piVar8 = (int *)FUN_004cdc34();
              *piVar8 = iVar7;
              piVar8[1] = iVar5;
            }
LAB_006dccc4:
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            piStack_234 = (int *)0x6dccd0;
            FUN_006def95();
            if (*(int *)(unaff_EBP + -0x38) == 0) break;
            iVar7 = *(int *)(unaff_EBP + -0x38);
          } while( true );
        }
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piStack_234 = (int *)0xffffffff;
        FUN_00414edd(&DAT_00978474);
        piVar8 = *(int **)(extraout_ECX + 0x5d8);
        if (piVar8 != (int *)0x0) {
          piVar1 = piVar8 + *(int *)(extraout_ECX + 0x5dc);
          for (; piVar8 < piVar1; piVar8 = piVar8 + 1) {
            if (*piVar8 != 0) {
              iVar7 = *piVar8;
              goto LAB_006dcd74;
            }
          }
        }
        iVar7 = 0;
LAB_006dcd74:
        *(int *)(unaff_EBP + -0x34) = iVar7;
        while (iVar7 != 0) {
          piStack_234 = (int *)(unaff_EBP + -0x58);
          puVar6 = (undefined4 *)FUN_006df13e(unaff_EBP + -0x34);
          piStack_234 = (int *)*puVar6;
          *(int **)(unaff_EBP + -0x14) = piStack_234;
          iVar7 = FUN_007c00e8();
          if (iVar7 == 0) {
            bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
            iVar5 = (*(int *)(extraout_ECX + 0x590) + *(int *)(unaff_EBP + -0x58) >> (bVar11 & 0x1f)
                    ) - *(int *)(extraout_ECX + 0x5ac);
            iVar7 = (*(int *)(extraout_ECX + 0x594) + *(int *)(unaff_EBP + -0x54) >> (bVar11 & 0x1f)
                    ) - *(int *)(extraout_ECX + 0x5b0);
            if (iVar5 < 0) {
              if (iVar7 < 0) {
                if (*(int *)(extraout_ECX + 0x694) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(extraout_ECX + 0x694) + -4);
                }
                if (iVar7 == 0) {
                  piStack_234 = (int *)0x0;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                }
                else {
                  piStack_234 = (int *)&DAT_00964314;
                  FUN_004653c5(unaff_EBP + -0x88);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
                  piStack_234 = (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0xd;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                  piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x40);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
                  *(undefined4 *)(unaff_EBP + -4) = 0xe;
                }
                FUN_00414f8b();
                *(undefined4 *)(unaff_EBP + -4) = 0xd;
                if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
                  piStack_234 = (int *)0x6dce7f;
                  FUN_00414ebb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xb;
                if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                  goto LAB_006dd1c0;
                }
              }
              else if (*(int *)(extraout_ECX + 0x57c) < iVar7) {
                if (*(int *)(extraout_ECX + 0x6a8) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6a8) + -4);
                }
                if (iVar7 == 0) {
                  piStack_234 = (int *)0x0;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                }
                else {
                  piStack_234 = (int *)&DAT_00964314;
                  FUN_004653c5(unaff_EBP + -0x94);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
                  piStack_234 = (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0xf;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                  piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x9c);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
                  *(undefined4 *)(unaff_EBP + -4) = 0x10;
                }
                FUN_00414f8b();
                *(undefined4 *)(unaff_EBP + -4) = 0xf;
                if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
                  piStack_234 = (int *)0x6dcf4d;
                  FUN_00414ebb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xb;
                if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
LAB_006dd1c0:
                  piStack_234 = (int *)0x6dd1c5;
                  FUN_00414ebb();
                }
              }
              else {
                if (*(int *)(extraout_ECX + 0x6a0) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6a0) + -4);
                }
                if (iVar7 == 0) {
                  piStack_234 = (int *)0x0;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                }
                else {
                  piStack_234 = (int *)&DAT_00964314;
                  FUN_004653c5(unaff_EBP + -0x90);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
                  piStack_234 = (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0x11;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                  piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x8c);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
                  *(undefined4 *)(unaff_EBP + -4) = 0x12;
                }
                FUN_00414f8b();
                *(undefined4 *)(unaff_EBP + -4) = 0x11;
                if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
                  piStack_234 = (int *)0x6dd00f;
                  FUN_00414ebb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xb;
                if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
                  goto LAB_006dd1c0;
                }
              }
            }
            else if (*(int *)(extraout_ECX + 0x578) < iVar5) {
              if (iVar7 < 0) {
                if (*(int *)(extraout_ECX + 0x69c) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(extraout_ECX + 0x69c) + -4);
                }
                if (iVar7 == 0) {
                  piStack_234 = (int *)0x0;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                }
                else {
                  piStack_234 = (int *)&DAT_00964314;
                  FUN_004653c5(unaff_EBP + -0x7c);
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x40;
                  piStack_234 = (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0x13;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                  piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x78);
                  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 0x80;
                  *(undefined4 *)(unaff_EBP + -4) = 0x14;
                }
                FUN_00414f8b();
                *(undefined4 *)(unaff_EBP + -4) = 0x13;
                if ((*(byte *)(unaff_EBP + -0x10) & 0x80) != 0) {
                  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) & 0x7f;
                  piStack_234 = (int *)0x6dd0dc;
                  FUN_00414ebb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xb;
                if ((*(byte *)(unaff_EBP + -0x10) & 0x40) != 0) {
                  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffbf;
                  goto LAB_006dd1c0;
                }
              }
              else if (*(int *)(extraout_ECX + 0x57c) < iVar7) {
                if (*(int *)(extraout_ECX + 0x6b0) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6b0) + -4);
                }
                if (iVar7 == 0) {
                  piStack_234 = (int *)0x0;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                }
                else {
                  piStack_234 = (int *)&DAT_00964314;
                  FUN_004653c5(unaff_EBP + -0xa0);
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 1;
                  piStack_234 = (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                  piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x84);
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 2;
                  *(undefined4 *)(unaff_EBP + -4) = 0x16;
                }
                FUN_00414f8b();
                *(undefined4 *)(unaff_EBP + -4) = 0x15;
                if ((*(byte *)(unaff_EBP + -0xf) & 2) != 0) {
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xfd;
                  piStack_234 = (int *)0x6dd1a5;
                  FUN_00414ebb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xb;
                if ((*(byte *)(unaff_EBP + -0xf) & 1) != 0) {
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xfe;
                  goto LAB_006dd1c0;
                }
              }
              else {
                if (*(int *)(extraout_ECX + 0x6a4) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6a4) + -4);
                }
                if (iVar7 == 0) {
                  piStack_234 = (int *)0x0;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                }
                else {
                  piStack_234 = (int *)&DAT_00964314;
                  FUN_004653c5(unaff_EBP + -0x98);
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 4;
                  piStack_234 = (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0x17;
                  iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                  piStack_234 = (int *)(iVar7 + 0xc);
                  piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x80);
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 8;
                  *(undefined4 *)(unaff_EBP + -4) = 0x18;
                }
                FUN_00414f8b();
                *(undefined4 *)(unaff_EBP + -4) = 0x17;
                if ((*(byte *)(unaff_EBP + -0xf) & 8) != 0) {
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xf7;
                  piStack_234 = (int *)0x6dd266;
                  FUN_00414ebb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xb;
                if ((*(byte *)(unaff_EBP + -0xf) & 4) != 0) {
                  *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xfb;
                  goto LAB_006dd1c0;
                }
              }
            }
            else if (iVar7 < 0) {
              if (*(int *)(extraout_ECX + 0x698) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(extraout_ECX + 0x698) + -4);
              }
              if (iVar7 == 0) {
                piStack_234 = (int *)0x0;
                iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                piStack_234 = (int *)(iVar7 + 0xc);
              }
              else {
                piStack_234 = (int *)&DAT_00964314;
                FUN_004653c5(unaff_EBP + -0x70);
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 0x10;
                piStack_234 = (int *)0x0;
                *(undefined1 *)(unaff_EBP + -4) = 0x19;
                iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                piStack_234 = (int *)(iVar7 + 0xc);
                piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x68);
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 0x20;
                *(undefined4 *)(unaff_EBP + -4) = 0x1a;
              }
              FUN_00414f8b();
              *(undefined4 *)(unaff_EBP + -4) = 0x19;
              if ((*(byte *)(unaff_EBP + -0xf) & 0x20) != 0) {
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xdf;
                piStack_234 = (int *)0x6dd327;
                FUN_00414ebb();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xb;
              if ((*(byte *)(unaff_EBP + -0xf) & 0x10) != 0) {
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xef;
                goto LAB_006dd1c0;
              }
            }
            else if (*(int *)(extraout_ECX + 0x57c) < iVar7) {
              if (*(int *)(extraout_ECX + 0x6ac) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6ac) + -4);
              }
              if (iVar7 == 0) {
                piStack_234 = (int *)0x0;
                iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                piStack_234 = (int *)(iVar7 + 0xc);
              }
              else {
                piStack_234 = (int *)&DAT_00964314;
                FUN_004653c5(unaff_EBP + -0x18);
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 0x40;
                piStack_234 = (int *)0x0;
                *(undefined1 *)(unaff_EBP + -4) = 0x1b;
                iVar7 = FUN_006df1a7(unaff_EBP + -0x14);
                piStack_234 = (int *)(iVar7 + 0xc);
                piStack_234 = (int *)FUN_0045e02d(unaff_EBP + -0x44);
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) | 0x80;
                *(undefined4 *)(unaff_EBP + -4) = 0x1c;
              }
              FUN_00414f8b();
              *(undefined4 *)(unaff_EBP + -4) = 0x1b;
              if ((*(byte *)(unaff_EBP + -0xf) & 0x80) != 0) {
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0x7f;
                piStack_234 = (int *)0x6dd3e9;
                FUN_00414ebb();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xb;
              if ((*(byte *)(unaff_EBP + -0xf) & 0x40) != 0) {
                *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xbf;
                goto LAB_006dd1c0;
              }
            }
            else {
              piStack_234 = *(int **)(unaff_EBP + -0x14);
              iVar10 = FUN_0085c725();
              if (iVar10 != 0) {
                piStack_234 = (int *)0x6dd441;
                piVar8 = (int *)FUN_004cdc34();
                *piVar8 = iVar5;
                piVar8[1] = iVar7;
              }
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
              piStack_234 = (int *)(unaff_EBP + -0x38);
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              FUN_008568b2();
              *(undefined4 *)(unaff_EBP + -0x3c) = 0;
              while ((iVar10 = *(int *)(unaff_EBP + -0x38), iVar10 != 0 &&
                     (*(uint *)(unaff_EBP + -0x3c) < *(uint *)(iVar10 + -4)))) {
                if (*(int *)(iVar10 + *(uint *)(unaff_EBP + -0x3c) * 4) ==
                    *(int *)(unaff_EBP + -0x14)) {
                  piStack_234 = (int *)(unaff_EBP + -0x1c4);
                  FUN_0085682d(0,unaff_EBP + -0x20);
                  piStack_234 = (int *)0x6dd4a3;
                  piVar8 = (int *)FUN_004cdc34();
                  *piVar8 = iVar5;
                  piVar8[1] = iVar7;
                }
                *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              piStack_234 = (int *)0x6dd4b9;
              FUN_0047cf76();
              *(undefined4 *)(unaff_EBP + -400) = 0;
              piStack_234 = (int *)(unaff_EBP + -400);
              FUN_0085c756(*(undefined4 *)(unaff_EBP + -0x14));
              if (*(int *)(unaff_EBP + -400) != 0) {
                piStack_234 = (int *)0x6dd4e6;
                piVar8 = (int *)FUN_004cdc34();
                *piVar8 = iVar5;
                piVar8[1] = iVar7;
              }
              if (*(int *)(*(int *)(unaff_EBP + -0x30) + 0x2c7c) == *(int *)(unaff_EBP + -0x14)) {
                piStack_234 = (int *)0x6dd504;
                piVar8 = (int *)FUN_004cdc34();
                *piVar8 = iVar5;
                piVar8[1] = iVar7;
              }
            }
          }
          iVar7 = *(int *)(unaff_EBP + -0x34);
        }
        piStack_234 = *(int **)(extraout_ECX + 0x668);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -300);
        iVar5 = DAT_00979264;
        iVar7 = 0;
        if (*(int *)(DAT_00979264 + 4) != 0) {
          iVar7 = *(int *)(*(int *)(DAT_00979264 + 4) + -4);
        }
        while (iVar7 = iVar7 + -1, -1 < iVar7) {
          iVar10 = *(int *)(*(int *)(iVar5 + 4) + 4 + iVar7 * 8);
          if ((*(int *)(iVar10 + 8) == 2) || (*(int *)(iVar10 + 8) == 7)) {
            iVar2 = *(int *)(iVar10 + 0x10);
            iVar3 = *(int *)(extraout_ECX + 0x594);
            bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
            iVar4 = *(int *)(extraout_ECX + 0x5b0);
            *(int *)(unaff_EBP + -0x58) =
                 (*(int *)(extraout_ECX + 0x590) + *(int *)(iVar10 + 0xc) >> (bVar11 & 0x1f)) -
                 *(int *)(extraout_ECX + 0x5ac);
            piStack_234 = *(int **)(extraout_ECX + 0x670);
            *(int *)(unaff_EBP + -0x54) = (iVar2 + iVar3 >> (bVar11 & 0x1f)) - iVar4;
            *(int ***)(unaff_EBP + -0x20) = &piStack_234;
            if (piStack_234 != (int *)0x0) {
              (**(code **)(*piStack_234 + 4))(piStack_234);
            }
            FUN_006ddd26(unaff_EBP + -0x58);
          }
        }
        piStack_234 = *(int **)(extraout_ECX + 0x644);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0x104);
        piStack_234 = *(int **)(extraout_ECX + 0x648);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0xdc);
        piStack_234 = *(int **)(extraout_ECX + 0x64c);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -200);
        piStack_234 = *(int **)(extraout_ECX + 0x654);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0x118);
        piStack_234 = *(int **)(extraout_ECX + 0x658);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0xf0);
        piStack_234 = *(int **)(extraout_ECX + 0x650);
        *(int ***)(unaff_EBP + -0x20) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0xb4);
        *(undefined4 *)(unaff_EBP + -0x14c) = 0;
        *(undefined4 *)(unaff_EBP + -0x148) = 0;
        *(undefined4 *)(unaff_EBP + -0x144) = 0;
        *(undefined ***)(unaff_EBP + -0x154) = &PTR_FUN_008ea2e4;
        *(undefined4 *)(unaff_EBP + -0x138) = 0;
        *(undefined4 *)(unaff_EBP + -0x134) = 0;
        *(undefined4 *)(unaff_EBP + -0x130) = 0;
        *(undefined ***)(unaff_EBP + -0x140) = &PTR_FUN_008ea2e4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        while ((iVar7 = *(int *)(extraout_ECX + 0x5b8), iVar7 != 0 &&
               (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar7 + -4)))) {
          piVar8 = (int *)(iVar7 + *(uint *)(unaff_EBP + -0x14) * 8);
          iVar7 = piVar8[1];
          iVar5 = *(int *)(extraout_ECX + 0x594);
          bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
          iVar10 = *(int *)(extraout_ECX + 0x5b0);
          *(int *)(unaff_EBP + -0x58) =
               (*piVar8 + *(int *)(extraout_ECX + 0x590) >> (bVar11 & 0x1f)) -
               *(int *)(extraout_ECX + 0x5ac);
          piStack_234 = (int *)(unaff_EBP + -0x20);
          *(int *)(unaff_EBP + -0x54) = (iVar7 + iVar5 >> (bVar11 & 0x1f)) - iVar10;
          FUN_006defab(unaff_EBP + -0x14);
          piStack_234 = *(int **)(unaff_EBP + -0x20);
          iVar7 = FUN_005f1350();
          if (iVar7 == 0) {
LAB_006dd7f6:
            piStack_234 = *(int **)(extraout_ECX + 0x65c);
            *(int ***)(unaff_EBP + -0x18) = &piStack_234;
            if (piStack_234 != (int *)0x0) {
              (**(code **)(*piStack_234 + 4))(piStack_234);
            }
            FUN_006ddd26(unaff_EBP + -0x58);
          }
          else if (*(int *)(iVar7 + 0x124) != 0) {
            if (*(int *)(iVar7 + 200) == 0) {
              bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
              iVar7 = (*(int *)(*(int *)(extraout_ECX + 0x5b8) + *(int *)(unaff_EBP + -0x14) * 8) +
                       *(int *)(extraout_ECX + 0x590) >> (bVar11 & 0x1f)) -
                      *(int *)(extraout_ECX + 0x5ac);
              iVar5 = (*(int *)(*(int *)(extraout_ECX + 0x5b8) + 4 + *(int *)(unaff_EBP + -0x14) * 8
                               ) + *(int *)(extraout_ECX + 0x594) >> (bVar11 & 0x1f)) -
                      *(int *)(extraout_ECX + 0x5b0);
            }
            else {
              if (*(int *)(iVar7 + 200) != 2) goto LAB_006dd7f6;
              bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
              iVar7 = (*(int *)(*(int *)(extraout_ECX + 0x5b8) + *(int *)(unaff_EBP + -0x14) * 8) +
                       *(int *)(extraout_ECX + 0x590) >> (bVar11 & 0x1f)) -
                      *(int *)(extraout_ECX + 0x5ac);
              iVar5 = (*(int *)(*(int *)(extraout_ECX + 0x5b8) + 4 + *(int *)(unaff_EBP + -0x14) * 8
                               ) + *(int *)(extraout_ECX + 0x594) >> (bVar11 & 0x1f)) -
                      *(int *)(extraout_ECX + 0x5b0);
            }
            piStack_234 = (int *)0x6dd7e8;
            piVar8 = (int *)FUN_004cdc34();
            *piVar8 = iVar7;
            piVar8[1] = iVar5;
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        }
        piStack_234 = *(int **)(extraout_ECX + 0x664);
        *(int ***)(unaff_EBP + -0x18) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0x154);
        piStack_234 = *(int **)(extraout_ECX + 0x660);
        *(int ***)(unaff_EBP + -0x18) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006dde2d(unaff_EBP + -0x140);
        if (*(int *)(extraout_ECX + 0x694) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x694) + -4);
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(extraout_ECX + 0x674);
          *(int *)(unaff_EBP + -0x2c) = *(int *)(extraout_ECX + 0x5a4) + 1;
          if (iVar7 == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6dd8a9;
          iVar7 = FUN_0040e53d();
          *(int *)(unaff_EBP + -0x28) = iVar7 + 1;
          piStack_234 = *(int **)(extraout_ECX + 0x674);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x698) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x698) + -4);
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(extraout_ECX + 0x678);
          *(int *)(unaff_EBP + -0x2c) = *(int *)(extraout_ECX + 0x578) / 2;
          if (iVar7 == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6dd910;
          iVar7 = FUN_0040e53d();
          *(int *)(unaff_EBP + -0x28) = iVar7 + 1;
          piStack_234 = *(int **)(extraout_ECX + 0x678);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x69c) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x69c) + -4);
        }
        if (iVar7 != 0) {
          if (*(int *)(extraout_ECX + 0x67c) == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6dd969;
          iVar5 = FUN_0040e48b();
          iVar7 = *(int *)(extraout_ECX + 0x67c);
          *(int *)(unaff_EBP + -0x2c) =
               ((*(int *)(extraout_ECX + 0x578) + *(int *)(extraout_ECX + 0x5a4)) - iVar5) + -1;
          if (iVar7 == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6dd998;
          iVar7 = FUN_0040e53d();
          *(int *)(unaff_EBP + -0x28) = iVar7 + 1;
          piStack_234 = *(int **)(extraout_ECX + 0x67c);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x6a0) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6a0) + -4);
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(extraout_ECX + 0x68c);
          *(int *)(unaff_EBP + -0x2c) = *(int *)(extraout_ECX + 0x5a4) + 1;
          if (iVar7 == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6dd9fb;
          iVar7 = FUN_0040e53d();
          *(uint *)(unaff_EBP + -0x28) = (uint)(iVar7 + *(int *)(extraout_ECX + 0x57c)) >> 1;
          piStack_234 = *(int **)(extraout_ECX + 0x68c);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x6a8) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6a8) + -4);
        }
        if (iVar7 != 0) {
          *(int *)(unaff_EBP + -0x2c) = *(int *)(extraout_ECX + 0x5a4) + 1;
          *(int *)(unaff_EBP + -0x28) = *(int *)(extraout_ECX + 0x57c) + -1;
          piStack_234 = *(int **)(extraout_ECX + 0x680);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x6ac) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6ac) + -4);
        }
        if (iVar7 != 0) {
          *(int *)(unaff_EBP + -0x2c) = *(int *)(extraout_ECX + 0x578) / 2;
          *(int *)(unaff_EBP + -0x28) = *(int *)(extraout_ECX + 0x57c) + -1;
          piStack_234 = *(int **)(extraout_ECX + 0x684);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x6b0) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6b0) + -4);
        }
        if (iVar7 != 0) {
          if (*(int *)(extraout_ECX + 0x688) == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6ddaf7;
          iVar10 = FUN_0040e48b();
          iVar7 = *(int *)(extraout_ECX + 0x578);
          iVar5 = *(int *)(extraout_ECX + 0x5a4);
          *(int *)(unaff_EBP + -0x28) = *(int *)(extraout_ECX + 0x57c) + -1;
          piStack_234 = *(int **)(extraout_ECX + 0x688);
          *(int *)(unaff_EBP + -0x2c) = ((iVar7 + iVar5) - iVar10) + -1;
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        if (*(int *)(extraout_ECX + 0x6a4) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x6a4) + -4);
        }
        if (iVar7 != 0) {
          if (*(int *)(extraout_ECX + 0x690) == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6ddb68;
          iVar5 = FUN_0040e48b();
          iVar7 = *(int *)(extraout_ECX + 0x690);
          *(int *)(unaff_EBP + -0x2c) =
               ((*(int *)(extraout_ECX + 0x578) + *(int *)(extraout_ECX + 0x5a4)) - iVar5) + -2;
          if (iVar7 == 0) {
            piStack_234 = (int *)0x80004003;
            FUN_00878dfb();
          }
          piStack_234 = (int *)0x6ddb98;
          iVar7 = FUN_0040e53d();
          *(uint *)(unaff_EBP + -0x28) = (uint)(iVar7 + *(int *)(extraout_ECX + 0x57c)) >> 1;
          piStack_234 = *(int **)(extraout_ECX + 0x690);
          *(int ***)(unaff_EBP + -0x18) = &piStack_234;
          if (piStack_234 != (int *)0x0) {
            (**(code **)(*piStack_234 + 4))(piStack_234);
          }
          FUN_006ddd26(unaff_EBP + -0x2c);
        }
        piStack_234 = (int *)0x6ddbce;
        piVar8 = (int *)(**(code **)(**(int **)(unaff_EBP + -0x4c) + 0x10))();
        iVar7 = *(int *)(extraout_ECX + 0x590);
        iVar5 = *piVar8;
        bVar11 = (byte)*(undefined4 *)(extraout_ECX + 0x598);
        iVar10 = *(int *)(extraout_ECX + 0x5ac);
        *(int *)(unaff_EBP + -0x28) =
             (piVar8[1] + *(int *)(extraout_ECX + 0x594) >> (bVar11 & 0x1f)) -
             *(int *)(extraout_ECX + 0x5b0);
        piStack_234 = *(int **)(extraout_ECX + 0x63c);
        *(int *)(unaff_EBP + -0x2c) = (iVar7 + iVar5 >> (bVar11 & 0x1f)) - iVar10;
        *(int ***)(unaff_EBP + -0x4c) = &piStack_234;
        if (piStack_234 != (int *)0x0) {
          (**(code **)(*piStack_234 + 4))(piStack_234);
        }
        FUN_006ddd26(unaff_EBP + -0x2c);
        piStack_234 = (int *)0x6ddc25;
        FUN_008162ff();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        *(undefined ***)(unaff_EBP + -0x140) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddc3a;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *(undefined ***)(unaff_EBP + -0x154) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddc4f;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        *(undefined ***)(unaff_EBP + -300) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddc64;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *(undefined ***)(unaff_EBP + -0xb4) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddc79;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        *(undefined ***)(unaff_EBP + -0xf0) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddc8e;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        *(undefined ***)(unaff_EBP + -0x118) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddca3;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *(undefined ***)(unaff_EBP + -200) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddcb8;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        *(undefined ***)(unaff_EBP + -0xdc) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddccd;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        *(undefined ***)(unaff_EBP + -0x104) = &PTR_FUN_008ea2e4;
        piStack_234 = (int *)0x6ddce2;
        FUN_004cdc72();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_234 = (int *)(unaff_EBP + -0x174);
        piStack_234 = (int *)FUN_00402bc3();
        if ((int)piStack_234 < 0) {
          FUN_00878dfb();
        }
        piStack_234 = *(int **)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar5 = 0;
        if (piStack_234 != (int *)0x0) {
          iVar5 = (**(code **)(*piStack_234 + 8))();
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}



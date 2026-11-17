/* FUN_00471a4c - 0x00471a4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00471a4c(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int *piVar10;
  int iVar11;
  int unaff_EBP;
  undefined4 uStack_4b8;
  int iStack_4b4;
  uint uStack_4b0;
  undefined1 *puStack_4ac;
  
  FUN_00879bb8();
  if ((DAT_009784ec == 0) || (*(int *)(DAT_009784ec + -4) == 0)) {
    puStack_4ac = (undefined1 *)0x471a81;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puStack_4ac = (undefined1 *)0x471a8d;
    FUN_00403191();
    puStack_4ac = (undefined1 *)0x0;
    uStack_4b0 = unaff_EBP + -0x44;
    iStack_4b4 = unaff_EBP + -0x54;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4b8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679e4e(&uStack_4b8,0x595);
    iVar2 = unaff_EBP + -0xa4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_4b0 = 0x471ada;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x30) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar2 != 0) {
      puStack_4ac = (undefined1 *)0x471af0;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        puStack_4ac = (undefined1 *)0x471b01;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_4ac = (undefined1 *)0x471b11;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_4ac = (undefined1 *)0x471b1c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_4ac = (undefined1 *)0x471b29;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_4ac = (undefined1 *)0x471b34;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_4ac = (undefined1 *)0x471b41;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_4ac = (undefined1 *)0x471b4c;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_4ac = (undefined1 *)FUN_0040cf4d();
      uStack_4b0 = 0x471b6b;
      FUN_00472746();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puStack_4ac = (undefined1 *)0x471b7f;
          FUN_00878dfb();
        }
        uVar3 = FUN_0040cf4d();
        if (uVar3 <= *(uint *)(unaff_EBP + -0x20)) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004027eb();
          goto LAB_00471df5;
        }
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        puStack_4ac = (undefined1 *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uStack_4b0 = 0x471baa;
        puVar4 = (undefined4 *)FUN_00679d86();
        puStack_4ac = (undefined1 *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_4b0 = unaff_EBP + -0x24;
        iStack_4b4 = 0x471bbd;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          puStack_4ac = (undefined1 *)0x471bd4;
          FUN_00403384();
        }
        puStack_4ac = (undefined1 *)0x471be1;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_4ac = (undefined1 *)0x471bf1;
        FUN_00403191();
        puStack_4ac = (undefined1 *)0x0;
        uStack_4b0 = unaff_EBP + -0x84;
        iStack_4b4 = unaff_EBP + -0x94;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        uStack_4b8 = 0x471c0d;
        uVar5 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_4b8;
        FUN_004033a1(uVar5);
        iVar2 = unaff_EBP + -0x74;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00405a1d(iVar2);
        FUN_00402660();
        FUN_00404a02(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uStack_4b0 = 0x471c3f;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x1c) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar2 != 0) {
          puStack_4ac = (undefined1 *)0x471c55;
          iVar2 = FUN_00404b30();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            puStack_4ac = (undefined1 *)0x471c66;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_4ac = (undefined1 *)0x471c73;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_4ac = (undefined1 *)0x471c7e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_4ac = (undefined1 *)0x471c8e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_4ac = (undefined1 *)0x471c99;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_4ac = (undefined1 *)0x471ca9;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_4ac = (undefined1 *)0x471cb4;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        uVar3 = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_4ac = (undefined1 *)0x471cce;
            FUN_00878dfb();
          }
          uVar6 = FUN_0040cf4d();
          if (uVar6 <= uVar3) break;
          FUN_0087a1b0();
          iStack_4b4 = 0x471cf4;
          uStack_4b0 = uVar3;
          puStack_4ac = &stack0xfffffb5c;
          uStack_4b0 = FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_4ac;
          iStack_4b4 = 0x471d00;
          FUN_004033a1();
          uStack_4b0 = unaff_EBP + -100;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_4b4 = 0x471d10;
          FUN_0040263d();
          iStack_4b4 = 0x471d17;
          puStack_4ac = (undefined1 *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          uStack_4b0 = 0x471d21;
          puStack_4ac = (undefined1 *)FUN_004343c5();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          uStack_4b0 = 0x471d31;
          FUN_00454081();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          FUN_004726be();
          puStack_4ac = (undefined1 *)0x471d4d;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            puStack_4ac = (undefined1 *)0x471d61;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_4ac = (undefined1 *)0x471d6f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_4ac = (undefined1 *)0x471d7a;
            FUN_00878dfb();
          }
          uVar3 = uVar3 + 1;
        }
        FUN_004027eb();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          puStack_4ac = (undefined1 *)0x471d9c;
          FUN_00403384();
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      }
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_4ac = (undefined1 *)0x471dc9;
        FUN_00403384();
      }
    }
    FUN_004027eb();
  }
  else {
LAB_00471df5:
    puStack_4ac = PTR_s__________________00964718;
    uStack_4b0 = unaff_EBP + -0x4a4;
    iStack_4b4 = *(undefined4 *)(unaff_EBP + 8);
    uStack_4b8 = 0x471e0c;
    FUN_004714b2();
    if (DAT_009784ec == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_009784ec + -4);
    }
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      iVar11 = iVar2 * 0x14;
      iVar7 = DAT_009784ec;
      do {
        uVar3 = *(uint *)(iVar11 + 0xc + iVar7);
        while (uVar3 != 0) {
          iVar7 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
          uVar3 = -(uint)(iVar7 != 0) & iVar7 + 0x10U;
          puStack_4ac = (undefined1 *)(unaff_EBP + -0x4a4);
          uStack_4b0 = 0x471e5d;
          iVar8 = FUN_00471450();
          iVar7 = DAT_009784ec;
          if (iVar8 != 0) {
            iVar2 = (*DAT_0097b704)();
            if ((uint)(iVar2 - _DAT_009784f8) < 10000) goto LAB_00471dd2;
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            puStack_4ac = (undefined1 *)(unaff_EBP + -0x1c);
            *(undefined4 *)(unaff_EBP + -4) = 0x15;
            uStack_4b0 = 0x471eaf;
            puVar4 = (undefined4 *)FUN_00679d86();
            puStack_4ac = (undefined1 *)*puVar4;
            uStack_4b0 = unaff_EBP + -0x14;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            iStack_4b4 = 0x471ec0;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            FUN_00402676();
            puStack_4ac = (undefined1 *)0x471edb;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
            puStack_4ac = (undefined1 *)(unaff_EBP + -0x54);
            uStack_4b0 = 0x471eea;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              puStack_4ac = (undefined1 *)0x471ef6;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            puStack_4ac = (undefined1 *)0x471f00;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
            puStack_4ac = (undefined1 *)(unaff_EBP + -0x44);
            uStack_4b0 = 0x471f0a;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              puStack_4ac = (undefined1 *)0x471f16;
              FUN_00878dfb();
            }
            puStack_4ac = (undefined1 *)0x0;
            uStack_4b0 = unaff_EBP + -0x54;
            iStack_4b4 = unaff_EBP + -0x44;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            uStack_4b8 = 0x471f2c;
            uVar5 = FUN_00411641();
            *(undefined4 **)(unaff_EBP + -0x28) = &uStack_4b8;
            FUN_004033a1(uVar5);
            iVar2 = unaff_EBP + -100;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_00405a1d(iVar2);
            FUN_00402660();
            FUN_00404a02(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            uStack_4b0 = 0x471f5e;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x1c) = iVar2;
            *(undefined4 *)(unaff_EBP + 8) = 0;
            if (iVar2 != 0) {
              puStack_4ac = (undefined1 *)0x471f74;
              iVar2 = FUN_00404b30();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                puStack_4ac = (undefined1 *)0x471f85;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            puStack_4ac = (undefined1 *)0x471f92;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              puStack_4ac = (undefined1 *)0x471f9d;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            puStack_4ac = (undefined1 *)0x471faa;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              puStack_4ac = (undefined1 *)0x471fb5;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            puStack_4ac = (undefined1 *)0x471fc2;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              puStack_4ac = (undefined1 *)0x471fcd;
              FUN_00878dfb();
            }
            piVar10 = (int *)0x0;
            if (*(int *)(unaff_EBP + 8) == 0) {
LAB_0047209f:
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              if (piVar10 != (int *)0x0) {
                puStack_4ac = (undefined1 *)0x4720ad;
                (**(code **)(*piVar10 + 8))();
              }
              uVar5 = 0;
            }
            else {
              iVar2 = FUN_0040cf4d();
              if (iVar2 == 0) {
                piVar10 = *(int **)(unaff_EBP + 8);
                goto LAB_0047209f;
              }
              FUN_0087a1b0();
              puStack_4ac = (undefined1 *)0x471ff8;
              FUN_0040263d();
              puStack_4ac = (undefined1 *)0x471fff;
              uVar3 = FUN_0040cf4d();
              puStack_4ac = (undefined1 *)0x472006;
              uVar6 = _rand();
              puStack_4ac = (undefined1 *)(uVar6 % uVar3);
              uStack_4b0 = 0x472010;
              puStack_4ac = (undefined1 *)FUN_00412335();
              *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffb58;
              uStack_4b0 = 0x47201c;
              FUN_004033a1();
              puStack_4ac = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              uStack_4b0 = 0x47202c;
              FUN_0040263d();
              uStack_4b0 = 0x472033;
              psVar9 = (short *)FUN_004048a4();
              sVar1 = *psVar9;
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              if (sVar1 == 8) {
                puStack_4ac = *(undefined1 **)(psVar9 + 4);
              }
              else {
                puStack_4ac = &DAT_0097812c;
              }
              uStack_4b0 = 0x472052;
              FUN_00454081();
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              puStack_4ac = (undefined1 *)0x47205f;
              iVar2 = FUN_00402bc3();
              if (iVar2 < 0) {
                puStack_4ac = (undefined1 *)0x47206a;
                FUN_00878dfb();
              }
              _DAT_009784f8 = (*DAT_0097b704)();
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
                puStack_4ac = (undefined1 *)0x472086;
                (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
              }
              uVar5 = 1;
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00402676();
            goto LAB_00471dd4;
          }
        }
        iVar2 = iVar2 + -1;
        iVar11 = iVar11 + -0x14;
      } while (-1 < iVar2);
    }
  }
LAB_00471dd2:
  uVar5 = 0;
LAB_00471dd4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}



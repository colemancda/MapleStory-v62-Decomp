/* FUN_5040d7e8 - 0x5040d7e8 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040d7e8(void)

{
  uint *puVar1;
  short *psVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *this;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int unaff_EBP;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  
  FUN_5042a430();
  iVar4 = this[0x38];
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(this[9] + 0x328);
  while (iVar4 != 0) {
    iVar4 = this[0x39];
    iVar5 = *(int *)(iVar4 + 0x10);
    *(int *)(unaff_EBP + -0x24) = iVar4;
    if (iVar5 != *(int *)(unaff_EBP + -0x20) && -1 < iVar5 - *(int *)(unaff_EBP + -0x20)) break;
    Ordinal_8(unaff_EBP + -0xc4);
    iVar4 = *(int *)(iVar4 + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (-1 < iVar4) {
      Ordinal_8(unaff_EBP + -0x58);
      iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x58),(short *)&DAT_50439040);
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      Ordinal_8(unaff_EBP + -0x7c);
      iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x7c),(short *)&DAT_50439040);
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      iVar4 = this[0xd];
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        FUN_5042a358(0x80004003);
      }
      piVar6 = (int *)this[0xd];
      uVar14 = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x1c);
      iVar4 = *piVar6;
      *(int **)(unaff_EBP + -0x18) = piVar6;
      iVar4 = (**(code **)(iVar4 + 0x90))
                        (piVar6,uVar14,0,*(undefined4 *)(unaff_EBP + -0x7c),
                         *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74),
                         *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x58),
                         *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar4 < 0) {
        FUN_5042a366(iVar4,*(int **)(unaff_EBP + -0x18),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x7c));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x58));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
    }
    psVar2 = *(short **)(unaff_EBP + -0x24);
    if (*(int *)(psVar2 + 0x12) != 0) {
      Ordinal_8(unaff_EBP + -0x114);
      iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x114),(short *)&DAT_50439040);
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_5040b72b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x114));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
    }
    Ordinal_8(unaff_EBP + -0xd4);
    iVar4 = FUN_504057dd((short *)(unaff_EBP + -0xd4),psVar2);
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar4 = FUN_504057dd((short *)(unaff_EBP + -0xc4),(short *)(unaff_EBP + -0xd4));
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_5040278b((short *)(unaff_EBP + -0xd4));
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    iVar4 = *(int *)(psVar2 + 10);
    if (iVar4 == -1) {
      FUN_5040e395(this + 0x36,this[0x39]);
    }
    else if (iVar4 == 0) {
      *(int *)(psVar2 + 8) = *(int *)(unaff_EBP + -0x20) + -1;
    }
    else {
      *(int *)(psVar2 + 8) = *(int *)(psVar2 + 8) + iVar4;
      FUN_504068f7(this + 0x36,(int)(this + 0x36),this[0x39],this[0x39],0);
    }
    if (this[0x38] != 0) {
      iVar4 = *(int *)(this[0x39] + 0x18);
      *(int *)(unaff_EBP + -0x10) = this[0x39];
      if (-1 < iVar4) {
        Ordinal_8(unaff_EBP + -0x104);
        iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x104),(short *)&DAT_50439040);
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        Ordinal_8(unaff_EBP + -0x124);
        iVar4 = FUN_504057dd((short *)(unaff_EBP + -0x124),(short *)&DAT_50439040);
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
        iVar4 = this[0xd];
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar4 == 0) {
          FUN_5042a358(0x80004003);
        }
        piVar6 = (int *)this[0xd];
        uVar14 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18);
        iVar4 = *piVar6;
        *(int **)(unaff_EBP + -0x18) = piVar6;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar6,uVar14,0,*(undefined4 *)(unaff_EBP + -0x124),
                           *(undefined4 *)(unaff_EBP + -0x120),*(undefined4 *)(unaff_EBP + -0x11c),
                           *(undefined4 *)(unaff_EBP + -0x118),*(undefined4 *)(unaff_EBP + -0x104),
                           *(undefined4 *)(unaff_EBP + -0x100),*(undefined4 *)(unaff_EBP + -0xfc),
                           *(undefined4 *)(unaff_EBP + -0xf8));
        if (iVar4 < 0) {
          FUN_5042a366(iVar4,*(int **)(unaff_EBP + -0x18),&DAT_50435298);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x124));
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x104));
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
      }
      if (-1 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c)) {
        Ordinal_8(unaff_EBP + -0xe4);
        iVar4 = FUN_504057dd((short *)(unaff_EBP + -0xe4),(short *)&DAT_50439040);
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_50405839((void *)(unaff_EBP + -0x134),iVar4,3);
        iVar4 = this[0xd];
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iVar4 == 0) {
          FUN_5042a358(0x80004003);
        }
        piVar6 = (int *)this[0xd];
        uVar14 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
        iVar4 = *piVar6;
        *(int **)(unaff_EBP + -0x18) = piVar6;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar6,uVar14,0,*(undefined4 *)(unaff_EBP + -0x134),
                           *(undefined4 *)(unaff_EBP + -0x130),*(undefined4 *)(unaff_EBP + -300),
                           *(undefined4 *)(unaff_EBP + -0x128),*(undefined4 *)(unaff_EBP + -0xe4),
                           *(undefined4 *)(unaff_EBP + -0xe0),*(undefined4 *)(unaff_EBP + -0xdc),
                           *(undefined4 *)(unaff_EBP + -0xd8));
        if (iVar4 < 0) {
          FUN_5042a366(iVar4,*(int **)(unaff_EBP + -0x18),&DAT_50435298);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x134));
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar4 = FUN_5040278b((short *)(unaff_EBP + -0xe4));
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
      }
      if (*(short *)(unaff_EBP + -0xc4) != 0) {
        (**(code **)(*this + 0x10c))
                  (this,*(undefined4 *)(unaff_EBP + -0xc4),*(undefined4 *)(unaff_EBP + -0xc0),
                   *(undefined4 *)(unaff_EBP + -0xbc),*(undefined4 *)(unaff_EBP + -0xb8));
      }
      iVar4 = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(iVar4 + 0x20) != 0) {
        Ordinal_8(unaff_EBP + -0xf4);
        iVar5 = FUN_504057dd((short *)(unaff_EBP + -0xf4),(short *)&DAT_50439040);
        if (iVar5 < 0) {
          FUN_5042a358(iVar5);
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_5040b72b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar5 = FUN_5040278b((short *)(unaff_EBP + -0xf4));
        if (iVar5 < 0) {
          FUN_5042a358(iVar5);
        }
      }
      if (*(int *)(iVar4 + 0x24) != 0) {
        FUN_50405839((void *)(unaff_EBP + -0xac),*(int *)(iVar4 + 0x10),3);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_5040b72b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar4 = FUN_5040278b((short *)(unaff_EBP + -0xac));
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_5040278b((short *)(unaff_EBP + -0xc4));
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    iVar4 = this[0x38];
  }
  if ((int *)this[0x35] == (int *)0x0) goto LAB_5040e357;
  piVar6 = *(int **)this[0x35];
  *(int **)(unaff_EBP + -0x10) = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  if (piVar6 == (int *)0x0) goto LAB_5040e357;
  iVar4 = this[0xd];
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar4 == 0) {
    FUN_5042a358(0x80004003);
  }
  (**(code **)(*(int *)this[0xd] + 0x20))((int *)this[0xd],unaff_EBP + -0x28);
  if (0 < *(int *)(unaff_EBP + -0x28)) {
    if (0xff < *(int *)(unaff_EBP + -0x28)) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0xff;
    }
    iVar4 = this[0xe];
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (iVar4 == 0) {
      FUN_5042a358(0x80004003);
    }
    (**(code **)(*(int *)this[0xe] + 0x20))((int *)this[0xe],unaff_EBP + -0x34);
    iVar4 = this[0xf];
    *(undefined4 *)(unaff_EBP + -0xac) = DAT_50439040;
    *(undefined4 *)(unaff_EBP + -0xa8) = DAT_50439044;
    *(undefined4 *)(unaff_EBP + -0xa4) = DAT_50439048;
    *(undefined4 *)(unaff_EBP + -0xa0) = DAT_5043904c;
    if (iVar4 == 0) {
      FUN_5042a358(0x80004003);
    }
    (**(code **)(*(int *)this[0xf] + 0x8c))
              ((int *)this[0xf],unaff_EBP + -0x38,unaff_EBP + -0x30,0,0,0,0,0,0,
               *(undefined4 *)(unaff_EBP + -0xac),*(undefined4 *)(unaff_EBP + -0xa8),
               *(undefined4 *)(unaff_EBP + -0xa4),*(undefined4 *)(unaff_EBP + -0xa0));
    uVar12 = this[0x14];
    *(uint *)(unaff_EBP + -0x14) = uVar12;
    if ((uVar12 & 4) == 0) {
      iVar4 = *(int *)(unaff_EBP + 8);
      *(int *)(unaff_EBP + -0x34) = (*(int *)(iVar4 + 0x14) * *(int *)(unaff_EBP + -0x34)) / 0x100;
      *(int *)(unaff_EBP + -0x38) = (*(int *)(iVar4 + 0x18) * *(int *)(unaff_EBP + -0x38)) / 0x100;
      *(int *)(unaff_EBP + -0x30) = (*(int *)(iVar4 + 0x1c) * *(int *)(unaff_EBP + -0x30)) / 0x100;
    }
    else {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
    }
    uVar12 = *(uint *)(unaff_EBP + -0x34);
    if ((int)uVar12 < 0x100) {
      if ((int)uVar12 < 0) {
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 0xff;
    }
    uVar10 = *(uint *)(unaff_EBP + -0x38);
    if ((int)uVar10 < 0x100) {
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0xff;
    }
    uVar9 = *(uint *)(unaff_EBP + -0x30);
    if ((int)uVar9 < 0x100) {
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0xff;
    }
    piVar6 = *(int **)(unaff_EBP + -0x10);
    *(uint *)(unaff_EBP + -0x98) =
         ((*(int *)(unaff_EBP + -0x28) << 8 | uVar12) << 8 | uVar10) << 8 | uVar9;
    iVar4 = (**(code **)(*piVar6 + 100))
                      (piVar6,unaff_EBP + -0x6c,unaff_EBP + -0x68,unaff_EBP + -100,unaff_EBP + -0x60
                       ,0,unaff_EBP + -0x9c);
    if (-1 < iVar4) {
      iVar4 = this[0x10];
      *(undefined4 *)(unaff_EBP + -0xac) = DAT_50439040;
      *(undefined4 *)(unaff_EBP + -0xa8) = DAT_50439044;
      *(undefined4 *)(unaff_EBP + -0xa4) = DAT_50439048;
      *(undefined4 *)(unaff_EBP + -0xa0) = DAT_5043904c;
      if (iVar4 == 0) {
        FUN_5042a358(0x80004003);
      }
      iVar4 = (**(code **)(*(int *)this[0x10] + 0x8c))
                        ((int *)this[0x10],unaff_EBP + -0x84,unaff_EBP + -0x80,unaff_EBP + -0x48,
                         unaff_EBP + -0x44,unaff_EBP + -0x8c,unaff_EBP + -0x88,0,unaff_EBP + -0xb4,
                         *(undefined4 *)(unaff_EBP + -0xac),*(undefined4 *)(unaff_EBP + -0xa8),
                         *(undefined4 *)(unaff_EBP + -0xa4),*(undefined4 *)(unaff_EBP + -0xa0));
      if (-1 < iVar4) {
        if (this[0x10] == 0) {
          FUN_5042a358(0x80004003);
        }
        piVar6 = FUN_5040e835((int *)this[0x10]);
        iVar4 = *(int *)(unaff_EBP + -0xb0);
        iVar5 = *(int *)(unaff_EBP + -0xb4);
        if (iVar5 == 0 && iVar4 == 0) {
          iVar4 = this[0x12];
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (iVar4 != 0) {
            piVar7 = FUN_5040d235(*(int **)(unaff_EBP + -0x10));
            iVar4 = *(int *)(unaff_EBP + -0x48);
            piVar8 = FUN_5040e85f(*(int **)(unaff_EBP + -0x10));
            iVar4 = (((int)piVar7 * iVar4) / (int)piVar8 + *(int *)(unaff_EBP + -0x8c)) * 2;
            *(int *)(unaff_EBP + -0x84) = iVar4 - *(int *)(unaff_EBP + -0x84);
            *(int *)(unaff_EBP + -0x8c) = iVar4 - *(int *)(unaff_EBP + -0x8c);
            *(int *)(unaff_EBP + -0x48) = -*(int *)(unaff_EBP + -0x48);
          }
        }
        else if ((iVar5 == DAT_5042da20) && (iVar4 == DAT_5042da24)) {
          *(undefined4 *)(unaff_EBP + -0x1c) = 1;
        }
        else if ((iVar5 == DAT_5042da28) && (iVar4 == DAT_5042da2c)) {
          *(undefined4 *)(unaff_EBP + -0x1c) = 2;
        }
        else if ((iVar5 == DAT_5042da30) && (iVar4 == DAT_5042da34)) {
          *(undefined4 *)(unaff_EBP + -0x1c) = 3;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
        }
        FUN_5040d2cd(this,*(uint *)(unaff_EBP + -0x1c),*(uint *)(unaff_EBP + -0x48),
                     *(float **)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x8c),
                     (uint *)(unaff_EBP + -0x6c),(int)piVar6);
        puVar3 = *(undefined4 **)(unaff_EBP + 8);
        if (((((int)puVar3[8] <= this[0x23]) && ((int)puVar3[9] <= this[0x24])) &&
            (this[0x21] < (int)puVar3[10])) && (this[0x22] < (int)puVar3[0xb])) {
          iVar4 = this[0x13];
          if (iVar4 == -1) {
            iVar4 = abs(*(int *)(unaff_EBP + -0x6c));
            iVar5 = abs(*(int *)(unaff_EBP + -0x48));
            if (iVar4 == iVar5) {
              iVar4 = abs(*(int *)(unaff_EBP + -0x68));
              iVar5 = abs(*(int *)(unaff_EBP + -0x44));
              if (((iVar4 == iVar5) && (*(int *)(unaff_EBP + -0x9c) == 0)) &&
                 (-1 < *(int *)(unaff_EBP + -0x1c))) {
                if (puVar3[0xd] != 1) {
                  (**(code **)(*(int *)*puVar3 + 0xfc))((int *)*puVar3,0,0x10,1);
                  (**(code **)(*(int *)*puVar3 + 0xfc))((int *)*puVar3,0,0x11,1);
                  puVar3[0xd] = 1;
                }
                goto LAB_5040e0fa;
              }
            }
            if (puVar3[0xd] != 2) {
              (**(code **)(*(int *)*puVar3 + 0xfc))((int *)*puVar3,0,0x10,2);
              (**(code **)(*(int *)*puVar3 + 0xfc))((int *)*puVar3,0,0x11,2);
              puVar3[0xd] = 2;
            }
          }
          else if (iVar4 != puVar3[0xd]) {
            (**(code **)(*(int *)*puVar3 + 0xfc))((int *)*puVar3,0,0x10,iVar4);
            (**(code **)(*(int *)*puVar3 + 0xfc))((int *)*puVar3,0,0x11,this[0x13]);
            puVar3[0xd] = this[0x13];
          }
LAB_5040e0fa:
          uVar12 = *(uint *)(unaff_EBP + -0x14) | 0x80000000;
          if (puVar3[0xe] != uVar12) {
            puVar3[0xe] = uVar12;
            if (uVar12 == 0x80000001) {
              (**(code **)(*(int *)*puVar3 + 200))((int *)*puVar3,0x13,5);
              piVar6 = (int *)*puVar3;
              iVar4 = *piVar6;
              uVar14 = 2;
            }
            else {
              piVar6 = (int *)*puVar3;
              if (uVar12 == 0x80000002) {
                (**(code **)(*piVar6 + 200))(piVar6,0x13,10);
                piVar6 = (int *)*puVar3;
                iVar4 = *piVar6;
                uVar14 = 1;
              }
              else {
                (**(code **)(*piVar6 + 200))(piVar6,0x13,5);
                piVar6 = (int *)*puVar3;
                iVar4 = *piVar6;
                uVar14 = 6;
              }
            }
            (**(code **)(iVar4 + 200))(piVar6,0x14,uVar14);
          }
          iVar4 = this[0x1d];
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          iVar5 = this[0x1f];
          *(int *)(unaff_EBP + -0x24) = iVar4;
          *(int *)(unaff_EBP + -0x14) = this[0x1e];
          if (0 < *(int *)(unaff_EBP + -0x68)) {
            do {
              *(undefined4 *)(unaff_EBP + -0x5c) = 0;
              *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
              if (0 < *(int *)(unaff_EBP + -0x6c)) {
                iVar4 = iVar5 * 4 + 8;
                puVar11 = (undefined4 *)(iVar4 + *(int *)(unaff_EBP + -0x14));
                *(int *)(unaff_EBP + -0x40) = iVar4;
                *(int *)(unaff_EBP + -0x40) = -*(int *)(unaff_EBP + -0x40);
                *(undefined4 **)(unaff_EBP + -0x18) = puVar11;
                *(int *)(unaff_EBP + -0x94) = (iVar5 * 4 + 0xc) - iVar4;
                *(int *)(unaff_EBP + -0x90) =
                     *(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x14);
                do {
                  *(undefined4 *)(unaff_EBP + -0x58) = **(undefined4 **)(unaff_EBP + 8);
                  *(undefined4 *)(unaff_EBP + -0x54) =
                       *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 4 + (int)puVar11);
                  *(undefined4 *)(unaff_EBP + -0x50) = *puVar11;
                  *(undefined4 *)(unaff_EBP + -0x4c) =
                       *(undefined4 *)(*(int *)(unaff_EBP + -0x94) + (int)puVar11);
                  FUN_5040d4ef((int *)(unaff_EBP + -0x58));
                  if (*(int *)(unaff_EBP + -0x1c) < 0) {
                    uVar14 = *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 8 + (int)puVar11);
                    *(undefined4 *)(unaff_EBP + -0x78) =
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0xc + (int)puVar11);
                    *(undefined4 *)(unaff_EBP + -0x7c) = uVar14;
                    uVar14 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + iVar5 * 4);
                    *(undefined4 *)(unaff_EBP + -0x70) =
                         *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4 + iVar5 * 4);
                    *(undefined4 *)(unaff_EBP + -0x74) = uVar14;
                    FUN_5040d4ef((int *)(unaff_EBP + -0x7c));
                    FUN_5040d520((int *)(unaff_EBP + -0x58),(int *)(unaff_EBP + -0x58),
                                 (int *)(unaff_EBP + -0x7c));
                  }
                  iVar4 = (*DAT_50438ca8)(unaff_EBP + -0x58,unaff_EBP + -0x58,puVar3 + 8);
                  if (iVar4 != 0) {
                    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
                    iVar4 = **(int **)(unaff_EBP + -0x10);
                    *(undefined1 *)(unaff_EBP + -4) = 0xd;
                    (**(code **)(iVar4 + 0x34))
                              (*(int **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x5c),
                               *(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x3c);
                    FUN_5040e368((void *)(unaff_EBP + -0x2c),*(undefined4 **)(unaff_EBP + -0x3c));
                    if (*(int *)(unaff_EBP + -0x2c) == 0) {
                      piVar7 = *(int **)(unaff_EBP + -0x3c);
                      *(undefined1 *)(unaff_EBP + -4) = 0xc;
                      piVar6 = (int *)0x0;
                      if (piVar7 != (int *)0x0) {
                        (**(code **)(*piVar7 + 8))(piVar7);
                        piVar6 = *(int **)(unaff_EBP + -0x2c);
                      }
                      *(undefined1 *)(unaff_EBP + -4) = 0xb;
                    }
                    else {
                      iVar4 = FUN_50408723();
                      if (iVar4 != 0) {
                        uVar12 = *(int *)(unaff_EBP + -0x4c) - *(int *)(unaff_EBP + -0x54);
                        uVar10 = *(int *)(unaff_EBP + -0x50) - *(int *)(unaff_EBP + -0x58);
                        lVar13 = __allmul(uVar12,(int)uVar12 >> 0x1f,uVar10,(int)uVar10 >> 0x1f);
                        puVar1 = puVar3 + 0x12;
                        uVar12 = *puVar1;
                        *puVar1 = *puVar1 + (uint)lVar13;
                        puVar11 = *(undefined4 **)(unaff_EBP + -0x18);
                        puVar3[0x13] = puVar3[0x13] + (int)((ulonglong)lVar13 >> 0x20) +
                                       (uint)CARRY4(uVar12,(uint)lVar13);
                      }
                      piVar6 = *(int **)(unaff_EBP + -0x3c);
                      *(undefined1 *)(unaff_EBP + -4) = 0xc;
                      if (piVar6 != (int *)0x0) {
                        (**(code **)(*piVar6 + 8))(piVar6);
                      }
                      piVar6 = *(int **)(unaff_EBP + -0x2c);
                      *(undefined1 *)(unaff_EBP + -4) = 0xb;
                    }
                    if (piVar6 != (int *)0x0) {
                      (**(code **)(*piVar6 + 8))(piVar6);
                    }
                  }
                  iVar4 = *(int *)(unaff_EBP + -0x5c) + *(int *)(unaff_EBP + -100);
                  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 8;
                  puVar11 = puVar11 + 2;
                  *(int *)(unaff_EBP + -0x5c) = iVar4;
                  *(undefined4 **)(unaff_EBP + -0x18) = puVar11;
                } while (iVar4 < *(int *)(unaff_EBP + -0x6c));
              }
              iVar4 = *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x60);
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + iVar5 * 4;
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar5 * 4;
              *(int *)(unaff_EBP + -0x20) = iVar4;
            } while (iVar4 < *(int *)(unaff_EBP + -0x68));
          }
        }
        iVar4 = **(int **)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        (**(code **)(iVar4 + 8))(*(int **)(unaff_EBP + -0x10));
        goto LAB_5040e357;
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
    }
  }
  iVar4 = *piVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  (**(code **)(iVar4 + 8))(piVar6);
LAB_5040e357:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



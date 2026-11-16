/* FUN_5000dbfd - 0x5000dbfd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000dbfd(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int unaff_EBX;
  uint *puVar16;
  int unaff_EBP;
  int unaff_EDI;
  
  do {
    if (*(int *)(unaff_EBP + -0x7c) == in_EAX) {
      FUN_5000e2a8();
      return;
    }
    *(int *)(unaff_EBP + -0xa0) = unaff_EDI;
    iVar8 = unaff_EDI;
    while (unaff_EDI != unaff_EBX) {
      iVar8 = *(int *)(unaff_EBP + -0x7c);
      *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0xd4) + unaff_EDI;
      *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x14) + iVar8;
      *(int *)(unaff_EBP + -0x44) = unaff_EDI;
      *(int *)(unaff_EBP + -0x40) = iVar8;
      iVar4 = (*DAT_50081cf8)(unaff_EBP + -0x44,unaff_EBP + -0x44,unaff_EBP + -0x30);
      if (iVar4 != 0) {
        FUN_5000ec92(*(void **)(unaff_EBP + 0x14),(undefined4 *)(unaff_EBP + -0x18),unaff_EDI,iVar8)
        ;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + -0x18) == (int *)0x0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          piVar5 = FUN_5000d34b(*(int **)(unaff_EBP + -0x18));
          *(int **)(unaff_EBP + -0x88) = piVar5;
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_50012c97(0x80004003);
          }
          piVar5 = FUN_5000d372(*(int **)(unaff_EBP + -0x18));
          *(int **)(unaff_EBP + -0x78) = piVar5;
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_50012c97(0x80004003);
          }
          pvVar6 = FUN_5000d3e7(*(void **)(unaff_EBP + -0x18),(void *)(unaff_EBP + -0x104),
                                unaff_EBP + -0x94);
          iVar8 = *(int *)((int)pvVar6 + 8);
          *(int *)(unaff_EBP + -0xac) = iVar8;
          iVar4 = FUN_5000630c((short *)(unaff_EBP + -0x104));
          if (iVar4 < 0) {
            FUN_50012c97(iVar4);
          }
          if (iVar8 == 0) {
            piVar5 = *(int **)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x44);
            *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x40);
            *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x3c);
            *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
            if (*(int *)(unaff_EBP + -0x1c) != 0) {
              (*DAT_50081ca4)(unaff_EBP + -0x54,
                              ((*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x3c)) -
                              *(int *)(unaff_EBP + -0x44)) + *(int *)(unaff_EBP + -0x30),0);
            }
            if (*(int *)(unaff_EBP + -0x20) != 0) {
              (*DAT_50081ca4)(unaff_EBP + -0x54,0,
                              ((*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x38)) -
                              *(int *)(unaff_EBP + -0x40)) + *(int *)(unaff_EBP + -0x2c));
            }
            *(int *)(unaff_EBP + -0x54) =
                 ((*(int *)(unaff_EBP + -0x54) - *(int *)(unaff_EBP + 0x24)) *
                 *(int *)(unaff_EBP + 0x1c)) / *(int *)(unaff_EBP + 0x2c) +
                 *(int *)(unaff_EBP + 0xc);
            *(int *)(unaff_EBP + -0x50) =
                 ((*(int *)(unaff_EBP + -0x50) - *(int *)(unaff_EBP + 0x28)) *
                 *(int *)(unaff_EBP + 0x20)) / *(int *)(unaff_EBP + 0x30) +
                 *(int *)(unaff_EBP + 0x10);
            *(int *)(unaff_EBP + -0x4c) =
                 ((*(int *)(unaff_EBP + -0x4c) - *(int *)(unaff_EBP + 0x24)) *
                 *(int *)(unaff_EBP + 0x1c)) / *(int *)(unaff_EBP + 0x2c) +
                 *(int *)(unaff_EBP + 0xc);
            *(int *)(unaff_EBP + -0x48) =
                 ((*(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + 0x28)) *
                 *(int *)(unaff_EBP + 0x20)) / *(int *)(unaff_EBP + 0x30) +
                 *(int *)(unaff_EBP + 0x10);
            (*DAT_50081ca4)(unaff_EBP + -0x44,-*(int *)(unaff_EBP + -0xa0),
                            -*(int *)(unaff_EBP + -0x7c));
            iVar8 = *(int *)(unaff_EBP + -0x44);
            bVar12 = (byte)piVar5;
            iVar7 = 1 << (bVar12 & 0x1f);
            iVar4 = *(int *)(unaff_EBP + -0x40);
            *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) >> (bVar12 & 0x1f);
            iVar14 = iVar8 >> (bVar12 & 0x1f);
            *(int *)(unaff_EBP + -0x38) =
                 ((iVar7 - iVar4) + -1 + *(int *)(unaff_EBP + -0x38) >> (bVar12 & 0x1f)) +
                 *(int *)(unaff_EBP + -0x40);
            *(int *)(unaff_EBP + -0x44) = iVar14;
            *(int *)(unaff_EBP + -0x3c) =
                 ((iVar7 - iVar8) + -1 + *(int *)(unaff_EBP + -0x3c) >> (bVar12 & 0x1f)) + iVar14;
            *(int *)(unaff_EBP + -0xac) =
                 *(int *)(unaff_EBP + -0x94) * *(int *)(unaff_EBP + -0x40) +
                 *(int *)(unaff_EBP + -0xac) + (iVar14 << (*(byte *)(unaff_EBP + -0x88) & 0x1f));
            if (*(int *)(unaff_EBP + -0x90) == 0) {
              if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_5000de07;
LAB_5000de4d:
              iVar8 = *(int *)(unaff_EBP + -0xa4);
              *(int *)(unaff_EBP + -0xb0) = -iVar8;
              iVar7 = ((*(int *)(unaff_EBP + -0x4c) + -1) / iVar8) * iVar8;
              *(int *)(unaff_EBP + -0xc0) = iVar7;
              iVar4 = *(int *)(unaff_EBP + -0x54) / iVar8 + -1;
            }
            else {
              if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_5000de4d;
LAB_5000de07:
              iVar8 = *(int *)(unaff_EBP + -0xa4);
              *(int *)(unaff_EBP + -0xb0) = iVar8;
              iVar7 = (*(int *)(unaff_EBP + -0x54) / iVar8) * iVar8;
              *(int *)(unaff_EBP + -0xc0) = iVar7;
              iVar4 = (*(int *)(unaff_EBP + -0x4c) + -1) / iVar8 + 1;
            }
            iVar4 = iVar4 * iVar8;
            *(int *)(unaff_EBP + -0xb4) = iVar4;
            if (*(int *)(unaff_EBP + -0x9c) == 0) {
              if (*(int *)(unaff_EBP + -0x20) == 0) goto LAB_5000dea4;
LAB_5000de7f:
              iVar8 = *(int *)(unaff_EBP + -0x98);
              *(int *)(unaff_EBP + -0xcc) = -iVar8;
              iVar13 = ((*(int *)(unaff_EBP + -0x48) + -1) / iVar8) * iVar8;
              iVar14 = *(int *)(unaff_EBP + -0x50) / iVar8 + -1;
            }
            else {
              if (*(int *)(unaff_EBP + -0x20) == 0) goto LAB_5000de7f;
LAB_5000dea4:
              iVar8 = *(int *)(unaff_EBP + -0x98);
              *(int *)(unaff_EBP + -0xcc) = iVar8;
              iVar13 = (*(int *)(unaff_EBP + -0x50) / iVar8) * iVar8;
              iVar14 = (*(int *)(unaff_EBP + -0x48) + -1) / iVar8 + 1;
            }
            iVar14 = iVar14 * iVar8;
            *(int *)(unaff_EBP + -0xc4) = iVar14;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            for (; *(int *)(unaff_EBP + -0x8c) = iVar13, iVar13 != iVar14;
                iVar13 = iVar13 + *(int *)(unaff_EBP + -0xcc)) {
              *(int *)(unaff_EBP + -0x74) = iVar7;
              iVar10 = iVar7;
              while (iVar7 != iVar4) {
                *(int *)(unaff_EBP + -100) = iVar7;
                *(int *)(unaff_EBP + -0x60) = iVar13;
                *(int *)(unaff_EBP + -0x5c) = iVar7 + *(int *)(unaff_EBP + -0xa4);
                *(int *)(unaff_EBP + -0x58) = iVar13 + iVar8;
                iVar8 = (*DAT_50081cf8)(unaff_EBP + -100,unaff_EBP + -100,unaff_EBP + -0x54);
                if (iVar8 != 0) {
                  bVar12 = (byte)*(undefined4 *)(unaff_EBP + -0x78);
                  if (*(int *)(unaff_EBP + -0x1c) == 0) {
                    iVar8 = *(int *)(unaff_EBP + -100) - *(int *)(unaff_EBP + -0x54);
                  }
                  else {
                    iVar8 = *(int *)(unaff_EBP + -0x4c) - *(int *)(unaff_EBP + -0x5c);
                  }
                  iVar4 = 1 << (bVar12 & 0x1f);
                  *(int *)(unaff_EBP + -0xe0) =
                       (iVar8 * *(int *)(unaff_EBP + 0x2c)) / *(int *)(unaff_EBP + 0x1c) + -1 +
                       iVar4 >> (bVar12 & 0x1f);
                  if (*(int *)(unaff_EBP + -0x20) == 0) {
                    iVar8 = *(int *)(unaff_EBP + -0x60) - *(int *)(unaff_EBP + -0x50);
                  }
                  else {
                    iVar8 = *(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + -0x58);
                  }
                  iVar7 = *(int *)(unaff_EBP + 0x30);
                  iVar14 = *(int *)(unaff_EBP + 0x20);
                  uVar2 = *(undefined4 *)(unaff_EBP + -0x78);
                  (*DAT_50081ca4)(unaff_EBP + -100,-*(int *)(unaff_EBP + -0x74),
                                  -*(int *)(unaff_EBP + -0x8c));
                  *(undefined4 *)(unaff_EBP + -0xf4) = *(undefined4 *)(unaff_EBP + -100);
                  *(undefined4 *)(unaff_EBP + -0xf0) = *(undefined4 *)(unaff_EBP + -0x60);
                  *(undefined4 *)(unaff_EBP + -0xec) = *(undefined4 *)(unaff_EBP + -0x5c);
                  *(undefined4 *)(unaff_EBP + -0xe8) = *(undefined4 *)(unaff_EBP + -0x58);
                  FUN_5000b54d();
                  *(undefined1 *)(unaff_EBP + -4) = 9;
                  if (*(int **)(unaff_EBP + -0x34) == (int *)0x0) {
                    *(undefined1 *)(unaff_EBP + -4) = 8;
                  }
                  else {
                    piVar5 = FUN_5000d372(*(int **)(unaff_EBP + -0x34));
                    if (*(int *)(unaff_EBP + -0x34) == 0) {
                      FUN_50012c97(0x80004003);
                    }
                    piVar9 = FUN_5000d34b(*(int **)(unaff_EBP + -0x34));
                    *(int **)(unaff_EBP + -0x80) = piVar9;
                    if (*(int *)(unaff_EBP + -0x34) == 0) {
                      FUN_50012c97(0x80004003);
                    }
                    pvVar6 = FUN_5000d3e7(*(void **)(unaff_EBP + -0x34),(void *)(unaff_EBP + -0x114)
                                          ,unaff_EBP + -0xa8);
                    iVar13 = *(int *)((int)pvVar6 + 8);
                    *(int *)(unaff_EBP + -0x68) = iVar13;
                    iVar10 = FUN_5000630c((short *)(unaff_EBP + -0x114));
                    if (iVar10 < 0) {
                      FUN_50012c97(iVar10);
                    }
                    if (iVar13 != 0) {
                      iVar13 = *(int *)(unaff_EBP + -100);
                      bVar12 = (byte)piVar5;
                      iVar11 = 1 << (bVar12 & 0x1f);
                      iVar10 = *(int *)(unaff_EBP + -0x60);
                      *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x60) >> (bVar12 & 0x1f);
                      iVar3 = DAT_50082010;
                      iVar15 = iVar13 >> (bVar12 & 0x1f);
                      *(int *)(unaff_EBP + -0x58) =
                           ((iVar11 - iVar10) + -1 + *(int *)(unaff_EBP + -0x58) >> (bVar12 & 0x1f))
                           + *(int *)(unaff_EBP + -0x60);
                      *(int *)(unaff_EBP + -100) = iVar15;
                      *(int *)(unaff_EBP + -0x5c) =
                           ((iVar11 - iVar13) + -1 + *(int *)(unaff_EBP + -0x5c) >> (bVar12 & 0x1f))
                           + iVar15;
                      puVar1 = (uint *)(*(int *)(unaff_EBP + -0xa8) * *(int *)(unaff_EBP + -0x60) +
                                        *(int *)(unaff_EBP + -0x68) +
                                       (iVar15 << (*(byte *)(unaff_EBP + -0x80) & 0x1f)));
                      puVar16 = (uint *)(((iVar8 * iVar7) / iVar14 + -1 + iVar4 >>
                                         ((byte)uVar2 & 0x1f)) * *(int *)(unaff_EBP + -0x94) +
                                        *(int *)(unaff_EBP + -0xac) +
                                        (*(int *)(unaff_EBP + -0xe0) <<
                                        (*(byte *)(unaff_EBP + -0x88) & 0x1f)));
                      iVar8 = FUN_5000e2bf(iVar3,(int)piVar5,*(int *)(unaff_EBP + -0x80));
                      iVar4 = (int)piVar5 - *(int *)(unaff_EBP + -0x78);
                      if ((((*(int *)(unaff_EBP + 0x2c) == *(int *)(unaff_EBP + 0x1c)) &&
                           (*(int *)(unaff_EBP + 0x30) == *(int *)(unaff_EBP + 0x20))) &&
                          (iVar7 = 0, *(int *)(unaff_EBP + -0x84) == 0)) && (-1 < iVar4)) {
                        if ((*(int *)(unaff_EBP + -0x90) != 0) &&
                           (*(int *)(unaff_EBP + 0x28) == *(int *)(unaff_EBP + 0x10))) {
                          iVar7 = 1;
                        }
                        FUN_50007537(*(int *)(unaff_EBP + -0x5c) - *(int *)(unaff_EBP + -100),
                                     *(int *)(unaff_EBP + -0x58) - *(int *)(unaff_EBP + -0x60),
                                     (byte)iVar4,*(undefined **)(unaff_EBP + -0x80),(uint)puVar1,
                                     *(int *)(unaff_EBP + -0xa8),*(uint *)(unaff_EBP + -0x88),
                                     (uint)puVar16,*(int *)(unaff_EBP + -0x94),iVar7,
                                     *(int *)(unaff_EBP + 0x18),iVar8,*(int *)(unaff_EBP + -0x1c),
                                     *(int *)(unaff_EBP + -0x20));
                      }
                      else {
                        FUN_50008f93(*(int *)(unaff_EBP + -0x5c) - *(int *)(unaff_EBP + -100),
                                     *(int *)(unaff_EBP + -0x58) - *(int *)(unaff_EBP + -0x60),iVar4
                                     ,*(int *)(unaff_EBP + 0x2c),*(int *)(unaff_EBP + 0x1c),
                                     *(int *)(unaff_EBP + 0x30),*(int *)(unaff_EBP + 0x20),
                                     *(int *)(unaff_EBP + -0x80),puVar1,*(int *)(unaff_EBP + -0xa8),
                                     *(int *)(unaff_EBP + -0x88),puVar16,*(int *)(unaff_EBP + -0x94)
                                     ,*(uint *)(unaff_EBP + 0x18),iVar8,*(int *)(unaff_EBP + -0x1c),
                                     *(int *)(unaff_EBP + -0x20),*(ushort **)(unaff_EBP + -0x84));
                      }
                      if (*(int *)(unaff_EBP + -0x34) == 0) {
                        FUN_50012c97(0x80004003);
                      }
                      piVar5 = *(int **)(unaff_EBP + -0x34);
                      iVar8 = (**(code **)(*piVar5 + 0x20))(piVar5,unaff_EBP + -0xf4);
                      if (iVar8 < 0) {
                        FUN_50012ca5(iVar8,piVar5,&DAT_500183f8);
                      }
                    }
                    piVar5 = *(int **)(unaff_EBP + -0x34);
                    *(undefined1 *)(unaff_EBP + -4) = 8;
                    if (piVar5 != (int *)0x0) {
                      (**(code **)(*piVar5 + 8))(piVar5);
                    }
                  }
                }
                *(int *)(unaff_EBP + -0x74) =
                     *(int *)(unaff_EBP + -0x74) + *(int *)(unaff_EBP + -0xb0);
                iVar8 = *(int *)(unaff_EBP + -0x98);
                iVar10 = *(int *)(unaff_EBP + -0xc0);
                iVar4 = *(int *)(unaff_EBP + -0xb4);
                iVar14 = *(int *)(unaff_EBP + -0xc4);
                iVar13 = *(int *)(unaff_EBP + -0x8c);
                iVar7 = *(int *)(unaff_EBP + -0x74);
              }
              iVar7 = iVar10;
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              FUN_50012c97(0x80004003);
            }
            piVar5 = *(int **)(unaff_EBP + -0x18);
            iVar8 = (**(code **)(*piVar5 + 0x20))(piVar5,0);
            if (iVar8 < 0) {
              FUN_50012ca5(iVar8,piVar5,&DAT_500183f8);
            }
            piVar5 = *(int **)(unaff_EBP + -0x18);
            *(undefined4 *)(unaff_EBP + -4) = 0;
          }
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
        }
      }
      unaff_EDI = *(int *)(unaff_EBP + -0xa0) + *(int *)(unaff_EBP + -0xd0);
      iVar8 = *(int *)(unaff_EBP + -0xb8);
      unaff_EBX = *(int *)(unaff_EBP + -0xbc);
      in_EAX = *(int *)(unaff_EBP + -200);
      *(int *)(unaff_EBP + -0xa0) = unaff_EDI;
    }
    *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0x7c) + *(int *)(unaff_EBP + -0x70);
    unaff_EDI = iVar8;
  } while( true );
}



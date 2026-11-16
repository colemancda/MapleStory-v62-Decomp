/* FUN_5000d5d7 - 0x5000d5d7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000d5d7(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int unaff_EBP;
  int iVar16;
  
  FUN_50012d80();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffeec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = FUN_5000ed18(*(int **)(unaff_EBP + 0x14));
  piVar4 = FUN_5000717b(*(int **)(unaff_EBP + 0x14));
  *(int **)(unaff_EBP + -0x70) = piVar4;
  *(int **)(unaff_EBP + -0x24) = piVar4;
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x28);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x2c);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  iVar5 = FUN_5000b4b0();
  if (iVar5 == 0) goto LAB_5000e285;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (*(int *)(unaff_EBP + 0x2c) == 0) {
    *(int **)(unaff_EBP + 0x2c) = piVar3;
  }
  else if (*(int *)(unaff_EBP + 0x2c) < 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(int *)(unaff_EBP + 0x2c) = -*(int *)(unaff_EBP + 0x2c);
  }
  iVar5 = *(int *)(unaff_EBP + 0x30);
  if (iVar5 == 0) {
    iVar5 = *(int *)(unaff_EBP + -0x70);
LAB_5000d671:
    *(int *)(unaff_EBP + 0x30) = iVar5;
  }
  else if (iVar5 < 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    iVar5 = -iVar5;
    goto LAB_5000d671;
  }
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    iVar14 = *(int *)(unaff_EBP + 0x2c);
LAB_5000d690:
    *(int *)(unaff_EBP + 0x1c) = iVar14;
  }
  else if (*(int *)(unaff_EBP + 0x1c) < 0) {
    *(uint *)(unaff_EBP + -0x1c) = (uint)(*(int *)(unaff_EBP + -0x1c) == 0);
    iVar14 = -*(int *)(unaff_EBP + 0x1c);
    goto LAB_5000d690;
  }
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    *(int *)(unaff_EBP + 0x20) = iVar5;
  }
  else if (*(int *)(unaff_EBP + 0x20) < 0) {
    *(uint *)(unaff_EBP + -0x20) = (uint)(*(int *)(unaff_EBP + -0x20) == 0);
    *(int *)(unaff_EBP + 0x20) = -*(int *)(unaff_EBP + 0x20);
  }
  iVar14 = *(int *)(unaff_EBP + 0x24);
  iVar16 = *(int *)(unaff_EBP + 0x28);
  *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 0x2c) + iVar14;
  *(int *)(unaff_EBP + -0x38) = iVar16 + iVar5;
  *(int *)(unaff_EBP + -0x44) = iVar14;
  *(int *)(unaff_EBP + -0x40) = iVar16;
  iVar6 = (*DAT_50081cf8)(unaff_EBP + -0x30,unaff_EBP + -0x30,unaff_EBP + -0x44);
  if (iVar6 == 0) goto LAB_5000e285;
  *(int *)(unaff_EBP + -0x30) =
       ((*(int *)(unaff_EBP + -0x30) - iVar14) * *(int *)(unaff_EBP + 0x1c)) /
       *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x2c) =
       ((*(int *)(unaff_EBP + -0x2c) - iVar16) * *(int *)(unaff_EBP + 0x20)) / iVar5 +
       *(int *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x28) =
       ((*(int *)(unaff_EBP + -0x28) - iVar14) * *(int *)(unaff_EBP + 0x1c)) /
       *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x24) =
       ((*(int *)(unaff_EBP + -0x24) - iVar16) * *(int *)(unaff_EBP + 0x20)) / iVar5 +
       *(int *)(unaff_EBP + 0x10);
  iVar5 = (*DAT_50081cf8)(unaff_EBP + -0x54,unaff_EBP + -0x30,unaff_EBP + -0x54);
  if (iVar5 == 0) goto LAB_5000e285;
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x54);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x48);
  iVar14 = *(int *)(unaff_EBP + -0x4c) - *(int *)(unaff_EBP + -0x54);
  iVar16 = ((*(int *)(unaff_EBP + -0x54) - *(int *)(unaff_EBP + 0xc)) * *(int *)(unaff_EBP + 0x2c))
           / *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + 0x24);
  *(int *)(unaff_EBP + -0x30) = iVar16;
  iVar6 = ((*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + 0x10)) * *(int *)(unaff_EBP + 0x30))
          / *(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x28);
  *(int *)(unaff_EBP + -0x2c) = iVar6;
  iVar5 = ((*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + 0xc)) * *(int *)(unaff_EBP + 0x2c)) /
          *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + 0x24);
  *(int *)(unaff_EBP + -0x28) = iVar5;
  *(int *)(unaff_EBP + -0x6c) = iVar5 - iVar16;
  iVar5 = ((*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + 0x10)) * *(int *)(unaff_EBP + 0x30))
          / *(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x28);
  *(int *)(unaff_EBP + -0x24) = iVar5;
  *(int *)(unaff_EBP + -0x68) = iVar5 - iVar6;
  *(int *)(unaff_EBP + -0xd4) = *(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + -0x50);
  if (((*(int *)(unaff_EBP + 0x14) == *(int *)(unaff_EBP + 8)) &&
      (iVar5 = (*DAT_50081cf8)(unaff_EBP + -0xf4,unaff_EBP + -0x54,unaff_EBP + -0x30), iVar5 != 0))
     && ((*(int *)(unaff_EBP + -0x1c) != 0 ||
         ((((*(int *)(unaff_EBP + -0x20) != 0 || (iVar14 != *(int *)(unaff_EBP + -0x6c))) ||
           (*(int *)(unaff_EBP + -0xd4) != *(int *)(unaff_EBP + -0x68))) ||
          (piVar3 = FUN_5000ed3f(*(int **)(unaff_EBP + 0x14)),
          *(int *)(*(int *)(unaff_EBP + 8) + 0x1c) < (int)piVar3)))))) {
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    pvVar7 = (void *)FUN_5000c87a((void *)(unaff_EBP + 0x20));
    iVar5 = *(int *)(unaff_EBP + -0x6c);
    FUN_50004c13(pvVar7,2,0,iVar5,*(int *)(unaff_EBP + -0x68),0,0);
    *(undefined4 *)(unaff_EBP + 0x2c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar16 = FUN_50005ffb((void *)(unaff_EBP + 0x2c));
    uVar8 = *(undefined4 *)(unaff_EBP + -0x68);
    *(int *)(iVar16 + 0x28) = iVar5;
    *(undefined4 *)(iVar16 + 0x2c) = uVar8;
    *(int *)(unaff_EBP + 0x30) = iVar16;
    if (*(int *)(unaff_EBP + 0x2c) == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + 0x2c);
    iVar5 = (**(code **)(*piVar3 + 0x30))(piVar3,0,0,*(undefined4 *)(unaff_EBP + 0x20));
    if (iVar5 < 0) {
      FUN_50012ca5(iVar5,piVar3,&DAT_50018368);
    }
    Ordinal_8(unaff_EBP + -0x44);
    iVar5 = FUN_50006336((short *)(unaff_EBP + -0x44),(short *)&DAT_50086448);
    if (iVar5 < 0) {
      FUN_50012c97(iVar5);
    }
    piVar3 = *(int **)(unaff_EBP + 0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar3 == (int *)0x0) {
      FUN_50012c97(0x80004003);
      piVar3 = *(int **)(unaff_EBP + 0x2c);
    }
    iVar5 = *piVar3;
    *(int **)(unaff_EBP + 0x1c) = piVar3;
    iVar5 = (**(code **)(iVar5 + 0x84))
                      (piVar3,0,0,*(undefined4 *)(unaff_EBP + 8),0xffffffff,0,0,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar5 < 0) {
      FUN_50012ca5(iVar5,*(int **)(unaff_EBP + 0x1c),&DAT_50018368);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_5000630c((short *)(unaff_EBP + -0x44));
    if (iVar5 < 0) {
      FUN_50012c97(iVar5);
    }
    Ordinal_8(unaff_EBP + -0x44);
    iVar5 = FUN_50006336((short *)(unaff_EBP + -0x44),(short *)(unaff_EBP + 0x34));
    if (iVar5 < 0) {
      FUN_50012c97(iVar5);
    }
    iVar5 = *(int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iVar5 = -iVar5;
    }
    *(int *)(unaff_EBP + 0x1c) = iVar5;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      iVar5 = *(int *)(unaff_EBP + -0x6c);
    }
    else {
      iVar5 = -*(int *)(unaff_EBP + -0x6c);
    }
    iVar5 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x84))
                      (*(int **)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + 0x30),
                       *(undefined4 *)(unaff_EBP + 0x18),iVar14,*(undefined4 *)(unaff_EBP + -0xd4),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),iVar5,
                       *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar5 < 0) {
      FUN_50012ca5(iVar5,*(int **)(unaff_EBP + 8),&DAT_50018368);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_5000630c((short *)(unaff_EBP + -0x44));
    if (iVar5 < 0) {
      FUN_50012c97(iVar5);
    }
    piVar3 = *(int **)(unaff_EBP + 0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    piVar3 = *(int **)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    FUN_5000e2a8();
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  if ((*(short *)(unaff_EBP + 0x34) != 0) && (*(short *)(unaff_EBP + 0x34) != 10)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    Ordinal_8(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_5000cfbb((ushort *)(unaff_EBP + -0x44),(ushort *)(unaff_EBP + 0x34),0,0xd);
    if (iVar5 == 0) {
      uVar8 = FUN_5000eb69();
      *(undefined4 *)(unaff_EBP + -0x70) = uVar8;
      iVar5 = FUN_5000e9c7((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x70));
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        FUN_50012c97(iVar5);
      }
      if (*(int *)(unaff_EBP + -0x14) != 0) goto LAB_5000da67;
LAB_5000da6c:
      FUN_50012c97(0x80004003);
    }
    else {
LAB_5000da67:
      if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_5000da6c;
    }
    FUN_5000ec6b(*(int **)(unaff_EBP + -0x14));
    FUN_50012e10();
    *(undefined1 **)(unaff_EBP + -0x84) = &stack0xfffffeec;
    FUN_5000e31f();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar5 = FUN_5000630c((short *)(unaff_EBP + -0x44));
    if (iVar5 < 0) {
      FUN_50012c97(iVar5);
    }
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  iVar5 = *(int *)(unaff_EBP + 8);
  iVar14 = *(int *)(iVar5 + 0x30);
  uVar8 = *(undefined4 *)(iVar5 + 0x34);
  *(int *)(unaff_EBP + -0xa4) = iVar14;
  *(undefined4 *)(unaff_EBP + -0x98) = uVar8;
  piVar3 = FUN_5000ecca(*(int **)(unaff_EBP + 0x14));
  *(int **)(unaff_EBP + -0xd4) = piVar3;
  piVar4 = FUN_5000ecf1(*(int **)(unaff_EBP + 0x14));
  *(int **)(unaff_EBP + -0x14) = piVar4;
  if ((((iVar14 == 0) || (*(int *)(unaff_EBP + -0x98) == 0)) || (piVar3 == (int *)0x0)) ||
     (piVar4 == (int *)0x0)) {
    FUN_5000e2a8();
    return;
  }
  if (*(int *)(unaff_EBP + 0x14) == iVar5) {
    *(uint *)(unaff_EBP + -0x90) = (uint)(*(int *)(unaff_EBP + 0x24) < *(int *)(unaff_EBP + 0xc));
    *(uint *)(unaff_EBP + -0x9c) = (uint)(*(int *)(unaff_EBP + 0x28) < *(int *)(unaff_EBP + 0x10));
    if (*(int *)(unaff_EBP + -0x90) == 0) goto LAB_5000db33;
    *(int *)(unaff_EBP + -0xd0) = -(int)piVar3;
    iVar14 = ((*(int *)(unaff_EBP + -0x28) + -1) / (int)piVar3) * (int)piVar3;
    *(int *)(unaff_EBP + -0xb8) = iVar14;
    iVar5 = *(int *)(unaff_EBP + -0x30) / (int)piVar3 + -1;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
LAB_5000db33:
    *(int **)(unaff_EBP + -0xd0) = piVar3;
    iVar14 = (*(int *)(unaff_EBP + -0x30) / (int)piVar3) * (int)piVar3;
    *(int *)(unaff_EBP + -0xb8) = iVar14;
    iVar5 = (*(int *)(unaff_EBP + -0x28) + -1) / (int)piVar3 + 1;
  }
  iVar5 = iVar5 * (int)piVar3;
  *(int *)(unaff_EBP + -0xbc) = iVar5;
  if (*(int *)(unaff_EBP + -0x9c) == 0) {
    *(int **)(unaff_EBP + -0x70) = piVar4;
    iVar6 = (*(int *)(unaff_EBP + -0x2c) / (int)piVar4) * *(int *)(unaff_EBP + -0x14);
    iVar16 = (*(int *)(unaff_EBP + -0x24) + -1) / *(int *)(unaff_EBP + -0x14) + 1;
  }
  else {
    *(int *)(unaff_EBP + -0x70) = -(int)piVar4;
    iVar6 = ((*(int *)(unaff_EBP + -0x24) + -1) / (int)piVar4) * *(int *)(unaff_EBP + -0x14);
    iVar16 = *(int *)(unaff_EBP + -0x2c) / *(int *)(unaff_EBP + -0x14) + -1;
  }
  iVar16 = iVar16 * *(int *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -200) = iVar16;
  *(int *)(unaff_EBP + -0x7c) = iVar6;
  while (*(int *)(unaff_EBP + -0x7c) != iVar16) {
    *(int *)(unaff_EBP + -0xa0) = iVar14;
    iVar6 = iVar14;
    while (iVar14 != iVar5) {
      iVar5 = *(int *)(unaff_EBP + -0x7c);
      *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0xd4) + iVar14;
      *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x14) + iVar5;
      *(int *)(unaff_EBP + -0x44) = iVar14;
      *(int *)(unaff_EBP + -0x40) = iVar5;
      iVar16 = (*DAT_50081cf8)(unaff_EBP + -0x44,unaff_EBP + -0x44,unaff_EBP + -0x30);
      if (iVar16 != 0) {
        FUN_5000ec92(*(void **)(unaff_EBP + 0x14),(undefined4 *)(unaff_EBP + -0x18),iVar14,iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + -0x18) == (int *)0x0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          piVar3 = FUN_5000d34b(*(int **)(unaff_EBP + -0x18));
          *(int **)(unaff_EBP + -0x88) = piVar3;
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_50012c97(0x80004003);
          }
          piVar3 = FUN_5000d372(*(int **)(unaff_EBP + -0x18));
          *(int **)(unaff_EBP + -0x78) = piVar3;
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_50012c97(0x80004003);
          }
          pvVar7 = FUN_5000d3e7(*(void **)(unaff_EBP + -0x18),(void *)(unaff_EBP + -0x104),
                                unaff_EBP + -0x94);
          iVar5 = *(int *)((int)pvVar7 + 8);
          *(int *)(unaff_EBP + -0xac) = iVar5;
          iVar14 = FUN_5000630c((short *)(unaff_EBP + -0x104));
          if (iVar14 < 0) {
            FUN_50012c97(iVar14);
          }
          if (iVar5 == 0) {
            piVar3 = *(int **)(unaff_EBP + -0x18);
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
            iVar5 = *(int *)(unaff_EBP + -0x44);
            bVar11 = (byte)piVar3;
            iVar16 = 1 << (bVar11 & 0x1f);
            iVar14 = *(int *)(unaff_EBP + -0x40);
            *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) >> (bVar11 & 0x1f);
            iVar6 = iVar5 >> (bVar11 & 0x1f);
            *(int *)(unaff_EBP + -0x38) =
                 ((iVar16 - iVar14) + -1 + *(int *)(unaff_EBP + -0x38) >> (bVar11 & 0x1f)) +
                 *(int *)(unaff_EBP + -0x40);
            *(int *)(unaff_EBP + -0x44) = iVar6;
            *(int *)(unaff_EBP + -0x3c) =
                 ((iVar16 - iVar5) + -1 + *(int *)(unaff_EBP + -0x3c) >> (bVar11 & 0x1f)) + iVar6;
            *(int *)(unaff_EBP + -0xac) =
                 *(int *)(unaff_EBP + -0x94) * *(int *)(unaff_EBP + -0x40) +
                 *(int *)(unaff_EBP + -0xac) + (iVar6 << (*(byte *)(unaff_EBP + -0x88) & 0x1f));
            if (*(int *)(unaff_EBP + -0x90) == 0) {
              if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_5000de07;
LAB_5000de4d:
              iVar5 = *(int *)(unaff_EBP + -0xa4);
              *(int *)(unaff_EBP + -0xb0) = -iVar5;
              iVar16 = ((*(int *)(unaff_EBP + -0x4c) + -1) / iVar5) * iVar5;
              *(int *)(unaff_EBP + -0xc0) = iVar16;
              iVar14 = *(int *)(unaff_EBP + -0x54) / iVar5 + -1;
            }
            else {
              if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_5000de4d;
LAB_5000de07:
              iVar5 = *(int *)(unaff_EBP + -0xa4);
              *(int *)(unaff_EBP + -0xb0) = iVar5;
              iVar16 = (*(int *)(unaff_EBP + -0x54) / iVar5) * iVar5;
              *(int *)(unaff_EBP + -0xc0) = iVar16;
              iVar14 = (*(int *)(unaff_EBP + -0x4c) + -1) / iVar5 + 1;
            }
            iVar14 = iVar14 * iVar5;
            *(int *)(unaff_EBP + -0xb4) = iVar14;
            if (*(int *)(unaff_EBP + -0x9c) == 0) {
              if (*(int *)(unaff_EBP + -0x20) == 0) goto LAB_5000dea4;
LAB_5000de7f:
              iVar5 = *(int *)(unaff_EBP + -0x98);
              *(int *)(unaff_EBP + -0xcc) = -iVar5;
              iVar12 = ((*(int *)(unaff_EBP + -0x48) + -1) / iVar5) * iVar5;
              iVar6 = *(int *)(unaff_EBP + -0x50) / iVar5 + -1;
            }
            else {
              if (*(int *)(unaff_EBP + -0x20) == 0) goto LAB_5000de7f;
LAB_5000dea4:
              iVar5 = *(int *)(unaff_EBP + -0x98);
              *(int *)(unaff_EBP + -0xcc) = iVar5;
              iVar12 = (*(int *)(unaff_EBP + -0x50) / iVar5) * iVar5;
              iVar6 = (*(int *)(unaff_EBP + -0x48) + -1) / iVar5 + 1;
            }
            iVar6 = iVar6 * iVar5;
            *(int *)(unaff_EBP + -0xc4) = iVar6;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            for (; *(int *)(unaff_EBP + -0x8c) = iVar12, iVar12 != iVar6;
                iVar12 = iVar12 + *(int *)(unaff_EBP + -0xcc)) {
              *(int *)(unaff_EBP + -0x74) = iVar16;
              iVar9 = iVar16;
              while (iVar16 != iVar14) {
                *(int *)(unaff_EBP + -100) = iVar16;
                *(int *)(unaff_EBP + -0x60) = iVar12;
                *(int *)(unaff_EBP + -0x5c) = iVar16 + *(int *)(unaff_EBP + -0xa4);
                *(int *)(unaff_EBP + -0x58) = iVar12 + iVar5;
                iVar5 = (*DAT_50081cf8)(unaff_EBP + -100,unaff_EBP + -100,unaff_EBP + -0x54);
                if (iVar5 != 0) {
                  bVar11 = (byte)*(undefined4 *)(unaff_EBP + -0x78);
                  if (*(int *)(unaff_EBP + -0x1c) == 0) {
                    iVar5 = *(int *)(unaff_EBP + -100) - *(int *)(unaff_EBP + -0x54);
                  }
                  else {
                    iVar5 = *(int *)(unaff_EBP + -0x4c) - *(int *)(unaff_EBP + -0x5c);
                  }
                  iVar14 = 1 << (bVar11 & 0x1f);
                  *(int *)(unaff_EBP + -0xe0) =
                       (iVar5 * *(int *)(unaff_EBP + 0x2c)) / *(int *)(unaff_EBP + 0x1c) + -1 +
                       iVar14 >> (bVar11 & 0x1f);
                  if (*(int *)(unaff_EBP + -0x20) == 0) {
                    iVar5 = *(int *)(unaff_EBP + -0x60) - *(int *)(unaff_EBP + -0x50);
                  }
                  else {
                    iVar5 = *(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + -0x58);
                  }
                  iVar16 = *(int *)(unaff_EBP + 0x30);
                  iVar6 = *(int *)(unaff_EBP + 0x20);
                  uVar8 = *(undefined4 *)(unaff_EBP + -0x78);
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
                    piVar3 = FUN_5000d372(*(int **)(unaff_EBP + -0x34));
                    if (*(int *)(unaff_EBP + -0x34) == 0) {
                      FUN_50012c97(0x80004003);
                    }
                    piVar4 = FUN_5000d34b(*(int **)(unaff_EBP + -0x34));
                    *(int **)(unaff_EBP + -0x80) = piVar4;
                    if (*(int *)(unaff_EBP + -0x34) == 0) {
                      FUN_50012c97(0x80004003);
                    }
                    pvVar7 = FUN_5000d3e7(*(void **)(unaff_EBP + -0x34),(void *)(unaff_EBP + -0x114)
                                          ,unaff_EBP + -0xa8);
                    iVar12 = *(int *)((int)pvVar7 + 8);
                    *(int *)(unaff_EBP + -0x68) = iVar12;
                    iVar9 = FUN_5000630c((short *)(unaff_EBP + -0x114));
                    if (iVar9 < 0) {
                      FUN_50012c97(iVar9);
                    }
                    if (iVar12 != 0) {
                      iVar12 = *(int *)(unaff_EBP + -100);
                      bVar11 = (byte)piVar3;
                      iVar10 = 1 << (bVar11 & 0x1f);
                      iVar9 = *(int *)(unaff_EBP + -0x60);
                      *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x60) >> (bVar11 & 0x1f);
                      iVar2 = DAT_50082010;
                      iVar13 = iVar12 >> (bVar11 & 0x1f);
                      *(int *)(unaff_EBP + -0x58) =
                           ((iVar10 - iVar9) + -1 + *(int *)(unaff_EBP + -0x58) >> (bVar11 & 0x1f))
                           + *(int *)(unaff_EBP + -0x60);
                      *(int *)(unaff_EBP + -100) = iVar13;
                      *(int *)(unaff_EBP + -0x5c) =
                           ((iVar10 - iVar12) + -1 + *(int *)(unaff_EBP + -0x5c) >> (bVar11 & 0x1f))
                           + iVar13;
                      puVar1 = (uint *)(*(int *)(unaff_EBP + -0xa8) * *(int *)(unaff_EBP + -0x60) +
                                        *(int *)(unaff_EBP + -0x68) +
                                       (iVar13 << (*(byte *)(unaff_EBP + -0x80) & 0x1f)));
                      puVar15 = (uint *)(((iVar5 * iVar16) / iVar6 + -1 + iVar14 >>
                                         ((byte)uVar8 & 0x1f)) * *(int *)(unaff_EBP + -0x94) +
                                        *(int *)(unaff_EBP + -0xac) +
                                        (*(int *)(unaff_EBP + -0xe0) <<
                                        (*(byte *)(unaff_EBP + -0x88) & 0x1f)));
                      iVar5 = FUN_5000e2bf(iVar2,(int)piVar3,*(int *)(unaff_EBP + -0x80));
                      iVar14 = (int)piVar3 - *(int *)(unaff_EBP + -0x78);
                      if (((*(int *)(unaff_EBP + 0x2c) == *(int *)(unaff_EBP + 0x1c)) &&
                          (*(int *)(unaff_EBP + 0x30) == *(int *)(unaff_EBP + 0x20))) &&
                         ((iVar16 = 0, *(int *)(unaff_EBP + -0x84) == 0 && (-1 < iVar14)))) {
                        if ((*(int *)(unaff_EBP + -0x90) != 0) &&
                           (*(int *)(unaff_EBP + 0x28) == *(int *)(unaff_EBP + 0x10))) {
                          iVar16 = 1;
                        }
                        FUN_50007537(*(int *)(unaff_EBP + -0x5c) - *(int *)(unaff_EBP + -100),
                                     *(int *)(unaff_EBP + -0x58) - *(int *)(unaff_EBP + -0x60),
                                     (byte)iVar14,*(undefined **)(unaff_EBP + -0x80),(uint)puVar1,
                                     *(int *)(unaff_EBP + -0xa8),*(uint *)(unaff_EBP + -0x88),
                                     (uint)puVar15,*(int *)(unaff_EBP + -0x94),iVar16,
                                     *(int *)(unaff_EBP + 0x18),iVar5,*(int *)(unaff_EBP + -0x1c),
                                     *(int *)(unaff_EBP + -0x20));
                      }
                      else {
                        FUN_50008f93(*(int *)(unaff_EBP + -0x5c) - *(int *)(unaff_EBP + -100),
                                     *(int *)(unaff_EBP + -0x58) - *(int *)(unaff_EBP + -0x60),
                                     iVar14,*(int *)(unaff_EBP + 0x2c),*(int *)(unaff_EBP + 0x1c),
                                     *(int *)(unaff_EBP + 0x30),*(int *)(unaff_EBP + 0x20),
                                     *(int *)(unaff_EBP + -0x80),puVar1,*(int *)(unaff_EBP + -0xa8),
                                     *(int *)(unaff_EBP + -0x88),puVar15,*(int *)(unaff_EBP + -0x94)
                                     ,*(uint *)(unaff_EBP + 0x18),iVar5,*(int *)(unaff_EBP + -0x1c),
                                     *(int *)(unaff_EBP + -0x20),*(ushort **)(unaff_EBP + -0x84));
                      }
                      if (*(int *)(unaff_EBP + -0x34) == 0) {
                        FUN_50012c97(0x80004003);
                      }
                      piVar3 = *(int **)(unaff_EBP + -0x34);
                      iVar5 = (**(code **)(*piVar3 + 0x20))(piVar3,unaff_EBP + -0xf4);
                      if (iVar5 < 0) {
                        FUN_50012ca5(iVar5,piVar3,&DAT_500183f8);
                      }
                    }
                    piVar3 = *(int **)(unaff_EBP + -0x34);
                    *(undefined1 *)(unaff_EBP + -4) = 8;
                    if (piVar3 != (int *)0x0) {
                      (**(code **)(*piVar3 + 8))(piVar3);
                    }
                  }
                }
                *(int *)(unaff_EBP + -0x74) =
                     *(int *)(unaff_EBP + -0x74) + *(int *)(unaff_EBP + -0xb0);
                iVar5 = *(int *)(unaff_EBP + -0x98);
                iVar9 = *(int *)(unaff_EBP + -0xc0);
                iVar14 = *(int *)(unaff_EBP + -0xb4);
                iVar6 = *(int *)(unaff_EBP + -0xc4);
                iVar12 = *(int *)(unaff_EBP + -0x8c);
                iVar16 = *(int *)(unaff_EBP + -0x74);
              }
              iVar16 = iVar9;
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              FUN_50012c97(0x80004003);
            }
            piVar3 = *(int **)(unaff_EBP + -0x18);
            iVar5 = (**(code **)(*piVar3 + 0x20))(piVar3,0);
            if (iVar5 < 0) {
              FUN_50012ca5(iVar5,piVar3,&DAT_500183f8);
            }
            piVar3 = *(int **)(unaff_EBP + -0x18);
            *(undefined4 *)(unaff_EBP + -4) = 0;
          }
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
        }
      }
      iVar14 = *(int *)(unaff_EBP + -0xa0) + *(int *)(unaff_EBP + -0xd0);
      iVar6 = *(int *)(unaff_EBP + -0xb8);
      iVar5 = *(int *)(unaff_EBP + -0xbc);
      iVar16 = *(int *)(unaff_EBP + -200);
      *(int *)(unaff_EBP + -0xa0) = iVar14;
    }
    *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0x7c) + *(int *)(unaff_EBP + -0x70);
    iVar14 = iVar6;
  }
LAB_5000e285:
  FUN_5000e2a8();
  return;
}



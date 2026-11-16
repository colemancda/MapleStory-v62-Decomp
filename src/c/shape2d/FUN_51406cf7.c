/* FUN_51406cf7 - 0x51406cf7 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_51406cf7(void)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int extraout_ECX;
  int iVar10;
  int unaff_EBP;
  double dVar11;
  
  FUN_5140ad20();
  iVar6 = *(int *)(unaff_EBP + 8);
  *(undefined8 *)(unaff_EBP + -0x3c) = 0;
  iVar9 = *(int *)(extraout_ECX + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x54) = 1;
  *(int *)(extraout_ECX + 0x58) = iVar6;
  piVar8 = *(int **)(extraout_ECX + 0x3c);
  *(int **)(unaff_EBP + -0x10) = piVar8;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar9 != 0) {
    FUN_5140a0bb((void *)(unaff_EBP + -0x4c),iVar6,3);
    iVar6 = *(int *)(extraout_ECX + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar6 == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar8 = *(int **)(extraout_ECX + 0x1c);
    iVar6 = *piVar8;
    *(int **)(unaff_EBP + -0x18) = piVar8;
    iVar6 = (**(code **)(iVar6 + 0x8c))
                      (piVar8,unaff_EBP + -0x34,unaff_EBP + -0x30,0,0,0,0,unaff_EBP + -0x3c,0,
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44));
    if (iVar6 < 0) {
      FUN_5140ac55(iVar6,*(int **)(unaff_EBP + -0x18),&DAT_514101c0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_51405818((short *)(unaff_EBP + -0x4c));
    if (iVar6 < 0) {
      FUN_5140ac47(iVar6);
    }
    if (*(int *)(extraout_ECX + 0x1c) == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar7 = FUN_5140abd3(*(int **)(extraout_ECX + 0x1c));
    piVar8 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x14) = piVar7;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(*(int *)(unaff_EBP + 0xc) != 0) & unaff_EBP - 0x1cU;
  piVar7 = piVar8;
  while ((piVar7 != (int *)0x0 && (sVar5 = (**(code **)(*(int *)*piVar8 + 4))(), sVar5 == 0))) {
    iVar6 = *(int *)((-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + -4)) + 4);
    iVar9 = *(int *)*piVar8;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
    iVar6 = (**(code **)(iVar9 + 8))(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + 8));
    if ((iVar6 == 1) && (*(int *)(unaff_EBP + 0xc) != 0)) {
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)();
      }
      FUN_5140455a((void *)(extraout_ECX + 0x30),(int)piVar8);
      iVar6 = *(int *)(unaff_EBP + -0x1c);
      if (iVar6 != 0) {
        if (*(int **)(extraout_ECX + 0x1c) != (int *)0x0) {
          (**(code **)(**(int **)(extraout_ECX + 0x1c) + 8))();
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        iVar9 = *(int *)(unaff_EBP + 8);
        *(int *)(extraout_ECX + 0x1c) = iVar6;
        FUN_5140a0bb((void *)(unaff_EBP + -100),iVar9,3);
        iVar6 = *(int *)(extraout_ECX + 0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar6 == 0) {
          FUN_5140ac47(0x80004003);
        }
        piVar8 = *(int **)(extraout_ECX + 0x1c);
        iVar6 = *piVar8;
        *(int **)(unaff_EBP + -0x14) = piVar8;
        iVar6 = (**(code **)(iVar6 + 0x8c))
                          (piVar8,unaff_EBP + -0x34,unaff_EBP + -0x30,0,0,0,0,unaff_EBP + -0x3c,0,
                           *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                           *(undefined4 *)(unaff_EBP + -0x5c));
        if (iVar6 < 0) {
          FUN_5140ac55(iVar6,*(int **)(unaff_EBP + -0x14),&DAT_514101c0);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar6 = FUN_51405818((short *)(unaff_EBP + -100));
        if (iVar6 < 0) {
          FUN_5140ac47(iVar6);
        }
        if (*(int *)(extraout_ECX + 0x1c) == 0) {
          FUN_5140ac47(0x80004003);
        }
        piVar8 = FUN_5140abd3(*(int **)(extraout_ECX + 0x1c));
        *(int **)(unaff_EBP + -0x14) = piVar8;
      }
    }
    piVar7 = *(int **)(unaff_EBP + -0x10);
    piVar8 = *(int **)(unaff_EBP + -0x10);
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + *(int *)(extraout_ECX + 0x50);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x24);
  piVar7 = piVar8;
  while ((piVar7 != (int *)0x0 && (sVar5 = (**(code **)(*(int *)*piVar8 + 4))(), sVar5 == 1))) {
    iVar6 = *(int *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x20);
    iVar9 = *(int *)((-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + -4)) + 4);
    iVar10 = *(int *)*piVar8;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar9 != 0) & iVar9 + 0x10U;
    iVar9 = (**(code **)(iVar10 + 8))(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 8));
    if ((iVar9 == 1) && (*(int *)(unaff_EBP + 0xc) != 0)) {
      *(int *)(extraout_ECX + 0x20) =
           *(int *)(extraout_ECX + 0x20) + (*(int *)(unaff_EBP + -0x24) - iVar6);
      *(int *)(extraout_ECX + 0x24) =
           *(int *)(extraout_ECX + 0x24) +
           (*(int *)(unaff_EBP + -0x20) - *(int *)(unaff_EBP + -0x40));
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)();
      }
      FUN_5140455a((void *)(extraout_ECX + 0x30),(int)piVar8);
    }
    piVar7 = *(int **)(unaff_EBP + -0x10);
    piVar8 = *(int **)(unaff_EBP + -0x10);
  }
  if (*(double *)(unaff_EBP + -0x3c) == _DAT_5140d8c8) {
    iVar6 = *(int *)(unaff_EBP + -0x24);
    iVar9 = *(int *)(unaff_EBP + -0x20);
  }
  else {
    dVar11 = cos(_DAT_5140d8b8 * _DAT_5140d8e0 * *(double *)(unaff_EBP + -0x3c));
    *(double *)(unaff_EBP + -0x44) = dVar11;
    sin(_DAT_5140d8b8 * _DAT_5140d8e0 * *(double *)(unaff_EBP + -0x3c));
    iVar6 = ftol();
    iVar9 = ftol();
  }
  iVar10 = *(int *)(extraout_ECX + 0x28) + iVar6 + *(int *)(unaff_EBP + -0x34);
  iVar6 = iVar9 + *(int *)(unaff_EBP + -0x30) + *(int *)(extraout_ECX + 0x2c);
  *(int *)(unaff_EBP + -0x2c) = iVar10;
  *(int *)(unaff_EBP + -0x28) = iVar6;
  *(int *)(unaff_EBP + -0x40) = iVar6;
  if (piVar8 != (int *)0x0) {
    while (sVar5 = (**(code **)(*(int *)*piVar8 + 4))(), sVar5 == 2) {
      iVar6 = *(int *)((-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + -4)) + 4);
      iVar9 = *(int *)*piVar8;
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
      iVar6 = (**(code **)(iVar9 + 8))(unaff_EBP + -0x2c,*(undefined4 *)(unaff_EBP + 8));
      if ((iVar6 == 1) && (*(int *)(unaff_EBP + 0xc) != 0)) {
        *(int *)(extraout_ECX + 0x28) =
             *(int *)(extraout_ECX + 0x28) + (*(int *)(unaff_EBP + -0x2c) - iVar10);
        *(int *)(extraout_ECX + 0x2c) =
             *(int *)(extraout_ECX + 0x2c) +
             (*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x40));
        if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar8)();
        }
        FUN_5140455a((void *)(extraout_ECX + 0x30),(int)piVar8);
      }
      iVar10 = *(int *)(unaff_EBP + -0x2c);
      iVar6 = *(int *)(unaff_EBP + -0x28);
      *(int *)(unaff_EBP + -0x40) = iVar6;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piVar8 = *(int **)(unaff_EBP + -0x10);
        goto LAB_514070fe;
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
    }
    iVar6 = *(int *)(unaff_EBP + -0x28);
    iVar10 = *(int *)(unaff_EBP + -0x2c);
  }
LAB_514070fe:
  uVar1 = *(undefined8 *)(extraout_ECX + 0x48);
  *(undefined8 *)(unaff_EBP + -0x54) = uVar1;
  *(undefined8 *)(unaff_EBP + -0x44) = uVar1;
  if (piVar8 != (int *)0x0) {
    while (sVar5 = (**(code **)(*(int *)*piVar8 + 4))(), sVar5 == 3) {
      iVar6 = *(int *)((-(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + -4)) + 4);
      iVar9 = *(int *)*piVar8;
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
      iVar6 = (**(code **)(iVar9 + 8))(unaff_EBP + -0x54,*(undefined4 *)(unaff_EBP + 8));
      if ((iVar6 == 1) && (*(int *)(unaff_EBP + 0xc) != 0)) {
        *(double *)(extraout_ECX + 0x48) =
             (*(double *)(unaff_EBP + -0x54) - *(double *)(unaff_EBP + -0x44)) +
             *(double *)(extraout_ECX + 0x48);
        if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar8)();
        }
        FUN_5140455a((void *)(extraout_ECX + 0x30),(int)piVar8);
      }
      *(undefined8 *)(unaff_EBP + -0x44) = *(undefined8 *)(unaff_EBP + -0x54);
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      piVar8 = *(int **)(unaff_EBP + -0x10);
    }
    iVar6 = *(int *)(unaff_EBP + -0x28);
    iVar10 = *(int *)(unaff_EBP + -0x2c);
  }
  uVar3 = *(undefined4 *)(unaff_EBP + -0x34);
  *(undefined8 *)(extraout_ECX + 0x78) = *(undefined8 *)(unaff_EBP + -0x44);
  *(undefined4 *)(extraout_ECX + 0x60) = uVar3;
  dVar11 = *(double *)(unaff_EBP + -0x44);
  dVar2 = *(double *)(unaff_EBP + -0x3c);
  *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + -0x30);
  uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int *)(extraout_ECX + 0x70) = iVar10;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(double *)(extraout_ECX + 0x80) = dVar11 + dVar2;
  uVar1 = *(undefined8 *)(unaff_EBP + -0x3c);
  *(undefined4 *)(extraout_ECX + 0x68) = uVar3;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined8 *)(extraout_ECX + 0x88) = uVar1;
  *(int *)(extraout_ECX + 0x74) = iVar6;
  uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 0x6c) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x5c) = uVar4;
  return;
}



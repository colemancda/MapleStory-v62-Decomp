/* FUN_5140778c - 0x5140778c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140778c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_5140ad20();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(short *)(unaff_EBP + 0xc) != 0) && (*(short *)(unaff_EBP + 0xc) != 10)) {
    Ordinal_8(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_51405a4b((void *)(unaff_EBP + -0x34),0xd,(ushort *)(unaff_EBP + 0xc));
    iVar3 = FUN_514054a8((void *)(unaff_EBP + -0x18),(int *)(unaff_EBP + -0x2c));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5140ac47(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      iVar3 = FUN_51405818((short *)(unaff_EBP + -0x34));
      if (iVar3 < 0) {
        FUN_5140ac47(iVar3);
      }
      goto LAB_514078d0;
    }
    iVar3 = FUN_51405818((short *)(unaff_EBP + -0x34));
    if (iVar3 < 0) {
      FUN_5140ac47(iVar3);
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(int **)(unaff_EBP + -0x14) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  while (*(int *)(unaff_EBP + -0x14) != 0) {
    iVar3 = FUN_5140a660((void *)(unaff_EBP + -0x14),puVar1);
    if (iVar3 == 0) break;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_5140ac47(0x80004003);
    }
    FUN_5140ab47(*(void **)(unaff_EBP + -0x14),(void *)(unaff_EBP + -0x34));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar4 = FUN_51405b5b();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    iVar3 = FUN_514054a8((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + 8));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5140ac47(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_51405818((short *)(unaff_EBP + -0x34));
    if (iVar3 < 0) {
      FUN_5140ac47(iVar3);
    }
  }
  iVar3 = FUN_5140a660((void *)(unaff_EBP + -0x14),puVar1);
  if (iVar3 != 0) {
    FUN_514072cf();
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    iVar3 = unaff_EBP + -0x1c;
    iVar6 = unaff_EBP + -0x20;
    uVar5 = 0;
    uVar4 = 0;
    FUN_51406adc();
    FUN_51406c64();
    FUN_51407981();
    FUN_51407a34();
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2,uVar4,uVar5,iVar6,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11);
    }
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    FUN_51407970();
    return;
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
LAB_514078d0:
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_51407970();
  return;
}



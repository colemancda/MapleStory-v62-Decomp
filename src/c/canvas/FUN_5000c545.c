/* FUN_5000c545 - 0x5000c545 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000c545(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int unaff_EBP;
  
  FUN_50012d80();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_5000c6a2();
    return;
  }
  iVar10 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5000b54d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(void **)(unaff_EBP + 8) == (void *)0x0) {
    *puVar1 = 0;
    goto LAB_5000c689;
  }
  uVar9 = *(uint *)(unaff_EBP + 0xc);
  uVar2 = *(uint *)(iVar10 + 0x30);
  uVar3 = *(uint *)(unaff_EBP + 0x10);
  uVar4 = *(uint *)(iVar10 + 0x34);
  pvVar5 = FUN_5000d3e7(*(void **)(unaff_EBP + 8),(void *)(unaff_EBP + -0x28),unaff_EBP + -0x14);
  iVar10 = *(int *)((int)pvVar5 + 8);
  iVar6 = FUN_5000630c((short *)(unaff_EBP + -0x28));
  if (iVar6 < 0) {
    FUN_50012c97(iVar6);
  }
  if (iVar10 == 0) {
    **(undefined4 **)(unaff_EBP + 0x14) = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar7 = FUN_5000d372(*(int **)(unaff_EBP + 8));
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar8 = FUN_5000d34b(*(int **)(unaff_EBP + 8));
    puVar11 = (uint *)(*(int *)(unaff_EBP + -0x14) * ((int)(uVar3 % uVar4) >> ((byte)piVar7 & 0x1f))
                       + iVar10 +
                      (((int)(uVar9 % uVar2) >> ((byte)piVar7 & 0x1f)) << ((byte)piVar8 & 0x1f)));
    if (piVar8 == (int *)0x1) {
      uVar9 = FUN_500073e6((uint)(ushort)*puVar11);
LAB_5000c648:
      **(uint **)(unaff_EBP + 0x14) = uVar9;
    }
    else {
      if (piVar8 == (int *)0x2) {
        uVar9 = *puVar11;
        goto LAB_5000c648;
      }
      if (piVar8 == (int *)0x201) {
        uVar9 = FUN_5000741d((uint)(ushort)*puVar11);
        goto LAB_5000c648;
      }
      **(undefined4 **)(unaff_EBP + 0x14) = 0;
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar7 = *(int **)(unaff_EBP + 8);
    iVar10 = (**(code **)(*piVar7 + 0x20))(piVar7,0);
    if (iVar10 < 0) {
      FUN_50012ca5(iVar10,piVar7,&DAT_500183f8);
    }
  }
  piVar7 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
LAB_5000c689:
  FUN_5000c6a2();
  return;
}



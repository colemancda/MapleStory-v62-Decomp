/* FUN_5040ac2d - 0x5040ac2d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040ac2d(void)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  bool bVar7;
  void *this;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int unaff_EBP;
  
  FUN_5042a430();
  piVar9 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd8;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_504079dd(piVar9,(undefined4 *)(unaff_EBP + 0xc),0,0);
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_504354d8,unaff_EBP + -0x18);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  bVar7 = FUN_50405008((void *)(unaff_EBP + 0xc),0);
  if ((!bVar7) && (*(int *)(unaff_EBP + -0x18) == 0)) {
    FUN_50404f4f((int *)(unaff_EBP + 0xc));
    FUN_5040ae94();
    return;
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x1c) = iVar3 + 0x98;
  FUN_50401895();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  FUN_5040c161(unaff_EBP + -0x28);
  piVar10 = *(int **)(unaff_EBP + -0x24);
  piVar4 = (int *)*piVar10;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar4 == piVar9) goto LAB_5040acdd;
  *piVar10 = (int)piVar9;
  FUN_5040c154(piVar10);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  do {
    piVar10 = *(int **)(unaff_EBP + -0x24);
LAB_5040acdd:
    *(int *)(iVar3 + 0xcc) = *(int *)(iVar3 + 0xcc) + 1;
    iVar5 = *(int *)(iVar3 + 0xcc);
    piVar10[2] = iVar5;
  } while (iVar5 == 0);
  this = (void *)FUN_5040c579((void *)(iVar3 + 0xb8));
  FUN_50404f7d(this,unaff_EBP + -0x28);
  sVar1 = *(short *)(unaff_EBP + 0x10);
  *(void **)(*(int *)(unaff_EBP + -0x24) + 4) = this;
  if (sVar1 == 3) {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x18);
  }
  else {
    uVar8 = 0xffffffff;
  }
  sVar1 = *(short *)(unaff_EBP + 0x20);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0xc) = uVar8;
  if (sVar1 == 3) {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x28);
  }
  else {
    uVar8 = 0xffffffff;
  }
  sVar1 = *(short *)(unaff_EBP + 0x30);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x10) = uVar8;
  if (sVar1 == 3) {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x38);
  }
  else {
    uVar8 = 0xffffffff;
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x14) = uVar8;
  *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x18) =
       ~-(uint)(*(short *)(unaff_EBP + 0x40) != 3) & *(uint *)(unaff_EBP + 0x48);
  *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x1c) =
       ~-(uint)(*(short *)(unaff_EBP + 0x50) != 3) & *(uint *)(unaff_EBP + 0x58);
  FUN_5040c421((void *)(iVar3 + 0xa0),(ulong *)(*(int *)(unaff_EBP + -0x24) + 8),unaff_EBP + -0x28);
  puVar6 = *(undefined2 **)(unaff_EBP + 0x60);
  if (puVar6 != (undefined2 *)0x0) {
    iVar5 = *(int *)(unaff_EBP + -0x24);
    *puVar6 = 6;
    uVar8 = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 6) = uVar8;
  }
  *(undefined4 **)(unaff_EBP + 0x60) = (undefined4 *)(iVar3 + 0x1c);
  FUN_50401895();
  piVar9 = *(int **)(iVar3 + 0xd4);
  piVar10 = *(int **)(*(int *)(iVar3 + 0xc4) + 4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar9 != piVar10) {
    if (piVar9 == (int *)0x0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
      piVar9 = (int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 6;
    }
    piVar9 = (int *)*piVar9;
    *(int **)(unaff_EBP + 0x1c) = piVar9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(undefined4 *)(unaff_EBP + -4) = 8;
    if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) &&
       (piVar10 = *(int **)(unaff_EBP + 8), piVar10 != (int *)0x0)) {
      (**(code **)(*piVar10 + 8))(piVar10);
    }
    FUN_50404f7d((void *)(iVar3 + 0xd0),*(int *)(iVar3 + 0xc4));
    FUN_5040b2aa();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
  }
  piVar9 = (int *)(iVar3 + 0x20);
  *piVar9 = *piVar9 + -1;
  if (*piVar9 == 0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_5040508d(unaff_EBP + -0x28);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + -0x1c);
  piVar9 = puVar2 + 1;
  *piVar9 = *piVar9 + -1;
  if (*piVar9 == 0) {
    *puVar2 = 0;
  }
  piVar9 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  piVar9 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  FUN_5040ae94();
  return;
}



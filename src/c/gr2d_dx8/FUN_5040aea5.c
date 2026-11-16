/* FUN_5040aea5 - 0x5040aea5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040aea5(void)

{
  void *this;
  uint uVar1;
  int *piVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_5042a430();
  this = *(void **)(unaff_EBP + 8);
  puVar3 = (undefined4 *)((int)this + 0x98);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = puVar3;
  *(undefined4 **)(unaff_EBP + -0x24) = puVar3;
  FUN_50401895();
  *(undefined4 *)(unaff_EBP + 8) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_5040a987(this,unaff_EBP + 0xc,(void *)(unaff_EBP + -0x34));
  if (uVar1 == 0xfffffffe) {
    FUN_504068bd((int)this + 0xb8);
    FUN_5040686c((int)this + 0xa0);
  }
  else {
    if (uVar1 != 0xffffffff) {
      if (uVar1 != 1) {
        FUN_5040b0ee();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          FUN_5040508d(unaff_EBP + -0x34);
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
        }
        piVar2 = (int *)((int)this + 0x9c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          *puVar3 = 0;
        }
        FUN_5040b0dd();
        return;
      }
      FUN_5040e395((void *)((int)this + 0xb8),*(int *)(*(int *)(unaff_EBP + -0x30) + 4));
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8);
      FUN_5040c50b((void *)((int)this + 0xa0),(ulong *)(unaff_EBP + 8));
      if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
        piVar2 = (int *)**(int **)(unaff_EBP + -0x30);
        **(int **)(unaff_EBP + 0x1c) = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
      }
      goto LAB_5040afea;
    }
    if (*(int *)((int)this + 0xc0) != 0) {
      if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
        piVar2 = (int *)**(int **)(*(int *)((int)this + 200) + 4);
        **(int **)(unaff_EBP + 0x1c) = (int)piVar2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
      }
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(*(int *)((int)this + 200) + 4) + 8);
      FUN_5040c50b((void *)((int)this + 0xa0),(ulong *)(unaff_EBP + 8));
      FUN_5040e395((void *)((int)this + 0xb8),*(int *)((int)this + 200));
      goto LAB_5040afea;
    }
  }
  if (*(undefined4 **)(unaff_EBP + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x1c) = 0;
  }
LAB_5040afea:
  puVar3 = (undefined4 *)((int)this + 0x1c);
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar3;
  *(undefined4 **)(unaff_EBP + -0x28) = puVar3;
  FUN_50401895();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_504068bd((int)this + 0xd8);
  if ((*(int *)((int)this + 0xc0) == 0) ||
     (*(int *)((int)this + 0xd4) != *(int *)(*(int *)((int)this + 0xc4) + 4))) {
    piVar2 = *(int **)((int)this + 0xd4);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(unaff_EBP + 0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      piVar2 = (int *)(unaff_EBP + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    piVar2 = (int *)*piVar2;
    *(int **)(unaff_EBP + -0x18) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) &&
       (piVar2 = *(int **)(unaff_EBP + 0x1c), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (*(int *)((int)this + 0xd4) != 0) {
      FUN_5040508d((int)this + 0xd0);
      *(undefined4 *)((int)this + 0xd4) = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x18);
    FUN_5040b2aa();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    puVar3 = *(undefined4 **)(unaff_EBP + -0x1c);
  }
  piVar2 = puVar3 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar3 = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    FUN_5040508d(unaff_EBP + -0x34);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + -0x20);
  piVar2 = puVar3 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar3 = 0;
  }
  FUN_5040b0dd();
  return;
}



/* FUN_5040ab48 - 0x5040ab48 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040ab48(void)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_5042a430();
  piVar1 = *(int **)(unaff_EBP + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  if (piVar1 == (int *)0x0) {
    FUN_5040ac1c();
    return;
  }
  this = *(void **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + 0x1c) = (int)this + 0x98;
  *(int *)(unaff_EBP + 8) = (int)this + 0x98;
  FUN_50401895();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar3 = FUN_5040a987(this,unaff_EBP + 0xc,(void *)(unaff_EBP + -0x1c));
  if (uVar3 == 0xffffffff) {
LAB_5040abbf:
    if (*(int *)((int)this + 0xc0) != 0) {
      if (uVar3 == 0xffffffff) {
        iVar5 = *(int *)((int)this + 200);
      }
      else {
        iVar5 = *(int *)((int)this + 0xc4);
      }
      piVar4 = (int *)**(undefined4 **)(iVar5 + 4);
      *piVar1 = (int)piVar4;
      if (piVar4 != (int *)0x0) goto LAB_5040abb7;
    }
  }
  else {
    if (uVar3 == 1) {
      piVar4 = (int *)**(int **)(unaff_EBP + -0x18);
      *piVar1 = (int)piVar4;
      if (piVar4 == (int *)0x0) goto LAB_5040abe7;
LAB_5040abb7:
      (**(code **)(*piVar4 + 4))(piVar4);
      goto LAB_5040abe7;
    }
    if (uVar3 == 2) goto LAB_5040abbf;
  }
  *piVar1 = 0;
LAB_5040abe7:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_5040508d(unaff_EBP + -0x1c);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 0x1c);
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar2 = 0;
  }
  FUN_5040ac1c();
  return;
}



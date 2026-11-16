/* FUN_5040b102 - 0x5040b102 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040b102(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_5040a9f1();
  iVar2 = *(int *)(unaff_EBP + 8);
  puVar1 = (undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  *(undefined4 **)(unaff_EBP + -0x20) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x24) = puVar1;
  FUN_50401895();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
LAB_5040b18c:
    iVar6 = *(int *)(unaff_EBP + -0x14);
    iVar3 = *(int *)(iVar2 + 0xc0);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    if ((iVar6 != 0) && (1 < iVar3)) {
      if (iVar6 < 1) {
        iVar6 = (iVar3 - (-1 - iVar6) % iVar3) + -1;
      }
      else {
        iVar6 = iVar6 % iVar3;
      }
      *(int *)(unaff_EBP + -0x14) = iVar6;
      if (iVar6 != 0) {
        uVar7 = FUN_5040c5b7((void *)(iVar2 + 0xb8),iVar6 - 1);
        goto LAB_5040b1d9;
      }
    }
    piVar8 = (int *)(iVar2 + 0x9c);
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      *puVar1 = 0;
    }
  }
  else {
    if (*(int *)(unaff_EBP + -0x18) == 2) goto LAB_5040b18c;
    iVar6 = FUN_5040c3cd((void *)(iVar2 + 0xa0),(ulong *)(unaff_EBP + -0x14),(void *)0x0);
    if (iVar6 == 0) {
      FUN_5040b0ee();
      piVar8 = (int *)(iVar2 + 0x9c);
      *piVar8 = *piVar8 + -1;
      if (*piVar8 == 0) {
        *puVar1 = 0;
        FUN_5040b299();
        return;
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    uVar7 = *(uint *)(*(int *)(iVar6 + 4) + 4);
LAB_5040b1d9:
    FUN_504068f7((void *)(iVar2 + 0xb8),iVar2 + 0xb8,0,uVar7,0);
    *(undefined4 **)(unaff_EBP + -0x28) = (undefined4 *)(iVar2 + 0x1c);
    FUN_50401895();
    piVar8 = *(int **)(iVar2 + 0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar8 == (int *)0x0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      piVar8 = (int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    piVar8 = (int *)*piVar8;
    *(int **)(unaff_EBP + -0x2c) = piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if (((*(byte *)(unaff_EBP + -0x1c) & 1) != 0) &&
       (piVar4 = *(int **)(unaff_EBP + 8), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    FUN_50404f7d((void *)(iVar2 + 0xd0),*(int *)(iVar2 + 0xc4));
    FUN_5040b2aa();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    piVar8 = (int *)(iVar2 + 0x20);
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
    piVar8 = puVar1 + 1;
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      *puVar1 = 0;
    }
  }
  FUN_5040b299();
  return;
}



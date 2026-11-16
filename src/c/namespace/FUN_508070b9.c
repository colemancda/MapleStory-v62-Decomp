/* FUN_508070b9 - 0x508070b9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508070b9(void)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 uVar6;
  uint uVar7;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc8;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    FUN_508072f8();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if ((*(short *)(unaff_EBP + 0x10) != 0) && (*(short *)(unaff_EBP + 0x10) != 10)) {
    if (*(short *)(unaff_EBP + 0x10) != 0x4003) {
      FUN_508072f8();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  FUN_50806ab4();
  Ordinal_8(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  uVar7 = -(uint)(*(int *)(unaff_EBP + -0x1c) != 0) & unaff_EBP + 8U;
  piVar5 = *(int **)(unaff_EBP + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar5 == (int *)0x0) {
    psVar2 = *(short **)(unaff_EBP + 0xc);
    if ((psVar2 != (short *)0x0) && (*psVar2 == 0x2f)) {
      psVar2 = psVar2 + 1;
      *(undefined4 *)(unaff_EBP + 8) = 1;
    }
    iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1,1,psVar2,uVar7,unaff_EBP + -0x38);
  }
  else {
    psVar2 = *(short **)(unaff_EBP + 0xc);
    if ((psVar2 == (short *)0x0) || (*psVar2 != 0x2f)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(int **)(unaff_EBP + -0x24) = piVar1 + 1;
      FUN_508012a1();
      piVar5 = (int *)piVar1[5];
      uVar6 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if ((piVar5 == (int *)0x0) || (iVar3 = *piVar5, iVar3 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar3 + -4) >> 1;
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) - uVar4;
      piVar5 = FUN_5080504c();
      *(int *)(unaff_EBP + 0xc) = *piVar5;
      FUN_50803e96((int *)(unaff_EBP + 0xc));
      FUN_50803e96((int *)(unaff_EBP + 0xc));
      FUN_508052b4((undefined4 *)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      FUN_508052b4((undefined4 *)(unaff_EBP + 0xc));
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + -0x20));
      }
      piVar5 = piVar1 + 2;
      *piVar5 = *piVar5 + -1;
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar3 == 0) {
        piVar1[1] = 0;
      }
      if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
        uVar6 = **(undefined4 **)(unaff_EBP + -0x14);
      }
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        FUN_5080dfed(0x80004003);
      }
      iVar3 = (**(code **)(**(int **)(unaff_EBP + 0x1c) + 0x24))
                        (*(int **)(unaff_EBP + 0x1c),1,uVar6,uVar7,unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + -0x14));
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + 8) = 1;
      iVar3 = (**(code **)(*piVar5 + 0x24))(piVar5,1,psVar2 + 1,uVar7,unaff_EBP + -0x38);
    }
  }
  if (-1 < iVar3) {
    iVar3 = FUN_50804e67();
    *(int *)(unaff_EBP + 0xc) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (((iVar3 != 0) &&
        (iVar3 = FUN_50805e21((void *)(unaff_EBP + -0x18),(int *)(unaff_EBP + 0xc)), iVar3 < 0)) &&
       (iVar3 != -0x7fffbffe)) {
      FUN_5080dfed(iVar3);
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      **(int **)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + -0x18);
      piVar1 = *(int **)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + *(int *)(unaff_EBP + 8);
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_508037a7((short *)(unaff_EBP + -0x38));
  if (iVar3 < 0) {
    FUN_5080dfed(iVar3);
  }
  piVar1 = *(int **)(unaff_EBP + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_508072f8();
  return;
}



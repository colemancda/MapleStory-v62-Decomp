/* FUN_5000f1a1 - 0x5000f1a1 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000f1a1(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  if ((*(short *)(unaff_EBP + 0x20) == 0) || (*(short *)(unaff_EBP + 0x20) == 10)) {
LAB_5000f258:
    iVar1 = *(int *)(unaff_EBP + 0xc);
    iVar6 = *(int *)(unaff_EBP + 0x14);
    if (iVar1 == iVar6) {
      iVar6 = *(int *)(unaff_EBP + 0x10);
      iVar5 = *(int *)(unaff_EBP + 0x18);
      if (iVar6 < iVar5) {
        iVar4 = iVar5 - iVar6;
        iVar5 = iVar6;
      }
      else {
        iVar4 = iVar6 - iVar5;
      }
      uVar2 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x8c))
                        (*(int **)(unaff_EBP + 8),iVar1 - *(int *)(unaff_EBP + -0x10) / 2,iVar5,
                         *(int *)(unaff_EBP + -0x10),iVar4,*(undefined4 *)(unaff_EBP + 0x1c));
      goto LAB_5000f3ac;
    }
    iVar5 = *(int *)(unaff_EBP + 0x18);
    iVar4 = *(int *)(unaff_EBP + 0x10);
    if (iVar4 == iVar5) {
      if (iVar1 < iVar6) {
        iVar5 = iVar6 - iVar1;
        iVar6 = iVar1;
      }
      else {
        iVar5 = iVar1 - iVar6;
      }
      *(undefined4 *)(unaff_EBP + 0x10) = **(undefined4 **)(unaff_EBP + 8);
      uVar2 = (**(code **)(*(int *)(unaff_EBP + 0x10) + 0x8c))
                        (*(undefined4 **)(unaff_EBP + 8),iVar6,
                         iVar4 - *(int *)(unaff_EBP + -0x10) / 2,iVar5,*(int *)(unaff_EBP + -0x10),
                         *(undefined4 *)(unaff_EBP + 0x1c));
      goto LAB_5000f3ac;
    }
    iVar4 = iVar5 - iVar4;
    *(int *)(unaff_EBP + 0x18) = (iVar6 - iVar1) * (iVar6 - iVar1) + iVar4 * iVar4;
    *(int *)(unaff_EBP + 0xc) = iVar4;
    sqrt((double)*(int *)(unaff_EBP + 0x18));
    iVar3 = ftol();
    *(int *)(unaff_EBP + 0xc) = (*(int *)(unaff_EBP + 0xc) * *(int *)(unaff_EBP + -0x10)) / iVar3;
    iVar4 = *(int *)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + 0x18) = ((iVar1 - iVar6) * *(int *)(unaff_EBP + -0x10)) / iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + -1;
    }
    if (*(int *)(unaff_EBP + 0x18) < 0) {
      *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + -1;
    }
    iVar3 = (iVar4 + 1) / 2;
    *(int *)(unaff_EBP + 0xc) = iVar3;
    *(int *)(unaff_EBP + -0x40) = iVar1 - iVar3;
    iVar3 = (*(int *)(unaff_EBP + 0x18) + 1) / 2;
    *(int *)(unaff_EBP + 0x14) = iVar3;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 0x10) - iVar3;
    *(int *)(unaff_EBP + -0x38) = iVar4 / 2 + iVar1;
    iVar1 = *(int *)(unaff_EBP + 0x18) / 2;
    *(int *)(unaff_EBP + -0x2c) = iVar1 + iVar5;
    *(int *)(unaff_EBP + -0x30) = iVar4 / 2 + iVar6;
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + 0x10) + iVar1;
    *(int *)(unaff_EBP + -0x28) = iVar6 - *(int *)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + -0x24) = iVar5 - *(int *)(unaff_EBP + 0x14);
    FUN_5000ee5c();
  }
  else {
    Ordinal_8();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_5000cfbb((ushort *)(unaff_EBP + -0x20),(ushort *)(unaff_EBP + 0x20),0,3);
    if (iVar1 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x20));
      if (iVar1 < 0) {
        FUN_50012c97(iVar1);
      }
      uVar2 = 0x80070057;
      goto LAB_5000f3ac;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18);
    if (0 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x20));
      if (iVar1 < 0) {
        FUN_50012c97(iVar1);
      }
      goto LAB_5000f258;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x20));
    if (iVar1 < 0) {
      FUN_50012c97(iVar1);
    }
  }
  uVar2 = 0;
LAB_5000f3ac:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



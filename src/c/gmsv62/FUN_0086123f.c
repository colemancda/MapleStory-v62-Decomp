/* FUN_0086123f - 0x0086123f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086123f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0x14);
  if (*(int *)(unaff_EBP + 0xc) < iVar1) {
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_008ea328;
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004cd31b(iVar2 + -1,iVar1,iVar2 + 1,*(int *)(unaff_EBP + 0xc) + 1,unaff_EBP + -0x24);
    iVar5 = *(int *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(int *)(unaff_EBP + 0x14) = iVar1;
    while (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 4);
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar5 = *(int *)((-(uint)(iVar5 != 0) & iVar5 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
      iVar5 = *(int *)(iVar1 + 0xc);
      if ((((iVar5 < iVar3) && (iVar5 <= iVar2)) && (iVar2 <= iVar3)) &&
         ((iVar5 = ((*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) * (iVar2 - iVar5)) /
                   (iVar3 - iVar5) + *(int *)(iVar1 + 0x10), iVar5 <= *(int *)(unaff_EBP + 0xc) &&
          (*(int *)(unaff_EBP + 0x14) < iVar5)))) {
        *(int *)(unaff_EBP + 0x14) = iVar5;
        **(int **)(unaff_EBP + 0x10) = iVar5;
        *(int *)(unaff_EBP + 8) = iVar1;
      }
      iVar5 = *(int *)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_008ea328;
    FUN_004cdcea();
    uVar4 = *(undefined4 *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}



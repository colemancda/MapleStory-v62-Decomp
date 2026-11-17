/* FUN_00861498 - 0x00861498 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00861498(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_008ea328;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004cd31b(iVar1 + -1,*(int *)(unaff_EBP + 0xc) + -1,iVar1 + 1,*(int *)(unaff_EBP + 0x10) + 1,
               unaff_EBP + -0x20);
  uVar4 = *(uint *)(unaff_EBP + -0x14);
  while (uVar4 != 0) {
    iVar6 = *(int *)(uVar4 + 4);
    iVar2 = *(int *)(iVar6 + 0x14);
    iVar3 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
    uVar4 = iVar3 + 0x10U & -(uint)(iVar3 != 0);
    iVar3 = *(int *)(iVar6 + 0xc);
    *(uint *)(unaff_EBP + 8) = uVar4;
    if (((iVar3 < iVar2) && (iVar3 <= iVar1)) && (iVar1 <= iVar2)) {
      iVar6 = ((*(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0x10)) * (iVar1 - iVar3)) /
              (iVar2 - iVar3) + *(int *)(iVar6 + 0x10);
      if ((*(int *)(unaff_EBP + 0xc) <= iVar6) && (iVar6 <= *(int *)(unaff_EBP + 0x10))) {
        piVar5 = (int *)FUN_00518b2e();
        *piVar5 = iVar6;
      }
      uVar4 = *(uint *)(unaff_EBP + 8);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_008ea328;
  FUN_004cdcea();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



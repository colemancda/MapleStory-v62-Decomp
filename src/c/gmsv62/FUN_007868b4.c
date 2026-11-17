/* FUN_007868b4 - 0x007868b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007868b4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (0x10 < *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc)) {
    piVar1 = *(int **)(unaff_EBP + 8);
    iVar5 = *(int *)(unaff_EBP + 0x10);
    do {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        FUN_00788299(piVar1,*(undefined4 *)(unaff_EBP + 0xc),iVar5,*(undefined4 *)(unaff_EBP + 0x18)
                    );
        break;
      }
      iVar4 = *piVar1;
      iVar2 = *(int *)(unaff_EBP + 0xc);
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + -1;
      uVar3 = FUN_00788311(iVar2 * 0x44 + iVar4,((iVar5 - iVar2) / 2 + iVar2) * 0x44 + iVar4,
                           iVar5 * 0x44 + -0x44 + iVar4,*(undefined4 *)(unaff_EBP + 0x18));
      FUN_007875b5(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_007883e6(piVar1,iVar2,iVar5,unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 0x18));
      FUN_007868b4(piVar1,iVar4,iVar5,*(undefined4 *)(unaff_EBP + 0x14),
                   *(undefined4 *)(unaff_EBP + 0x18));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00773f2e();
      iVar5 = iVar4;
    } while (0x10 < iVar4 - *(int *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



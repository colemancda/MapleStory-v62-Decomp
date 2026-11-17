/* FUN_004bbca9 - 0x004bbca9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004bbca9(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  iVar4 = *(int *)(unaff_EBP + 0x10) - iVar1;
  iVar3 = *(int *)(unaff_EBP + 0x10);
  do {
    if (iVar4 < 0x11) {
LAB_004bbd6d:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      FUN_004bc051(*(undefined4 *)(unaff_EBP + 8),iVar1,iVar3,*(undefined4 *)(unaff_EBP + 0x18));
      goto LAB_004bbd6d;
    }
    piVar2 = *(int **)(unaff_EBP + 8);
    iVar4 = *piVar2;
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + -1;
    iVar4 = FUN_004bc0cc(iVar4 + iVar1 * 8,iVar4 + ((iVar3 - iVar1) / 2 + iVar1) * 8,
                         iVar4 + -8 + iVar3 * 8,*(undefined4 *)(unaff_EBP + 0x18));
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar4 + 4);
    FUN_004b8b3d();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_004bc1cb(piVar2,iVar1,iVar3,unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18));
    FUN_004bbca9(*(undefined4 *)(unaff_EBP + 8),iVar5,iVar3,*(undefined4 *)(unaff_EBP + 0x14),
                 *(undefined4 *)(unaff_EBP + 0x18));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004b8ba3(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    iVar4 = iVar5 - iVar1;
    iVar3 = iVar5;
  } while( true );
}



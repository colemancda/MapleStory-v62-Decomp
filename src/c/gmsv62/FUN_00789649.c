/* FUN_00789649 - 0x00789649 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00789649(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar4 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  FUN_007875b5((iVar4 + iVar2) * 0x44 + -0x44 + *piVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 8) = iVar3;
  if (iVar4 <= iVar3) {
    while( true ) {
      iVar4 = iVar4 * 2;
      *(int *)(unaff_EBP + 0x14) = iVar4;
      if (iVar4 < *(int *)(unaff_EBP + 0x10)) {
        iVar3 = (iVar4 + iVar2) * 0x44;
        iVar4 = *(int *)(*piVar1 + 4 + iVar3);
        if (iVar4 == 0) {
          iVar4 = DAT_00980dfc;
        }
        iVar3 = *(int *)(*piVar1 + iVar3 + -0x40);
        if (iVar3 == 0) {
          iVar3 = DAT_00980dfc;
        }
        iVar4 = FUN_008858f0(iVar3,iVar4);
        if (iVar4 < 0) {
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
        }
        iVar4 = *(int *)(unaff_EBP + 0x14);
      }
      iVar3 = (iVar4 + iVar2) * 0x44;
      iVar4 = *(int *)(*piVar1 + iVar3 + -0x40);
      if (iVar4 == 0) {
        iVar4 = DAT_00980dfc;
      }
      iVar5 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x4c) != 0) {
        iVar5 = *(int *)(unaff_EBP + -0x4c);
      }
      iVar4 = FUN_008858f0(iVar5,iVar4);
      if (-1 < iVar4) break;
      FUN_00776a8e(iVar3 + -0x44 + *piVar1);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
      iVar4 = *(int *)(unaff_EBP + 0xc);
    }
  }
  FUN_00776a8e(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


